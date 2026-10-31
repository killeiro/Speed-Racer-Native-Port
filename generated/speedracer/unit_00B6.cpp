#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B6[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0,
    0, 28, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 36,
    0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0,
    43, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0,
    50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0,
    57, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76,
    0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0,
    0, 133, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0,
    0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0,
    0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0,
    181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0,
    0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199,
    0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205,
    206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0,
    0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217,
    0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230,
    0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0,
    0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0,
    255, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0,
    261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0,
    0, 0, 267, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0,
    0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0,
    0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 308,
    0, 309, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0,
    0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0,
    0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 332,
    0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0,
    343, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 353, 0,
    0, 354, 0, 0, 355, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 364,
    0, 0, 365, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0,
    375, 0, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0,
    0, 386, 0, 0, 387, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 396,
    0, 0, 397, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0,
    0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0,
    422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0,
    430, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0,
    438, 0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 445, 0, 0, 446, 0, 447, 0, 448, 0, 0, 0, 449, 0, 450, 0, 451, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0,
    478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 480, 0,
    0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0,
    0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0,
    491, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497,
    0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0,
    0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0,
    0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    511, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B6(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003D8000;
    case 2u: goto L_003D8008;
    case 3u: goto L_003D8040;
    case 4u: goto L_003D8050;
    case 5u: goto L_003D8060;
    case 6u: goto L_003D8070;
    case 7u: goto L_003D8098;
    case 8u: goto L_003D8130;
    case 9u: goto L_003D8140;
    case 10u: goto L_003D8150;
    case 11u: goto L_003D8160;
    case 12u: goto L_003D8174;
    case 13u: goto L_003D8184;
    case 14u: goto L_003D81D0;
    case 15u: goto L_003D8208;
    case 16u: goto L_003D821C;
    case 17u: goto L_003D8238;
    case 18u: goto L_003D8244;
    case 19u: goto L_003D8254;
    case 20u: goto L_003D8274;
    case 21u: goto L_003D8288;
    case 22u: goto L_003D829C;
    case 23u: goto L_003D82B0;
    case 24u: goto L_003D833C;
    case 25u: goto L_003D835C;
    case 26u: goto L_003D83EC;
    case 27u: goto L_003D83F8;
    case 28u: goto L_003D8404;
    case 29u: goto L_003D840C;
    case 30u: goto L_003D8418;
    case 31u: goto L_003D8428;
    case 32u: goto L_003D8438;
    case 33u: goto L_003D8448;
    case 34u: goto L_003D8458;
    case 35u: goto L_003D8468;
    case 36u: goto L_003D847C;
    case 37u: goto L_003D8490;
    case 38u: goto L_003D84A0;
    case 39u: goto L_003D84B4;
    case 40u: goto L_003D84C8;
    case 41u: goto L_003D84D8;
    case 42u: goto L_003D84EC;
    case 43u: goto L_003D8500;
    case 44u: goto L_003D8510;
    case 45u: goto L_003D8524;
    case 46u: goto L_003D8538;
    case 47u: goto L_003D8548;
    case 48u: goto L_003D855C;
    case 49u: goto L_003D8570;
    case 50u: goto L_003D8580;
    case 51u: goto L_003D8594;
    case 52u: goto L_003D85A8;
    case 53u: goto L_003D85B8;
    case 54u: goto L_003D85CC;
    case 55u: goto L_003D85E0;
    case 56u: goto L_003D85F0;
    case 57u: goto L_003D8600;
    case 58u: goto L_003D860C;
    case 59u: goto L_003D8618;
    case 60u: goto L_003D8630;
    case 61u: goto L_003D863C;
    case 62u: goto L_003D8644;
    case 63u: goto L_003D8654;
    case 64u: goto L_003D866C;
    case 65u: goto L_003D8678;
    case 66u: goto L_003D8684;
    case 67u: goto L_003D86B0;
    case 68u: goto L_003D8700;
    case 69u: goto L_003D8728;
    case 70u: goto L_003D874C;
    case 71u: goto L_003D8770;
    case 72u: goto L_003D8794;
    case 73u: goto L_003D87A8;
    case 74u: goto L_003D882C;
    case 75u: goto L_003D885C;
    case 76u: goto L_003D887C;
    case 77u: goto L_003D88A0;
    case 78u: goto L_003D88D8;
    case 79u: goto L_003D8910;
    case 80u: goto L_003D8928;
    case 81u: goto L_003D8940;
    case 82u: goto L_003D8984;
    case 83u: goto L_003D89B4;
    case 84u: goto L_003D89C4;
    case 85u: goto L_003D8A38;
    case 86u: goto L_003D8A48;
    case 87u: goto L_003D8A58;
    case 88u: goto L_003D8A7C;
    case 89u: goto L_003D8B00;
    case 90u: goto L_003D8B44;
    case 91u: goto L_003D8B60;
    case 92u: goto L_003D8BA4;
    case 93u: goto L_003D8BC0;
    case 94u: goto L_003D8C50;
    case 95u: goto L_003D8CB4;
    case 96u: goto L_003D8CF0;
    case 97u: goto L_003D8D24;
    case 98u: goto L_003D8D58;
    case 99u: goto L_003D8D78;
    case 100u: goto L_003D8DA0;
    case 101u: goto L_003D8DEC;
    case 102u: goto L_003D8E14;
    case 103u: goto L_003D8E24;
    case 104u: goto L_003D8E84;
    case 105u: goto L_003D8ED0;
    case 106u: goto L_003D8F20;
    case 107u: goto L_003D8F4C;
    case 108u: goto L_003D8FA0;
    case 109u: goto L_003D9040;
    case 110u: goto L_003D9080;
    case 111u: goto L_003D9100;
    case 112u: goto L_003D91B8;
    case 113u: goto L_003D91C0;
    case 114u: goto L_003D926C;
    case 115u: goto L_003D92DC;
    case 116u: goto L_003D935C;
    case 117u: goto L_003D9424;
    case 118u: goto L_003D947C;
    case 119u: goto L_003D9544;
    case 120u: goto L_003D95A0;
    case 121u: goto L_003D9624;
    case 122u: goto L_003D9678;
    case 123u: goto L_003D96D4;
    case 124u: goto L_003D97D4;
    case 125u: goto L_003D982C;
    case 126u: goto L_003D9870;
    case 127u: goto L_003D98AC;
    case 128u: goto L_003D98F0;
    case 129u: goto L_003D9900;
    case 130u: goto L_003D9910;
    case 131u: goto L_003D9920;
    case 132u: goto L_003D9964;
    case 133u: goto L_003D9984;
    case 134u: goto L_003D998C;
    case 135u: goto L_003D999C;
    case 136u: goto L_003D99B4;
    case 137u: goto L_003D99D4;
    case 138u: goto L_003D99DC;
    case 139u: goto L_003D99EC;
    case 140u: goto L_003D9A04;
    case 141u: goto L_003D9A24;
    case 142u: goto L_003D9A2C;
    case 143u: goto L_003D9A3C;
    case 144u: goto L_003D9A60;
    case 145u: goto L_003D9A70;
    case 146u: goto L_003D9AD0;
    case 147u: goto L_003D9AF0;
    case 148u: goto L_003D9AF8;
    case 149u: goto L_003D9B08;
    case 150u: goto L_003D9B24;
    case 151u: goto L_003D9B44;
    case 152u: goto L_003D9B4C;
    case 153u: goto L_003D9B5C;
    case 154u: goto L_003D9B74;
    case 155u: goto L_003D9B94;
    case 156u: goto L_003D9B9C;
    case 157u: goto L_003D9BAC;
    case 158u: goto L_003D9BD0;
    case 159u: goto L_003D9BE0;
    case 160u: goto L_003D9C14;
    case 161u: goto L_003D9C34;
    case 162u: goto L_003D9C3C;
    case 163u: goto L_003D9C4C;
    case 164u: goto L_003D9C70;
    case 165u: goto L_003D9C90;
    case 166u: goto L_003D9CB0;
    case 167u: goto L_003D9CB8;
    case 168u: goto L_003D9CC8;
    case 169u: goto L_003D9CE0;
    case 170u: goto L_003D9D08;
    case 171u: goto L_003D9D28;
    case 172u: goto L_003D9D30;
    case 173u: goto L_003D9D40;
    case 174u: goto L_003D9D60;
    case 175u: goto L_003D9D80;
    case 176u: goto L_003D9D88;
    case 177u: goto L_003D9D98;
    case 178u: goto L_003D9DB0;
    case 179u: goto L_003D9DD8;
    case 180u: goto L_003D9DF8;
    case 181u: goto L_003D9E00;
    case 182u: goto L_003D9E10;
    case 183u: goto L_003D9E30;
    case 184u: goto L_003D9E50;
    case 185u: goto L_003D9E58;
    case 186u: goto L_003D9E68;
    case 187u: goto L_003D9E80;
    case 188u: goto L_003D9EA4;
    case 189u: goto L_003D9EB0;
    case 190u: goto L_003D9EBC;
    case 191u: goto L_003D9ED0;
    case 192u: goto L_003D9EF0;
    case 193u: goto L_003D9EF8;
    case 194u: goto L_003D9F08;
    case 195u: goto L_003D9F24;
    case 196u: goto L_003D9F44;
    case 197u: goto L_003D9F4C;
    case 198u: goto L_003D9F5C;
    case 199u: goto L_003D9F7C;
    case 200u: goto L_003D9F9C;
    case 201u: goto L_003D9FA4;
    case 202u: goto L_003D9FB4;
    case 203u: goto L_003D9FD4;
    case 204u: goto L_003D9FF4;
    case 205u: goto L_003D9FFC;
    case 206u: goto L_003DA000;
    case 207u: goto L_003DA00C;
    case 208u: goto L_003DA02C;
    case 209u: goto L_003DA04C;
    case 210u: goto L_003DA054;
    case 211u: goto L_003DA064;
    case 212u: goto L_003DA084;
    case 213u: goto L_003DA0A4;
    case 214u: goto L_003DA0AC;
    case 215u: goto L_003DA0BC;
    case 216u: goto L_003DA0DC;
    case 217u: goto L_003DA0FC;
    case 218u: goto L_003DA104;
    case 219u: goto L_003DA114;
    case 220u: goto L_003DA134;
    case 221u: goto L_003DA154;
    case 222u: goto L_003DA15C;
    case 223u: goto L_003DA16C;
    case 224u: goto L_003DA184;
    case 225u: goto L_003DA1A4;
    case 226u: goto L_003DA1AC;
    case 227u: goto L_003DA1BC;
    case 228u: goto L_003DA1D4;
    case 229u: goto L_003DA1F4;
    case 230u: goto L_003DA1FC;
    case 231u: goto L_003DA20C;
    case 232u: goto L_003DA224;
    case 233u: goto L_003DA244;
    case 234u: goto L_003DA24C;
    case 235u: goto L_003DA25C;
    case 236u: goto L_003DA278;
    case 237u: goto L_003DA298;
    case 238u: goto L_003DA2A0;
    case 239u: goto L_003DA2B0;
    case 240u: goto L_003DA2CC;
    case 241u: goto L_003DA2EC;
    case 242u: goto L_003DA2F4;
    case 243u: goto L_003DA304;
    case 244u: goto L_003DA320;
    case 245u: goto L_003DA340;
    case 246u: goto L_003DA348;
    case 247u: goto L_003DA358;
    case 248u: goto L_003DA374;
    case 249u: goto L_003DA394;
    case 250u: goto L_003DA39C;
    case 251u: goto L_003DA3AC;
    case 252u: goto L_003DA3C8;
    case 253u: goto L_003DA3E8;
    case 254u: goto L_003DA3F0;
    case 255u: goto L_003DA400;
    case 256u: goto L_003DA40C;
    case 257u: goto L_003DA420;
    case 258u: goto L_003DA444;
    case 259u: goto L_003DA450;
    case 260u: goto L_003DA474;
    case 261u: goto L_003DA480;
    case 262u: goto L_003DA498;
    case 263u: goto L_003DA4B0;
    case 264u: goto L_003DA4C4;
    case 265u: goto L_003DA4CC;
    case 266u: goto L_003DA4E8;
    case 267u: goto L_003DA508;
    case 268u: goto L_003DA510;
    case 269u: goto L_003DA520;
    case 270u: goto L_003DA538;
    case 271u: goto L_003DA558;
    case 272u: goto L_003DA560;
    case 273u: goto L_003DA570;
    case 274u: goto L_003DA588;
    case 275u: goto L_003DA5A8;
    case 276u: goto L_003DA5B0;
    case 277u: goto L_003DA5C0;
    case 278u: goto L_003DA5D8;
    case 279u: goto L_003DA5F8;
    case 280u: goto L_003DA608;
    case 281u: goto L_003DA614;
    case 282u: goto L_003DA630;
    case 283u: goto L_003DA668;
    case 284u: goto L_003DA680;
    case 285u: goto L_003DA6A0;
    case 286u: goto L_003DA6B4;
    case 287u: goto L_003DA6C4;
    case 288u: goto L_003DA6D0;
    case 289u: goto L_003DA6DC;
    case 290u: goto L_003DA700;
    case 291u: goto L_003DA710;
    case 292u: goto L_003DA74C;
    case 293u: goto L_003DA76C;
    case 294u: goto L_003DA774;
    case 295u: goto L_003DA784;
    case 296u: goto L_003DA78C;
    case 297u: goto L_003DA7AC;
    case 298u: goto L_003DA7B4;
    case 299u: goto L_003DA7C4;
    case 300u: goto L_003DA7E0;
    case 301u: goto L_003DA808;
    case 302u: goto L_003DA828;
    case 303u: goto L_003DA830;
    case 304u: goto L_003DA840;
    case 305u: goto L_003DA850;
    case 306u: goto L_003DA86C;
    case 307u: goto L_003DA874;
    case 308u: goto L_003DA87C;
    case 309u: goto L_003DA884;
    case 310u: goto L_003DA890;
    case 311u: goto L_003DA8A0;
    case 312u: goto L_003DA8C0;
    case 313u: goto L_003DA8EC;
    case 314u: goto L_003DA8F4;
    case 315u: goto L_003DA904;
    case 316u: goto L_003DA920;
    case 317u: goto L_003DA948;
    case 318u: goto L_003DA954;
    case 319u: goto L_003DA960;
    case 320u: goto L_003DA96C;
    case 321u: goto L_003DA978;
    case 322u: goto L_003DA984;
    case 323u: goto L_003DA990;
    case 324u: goto L_003DA99C;
    case 325u: goto L_003DA9A8;
    case 326u: goto L_003DA9B4;
    case 327u: goto L_003DA9C0;
    case 328u: goto L_003DA9CC;
    case 329u: goto L_003DA9D8;
    case 330u: goto L_003DA9E4;
    case 331u: goto L_003DA9F0;
    case 332u: goto L_003DA9FC;
    case 333u: goto L_003DAA08;
    case 334u: goto L_003DAA14;
    case 335u: goto L_003DAA20;
    case 336u: goto L_003DAA2C;
    case 337u: goto L_003DAA38;
    case 338u: goto L_003DAA44;
    case 339u: goto L_003DAA50;
    case 340u: goto L_003DAA5C;
    case 341u: goto L_003DAA68;
    case 342u: goto L_003DAA74;
    case 343u: goto L_003DAA80;
    case 344u: goto L_003DAA8C;
    case 345u: goto L_003DAA98;
    case 346u: goto L_003DAAA4;
    case 347u: goto L_003DAAB0;
    case 348u: goto L_003DAABC;
    case 349u: goto L_003DAAC8;
    case 350u: goto L_003DAAD4;
    case 351u: goto L_003DAAE0;
    case 352u: goto L_003DAAEC;
    case 353u: goto L_003DAAF8;
    case 354u: goto L_003DAB04;
    case 355u: goto L_003DAB10;
    case 356u: goto L_003DAB1C;
    case 357u: goto L_003DAB28;
    case 358u: goto L_003DAB34;
    case 359u: goto L_003DAB40;
    case 360u: goto L_003DAB4C;
    case 361u: goto L_003DAB58;
    case 362u: goto L_003DAB64;
    case 363u: goto L_003DAB70;
    case 364u: goto L_003DAB7C;
    case 365u: goto L_003DAB88;
    case 366u: goto L_003DAB94;
    case 367u: goto L_003DABA0;
    case 368u: goto L_003DABAC;
    case 369u: goto L_003DABB8;
    case 370u: goto L_003DABC4;
    case 371u: goto L_003DABD0;
    case 372u: goto L_003DABDC;
    case 373u: goto L_003DABE8;
    case 374u: goto L_003DABF4;
    case 375u: goto L_003DAC00;
    case 376u: goto L_003DAC0C;
    case 377u: goto L_003DAC18;
    case 378u: goto L_003DAC24;
    case 379u: goto L_003DAC30;
    case 380u: goto L_003DAC3C;
    case 381u: goto L_003DAC48;
    case 382u: goto L_003DAC54;
    case 383u: goto L_003DAC60;
    case 384u: goto L_003DAC6C;
    case 385u: goto L_003DAC78;
    case 386u: goto L_003DAC84;
    case 387u: goto L_003DAC90;
    case 388u: goto L_003DAC9C;
    case 389u: goto L_003DACA8;
    case 390u: goto L_003DACB4;
    case 391u: goto L_003DACC0;
    case 392u: goto L_003DACCC;
    case 393u: goto L_003DACD8;
    case 394u: goto L_003DACE4;
    case 395u: goto L_003DACF0;
    case 396u: goto L_003DACFC;
    case 397u: goto L_003DAD08;
    case 398u: goto L_003DAD14;
    case 399u: goto L_003DAD20;
    case 400u: goto L_003DAD2C;
    case 401u: goto L_003DAD38;
    case 402u: goto L_003DAD44;
    case 403u: goto L_003DAD50;
    case 404u: goto L_003DAD5C;
    case 405u: goto L_003DAD80;
    case 406u: goto L_003DAD90;
    case 407u: goto L_003DADA0;
    case 408u: goto L_003DADB0;
    case 409u: goto L_003DADC0;
    case 410u: goto L_003DADD0;
    case 411u: goto L_003DADF8;
    case 412u: goto L_003DAE10;
    case 413u: goto L_003DAE20;
    case 414u: goto L_003DAE30;
    case 415u: goto L_003DAE40;
    case 416u: goto L_003DAE80;
    case 417u: goto L_003DAE8C;
    case 418u: goto L_003DAEB8;
    case 419u: goto L_003DAED4;
    case 420u: goto L_003DAEE0;
    case 421u: goto L_003DAEEC;
    case 422u: goto L_003DAF00;
    case 423u: goto L_003DAF10;
    case 424u: goto L_003DAF20;
    case 425u: goto L_003DAF30;
    case 426u: goto L_003DAF40;
    case 427u: goto L_003DAF50;
    case 428u: goto L_003DAF60;
    case 429u: goto L_003DAF70;
    case 430u: goto L_003DAF80;
    case 431u: goto L_003DAF88;
    case 432u: goto L_003DAFA0;
    case 433u: goto L_003DAFB0;
    case 434u: goto L_003DAFC0;
    case 435u: goto L_003DAFD0;
    case 436u: goto L_003DAFE0;
    case 437u: goto L_003DAFE8;
    case 438u: goto L_003DB000;
    case 439u: goto L_003DB010;
    case 440u: goto L_003DB01C;
    case 441u: goto L_003DB030;
    case 442u: goto L_003DB040;
    case 443u: goto L_003DB048;
    case 444u: goto L_003DB060;
    case 445u: goto L_003DB088;
    case 446u: goto L_003DB094;
    case 447u: goto L_003DB09C;
    case 448u: goto L_003DB0A4;
    case 449u: goto L_003DB0B4;
    case 450u: goto L_003DB0BC;
    case 451u: goto L_003DB0C4;
    case 452u: goto L_003DB0CC;
    case 453u: goto L_003DB0E0;
    case 454u: goto L_003DB1B8;
    case 455u: goto L_003DB1D0;
    case 456u: goto L_003DB1E0;
    case 457u: goto L_003DB214;
    case 458u: goto L_003DB240;
    case 459u: goto L_003DB26C;
    case 460u: goto L_003DB298;
    case 461u: goto L_003DB2C4;
    case 462u: goto L_003DB2F0;
    case 463u: goto L_003DB31C;
    case 464u: goto L_003DB344;
    case 465u: goto L_003DB370;
    case 466u: goto L_003DB39C;
    case 467u: goto L_003DB3C4;
    case 468u: goto L_003DB3EC;
    case 469u: goto L_003DB414;
    case 470u: goto L_003DB440;
    case 471u: goto L_003DB46C;
    case 472u: goto L_003DB498;
    case 473u: goto L_003DB4C4;
    case 474u: goto L_003DB4F0;
    case 475u: goto L_003DB51C;
    case 476u: goto L_003DB548;
    case 477u: goto L_003DB574;
    case 478u: goto L_003DB580;
    case 479u: goto L_003DB5D8;
    case 480u: goto L_003DB5F8;
    case 481u: goto L_003DB610;
    case 482u: goto L_003DB630;
    case 483u: goto L_003DB640;
    case 484u: goto L_003DB668;
    case 485u: goto L_003DB674;
    case 486u: goto L_003DB698;
    case 487u: goto L_003DB6AC;
    case 488u: goto L_003DB6C0;
    case 489u: goto L_003DB6CC;
    case 490u: goto L_003DB6F0;
    case 491u: goto L_003DB700;
    case 492u: goto L_003DB710;
    case 493u: goto L_003DB724;
    case 494u: goto L_003DB730;
    case 495u: goto L_003DB754;
    case 496u: goto L_003DB768;
    case 497u: goto L_003DB77C;
    case 498u: goto L_003DB788;
    case 499u: goto L_003DB7AC;
    case 500u: goto L_003DB7C0;
    case 501u: goto L_003DB7D4;
    case 502u: goto L_003DB7E0;
    case 503u: goto L_003DB804;
    case 504u: goto L_003DB818;
    case 505u: goto L_003DB82C;
    case 506u: goto L_003DB838;
    case 507u: goto L_003DB85C;
    case 508u: goto L_003DB870;
    case 509u: goto L_003DB890;
    case 510u: goto L_003DB96C;
    case 511u: goto L_003DBA00;
    case 512u: goto L_003DBA0C;
    case 513u: goto L_003DBA18;
    case 514u: goto L_003DBA9C;
    case 515u: goto L_003DBAD0;
    case 516u: goto L_003DBAD8;
    case 517u: goto L_003DBC30;
    case 518u: goto L_003DBC34;
    case 519u: goto L_003DBD00;
    case 520u: goto L_003DBD98;
    case 521u: goto L_003DBDCC;
    case 522u: goto L_003DBDF4;
    case 523u: goto L_003DBE6C;
    case 524u: goto L_003DBF90;
    default: bad_entry(c, 0x003D8000u); return;
    }
L_003D8000:
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 2;
L_003D8008:
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    st32((c.r[29].w[0] + 332u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 332u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[3].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 332u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65023ull;
    st16((c.r[3].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 280u);
    set32(c.r[5], ld32((c.r[29].w[0] + 332u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8040u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x003D8040u) [[unlikely]] return; }
L_003D8040:
    set32(c.r[4], c.r[19].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8050u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x003D8050u) [[unlikely]] return; }
L_003D8050:
    set32(c.r[4], c.r[29].w[0] + 280u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8060u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x003D8060u) [[unlikely]] return; }
L_003D8060:
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8070u);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003D8070u) [[unlikely]] return; }
L_003D8070:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 324u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D80FC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 304u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 304u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8098u);  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x003D8098u) [[unlikely]] return; }
L_003D8098:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 13520u);
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 19920u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], 0u - 61u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 320u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    c.budget -= 25;
L_003D80FC:
    set32(c.r[4], ld32((c.r[29].w[0] + 324u)));
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = ld16((c.r[30].w[0] + 28u));
    c.r[8].d[0] = c.r[7].d[0] & 65534ull;
    st16((c.r[30].w[0] + 28u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[9].d[0] = ld16((c.r[30].w[0] + 28u));
    c.r[10].d[0] = c.r[9].d[0] & 65533ull;
    st16((c.r[30].w[0] + 28u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[11], c.r[29].w[0] + 276u);
    c.r[4].d[0] = c.r[11].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8130u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x003D8130u) [[unlikely]] return; }
L_003D8130:
    set32(c.r[4], c.r[19].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 276u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8140u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x003D8140u) [[unlikely]] return; }
L_003D8140:
    set32(c.r[4], c.r[29].w[0] + 276u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8150u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x003D8150u) [[unlikely]] return; }
L_003D8150:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8160u);  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x003D8160u) [[unlikely]] return; }
L_003D8160:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8174u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x003D8174u) [[unlikely]] return; }
L_003D8174:
    st32((c.r[29].w[0] + 328u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8184u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003D8184u) [[unlikely]] return; }
L_003D8184:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 316u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 328u)));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 448u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D81D0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 240u), c.r[4].w[0]);
    set32(c.r[4], 0u + 1024u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8208u);  if (depth < kMaxDepth) unit_0010(c, 114u, depth + 1u); else { c.pc = 0x00140D80u; return; } if (c.pc != 0x003D8208u) [[unlikely]] return; }
L_003D8208:
    set32(c.r[4], 0u + 256u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D821Cu);  if (depth < kMaxDepth) unit_000A(c, 325u, depth + 1u); else { c.pc = 0x0012AC10u; return; } if (c.pc != 0x003D821Cu) [[unlikely]] return; }
L_003D821C:
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 19065u);
    set32(c.r[6], 0u + 6u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8238u);  if (depth < kMaxDepth) unit_00B4(c, 358u, depth + 1u); else { c.pc = 0x003D3A10u; return; } if (c.pc != 0x003D8238u) [[unlikely]] return; }
L_003D8238:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8244u);  if (depth < kMaxDepth) unit_0000(c, 106u, depth + 1u); else { c.pc = 0x00101C80u; return; } if (c.pc != 0x003D8244u) [[unlikely]] return; }
L_003D8244:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 19053u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8254u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x003D8254u) [[unlikely]] return; }
L_003D8254:
    set32(c.r[21], ld32((c.r[28].w[0] - 29204u)));
    c.r[20].d[0] = c.r[21].d[0] + 0ull;
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 19032u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8274u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D8274u) [[unlikely]] return; }
L_003D8274:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 19021u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8288u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D8288u) [[unlikely]] return; }
L_003D8288:
    set32(c.r[4], c.r[16].w[0] + 68u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 19018u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D829Cu);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D829Cu) [[unlikely]] return; }
L_003D829C:
    set32(c.r[4], c.r[16].w[0] + 84u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 19006u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D82B0u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D82B0u) [[unlikely]] return; }
L_003D82B0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 141u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 144u), 0u);
    st32((c.r[16].w[0] + 184u), 0u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 236u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31420u));
    st32((c.r[29].w[0] + 236u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31416u));
    st32((c.r[29].w[0] + 232u), c.f[0]);
    set32(c.r[2], 0u + 30u);
    st32((c.r[28].w[0] - 27684u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8192u);
    st32((c.r[28].w[0] - 30596u), c.r[2].w[0]);
    set32(c.r[2], 0u + 512u);
    st32((c.r[28].w[0] - 27712u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[5], 0u + 640u);
    set32(c.r[6], 0u + 480u);
    c.f[12] = ld32((c.r[29].w[0] + 236u));
    c.f[13] = ld32((c.r[29].w[0] + 232u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D833Cu);  if (depth < kMaxDepth) unit_002D(c, 15u, depth + 1u); else { c.pc = 0x001B4140u; return; } if (c.pc != 0x003D833Cu) [[unlikely]] return; }
L_003D833C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D8350; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D8688; } }
L_003D8350:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D835Cu);  if (depth < kMaxDepth) unit_0048(c, 247u, depth + 1u); else { c.pc = 0x00222610u; return; } if (c.pc != 0x003D835Cu) [[unlikely]] return; }
L_003D835C:
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[2], 0u + 480u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[2], 0u + 640u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.f[0] = 0u;
    st32((c.r[16].w[0] + 168u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[16].w[0] + 172u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 172u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 172u), c.f[0]);
    set32(c.r[17], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 21;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003D83B4; } }
    set32(c.r[17], c.r[17].w[0] + 24u);
    c.budget -= 1;
L_003D83B4:
    st32((c.r[29].w[0] + 228u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[18], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 228u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D83ECu);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x003D83ECu) [[unlikely]] return; }
L_003D83EC:
    c.f[12] = ld32((c.r[28].w[0] - 31536u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D83F8u);  if (depth < kMaxDepth) unit_0010(c, 347u, depth + 1u); else { c.pc = 0x00142B90u; return; } if (c.pc != 0x003D83F8u) [[unlikely]] return; }
L_003D83F8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8404u);  if (depth < kMaxDepth) unit_000A(c, 158u, depth + 1u); else { c.pc = 0x00129490u; return; } if (c.pc != 0x003D8404u) [[unlikely]] return; }
L_003D8404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D840Cu);  if (depth < kMaxDepth) unit_00CD(c, 27u, depth + 1u); else { c.pc = 0x004343B0u; return; } if (c.pc != 0x003D840Cu) [[unlikely]] return; }
L_003D840C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8418u);  if (depth < kMaxDepth) unit_000B(c, 410u, depth + 1u); else { c.pc = 0x0012FEA0u; return; } if (c.pc != 0x003D8418u) [[unlikely]] return; }
L_003D8418:
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8428u);  if (depth < kMaxDepth) unit_000B(c, 412u, depth + 1u); else { c.pc = 0x0012FEF0u; return; } if (c.pc != 0x003D8428u) [[unlikely]] return; }
L_003D8428:
    set32(c.r[4], 0u + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8438u);  if (depth < kMaxDepth) unit_000B(c, 412u, depth + 1u); else { c.pc = 0x0012FEF0u; return; } if (c.pc != 0x003D8438u) [[unlikely]] return; }
L_003D8438:
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8448u);  if (depth < kMaxDepth) unit_000B(c, 412u, depth + 1u); else { c.pc = 0x0012FEF0u; return; } if (c.pc != 0x003D8448u) [[unlikely]] return; }
L_003D8448:
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8458u);  if (depth < kMaxDepth) unit_000B(c, 412u, depth + 1u); else { c.pc = 0x0012FEF0u; return; } if (c.pc != 0x003D8458u) [[unlikely]] return; }
L_003D8458:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8468u);  if (depth < kMaxDepth) unit_000B(c, 412u, depth + 1u); else { c.pc = 0x0012FEF0u; return; } if (c.pc != 0x003D8468u) [[unlikely]] return; }
L_003D8468:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 18997u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D847Cu);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003D847Cu) [[unlikely]] return; }
L_003D847C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8490u);  if (depth < kMaxDepth) unit_000A(c, 116u, depth + 1u); else { c.pc = 0x00129080u; return; } if (c.pc != 0x003D8490u) [[unlikely]] return; }
L_003D8490:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D84A0u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D84A0u) [[unlikely]] return; }
L_003D84A0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 18985u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D84B4u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003D84B4u) [[unlikely]] return; }
L_003D84B4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D84C8u);  if (depth < kMaxDepth) unit_000A(c, 116u, depth + 1u); else { c.pc = 0x00129080u; return; } if (c.pc != 0x003D84C8u) [[unlikely]] return; }
L_003D84C8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D84D8u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D84D8u) [[unlikely]] return; }
L_003D84D8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 18975u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D84ECu);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003D84ECu) [[unlikely]] return; }
L_003D84EC:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8500u);  if (depth < kMaxDepth) unit_000A(c, 116u, depth + 1u); else { c.pc = 0x00129080u; return; } if (c.pc != 0x003D8500u) [[unlikely]] return; }
L_003D8500:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8510u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D8510u) [[unlikely]] return; }
L_003D8510:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 18964u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8524u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003D8524u) [[unlikely]] return; }
L_003D8524:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8538u);  if (depth < kMaxDepth) unit_000A(c, 116u, depth + 1u); else { c.pc = 0x00129080u; return; } if (c.pc != 0x003D8538u) [[unlikely]] return; }
L_003D8538:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8548u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D8548u) [[unlikely]] return; }
L_003D8548:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 18948u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D855Cu);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003D855Cu) [[unlikely]] return; }
L_003D855C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8570u);  if (depth < kMaxDepth) unit_000A(c, 116u, depth + 1u); else { c.pc = 0x00129080u; return; } if (c.pc != 0x003D8570u) [[unlikely]] return; }
L_003D8570:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8580u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D8580u) [[unlikely]] return; }
L_003D8580:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 18938u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8594u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003D8594u) [[unlikely]] return; }
L_003D8594:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D85A8u);  if (depth < kMaxDepth) unit_000A(c, 116u, depth + 1u); else { c.pc = 0x00129080u; return; } if (c.pc != 0x003D85A8u) [[unlikely]] return; }
L_003D85A8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D85B8u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D85B8u) [[unlikely]] return; }
L_003D85B8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 18928u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D85CCu);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003D85CCu) [[unlikely]] return; }
L_003D85CC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D85E0u);  if (depth < kMaxDepth) unit_000A(c, 116u, depth + 1u); else { c.pc = 0x00129080u; return; } if (c.pc != 0x003D85E0u) [[unlikely]] return; }
L_003D85E0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D85F0u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D85F0u) [[unlikely]] return; }
L_003D85F0:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8600u);  if (depth < kMaxDepth) unit_000B(c, 411u, depth + 1u); else { c.pc = 0x0012FEC0u; return; } if (c.pc != 0x003D8600u) [[unlikely]] return; }
L_003D8600:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D860Cu);  if (depth < kMaxDepth) unit_0000(c, 292u, depth + 1u); else { c.pc = 0x001033A0u; return; } if (c.pc != 0x003D860Cu) [[unlikely]] return; }
L_003D860C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8618u);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102D00u; return; } if (c.pc != 0x003D8618u) [[unlikely]] return; }
L_003D8618:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 18917u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8630u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D8630u) [[unlikely]] return; }
L_003D8630:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D863Cu);  if (depth < kMaxDepth) unit_0003(c, 458u, depth + 1u); else { c.pc = 0x0010FEE0u; return; } if (c.pc != 0x003D863Cu) [[unlikely]] return; }
L_003D863C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8644u);  if (depth < kMaxDepth) unit_00CD(c, 22u, depth + 1u); else { c.pc = 0x00434340u; return; } if (c.pc != 0x003D8644u) [[unlikely]] return; }
L_003D8644:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8654u);  if (depth < kMaxDepth) unit_00CD(c, 163u, depth + 1u); else { c.pc = 0x00435060u; return; } if (c.pc != 0x003D8654u) [[unlikely]] return; }
L_003D8654:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 18902u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D866Cu);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D866Cu) [[unlikely]] return; }
L_003D866C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8678u);  if (depth < kMaxDepth) unit_0101(c, 107u, depth + 1u); else { c.pc = 0x00504C40u; return; } if (c.pc != 0x003D8678u) [[unlikely]] return; }
L_003D8678:
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8684u);  if (depth < kMaxDepth) unit_00B5(c, 70u, depth + 1u); else { c.pc = 0x003D46B0u; return; } if (c.pc != 0x003D8684u) [[unlikely]] return; }
L_003D8684:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003D8688:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D86B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 64u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 80u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D887C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 22032u);
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 22080u);
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8700u);  if (depth < kMaxDepth) unit_000B(c, 19u, depth + 1u); else { c.pc = 0x0012C280u; return; } if (c.pc != 0x003D8700u) [[unlikely]] return; }
L_003D8700:
    st32((c.r[28].w[0] - 26896u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 716u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8728; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], c.r[2].w[0] + 716u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8728u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D8728u) [[unlikely]] return; }
L_003D8728:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 700u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D874C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], c.r[2].w[0] + 700u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D874Cu);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D874Cu) [[unlikely]] return; }
L_003D874C:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 684u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8770; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], c.r[2].w[0] + 684u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8770u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D8770u) [[unlikely]] return; }
L_003D8770:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 140u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8794; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], c.r[2].w[0] + 140u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8794u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D8794u) [[unlikely]] return; }
L_003D8794:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], c.r[2].w[0] + 76u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D87A8u);  if (depth < kMaxDepth) unit_0103(c, 206u, depth + 1u); else { c.pc = 0x0050DA00u; return; } if (c.pc != 0x003D87A8u) [[unlikely]] return; }
L_003D87A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D882C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D882C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D882C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D882C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D882C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[18], c.r[2].w[0] + 40u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D882C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[17], c.r[2].w[0] + 40u);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003D882C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D882Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003D882Cu) [[unlikely]] return; }
L_003D882C:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D884C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 23296u);
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 4;
L_003D884C:
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D885Cu);  if (depth < kMaxDepth) unit_002D(c, 23u, depth + 1u); else { c.pc = 0x001B4240u; return; } if (c.pc != 0x003D885Cu) [[unlikely]] return; }
L_003D885C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D887C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D887Cu);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003D887Cu) [[unlikely]] return; }
L_003D887C:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D88A0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D88D8u);  if (depth < kMaxDepth) unit_002D(c, 26u, depth + 1u); else { c.pc = 0x001B42A0u; return; } if (c.pc != 0x003D88D8u) [[unlikely]] return; }
L_003D88D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 23296u);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[20], c.r[2].w[0] + 28u);
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003D8944; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8910u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003D8910u) [[unlikely]] return; }
L_003D8910:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003D892C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8928u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003D8928u) [[unlikely]] return; }
L_003D8928:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D892C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003D8944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8940u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003D8940u) [[unlikely]] return; }
L_003D8940:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D8944:
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.r[22].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 156u), c.r[22].w[0]);
    c.r[23].d[0] = c.r[19].d[0] + 0ull;
    c.r[17].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 32u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8984u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x003D8984u) [[unlikely]] return; }
L_003D8984:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 22032u);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 22080u);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], c.r[2].w[0] + 76u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D89B4u);  if (depth < kMaxDepth) unit_0103(c, 272u, depth + 1u); else { c.pc = 0x0050E040u; return; } if (c.pc != 0x003D89B4u) [[unlikely]] return; }
L_003D89B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], c.r[2].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D89C4u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D89C4u) [[unlikely]] return; }
L_003D89C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[2].w[0] + 156u), 0u);
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 160u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 160u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 160u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], c.r[2].w[0] + 684u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8A38u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D8A38u) [[unlikely]] return; }
L_003D8A38:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], c.r[2].w[0] + 700u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8A48u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D8A48u) [[unlikely]] return; }
L_003D8A48:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], c.r[2].w[0] + 716u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8A58u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D8A58u) [[unlikely]] return; }
L_003D8A58:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[28].w[0] - 26896u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[2].w[0] + 44u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[2].w[0] + 48u), 0u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D8A90; } }
L_003D8A7C:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 52u), 0u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 5;
L_003D8A90:
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8A7Cu | kUnwind; return; } goto L_003D8A7C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 160u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[2].w[0] + 680u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[2].w[0] + 164u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D8B00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D8B28; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D8B44; } }
L_003D8B28:
    set32(c.r[16], ld32((c.r[28].w[0] - 30512u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8B44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D8B44u) [[unlikely]] return; }
L_003D8B44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D8B60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D8B88; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D8BA4; } }
L_003D8B88:
    set32(c.r[16], ld32((c.r[28].w[0] - 31056u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8BA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D8BA4u) [[unlikely]] return; }
L_003D8BA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D8BC0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[30], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[1].d[0] = c.r[30].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D8C58; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[23], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[18], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[6], c.r[2].w[0] - c.r[23].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8C50u);  if (depth < kMaxDepth) unit_00B6(c, 111u, depth + 1u); else { c.pc = 0x003D9100u; return; } if (c.pc != 0x003D8C50u) [[unlikely]] return; }
L_003D8C50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D8CB4; } }
L_003D8C58:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[21], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D8CB4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[17], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[16], c.r[2].w[0] + 12u);
    set32(c.r[19], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8CB4u);  if (depth < kMaxDepth) unit_00B6(c, 108u, depth + 1u); else { c.pc = 0x003D8FA0u; return; } if (c.pc != 0x003D8CB4u) [[unlikely]] return; }
L_003D8CB4:
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
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D8CF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 64u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 80u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8D78; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8D24u);  if (depth < kMaxDepth) unit_00B6(c, 126u, depth + 1u); else { c.pc = 0x003D9870u; return; } if (c.pc != 0x003D8D24u) [[unlikely]] return; }
L_003D8D24:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[18], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8D58; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[17], c.r[2].w[0] + 12u);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003D8D58; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8D58u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003D8D58u) [[unlikely]] return; }
L_003D8D58:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D8D78; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8D78u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003D8D78u) [[unlikely]] return; }
L_003D8D78:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D8DA0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 144u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[3].w[0] + 8u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D8ED4; } }
L_003D8DEC:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8E14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D8E14u) [[unlikely]] return; }
L_003D8E14:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8E24u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003D8E24u) [[unlikely]] return; }
L_003D8E24:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[23].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_003D8ED0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[22], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[18], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8E84u);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x003D8E84u) [[unlikely]] return; }
L_003D8E84:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[21], c.r[2].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[17], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8ED0u);  if (depth < kMaxDepth) unit_0007(c, 215u, depth + 1u); else { c.pc = 0x0011E0A0u; return; } if (c.pc != 0x003D8ED0u) [[unlikely]] return; }
L_003D8ED0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003D8ED4:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 808u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8DECu | kUnwind; return; } goto L_003D8DEC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D8F20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[4], c.r[2].w[0] + 812u);
    set32(c.r[5], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8F4Cu);  if (depth < kMaxDepth) unit_00B2(c, 6u, depth + 1u); else { c.pc = 0x003C8060u; return; } if (c.pc != 0x003D8F4Cu) [[unlikely]] return; }
L_003D8F4C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_003D8F7C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D8F80; } }
L_003D8F7C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D8F80:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D8FA0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 112u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D8FE8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D90D4; } }
L_003D8FE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[21], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);
    c.r[19].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[3], c.r[19].w[0] - c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003D9028; } }
    set32(c.r[2], c.r[3].w[0] + 7u);
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_003D9028:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_003D906C; } }
    set32(c.r[17], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9060; } }
L_003D9040:
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 4u));
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 8u);
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.budget -= 8;
L_003D9060:
    c.r[2].d[0] = c.r[16].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D9040u | kUnwind; return; } goto L_003D9040; } }
L_003D906C:
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9084; } }
L_003D9080:
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 1;
L_003D9084:
    c.r[2].d[0] = c.r[18].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D9080u | kUnwind; return; } goto L_003D9080; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003D90C0; } }
    set32(c.r[2], c.r[3].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_003D90C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 5;
L_003D90D4:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D9100:
    set32(c.r[29], c.r[29].w[0] - 448u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 384u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 400u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 416u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 432u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 416u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9830; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    st32((c.r[29].w[0] + 272u), c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    st32((c.r[29].w[0] + 268u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 268u)));
    st32((c.r[29].w[0] + 264u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[29].w[0] + 380u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 380u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003D919C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 380u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D91C0; } }
L_003D919C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 18831u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D91B8u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003D91B8u) [[unlikely]] return; }
L_003D91B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D91C0u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003D91C0u) [[unlikely]] return; }
L_003D91C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 260u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003D94B8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], c.r[3].w[0] + 12u);
    st32((c.r[29].w[0] + 252u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 248u), c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 400u)));
    set32(c.r[4], c.r[16].w[0] - c.r[3].w[0]);
    set32(c.r[3], 0u + 8u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    c.budget -= 17;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_003D9244; } }
    set32(c.r[3], c.r[4].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_003D9244:
    st32((c.r[29].w[0] + 376u), c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 376u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D9340; } }
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D92B8; } }
L_003D926C:
    st32((c.r[29].w[0] + 244u), c.r[22].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    st32((c.r[29].w[0] + 352u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9298; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 352u)));
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 6;
L_003D9298:
    set32(c.r[22], c.r[22].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[29].w[0] + 416u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 8;
L_003D92B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 376u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D926Cu | kUnwind; return; } goto L_003D926C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 400u)));
    st32((c.r[29].w[0] + 372u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9328; } }
L_003D92DC:
    st32((c.r[29].w[0] + 240u), c.r[22].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[29].w[0] + 348u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9308; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 372u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 348u)));
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 6;
L_003D9308:
    set32(c.r[3], ld32((c.r[29].w[0] + 372u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[29].w[0] + 372u), c.r[3].w[0]);
    set32(c.r[22], c.r[22].w[0] + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 8;
L_003D9328:
    set32(c.r[3], ld32((c.r[29].w[0] + 372u)));
    c.r[3].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D92DCu | kUnwind; return; } goto L_003D92DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9468; } }
L_003D9340:
    set32(c.r[3], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 368u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 364u), c.r[16].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D93B4; } }
L_003D935C:
    set32(c.r[3], ld32((c.r[29].w[0] + 364u)));
    st32((c.r[29].w[0] + 236u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    st32((c.r[29].w[0] + 344u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D938C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 344u)));
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 6;
L_003D938C:
    set32(c.r[3], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[29].w[0] + 368u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[29].w[0] + 364u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 10;
L_003D93B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 368u)));
    c.r[3].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D935Cu | kUnwind; return; } goto L_003D935C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 376u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003D93FC; } }
    c.r[1].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D93FC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_003D93FC:
    st32((c.r[29].w[0] + 312u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 376u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[29].w[0] + 400u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 316u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9454; } }
L_003D9424:
    set32(c.r[3], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[23], c.r[3].w[0] - 8u);
    st32((c.r[29].w[0] + 316u), c.r[23].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 312u)));
    set32(c.r[30], c.r[3].w[0] - 8u);
    st32((c.r[29].w[0] + 312u), c.r[30].w[0]);
    set32(c.r[3], ld32((c.r[23].w[0])));
    st32((c.r[30].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[23].w[0] + 4u));
    st16((c.r[30].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[23].w[0] + 6u));
    st16((c.r[30].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
L_003D9454:
    set32(c.r[4], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 400u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D9424u | kUnwind; return; } goto L_003D9424; } }
L_003D9468:
    set32(c.r[3], ld32((c.r[29].w[0] + 416u)));
    st32((c.r[29].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[21], ld32((c.r[29].w[0] + 400u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D94A4; } }
L_003D947C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4u));
    st16((c.r[21].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 6u));
    st16((c.r[21].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[21], c.r[21].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[29].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 10;
L_003D94A4:
    set32(c.r[3], ld32((c.r[29].w[0] + 308u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D947Cu | kUnwind; return; } goto L_003D947C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9830; } }
L_003D94B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 340u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 360u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D9530; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9538; } }
L_003D9530:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    c.budget -= 2;
L_003D9538:
    set32(c.r[20], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D956C; } }
L_003D9544:
    set32(c.r[3], ld32((c.r[29].w[0] + 380u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[2], c.r[3].w[0] >> 1);
    c.r[1].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D9568; } }
    set32(c.r[20], c.r[20].w[0] << 1);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D956C; } }
L_003D9568:
    set32(c.r[20], ld32((c.r[29].w[0] + 380u)));
    c.budget -= 1;
L_003D956C:
    set32(c.r[2], ld32((c.r[29].w[0] + 360u)));
    c.r[1].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D9544u | kUnwind; return; } goto L_003D9544; } }
    set32(c.r[2], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] << 3);
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D95A0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003D95A0u) [[unlikely]] return; }
L_003D95A0:
    st32((c.r[29].w[0] + 332u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 332u)));
    st32((c.r[29].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[29].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    st32((c.r[3].w[0]), c.r[20].w[0]);
    set32(c.r[19], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], c.r[3].w[0] + 12u);
    st32((c.r[29].w[0] + 200u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 196u), c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], c.r[3].w[0] + 12u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[29].w[0] + 356u), c.r[3].w[0]);
    c.budget -= 33;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9660; } }
L_003D9624:
    st32((c.r[29].w[0] + 184u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    st32((c.r[29].w[0] + 328u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D964C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 5;
L_003D964C:
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 5;
L_003D9660:
    set32(c.r[3], ld32((c.r[29].w[0] + 400u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D9624u | kUnwind; return; } goto L_003D9624; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D96C0; } }
L_003D9678:
    st32((c.r[29].w[0] + 180u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[29].w[0] + 324u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D96A4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 324u)));
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 6;
L_003D96A4:
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[29].w[0] + 416u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 7;
L_003D96C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 416u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D9678u | kUnwind; return; } goto L_003D9678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9710; } }
L_003D96D4:
    st32((c.r[29].w[0] + 176u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[29].w[0] + 320u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D96FC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 5;
L_003D96FC:
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 5;
L_003D9710:
    set32(c.r[3], ld32((c.r[29].w[0] + 356u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D96D4u | kUnwind; return; } goto L_003D96D4; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003D97B0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[29].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    st32((c.r[29].w[0] + 276u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[29].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[29].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[29].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    st32((c.r[29].w[0] + 288u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 32;
L_003D97B0:
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[29].w[0] + 304u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 300u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D97E8; } }
L_003D97D4:
    set32(c.r[3], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[3], c.r[3].w[0] - 8u);
    st32((c.r[29].w[0] + 300u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 284u)));
    c.budget -= 5;
L_003D97E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D97D4u | kUnwind; return; } goto L_003D97D4; } }
    st32((c.r[29].w[0] + 168u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9830; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[29].w[0] + 296u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 296u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9830; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 296u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D982Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003D982Cu) [[unlikely]] return; }
L_003D982C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D9830:
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
    set32(c.r[29], c.r[29].w[0] + 448u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D9870:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 64u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[19], c.r[3].w[0] + 12u);
    set32(c.r[18], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[17], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D98B4; } }
L_003D98AC:
    set32(c.r[17], c.r[17].w[0] - 8u);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003D98B4:
    c.r[1].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D98ACu | kUnwind; return; } goto L_003D98AC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    st32((c.r[3].w[0] + 8u), 0u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D98F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4020u | kUnwind; return; } [[clang::musttail]] return unit_00B5(c, 3u, depth); }
L_003D9900:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D86B0u | kUnwind; return; } goto L_003D86B0; }
L_003D9910:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3C80u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 374u, depth); }
L_003D9920:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 57u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D9948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[17].w[0] + 60u));  if (t) { goto L_003D994C; } }
L_003D9948:
    c.f[20] = 0u;
    c.budget -= 1;
L_003D994C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.f[12] = 0u;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9964u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9964u) [[unlikely]] return; }
L_003D9964:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003D999C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9984u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9984u) [[unlikely]] return; }
L_003D9984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D998Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003D998Cu) [[unlikely]] return; }
L_003D998C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D999Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D999Cu) [[unlikely]] return; }
L_003D999C:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.f[12] = c.f[20];
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D99B4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D99B4u) [[unlikely]] return; }
L_003D99B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003D99EC; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D99D4u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D99D4u) [[unlikely]] return; }
L_003D99D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D99DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003D99DCu) [[unlikely]] return; }
L_003D99DC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D99ECu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D99ECu) [[unlikely]] return; }
L_003D99EC:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.f[12] = 0u;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9A04u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9A04u) [[unlikely]] return; }
L_003D9A04:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003D9A3C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9A24u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9A24u) [[unlikely]] return; }
L_003D9A24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9A2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003D9A2Cu) [[unlikely]] return; }
L_003D9A2C:
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9A3Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9A3Cu) [[unlikely]] return; }
L_003D9A3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D9A60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 57u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003D9A70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 57u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D9A9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = ld32((c.r[16].w[0] + 60u));  if (t) { goto L_003D9AA0; } }
L_003D9A9C:
    c.f[21] = 0u;
    c.budget -= 1;
L_003D9AA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[1] = c.r[3].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.f[20] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9AD0u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9AD0u) [[unlikely]] return; }
L_003D9AD0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003D9B08; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9AF0u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9AF0u) [[unlikely]] return; }
L_003D9AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9AF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003D9AF8u) [[unlikely]] return; }
L_003D9AF8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9B08u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9B08u) [[unlikely]] return; }
L_003D9B08:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.f[20] = c.f[20] ^ fp::kSign;
    c.f[12] = fp::add(c.f[20], c.f[21]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9B24u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9B24u) [[unlikely]] return; }
L_003D9B24:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003D9B5C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9B44u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9B44u) [[unlikely]] return; }
L_003D9B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9B4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003D9B4Cu) [[unlikely]] return; }
L_003D9B4C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9B5Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9B5Cu) [[unlikely]] return; }
L_003D9B5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.f[12] = c.f[20];
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9B74u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9B74u) [[unlikely]] return; }
L_003D9B74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003D9BAC; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9B94u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9B94u) [[unlikely]] return; }
L_003D9B94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9B9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003D9B9Cu) [[unlikely]] return; }
L_003D9B9C:
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9BACu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9BACu) [[unlikely]] return; }
L_003D9BAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D9BD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D9BE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::pmaxw(c.r[17], c.r[5], c.r[2]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9C14u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9C14u) [[unlikely]] return; }
L_003D9C14:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003D9C4C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9C34u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9C34u) [[unlikely]] return; }
L_003D9C34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9C3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003D9C3Cu) [[unlikely]] return; }
L_003D9C3C:
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9C4Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9C4Cu) [[unlikely]] return; }
L_003D9C4C:
    st32((c.r[18].w[0] + 52u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D9C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9C90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9C90u) [[unlikely]] return; }
L_003D9C90:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003D9CC8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9CB0u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9CB0u) [[unlikely]] return; }
L_003D9CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9CB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003D9CB8u) [[unlikely]] return; }
L_003D9CB8:
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9CC8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9CC8u) [[unlikely]] return; }
L_003D9CC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D9CE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003D9D48; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9D08u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9D08u) [[unlikely]] return; }
L_003D9D08:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003D9D98; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9D28u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9D28u) [[unlikely]] return; }
L_003D9D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9D30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003D9D30u) [[unlikely]] return; }
L_003D9D30:
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9D40u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9D40u) [[unlikely]] return; }
L_003D9D40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003D9D9C; } }
L_003D9D48:
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9D60u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9D60u) [[unlikely]] return; }
L_003D9D60:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003D9D98; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9D80u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9D80u) [[unlikely]] return; }
L_003D9D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9D88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003D9D88u) [[unlikely]] return; }
L_003D9D88:
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9D98u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9D98u) [[unlikely]] return; }
L_003D9D98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003D9D9C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D9DB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003D9E18; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9DD8u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9DD8u) [[unlikely]] return; }
L_003D9DD8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003D9E68; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9DF8u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9DF8u) [[unlikely]] return; }
L_003D9DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9E00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003D9E00u) [[unlikely]] return; }
L_003D9E00:
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9E10u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9E10u) [[unlikely]] return; }
L_003D9E10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003D9E6C; } }
L_003D9E18:
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9E30u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9E30u) [[unlikely]] return; }
L_003D9E30:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003D9E68; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9E50u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9E50u) [[unlikely]] return; }
L_003D9E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9E58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003D9E58u) [[unlikely]] return; }
L_003D9E58:
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9E68u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9E68u) [[unlikely]] return; }
L_003D9E68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003D9E6C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D9E80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 18374u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9EA4u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000A(c, 398u, depth + 1u); else { c.pc = 0x0012B320u; return; } if (c.pc != 0x003D9EA4u) [[unlikely]] return; }
L_003D9EA4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9EB0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x003D9EB0u) [[unlikely]] return; }
L_003D9EB0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9EBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D9EBCu) [[unlikely]] return; }
L_003D9EBC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9ED0u); set32(c.r[5], ld32((c.r[29].w[0] + 88u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9ED0u) [[unlikely]] return; }
L_003D9ED0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003D9F08; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9EF0u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9EF0u) [[unlikely]] return; }
L_003D9EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9EF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003D9EF8u) [[unlikely]] return; }
L_003D9EF8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9F08u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9F08u) [[unlikely]] return; }
L_003D9F08:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9F24u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9F24u) [[unlikely]] return; }
L_003D9F24:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003D9F5C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9F44u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9F44u) [[unlikely]] return; }
L_003D9F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9F4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003D9F4Cu) [[unlikely]] return; }
L_003D9F4C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9F5Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9F5Cu) [[unlikely]] return; }
L_003D9F5C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 18355u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9F7Cu); set32(c.r[7], c.r[16].w[0] + 24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9F7Cu) [[unlikely]] return; }
L_003D9F7C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003D9FB4; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9F9Cu); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9F9Cu) [[unlikely]] return; }
L_003D9F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9FA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003D9FA4u) [[unlikely]] return; }
L_003D9FA4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9FB4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9FB4u) [[unlikely]] return; }
L_003D9FB4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 18338u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9FD4u); set32(c.r[7], c.r[16].w[0] + 28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9FD4u) [[unlikely]] return; }
L_003D9FD4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003DA00C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9FF4u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D9FF4u) [[unlikely]] return; }
L_003D9FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9FFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003D9FFCu) [[unlikely]] return; }
L_003D9FFC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003DA000:
    set32(c.r[4], 0u + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA00Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA00Cu) [[unlikely]] return; }
L_003DA00C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 18320u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA02Cu); set32(c.r[7], c.r[16].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DA02Cu) [[unlikely]] return; }
L_003DA02C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003DA064; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA04Cu); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA04Cu) [[unlikely]] return; }
L_003DA04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA054u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003DA054u) [[unlikely]] return; }
L_003DA054:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA064u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA064u) [[unlikely]] return; }
L_003DA064:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 18297u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA084u); set32(c.r[7], c.r[16].w[0] + 36u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DA084u) [[unlikely]] return; }
L_003DA084:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003DA0BC; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA0A4u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA0A4u) [[unlikely]] return; }
L_003DA0A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA0ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003DA0ACu) [[unlikely]] return; }
L_003DA0AC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA0BCu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA0BCu) [[unlikely]] return; }
L_003DA0BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 18274u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA0DCu); set32(c.r[7], c.r[16].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DA0DCu) [[unlikely]] return; }
L_003DA0DC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003DA114; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA0FCu); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA0FCu) [[unlikely]] return; }
L_003DA0FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA104u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003DA104u) [[unlikely]] return; }
L_003DA104:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA114u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA114u) [[unlikely]] return; }
L_003DA114:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 18249u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA134u); set32(c.r[7], c.r[16].w[0] + 44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DA134u) [[unlikely]] return; }
L_003DA134:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003DA16C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA154u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA154u) [[unlikely]] return; }
L_003DA154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA15Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003DA15Cu) [[unlikely]] return; }
L_003DA15C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA16Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA16Cu) [[unlikely]] return; }
L_003DA16C:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA184u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DA184u) [[unlikely]] return; }
L_003DA184:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003DA1BC; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA1A4u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA1A4u) [[unlikely]] return; }
L_003DA1A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA1ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003DA1ACu) [[unlikely]] return; }
L_003DA1AC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA1BCu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA1BCu) [[unlikely]] return; }
L_003DA1BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA1D4u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DA1D4u) [[unlikely]] return; }
L_003DA1D4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003DA20C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA1F4u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA1F4u) [[unlikely]] return; }
L_003DA1F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA1FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003DA1FCu) [[unlikely]] return; }
L_003DA1FC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA20Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA20Cu) [[unlikely]] return; }
L_003DA20C:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA224u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DA224u) [[unlikely]] return; }
L_003DA224:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003DA25C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA244u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA244u) [[unlikely]] return; }
L_003DA244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA24Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003DA24Cu) [[unlikely]] return; }
L_003DA24C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA25Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA25Cu) [[unlikely]] return; }
L_003DA25C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 18227u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA278u); set32(c.r[6], c.r[16].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DA278u) [[unlikely]] return; }
L_003DA278:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003DA2B0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA298u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA298u) [[unlikely]] return; }
L_003DA298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA2A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003DA2A0u) [[unlikely]] return; }
L_003DA2A0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA2B0u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA2B0u) [[unlikely]] return; }
L_003DA2B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 18220u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA2CCu); set32(c.r[6], c.r[16].w[0] + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DA2CCu) [[unlikely]] return; }
L_003DA2CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003DA304; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA2ECu); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA2ECu) [[unlikely]] return; }
L_003DA2EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA2F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003DA2F4u) [[unlikely]] return; }
L_003DA2F4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA304u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA304u) [[unlikely]] return; }
L_003DA304:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 18214u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA320u); set32(c.r[6], c.r[16].w[0] + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DA320u) [[unlikely]] return; }
L_003DA320:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003DA358; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA340u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA340u) [[unlikely]] return; }
L_003DA340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA348u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003DA348u) [[unlikely]] return; }
L_003DA348:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA358u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA358u) [[unlikely]] return; }
L_003DA358:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 18206u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA374u); set32(c.r[6], c.r[16].w[0] + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DA374u) [[unlikely]] return; }
L_003DA374:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003DA3AC; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA394u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA394u) [[unlikely]] return; }
L_003DA394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA39Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003DA39Cu) [[unlikely]] return; }
L_003DA39C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA3ACu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA3ACu) [[unlikely]] return; }
L_003DA3AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[16].w[0] + 20u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA3C8u); set32(c.r[5], c.r[5].w[0] - 18199u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DA3C8u) [[unlikely]] return; }
L_003DA3C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003DA400; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA3E8u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA3E8u) [[unlikely]] return; }
L_003DA3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA3F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003DA3F0u) [[unlikely]] return; }
L_003DA3F0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA400u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA400u) [[unlikely]] return; }
L_003DA400:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA40Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x003DA40Cu) [[unlikely]] return; }
L_003DA40C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003DA420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26860u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_003DA498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003DA454; } }
L_003DA444:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA450u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 112u, depth + 1u); else { c.pc = 0x00454D60u; return; } if (c.pc != 0x003DA450u) [[unlikely]] return; }
L_003DA450:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003DA454:
    set32(c.r[3], ld32((c.r[28].w[0] - 26860u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 48u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DA444u | kUnwind; return; } goto L_003DA444; }
    set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA474u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00CE(c, 27u, depth + 1u); else { c.pc = 0x00438320u; return; } if (c.pc != 0x003DA474u) [[unlikely]] return; }
L_003DA474:
    set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA480u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00D4(c, 522u, depth + 1u); else { c.pc = 0x00453DD0u; return; } if (c.pc != 0x003DA480u) [[unlikely]] return; }
L_003DA480:
    set32(c.r[2], ld32((c.r[28].w[0] - 26860u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA498u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DA498u) [[unlikely]] return; }
L_003DA498:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DA4B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA4C4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00D5(c, 98u, depth + 1u); else { c.pc = 0x004549B0u; return; } if (c.pc != 0x003DA4C4u) [[unlikely]] return; }
L_003DA4C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA4CCu);  if (depth < kMaxDepth) unit_00CE(c, 56u, depth + 1u); else { c.pc = 0x004387B0u; return; } if (c.pc != 0x003DA4CCu) [[unlikely]] return; }
L_003DA4CC:
    set32(c.r[16], ld32((c.r[28].w[0] - 26860u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA4E8u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DA4E8u) [[unlikely]] return; }
L_003DA4E8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003DA520; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA508u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA508u) [[unlikely]] return; }
L_003DA508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA510u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003DA510u) [[unlikely]] return; }
L_003DA510:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA520u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA520u) [[unlikely]] return; }
L_003DA520:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA538u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DA538u) [[unlikely]] return; }
L_003DA538:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003DA570; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA558u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA558u) [[unlikely]] return; }
L_003DA558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA560u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003DA560u) [[unlikely]] return; }
L_003DA560:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA570u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA570u) [[unlikely]] return; }
L_003DA570:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA588u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DA588u) [[unlikely]] return; }
L_003DA588:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003DA5C0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA5A8u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA5A8u) [[unlikely]] return; }
L_003DA5A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA5B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003DA5B0u) [[unlikely]] return; }
L_003DA5B0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA5C0u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA5C0u) [[unlikely]] return; }
L_003DA5C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26860u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA5D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DA5D8u) [[unlikely]] return; }
L_003DA5D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26860u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26860u)));  goto L_003DA5FC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA5F8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DA5F8u) [[unlikely]] return; }
L_003DA5F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26860u)));
    c.budget -= 1;
L_003DA5FC:
    st32((c.r[2].w[0] + 48u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA608u); set32(c.r[4], ld32((c.r[28].w[0] - 26860u)));  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003DA608u) [[unlikely]] return; }
L_003DA608:
    set32(c.r[4], ld32((c.r[28].w[0] - 26856u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA614u); st32((c.r[28].w[0] - 26860u), 0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003DA614u) [[unlikely]] return; }
L_003DA614:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DA630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003DA66C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 22168u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003DA668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA668u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003DA668u) [[unlikely]] return; }
L_003DA668:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003DA66C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DA680:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 32u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 55296ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA6A0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 136u, depth + 1u); else { c.pc = 0x00102150u; return; } if (c.pc != 0x003DA6A0u) [[unlikely]] return; }
L_003DA6A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[28].w[0] - 26856u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA6B4u); set32(c.r[5], c.r[5].w[0] - 18194u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003DA6B4u) [[unlikely]] return; }
L_003DA6B4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA6C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 116u, depth + 1u); else { c.pc = 0x00129080u; return; } if (c.pc != 0x003DA6C4u) [[unlikely]] return; }
L_003DA6C4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA6D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003DA6D0u) [[unlikely]] return; }
L_003DA6D0:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA6DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003DA6DCu) [[unlikely]] return; }
L_003DA6DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 26856u)));  goto L_003DA72C; }
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA700u); st32((c.r[16].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x003DA700u) [[unlikely]] return; }
L_003DA700:
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA710u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x003DA710u) [[unlikely]] return; }
L_003DA710:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32480u));
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26856u)));
    c.budget -= 7;
L_003DA72C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    c.r[5].d[0] = c.r[2].d[0] | 55296ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA74Cu); st32((c.r[28].w[0] - 26860u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0105(c, 119u, depth + 1u); else { c.pc = 0x00515590u; return; } if (c.pc != 0x003DA74Cu) [[unlikely]] return; }
L_003DA74C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[16].w[0]);  if (t) { goto L_003DA784; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA76Cu); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA76Cu) [[unlikely]] return; }
L_003DA76C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA774u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003DA774u) [[unlikely]] return; }
L_003DA774:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA784u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA784u) [[unlikely]] return; }
L_003DA784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA78Cu); set32(c.r[4], ld32((c.r[28].w[0] - 26860u)));  if (depth < kMaxDepth) unit_0118(c, 258u, depth + 1u); else { c.pc = 0x00563F60u; return; } if (c.pc != 0x003DA78Cu) [[unlikely]] return; }
L_003DA78C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[16].w[0]);  if (t) { goto L_003DA7C4; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA7ACu); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA7ACu) [[unlikely]] return; }
L_003DA7AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA7B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003DA7B4u) [[unlikely]] return; }
L_003DA7B4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA7C4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA7C4u) [[unlikely]] return; }
L_003DA7C4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26860u)));
    st32((c.r[29].w[0] + 124u), 0u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA7E0u); set32(c.r[5], c.r[29].w[0] + 124u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DA7E0u) [[unlikely]] return; }
L_003DA7E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26860u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[5], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 130ull;
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA808u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DA808u) [[unlikely]] return; }
L_003DA808:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 26864u), c.r[2].w[0]);  if (t) { goto L_003DA840; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA828u); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA828u) [[unlikely]] return; }
L_003DA828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA830u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003DA830u) [[unlikely]] return; }
L_003DA830:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA840u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA840u) [[unlikely]] return; }
L_003DA840:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA850u); set32(c.r[6], 0u + 68u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x003DA850u) [[unlikely]] return; }
L_003DA850:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[3], 0u + 68u);
    set32(c.r[2], 0u + 2000u);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA86Cu); st32((c.r[29].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_010E(c, 83u, depth + 1u); else { c.pc = 0x005389A0u; return; } if (c.pc != 0x003DA86Cu) [[unlikely]] return; }
L_003DA86C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA874u); set32(c.r[4], ld32((c.r[28].w[0] - 26860u)));  if (depth < kMaxDepth) unit_00B6(c, 187u, depth + 1u); else { c.pc = 0x003D9E80u; return; } if (c.pc != 0x003DA874u) [[unlikely]] return; }
L_003DA874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA87Cu);  if (depth < kMaxDepth) unit_00D5(c, 102u, depth + 1u); else { c.pc = 0x00454A20u; return; } if (c.pc != 0x003DA87Cu) [[unlikely]] return; }
L_003DA87C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA884u);  if (depth < kMaxDepth) unit_00CE(c, 61u, depth + 1u); else { c.pc = 0x00438810u; return; } if (c.pc != 0x003DA884u) [[unlikely]] return; }
L_003DA884:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA890u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003DA890u) [[unlikely]] return; }
L_003DA890:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 26860u)));  goto L_003DA8A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA8A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 114u, depth + 1u); else { c.pc = 0x00454DA0u; return; } if (c.pc != 0x003DA8A0u) [[unlikely]] return; }
L_003DA8A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26860u)));
    c.budget -= 1;
L_003DA8A4:
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003DA8C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003DA908; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA8ECu); set32(c.r[6], c.r[6].w[0] - 18386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA8ECu) [[unlikely]] return; }
L_003DA8EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA8F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 316u, depth + 1u); else { c.pc = 0x003DA920u; return; } if (c.pc != 0x003DA8F4u) [[unlikely]] return; }
L_003DA8F4:
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA904u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DA904u) [[unlikely]] return; }
L_003DA904:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003DA908:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DA920:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(88ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DAD68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 18768u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003D8000u < 16384u) { entry = entries_00B6[(t - 0x003D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003DA948:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 18183u);  if (t) { goto L_003DAD70; } }
L_003DA954:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 18123u);  if (t) { goto L_003DAD70; } }
L_003DA960:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 17988u);  if (t) { goto L_003DAD70; } }
L_003DA96C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 17941u);  if (t) { goto L_003DAD70; } }
L_003DA978:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 17883u);  if (t) { goto L_003DAD70; } }
L_003DA984:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 17846u);  if (t) { goto L_003DAD70; } }
L_003DA990:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 17806u);  if (t) { goto L_003DAD70; } }
L_003DA99C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 17775u);  if (t) { goto L_003DAD70; } }
L_003DA9A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 17734u);  if (t) { goto L_003DAD70; } }
L_003DA9B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 17705u);  if (t) { goto L_003DAD70; } }
L_003DA9C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 17668u);  if (t) { goto L_003DAD70; } }
L_003DA9CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 17606u);  if (t) { goto L_003DAD70; } }
L_003DA9D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 17456u);  if (t) { goto L_003DAD70; } }
L_003DA9E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 17402u);  if (t) { goto L_003DAD70; } }
L_003DA9F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 17330u);  if (t) { goto L_003DAD70; } }
L_003DA9FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 17230u);  if (t) { goto L_003DAD70; } }
L_003DAA08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 17168u);  if (t) { goto L_003DAD70; } }
L_003DAA14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 16983u);  if (t) { goto L_003DAD70; } }
L_003DAA20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 16879u);  if (t) { goto L_003DAD70; } }
L_003DAA2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 16767u);  if (t) { goto L_003DAD70; } }
L_003DAA38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 16711u);  if (t) { goto L_003DAD70; } }
L_003DAA44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 16641u);  if (t) { goto L_003DAD70; } }
L_003DAA50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 16548u);  if (t) { goto L_003DAD70; } }
L_003DAA5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 16460u);  if (t) { goto L_003DAD70; } }
L_003DAA68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 16413u);  if (t) { goto L_003DAD70; } }
L_003DAA74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 16325u);  if (t) { goto L_003DAD70; } }
L_003DAA80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 16304u);  if (t) { goto L_003DAD70; } }
L_003DAA8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 16198u);  if (t) { goto L_003DAD70; } }
L_003DAA98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 16164u);  if (t) { goto L_003DAD70; } }
L_003DAAA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 16075u);  if (t) { goto L_003DAD70; } }
L_003DAAB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 16058u);  if (t) { goto L_003DAD70; } }
L_003DAABC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 16027u);  if (t) { goto L_003DAD70; } }
L_003DAAC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 15992u);  if (t) { goto L_003DAD70; } }
L_003DAAD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 15910u);  if (t) { goto L_003DAD70; } }
L_003DAAE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 15845u);  if (t) { goto L_003DAD70; } }
L_003DAAEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 15777u);  if (t) { goto L_003DAD70; } }
L_003DAAF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 15746u);  if (t) { goto L_003DAD70; } }
L_003DAB04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 15717u);  if (t) { goto L_003DAD70; } }
L_003DAB10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 15655u);  if (t) { goto L_003DAD70; } }
L_003DAB1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 15609u);  if (t) { goto L_003DAD70; } }
L_003DAB28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 15548u);  if (t) { goto L_003DAD70; } }
L_003DAB34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 15445u);  if (t) { goto L_003DAD70; } }
L_003DAB40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 15390u);  if (t) { goto L_003DAD70; } }
L_003DAB4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 15354u);  if (t) { goto L_003DAD70; } }
L_003DAB58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 15303u);  if (t) { goto L_003DAD70; } }
L_003DAB64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 15220u);  if (t) { goto L_003DAD70; } }
L_003DAB70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 15158u);  if (t) { goto L_003DAD70; } }
L_003DAB7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 15061u);  if (t) { goto L_003DAD70; } }
L_003DAB88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 14992u);  if (t) { goto L_003DAD70; } }
L_003DAB94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 14959u);  if (t) { goto L_003DAD70; } }
L_003DABA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 14835u);  if (t) { goto L_003DAD70; } }
L_003DABAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 14766u);  if (t) { goto L_003DAD70; } }
L_003DABB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 14712u);  if (t) { goto L_003DAD70; } }
L_003DABC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 14632u);  if (t) { goto L_003DAD70; } }
L_003DABD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 14552u);  if (t) { goto L_003DAD70; } }
L_003DABDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 14432u);  if (t) { goto L_003DAD70; } }
L_003DABE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 14245u);  if (t) { goto L_003DAD70; } }
L_003DABF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 14204u);  if (t) { goto L_003DAD70; } }
L_003DAC00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 14109u);  if (t) { goto L_003DAD70; } }
L_003DAC0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 14068u);  if (t) { goto L_003DAD70; } }
L_003DAC18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 14000u);  if (t) { goto L_003DAD70; } }
L_003DAC24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 13928u);  if (t) { goto L_003DAD70; } }
L_003DAC30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 13812u);  if (t) { goto L_003DAD70; } }
L_003DAC3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 13773u);  if (t) { goto L_003DAD70; } }
L_003DAC48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 13640u);  if (t) { goto L_003DAD70; } }
L_003DAC54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 13525u);  if (t) { goto L_003DAD70; } }
L_003DAC60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 13425u);  if (t) { goto L_003DAD70; } }
L_003DAC6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 13390u);  if (t) { goto L_003DAD70; } }
L_003DAC78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 13291u);  if (t) { goto L_003DAD70; } }
L_003DAC84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 13196u);  if (t) { goto L_003DAD70; } }
L_003DAC90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 13141u);  if (t) { goto L_003DAD70; } }
L_003DAC9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 13076u);  if (t) { goto L_003DAD70; } }
L_003DACA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 13012u);  if (t) { goto L_003DAD70; } }
L_003DACB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 12949u);  if (t) { goto L_003DAD70; } }
L_003DACC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 12859u);  if (t) { goto L_003DAD70; } }
L_003DACCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 12798u);  if (t) { goto L_003DAD70; } }
L_003DACD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 12629u);  if (t) { goto L_003DAD70; } }
L_003DACE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 12441u);  if (t) { goto L_003DAD70; } }
L_003DACF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 12295u);  if (t) { goto L_003DAD70; } }
L_003DACFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 12176u);  if (t) { goto L_003DAD70; } }
L_003DAD08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 12045u);  if (t) { goto L_003DAD70; } }
L_003DAD14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 11985u);  if (t) { goto L_003DAD70; } }
L_003DAD20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 11833u);  if (t) { goto L_003DAD70; } }
L_003DAD2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 11754u);  if (t) { goto L_003DAD70; } }
L_003DAD38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 11675u);  if (t) { goto L_003DAD70; } }
L_003DAD44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 11567u);  if (t) { goto L_003DAD70; } }
L_003DAD50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 11523u);  if (t) { goto L_003DAD70; } }
L_003DAD5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 11465u);  if (t) { goto L_003DAD70; } }
L_003DAD68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 11454u);
    c.budget -= 2;
L_003DAD70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DAD80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003DAD90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DADA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DADB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DADC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 168u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_003DADD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22500u)));
    set32(c.r[6], c.r[3].w[0] + 168u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 168u));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DADFC; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DADF8u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_00D5(c, 24u, depth + 1u); else { c.pc = 0x00454290u; return; } if (c.pc != 0x003DADF8u) [[unlikely]] return; }
L_003DADF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DADFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DAE10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DAE20:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));  [[clang::musttail]] return unit_00CD(c, 485u, depth); }
L_003DAE30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DAE40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003DAEF0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 188u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 188u);  if (t) { goto L_003DAE74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003DAE78; } }
L_003DAE74:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003DAE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAE80u); set32(c.r[4], ld32((c.r[28].w[0] - 24272u)));  if (depth < kMaxDepth) unit_00DB(c, 265u, depth + 1u); else { c.pc = 0x0046FBB0u; return; } if (c.pc != 0x003DAE80u) [[unlikely]] return; }
L_003DAE80:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAE8Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003DAE8Cu) [[unlikely]] return; }
L_003DAE8C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[29].w[0] + 49u);  goto L_003DAEA0; }
    set32(c.r[8], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_003DAEA0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAEB8u); set32(c.r[6], c.r[6].w[0] - 11392u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x003DAEB8u) [[unlikely]] return; }
L_003DAEB8:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 33u);  goto L_003DAECC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_003DAECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAED4u); set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));  if (depth < kMaxDepth) unit_00CD(c, 500u, depth + 1u); else { c.pc = 0x00437EE0u; return; } if (c.pc != 0x003DAED4u) [[unlikely]] return; }
L_003DAED4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAEE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003DAEE0u) [[unlikely]] return; }
L_003DAEE0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAEECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003DAEECu) [[unlikely]] return; }
L_003DAEEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003DAEF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DAF00:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));  [[clang::musttail]] return unit_00CD(c, 500u, depth); }
L_003DAF10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DAF20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DAF30:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));  [[clang::musttail]] return unit_00CD(c, 394u, depth); }
L_003DAF40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAF50u);  if (depth < kMaxDepth) unit_00B6(c, 444u, depth + 1u); else { c.pc = 0x003DB060u; return; } if (c.pc != 0x003DAF50u) [[unlikely]] return; }
L_003DAF50:
    set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAF60u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D5(c, 48u, depth + 1u); else { c.pc = 0x004544C0u; return; } if (c.pc != 0x003DAF60u) [[unlikely]] return; }
L_003DAF60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DAF70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAF80u); set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));  if (depth < kMaxDepth) unit_00D5(c, 46u, depth + 1u); else { c.pc = 0x00454490u; return; } if (c.pc != 0x003DAF80u) [[unlikely]] return; }
L_003DAF80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAF88u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00B6(c, 453u, depth + 1u); else { c.pc = 0x003DB0E0u; return; } if (c.pc != 0x003DAF88u) [[unlikely]] return; }
L_003DAF88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DAFA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAFB0u);  if (depth < kMaxDepth) unit_00B6(c, 444u, depth + 1u); else { c.pc = 0x003DB060u; return; } if (c.pc != 0x003DAFB0u) [[unlikely]] return; }
L_003DAFB0:
    set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAFC0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CD(c, 375u, depth + 1u); else { c.pc = 0x00436FC0u; return; } if (c.pc != 0x003DAFC0u) [[unlikely]] return; }
L_003DAFC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DAFD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAFE0u); set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));  if (depth < kMaxDepth) unit_00CD(c, 373u, depth + 1u); else { c.pc = 0x00436F80u; return; } if (c.pc != 0x003DAFE0u) [[unlikely]] return; }
L_003DAFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAFE8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00B6(c, 453u, depth + 1u); else { c.pc = 0x003DB0E0u; return; } if (c.pc != 0x003DAFE8u) [[unlikely]] return; }
L_003DAFE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DB000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB010u);  if (depth < kMaxDepth) unit_00B6(c, 444u, depth + 1u); else { c.pc = 0x003DB060u; return; } if (c.pc != 0x003DB010u) [[unlikely]] return; }
L_003DB010:
    set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB01Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00D5(c, 64u, depth + 1u); else { c.pc = 0x004546F0u; return; } if (c.pc != 0x003DB01Cu) [[unlikely]] return; }
L_003DB01C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DB030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB040u); set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));  if (depth < kMaxDepth) unit_00D5(c, 62u, depth + 1u); else { c.pc = 0x004546C0u; return; } if (c.pc != 0x003DB040u) [[unlikely]] return; }
L_003DB040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB048u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00B6(c, 453u, depth + 1u); else { c.pc = 0x003DB0E0u; return; } if (c.pc != 0x003DB048u) [[unlikely]] return; }
L_003DB048:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DB060:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DB0CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 11424u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003D8000u < 16384u) { entry = entries_00B6[(t - 0x003D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003DB088:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DB0CC; } }
L_003DB094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[28].w[0] - 31432u));  if (t) { goto L_003DB0CC; } }
L_003DB09C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[28].w[0] - 32076u));  if (t) { goto L_003DB0CC; } }
L_003DB0A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DB0CC; } }
L_003DB0B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[28].w[0] - 31428u));  if (t) { goto L_003DB0CC; } }
L_003DB0BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[28].w[0] - 31424u));  if (t) { goto L_003DB0CC; } }
L_003DB0C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 2;
L_003DB0CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DB0E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[0] = 0u;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[28].w[0] - 31432u));  goto L_003DB110; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003DB1A0; } }
L_003DB110:
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[28].w[0] - 32076u));  goto L_003DB12C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_003DB1A0; } }
L_003DB12C:
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  goto L_003DB148; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_003DB1A0; } }
L_003DB148:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[28].w[0] - 31428u));  goto L_003DB16C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_003DB1A0; } }
L_003DB16C:
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[28].w[0] - 31424u));  goto L_003DB188; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 5u);  if (t) { goto L_003DB1A0; } }
L_003DB188:
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[16], 0u + 7u);  goto L_003DB1A0; }
    set32(c.r[16], 0u + 6u);
    c.budget -= 1;
L_003DB1A0:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 11386u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB1B8u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DB1B8u) [[unlikely]] return; }
L_003DB1B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DB1D0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));
    c.budget -= 4;
    { c.r[6].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_00CD(c, 451u, depth); }
L_003DB1E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 11343u);
    set32(c.r[5], c.r[5].w[0] - 11326u);
    set32(c.r[6], c.r[6].w[0] - 11321u);
    set32(c.r[7], c.r[7].w[0] - 20016u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB214u); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB214u) [[unlikely]] return; }
L_003DB214:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 11315u);
    set32(c.r[5], c.r[5].w[0] - 11298u);
    set32(c.r[6], c.r[6].w[0] - 11326u);
    set32(c.r[7], c.r[7].w[0] - 20432u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB240u); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB240u) [[unlikely]] return; }
L_003DB240:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 11294u);
    set32(c.r[5], c.r[5].w[0] - 11326u);
    set32(c.r[6], c.r[6].w[0] - 11298u);
    set32(c.r[7], c.r[7].w[0] - 20480u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB26Cu); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB26Cu) [[unlikely]] return; }
L_003DB26C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 11277u);
    set32(c.r[5], c.r[5].w[0] - 11298u);
    set32(c.r[6], c.r[6].w[0] - 11326u);
    set32(c.r[7], c.r[7].w[0] - 20528u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB298u); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB298u) [[unlikely]] return; }
L_003DB298:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 11260u);
    set32(c.r[5], c.r[5].w[0] - 11326u);
    set32(c.r[6], c.r[6].w[0] - 11298u);
    set32(c.r[7], c.r[7].w[0] - 20576u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB2C4u); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB2C4u) [[unlikely]] return; }
L_003DB2C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 11243u);
    set32(c.r[5], c.r[5].w[0] - 11298u);
    set32(c.r[6], c.r[6].w[0] - 11326u);
    set32(c.r[7], c.r[7].w[0] - 20624u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB2F0u); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB2F0u) [[unlikely]] return; }
L_003DB2F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 11225u);
    set32(c.r[5], c.r[5].w[0] - 11326u);
    set32(c.r[6], c.r[6].w[0] - 11207u);
    set32(c.r[7], c.r[7].w[0] - 20672u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB31Cu); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB31Cu) [[unlikely]] return; }
L_003DB31C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 11326u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 11197u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 20688u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB344u); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB344u) [[unlikely]] return; }
L_003DB344:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 11179u);
    set32(c.r[5], c.r[5].w[0] - 11326u);
    set32(c.r[6], c.r[6].w[0] - 11298u);
    set32(c.r[7], c.r[7].w[0] - 20704u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB370u); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB370u) [[unlikely]] return; }
L_003DB370:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 11165u);
    set32(c.r[5], c.r[5].w[0] - 11326u);
    set32(c.r[6], c.r[6].w[0] - 11298u);
    set32(c.r[7], c.r[7].w[0] - 20720u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB39Cu); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB39Cu) [[unlikely]] return; }
L_003DB39C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 11326u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 11150u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 20944u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB3C4u); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB3C4u) [[unlikely]] return; }
L_003DB3C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 11326u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 11138u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 20960u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB3ECu); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB3ECu) [[unlikely]] return; }
L_003DB3EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 11326u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 11123u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 20976u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB414u); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB414u) [[unlikely]] return; }
L_003DB414:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 11094u);
    set32(c.r[5], c.r[5].w[0] - 11326u);
    set32(c.r[6], c.r[6].w[0] - 11077u);
    set32(c.r[7], c.r[7].w[0] - 21040u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB440u); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB440u) [[unlikely]] return; }
L_003DB440:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 11071u);
    set32(c.r[5], c.r[5].w[0] - 11326u);
    set32(c.r[6], c.r[6].w[0] - 11077u);
    set32(c.r[7], c.r[7].w[0] - 21072u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB46Cu); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB46Cu) [[unlikely]] return; }
L_003DB46C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 11053u);
    set32(c.r[5], c.r[5].w[0] - 11326u);
    set32(c.r[6], c.r[6].w[0] - 11321u);
    set32(c.r[7], c.r[7].w[0] - 21056u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB498u); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB498u) [[unlikely]] return; }
L_003DB498:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 11033u);
    set32(c.r[5], c.r[5].w[0] - 11326u);
    set32(c.r[6], c.r[6].w[0] - 11298u);
    set32(c.r[7], c.r[7].w[0] - 21088u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB4C4u); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB4C4u) [[unlikely]] return; }
L_003DB4C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 11015u);
    set32(c.r[5], c.r[5].w[0] - 11326u);
    set32(c.r[6], c.r[6].w[0] - 11077u);
    set32(c.r[7], c.r[7].w[0] - 20736u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB4F0u); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB4F0u) [[unlikely]] return; }
L_003DB4F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 11003u);
    set32(c.r[5], c.r[5].w[0] - 11326u);
    set32(c.r[6], c.r[6].w[0] - 11077u);
    set32(c.r[7], c.r[7].w[0] - 20928u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB51Cu); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB51Cu) [[unlikely]] return; }
L_003DB51C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 10978u);
    set32(c.r[5], c.r[5].w[0] - 11326u);
    set32(c.r[6], c.r[6].w[0] - 11321u);
    set32(c.r[7], c.r[7].w[0] - 21104u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB548u); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB548u) [[unlikely]] return; }
L_003DB548:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 10959u);
    set32(c.r[5], c.r[5].w[0] - 11321u);
    set32(c.r[6], c.r[6].w[0] - 11326u);
    set32(c.r[7], c.r[7].w[0] - 21120u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB574u); set32(c.r[8], c.r[8].w[0] - 11316u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x003DB574u) [[unlikely]] return; }
L_003DB574:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DB580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DB610; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22192u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003DB5F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 27040u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003DB5D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DB5D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DB5D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB5D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 85u, depth + 1u); else { c.pc = 0x003C8BB0u; return; } if (c.pc != 0x003DB5D8u) [[unlikely]] return; }
L_003DB5D8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003DB5FC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25984u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB5F8u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x003DB5F8u) [[unlikely]] return; }
L_003DB5F8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003DB5FC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003DB614; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB610u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003DB610u) [[unlikely]] return; }
L_003DB610:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DB614:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DB630:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 10816u);  c.pc = t; return; }
L_003DB640:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 10784u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB668u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003DB668u) [[unlikely]] return; }
L_003DB668:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB674u); set32(c.r[5], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003DB674u) [[unlikely]] return; }
L_003DB674:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 268u));  goto L_003DB69C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003DB698; } }
    c.f[12] = ld32((c.r[29].w[0] + 268u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB698u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003DB698u) [[unlikely]] return; }
L_003DB698:
    c.f[0] = ld32((c.r[29].w[0] + 268u));
    c.budget -= 1;
L_003DB69C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB6ACu); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003DB6ACu) [[unlikely]] return; }
L_003DB6AC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB6C0u); set32(c.r[6], c.r[6].w[0] - 10766u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003DB6C0u) [[unlikely]] return; }
L_003DB6C0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB6CCu); set32(c.r[5], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003DB6CCu) [[unlikely]] return; }
L_003DB6CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[28].w[0] - 32556u));  goto L_003DB6F4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003DB6F0; } }
    c.f[12] = ld32((c.r[29].w[0] + 264u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB6F0u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003DB6F0u) [[unlikely]] return; }
L_003DB6F0:
    c.f[1] = ld32((c.r[28].w[0] - 32556u));
    c.budget -= 1;
L_003DB6F4:
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB700u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x003DB700u) [[unlikely]] return; }
L_003DB700:
    st32((c.r[17].w[0] + 44u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB710u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003DB710u) [[unlikely]] return; }
L_003DB710:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB724u); set32(c.r[6], c.r[6].w[0] - 10746u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003DB724u) [[unlikely]] return; }
L_003DB724:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB730u); set32(c.r[5], c.r[29].w[0] + 260u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003DB730u) [[unlikely]] return; }
L_003DB730:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 260u));  goto L_003DB758; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003DB754; } }
    c.f[12] = ld32((c.r[29].w[0] + 260u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB754u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003DB754u) [[unlikely]] return; }
L_003DB754:
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    c.budget -= 1;
L_003DB758:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB768u); st32((c.r[17].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003DB768u) [[unlikely]] return; }
L_003DB768:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB77Cu); set32(c.r[6], c.r[6].w[0] - 10727u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003DB77Cu) [[unlikely]] return; }
L_003DB77C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB788u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003DB788u) [[unlikely]] return; }
L_003DB788:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 256u));  goto L_003DB7B0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003DB7AC; } }
    c.f[12] = ld32((c.r[29].w[0] + 256u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB7ACu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003DB7ACu) [[unlikely]] return; }
L_003DB7AC:
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    c.budget -= 1;
L_003DB7B0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB7C0u); st32((c.r[17].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003DB7C0u) [[unlikely]] return; }
L_003DB7C0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB7D4u); set32(c.r[6], c.r[6].w[0] - 10708u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003DB7D4u) [[unlikely]] return; }
L_003DB7D4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB7E0u); set32(c.r[5], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003DB7E0u) [[unlikely]] return; }
L_003DB7E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 252u));  goto L_003DB808; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003DB804; } }
    c.f[12] = ld32((c.r[29].w[0] + 252u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB804u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003DB804u) [[unlikely]] return; }
L_003DB804:
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    c.budget -= 1;
L_003DB808:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB818u); st32((c.r[17].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003DB818u) [[unlikely]] return; }
L_003DB818:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB82Cu); set32(c.r[6], c.r[6].w[0] - 10680u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003DB82Cu) [[unlikely]] return; }
L_003DB82C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB838u); set32(c.r[5], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003DB838u) [[unlikely]] return; }
L_003DB838:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 248u));  goto L_003DB860; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 74u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003DB85C; } }
    c.f[12] = ld32((c.r[29].w[0] + 248u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB85Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003DB85Cu) [[unlikely]] return; }
L_003DB85C:
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    c.budget -= 1;
L_003DB860:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB870u); st32((c.r[17].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003DB870u) [[unlikely]] return; }
L_003DB870:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_003DB890:
    set32(c.r[29], c.r[29].w[0] - 896u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    set32(c.r[30], ld32((c.r[29].w[0] + 724u)));
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00B7(c, 16u, depth); } }
    set32(c.r[5], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));  [[clang::musttail]] return unit_00B7(c, 17u, depth); }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B7(c, 16u, depth); } }
    set32(c.r[4], ld32((c.r[5].w[0] + 132u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[5].w[0] + 424u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[1] = ld32((c.r[4].w[0] + 28u));  if (t) { goto L_003DB938; } }
    c.f[0] = ld32((c.r[28].w[0] - 30152u));
    fpu_div(c, 22u, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DB940; } }
L_003DB938:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[22] = c.r[2].w[0];
    c.budget -= 2;
L_003DB940:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003DB95C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DB95C:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], c.r[20].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB96Cu); st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00B2(c, 89u, depth + 1u); else { c.pc = 0x003C8C20u; return; } if (c.pc != 0x003DB96Cu) [[unlikely]] return; }
L_003DB96C:
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[4] = ld32((c.r[4].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_00B7(c, 16u, depth); } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.f[3] = ld32((c.r[4].w[0] + 96u));
    c.f[1] = ld32((c.r[4].w[0] + 100u));
    set32(c.r[17], ld32((c.r[4].w[0] + 128u)));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    set32(c.r[23], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 320u)));
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[1] = ld32((c.r[23].w[0] + 1424u));
    c.f[0] = ld32((c.r[28].w[0] - 30140u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[4], c.f[0]);
    c.f[21] = fp::min(c.f[2], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 860u);
    c.f[0] = ld32((c.r[23].w[0] + 2292u));
    set32(c.r[3], 0u + 6u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 836u);
    set32(c.r[4], c.r[29].w[0] + 640u);
    set32(c.r[6], c.r[29].w[0] + 856u);
    c.f[20] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 856u), c.r[3].w[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBA00u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B7(c, 70u, depth + 1u); else { c.pc = 0x003DCC70u; return; } if (c.pc != 0x003DBA00u) [[unlikely]] return; }
L_003DBA00:
    set32(c.r[19], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003DBDD4; } }
L_003DBA0C:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);  if (t) { goto L_003DBD9C; } }
L_003DBA18:
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_003DBA60; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 28u)));  goto L_003DBA48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_003DBD9C; } }
L_003DBA48:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 424u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DBD98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 672u), c.r[2].w[0]);  if (t) { goto L_003DBA64; } }
L_003DBA60:
    st32((c.r[29].w[0] + 672u), c.r[2].w[0]);
    c.budget -= 1;
L_003DBA64:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[16].w[0] + 24u);  if (t) { goto L_003DBD98; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 24u);  goto L_003DBA94; }
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DBD98; } }
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.budget -= 1;
L_003DBA94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBA9Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00D8(c, 191u, depth + 1u); else { c.pc = 0x00461FA0u; return; } if (c.pc != 0x003DBA9Cu) [[unlikely]] return; }
L_003DBA9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DBD98; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.f[2] = ld32((c.r[16].w[0] + 180u));
    c.f[1] = ld32((c.r[16].w[0] + 184u));
    c.f[0] = ld32((c.r[16].w[0] + 188u));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    st32((c.r[29].w[0] + 676u), c.f[2]);
    st32((c.r[29].w[0] + 680u), c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 684u), c.f[0]);  if (t) { goto L_003DBD98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBAD0u); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_00D8(c, 196u, depth + 1u); else { c.pc = 0x00462070u; return; } if (c.pc != 0x003DBAD0u) [[unlikely]] return; }
L_003DBAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBAD8u); set32(c.r[4], ld32((c.r[20].w[0] + 28u)));  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x003DBAD8u) [[unlikely]] return; }
L_003DBAD8:
    c.f[8] = ld32((c.r[29].w[0] + 676u));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[7] = ld32((c.r[29].w[0] + 680u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[6] = ld32((c.r[29].w[0] + 684u));
    c.f[2] = fp::sub(c.f[8], c.f[2]);
    c.f[1] = fp::sub(c.f[7], c.f[1]);
    c.f[0] = fp::sub(c.f[6], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[24] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[24] = fp::sqrt(c.f[24]);
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DBD98; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 672u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[2] = ld32((c.r[29].w[0] + 784u));  goto L_003DBB38; }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[23] = ld32((c.r[2].w[0] + 196u));  if (t) { goto L_003DBB64; } }
L_003DBB38:
    c.f[1] = ld32((c.r[29].w[0] + 788u));
    c.f[0] = ld32((c.r[29].w[0] + 792u));
    c.f[2] = fp::sub(c.f[8], c.f[2]);
    c.f[5] = ld32((c.r[29].w[0] + 736u));
    c.f[1] = fp::sub(c.f[7], c.f[1]);
    c.f[4] = ld32((c.r[29].w[0] + 740u));
    c.f[0] = fp::sub(c.f[6], c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 744u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[23] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.budget -= 11;
L_003DBB64:
    c.f[2] = ld32((c.r[17].w[0] + 192u));
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    c.f[1] = ld32((c.r[17].w[0] + 124u));
    c.f[4] = fp::sub(c.f[23], c.f[2]);
    c.f[3] = fp::mul(c.f[4], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.f[2] = ld32((c.r[17].w[0] + 116u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[24], c.f[1]));
    c.facc = fp::mul(c.f[24], c.f[0]);
    c.f[0] = fp::mul(c.f[24], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[17].w[0] + 120u));
    st32((c.r[29].w[0] + 820u), c.f[1]);
    st32((c.r[29].w[0] + 824u), c.f[0]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[4], c.f[2]));
    st32((c.r[29].w[0] + 816u), c.f[2]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[3] = fp::sqrt(c.f[3]);
    c.f[0] = ld32((c.r[28].w[0] - 31844u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 27;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DBBFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 3u, c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 816u));
    c.f[1] = ld32((c.r[29].w[0] + 820u));
    c.f[0] = ld32((c.r[29].w[0] + 824u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[3]);  if (t) { goto L_003DBC0C; } }
L_003DBBFC:
    c.f[2] = 0u;
    c.f[1] = c.f[2];
    c.f[0] = c.f[2];
    c.budget -= 4;
L_003DBC0C:
    set32(c.r[2], ld32((c.r[29].w[0] + 660u)));
    st32((c.r[29].w[0] + 700u), c.f[2]);
    c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[29].w[0] + 688u), 0u);
    st32((c.r[29].w[0] + 704u), c.f[1]);
    st32((c.r[29].w[0] + 692u), 0u);
    st32((c.r[29].w[0] + 708u), c.f[0]);
    st32((c.r[29].w[0] + 696u), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 892u), c.r[2].w[0]);  if (t) { goto L_003DBD00; } }
    goto L_003DBC34;
L_003DBC30:
    st32((c.r[29].w[0] + 892u), c.r[2].w[0]);
    c.budget -= 1;
L_003DBC34:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[3].w[0] + 16u);  if (t) { goto L_003DBCF4; } }
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[24]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 892u);  goto L_003DBCF8; }
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    c.f[1] = ld32((c.r[17].w[0] + 192u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[23]);
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.r[22].d[0] = 0ull + 0ull;  goto L_003DBD18; }
    set32(c.r[2], ld32((c.r[29].w[0] + 672u)));
    c.f[0] = ld32((c.r[29].w[0] + 676u));
    c.f[1] = ld32((c.r[29].w[0] + 680u));
    c.f[2] = ld32((c.r[29].w[0] + 688u));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 684u));
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 692u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 696u));
    st32((c.r[5].w[0] + 16u), c.f[2]);
    st32((c.r[5].w[0] + 20u), c.f[1]);
    st32((c.r[5].w[0] + 24u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 700u));
    c.f[1] = ld32((c.r[29].w[0] + 704u));
    c.f[0] = ld32((c.r[29].w[0] + 708u));
    st32((c.r[5].w[0] + 28u), c.f[2]);
    st32((c.r[5].w[0] + 32u), c.f[1]);
    st32((c.r[5].w[0] + 36u), c.f[0]);
    st32((c.r[5].w[0] + 40u), c.f[24]);
    st32((c.r[5].w[0] + 44u), c.f[23]);
    st32((c.r[5].w[0] + 48u), c.r[16].w[0]);
    st32((c.r[5].w[0] + 52u), c.r[30].w[0]);
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 27;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DBD18; } }
L_003DBCF4:
    set32(c.r[4], c.r[29].w[0] + 892u);
    c.budget -= 1;
L_003DBCF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBD00u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x003DBD00u) [[unlikely]] return; }
L_003DBD00:
    set32(c.r[2], c.r[29].w[0] + 652u);
    set32(c.r[3], ld32((c.r[29].w[0] + 892u)));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[3].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DBC34u | kUnwind; return; } goto L_003DBC34; }
L_003DBD18:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_003DBD98; } }
    c.f[0] = ld32((c.r[29].w[0] + 680u));
    set32(c.r[2], ld32((c.r[29].w[0] + 672u)));
    c.f[1] = ld32((c.r[29].w[0] + 676u));
    set32(c.r[4], c.r[29].w[0] + 868u);
    c.f[2] = ld32((c.r[29].w[0] + 684u));
    set32(c.r[5], c.r[29].w[0] + 640u);
    st32((c.r[29].w[0] + 588u), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 576u);
    c.f[0] = ld32((c.r[29].w[0] + 692u));
    st32((c.r[29].w[0] + 516u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 584u), c.f[1]);
    st32((c.r[29].w[0] + 580u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 688u));
    st32((c.r[29].w[0] + 628u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 600u), c.f[0]);
    st32((c.r[29].w[0] + 632u), c.r[30].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 704u));
    st32((c.r[29].w[0] + 592u), c.f[2]);
    st32((c.r[29].w[0] + 596u), c.f[1]);
    st32((c.r[29].w[0] + 612u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 696u));
    c.f[1] = ld32((c.r[29].w[0] + 700u));
    c.f[0] = ld32((c.r[29].w[0] + 708u));
    st32((c.r[29].w[0] + 604u), c.f[2]);
    st32((c.r[29].w[0] + 608u), c.f[1]);
    st32((c.r[29].w[0] + 616u), c.f[0]);
    st32((c.r[29].w[0] + 624u), c.f[23]);
    st32((c.r[29].w[0] + 576u), c.f[24]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBD98u); st32((c.r[29].w[0] + 620u), c.f[24]);  if (depth < kMaxDepth) unit_00B7(c, 67u, depth + 1u); else { c.pc = 0x003DCBF0u; return; } if (c.pc != 0x003DBD98u) [[unlikely]] return; }
L_003DBD98:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_003DBD9C:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 408u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DBA18u | kUnwind; return; } goto L_003DBA18; }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_003DBDD4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBDCCu); set32(c.r[4], c.r[2].w[0] + 104u);  if (depth < kMaxDepth) unit_00FE(c, 356u, depth + 1u); else { c.pc = 0x004FAC40u; return; } if (c.pc != 0x003DBDCCu) [[unlikely]] return; }
L_003DBDCC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_003DBDD4:
    c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 28u)));  goto L_003DBDEC; }
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 404u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DBA0Cu | kUnwind; return; } goto L_003DBA0C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 1;
L_003DBDEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBDF4u);  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x003DBDF4u) [[unlikely]] return; }
L_003DBDF4:
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    c.f[4] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = ld32((c.r[17].w[0] + 88u));
    c.f[5] = fp::sub(c.f[2], c.f[0]);
    c.f[4] = fp::sub(c.f[4], c.f[3]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 92u));
    c.f[2] = ld32((c.r[17].w[0] + 120u));
    c.f[3] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 124u));
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[29].w[0] + 852u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 852u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 832u), c.f[0]);
    st32((c.r[29].w[0] + 848u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 848u));
    set32(c.r[16], ld32((c.r[29].w[0] + 832u)));
    st32((c.r[29].w[0] + 828u), c.f[0]);
    set32(c.r[21], ld32((c.r[29].w[0] + 828u)));
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 672u), 0u);  if (t) { [[clang::musttail]] return unit_00B7(c, 3u, depth); } }
L_003DBE6C:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[19].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] << 32;  [[clang::musttail]] return unit_00B7(c, 2u, depth); }
    set32(c.r[18], ld32((c.r[19].w[0] + 128u)));
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = 0u;
    c.f[3] = ld32((c.r[20].w[0] + 40u));
    c.f[2] = ld32((c.r[18].w[0] + 80u));
    c.f[26] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[26]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003DBEA8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DBEA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DBEC0; } }
    fpu_compare(c, fp::key(c.f[26]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003DBEC0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DBEC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B7(c, 1u, depth); } }
    c.f[2] = ld32((c.r[17].w[0] + 112u));
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.f[8] = ld32((c.r[17].w[0] + 192u));
    c.facc = fp::mul(c.f[26], c.f[2]);
    c.f[2] = fp::mul(c.f[26], c.f[0]);
    c.f[6] = ld32((c.r[17].w[0] + 124u));
    c.f[4] = ld32((c.r[18].w[0] + 192u));
    c.f[1] = ld32((c.r[17].w[0] + 116u));
    c.f[0] = fp::mul(c.f[8], c.f[6]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[4], c.f[6]));
    c.facc = fp::mul(c.f[26], c.f[1]);
    c.f[1] = fp::sub(c.f[3], c.f[0]);
    c.f[5] = ld32((c.r[17].w[0] + 120u));
    c.f[7] = ld32((c.r[17].w[0] + 128u));
    st32((c.r[29].w[0] + 804u), c.f[1]);
    c.f[0] = fp::mul(c.f[4], c.f[5]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[4], c.f[7]));
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::mul(c.f[8], c.f[7]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[8], c.f[5]));
    st32((c.r[29].w[0] + 800u), c.f[2]);
    st32((c.r[29].w[0] + 808u), c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[3] = fp::sqrt(c.f[3]);
    c.f[0] = ld32((c.r[28].w[0] - 31844u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 32;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DBF74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 3u, c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 800u));
    c.f[1] = ld32((c.r[29].w[0] + 804u));
    c.f[0] = ld32((c.r[29].w[0] + 808u));
    c.f[23] = fp::mul(c.f[2], c.f[3]);
    c.f[24] = fp::mul(c.f[1], c.f[3]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[25] = fp::mul(c.f[0], c.f[3]);  if (t) { goto L_003DBF84; } }
L_003DBF74:
    c.f[23] = 0u;
    c.f[24] = c.f[23];
    c.f[25] = c.f[23];
    c.budget -= 4;
L_003DBF84:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBF90u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 310u, depth + 1u); else { c.pc = 0x004BAB00u; return; } if (c.pc != 0x003DBF90u) [[unlikely]] return; }
L_003DBF90:
    set32(c.r[2], ld32((c.r[29].w[0] + 672u)));
    c.f[6] = ld32((c.r[18].w[0] + 192u));
    c.f[5] = ld32((c.r[29].w[0] + 496u));
    set32(c.r[4], c.r[29].w[0] + 864u);
    c.f[2] = ld32((c.r[19].w[0] + 108u));
    set32(c.r[5], c.r[29].w[0] + 640u);
    c.f[4] = ld32((c.r[29].w[0] + 500u));
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[19].w[0] + 112u));
    set32(c.r[6], c.r[29].w[0] + 384u);
    c.f[0] = ld32((c.r[19].w[0] + 116u));
    c.f[3] = ld32((c.r[29].w[0] + 504u));
    st32((c.r[29].w[0] + 388u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 392u), c.f[5]);
    st32((c.r[29].w[0] + 396u), c.f[4]);
    st32((c.r[29].w[0] + 436u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 400u), c.f[3]);
    st32((c.r[29].w[0] + 440u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 404u), c.f[2]);
    st32((c.r[29].w[0] + 408u), c.f[1]);
    st32((c.r[29].w[0] + 412u), c.f[0]);
    st32((c.r[29].w[0] + 432u), c.f[6]);
    st32((c.r[29].w[0] + 416u), c.f[23]);
    st32((c.r[29].w[0] + 420u), c.f[24]);
    st32((c.r[29].w[0] + 424u), c.f[25]);
    st32((c.r[29].w[0] + 384u), c.f[26]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC000u); st32((c.r[29].w[0] + 428u), c.f[26]);  if (depth < kMaxDepth) unit_00B7(c, 67u, depth + 1u); else { c.pc = 0x003DCBF0u; return; } if (c.pc != 0x003DC000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00B7(c, 1u, depth);
}

}
