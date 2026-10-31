#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00E0[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0,
    0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0,
    0, 0, 0, 0, 35, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0,
    0, 0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0,
    116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0,
    0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0,
    171, 0, 0, 0, 172, 0, 173, 0, 174, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0,
    213, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 225, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 230, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238,
    0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243,
    0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0,
    0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 0,
    0, 275, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0,
    0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0,
    0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0,
    0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321,
    0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0,
    0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336,
    0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0,
    0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 345, 0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0,
    357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0,
    0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0,
    367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0,
    0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378,
    0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0,
    0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 395,
    0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401,
    0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 413, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0,
    0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0,
    0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    433, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 440,
    0, 0, 441, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449,
    0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0,
    454, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0,
    460, 0, 461, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0,
    0, 473, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0,
    0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0,
    479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 483, 0,
    0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 0,
    0, 0, 491, 0, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0,
    0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502,
    0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 0,
    511, 0, 512, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0,
    518, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0,
};

void unit_00E0(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00480000;
    case 2u: goto L_0048000C;
    case 3u: goto L_00480020;
    case 4u: goto L_00480050;
    case 5u: goto L_00480064;
    case 6u: goto L_00480090;
    case 7u: goto L_004800A0;
    case 8u: goto L_004800D8;
    case 9u: goto L_004800E4;
    case 10u: goto L_00480110;
    case 11u: goto L_0048016C;
    case 12u: goto L_00480184;
    case 13u: goto L_004801A0;
    case 14u: goto L_004801B4;
    case 15u: goto L_004801CC;
    case 16u: goto L_004801FC;
    case 17u: goto L_00480288;
    case 18u: goto L_004802E8;
    case 19u: goto L_00480300;
    case 20u: goto L_0048031C;
    case 21u: goto L_00480330;
    case 22u: goto L_00480348;
    case 23u: goto L_00480378;
    case 24u: goto L_00480388;
    case 25u: goto L_00480390;
    case 26u: goto L_004803C8;
    case 27u: goto L_00480410;
    case 28u: goto L_00480428;
    case 29u: goto L_00480448;
    case 30u: goto L_0048045C;
    case 31u: goto L_00480478;
    case 32u: goto L_004804A8;
    case 33u: goto L_004804E0;
    case 34u: goto L_004804EC;
    case 35u: goto L_00480510;
    case 36u: goto L_00480514;
    case 37u: goto L_0048057C;
    case 38u: goto L_004805B4;
    case 39u: goto L_004805F0;
    case 40u: goto L_00480628;
    case 41u: goto L_00480658;
    case 42u: goto L_00480668;
    case 43u: goto L_00480670;
    case 44u: goto L_00480690;
    case 45u: goto L_004806E0;
    case 46u: goto L_00480700;
    case 47u: goto L_00480748;
    case 48u: goto L_0048079C;
    case 49u: goto L_004807B4;
    case 50u: goto L_00480800;
    case 51u: goto L_00480850;
    case 52u: goto L_00480890;
    case 53u: goto L_004808A8;
    case 54u: goto L_004808D8;
    case 55u: goto L_004808E0;
    case 56u: goto L_004808F4;
    case 57u: goto L_00480920;
    case 58u: goto L_0048094C;
    case 59u: goto L_00480968;
    case 60u: goto L_00480994;
    case 61u: goto L_004809C0;
    case 62u: goto L_004809D8;
    case 63u: goto L_004809F0;
    case 64u: goto L_00480A04;
    case 65u: goto L_00480A14;
    case 66u: goto L_00480A24;
    case 67u: goto L_00480A50;
    case 68u: goto L_00480A70;
    case 69u: goto L_00480A9C;
    case 70u: goto L_00480AAC;
    case 71u: goto L_00480AC4;
    case 72u: goto L_00480AD4;
    case 73u: goto L_00480AF8;
    case 74u: goto L_00480B20;
    case 75u: goto L_00480B40;
    case 76u: goto L_00480B60;
    case 77u: goto L_00480BA8;
    case 78u: goto L_00480BB4;
    case 79u: goto L_00480BC4;
    case 80u: goto L_00480BD4;
    case 81u: goto L_00480BDC;
    case 82u: goto L_00480BE4;
    case 83u: goto L_00480BFC;
    case 84u: goto L_00480C5C;
    case 85u: goto L_00480C78;
    case 86u: goto L_00480C88;
    case 87u: goto L_00480CD4;
    case 88u: goto L_00480CE0;
    case 89u: goto L_00480D30;
    case 90u: goto L_00480D44;
    case 91u: goto L_00480D90;
    case 92u: goto L_00480DA4;
    case 93u: goto L_00480E58;
    case 94u: goto L_00480E70;
    case 95u: goto L_00480E94;
    case 96u: goto L_00480EB0;
    case 97u: goto L_00480ED4;
    case 98u: goto L_00480EEC;
    case 99u: goto L_00480F10;
    case 100u: goto L_00480F20;
    case 101u: goto L_00480F44;
    case 102u: goto L_00480F50;
    case 103u: goto L_00480F60;
    case 104u: goto L_00480F70;
    case 105u: goto L_00480F80;
    case 106u: goto L_00480FE0;
    case 107u: goto L_00480FF8;
    case 108u: goto L_00481010;
    case 109u: goto L_00481018;
    case 110u: goto L_00481024;
    case 111u: goto L_00481034;
    case 112u: goto L_00481040;
    case 113u: goto L_00481050;
    case 114u: goto L_00481060;
    case 115u: goto L_00481070;
    case 116u: goto L_00481080;
    case 117u: goto L_00481090;
    case 118u: goto L_004810A0;
    case 119u: goto L_004810B0;
    case 120u: goto L_004810C0;
    case 121u: goto L_004810D0;
    case 122u: goto L_00481148;
    case 123u: goto L_00481160;
    case 124u: goto L_00481180;
    case 125u: goto L_00481190;
    case 126u: goto L_004811C4;
    case 127u: goto L_004811DC;
    case 128u: goto L_0048122C;
    case 129u: goto L_00481250;
    case 130u: goto L_00481278;
    case 131u: goto L_00481280;
    case 132u: goto L_004812A8;
    case 133u: goto L_004812C0;
    case 134u: goto L_004812F0;
    case 135u: goto L_00481320;
    case 136u: goto L_00481358;
    case 137u: goto L_00481360;
    case 138u: goto L_00481384;
    case 139u: goto L_00481390;
    case 140u: goto L_004813B4;
    case 141u: goto L_004813C0;
    case 142u: goto L_0048140C;
    case 143u: goto L_0048146C;
    case 144u: goto L_00481484;
    case 145u: goto L_0048149C;
    case 146u: goto L_004814B0;
    case 147u: goto L_004814C8;
    case 148u: goto L_004814F8;
    case 149u: goto L_00481514;
    case 150u: goto L_00481544;
    case 151u: goto L_00481588;
    case 152u: goto L_004815A0;
    case 153u: goto L_004815B8;
    case 154u: goto L_004815CC;
    case 155u: goto L_004815E4;
    case 156u: goto L_00481614;
    case 157u: goto L_00481660;
    case 158u: goto L_004816C0;
    case 159u: goto L_004816D8;
    case 160u: goto L_004816F0;
    case 161u: goto L_00481714;
    case 162u: goto L_00481730;
    case 163u: goto L_00481754;
    case 164u: goto L_0048176C;
    case 165u: goto L_00481790;
    case 166u: goto L_004817A0;
    case 167u: goto L_004817C4;
    case 168u: goto L_004817D0;
    case 169u: goto L_004817E0;
    case 170u: goto L_004817F0;
    case 171u: goto L_00481800;
    case 172u: goto L_00481810;
    case 173u: goto L_00481818;
    case 174u: goto L_00481820;
    case 175u: goto L_00481824;
    case 176u: goto L_00481830;
    case 177u: goto L_00481840;
    case 178u: goto L_00481850;
    case 179u: goto L_00481860;
    case 180u: goto L_00481870;
    case 181u: goto L_00481880;
    case 182u: goto L_004818D4;
    case 183u: goto L_00481910;
    case 184u: goto L_00481930;
    case 185u: goto L_00481940;
    case 186u: goto L_00481974;
    case 187u: goto L_00481980;
    case 188u: goto L_0048199C;
    case 189u: goto L_004819AC;
    case 190u: goto L_004819BC;
    case 191u: goto L_004819E4;
    case 192u: goto L_004819F0;
    case 193u: goto L_00481A10;
    case 194u: goto L_00481A18;
    case 195u: goto L_00481AA4;
    case 196u: goto L_00481ABC;
    case 197u: goto L_00481AD0;
    case 198u: goto L_00481AF0;
    case 199u: goto L_00481B08;
    case 200u: goto L_00481B24;
    case 201u: goto L_00481B3C;
    case 202u: goto L_00481B5C;
    case 203u: goto L_00481BC0;
    case 204u: goto L_00481BD0;
    case 205u: goto L_00481BE0;
    case 206u: goto L_00481BF0;
    case 207u: goto L_00481C00;
    case 208u: goto L_00481C24;
    case 209u: goto L_00481C3C;
    case 210u: goto L_00481C50;
    case 211u: goto L_00481C68;
    case 212u: goto L_00481C74;
    case 213u: goto L_00481C80;
    case 214u: goto L_00481C8C;
    case 215u: goto L_00481C98;
    case 216u: goto L_00481CC0;
    case 217u: goto L_00481CD0;
    case 218u: goto L_00481D24;
    case 219u: goto L_00481D60;
    case 220u: goto L_00481D80;
    case 221u: goto L_00481D90;
    case 222u: goto L_00481DC8;
    case 223u: goto L_00481DD4;
    case 224u: goto L_00481DF0;
    case 225u: goto L_00481E04;
    case 226u: goto L_00481E18;
    case 227u: goto L_00481E24;
    case 228u: goto L_00481E64;
    case 229u: goto L_00481E80;
    case 230u: goto L_00481E8C;
    case 231u: goto L_00481E94;
    case 232u: goto L_00481EA0;
    case 233u: goto L_00481EE8;
    case 234u: goto L_00481F0C;
    case 235u: goto L_00481F2C;
    case 236u: goto L_00481F44;
    case 237u: goto L_00481F64;
    case 238u: goto L_00481F7C;
    case 239u: goto L_00481F98;
    case 240u: goto L_00481FB0;
    case 241u: goto L_00481FD0;
    case 242u: goto L_00481FF0;
    case 243u: goto L_00481FFC;
    case 244u: goto L_00482008;
    case 245u: goto L_00482014;
    case 246u: goto L_00482020;
    case 247u: goto L_0048202C;
    case 248u: goto L_0048206C;
    case 249u: goto L_00482080;
    case 250u: goto L_00482094;
    case 251u: goto L_004820A8;
    case 252u: goto L_004820B8;
    case 253u: goto L_004820C8;
    case 254u: goto L_004820EC;
    case 255u: goto L_00482104;
    case 256u: goto L_00482118;
    case 257u: goto L_00482130;
    case 258u: goto L_00482160;
    case 259u: goto L_00482190;
    case 260u: goto L_00482198;
    case 261u: goto L_004821B0;
    case 262u: goto L_004821B8;
    case 263u: goto L_00482208;
    case 264u: goto L_00482230;
    case 265u: goto L_00482274;
    case 266u: goto L_004822B0;
    case 267u: goto L_004822D0;
    case 268u: goto L_004822E0;
    case 269u: goto L_00482314;
    case 270u: goto L_00482320;
    case 271u: goto L_00482330;
    case 272u: goto L_00482358;
    case 273u: goto L_00482364;
    case 274u: goto L_00482370;
    case 275u: goto L_00482384;
    case 276u: goto L_00482398;
    case 277u: goto L_004823A4;
    case 278u: goto L_004823B4;
    case 279u: goto L_004823DC;
    case 280u: goto L_004823E8;
    case 281u: goto L_004823F4;
    case 282u: goto L_00482404;
    case 283u: goto L_00482434;
    case 284u: goto L_0048246C;
    case 285u: goto L_00482478;
    case 286u: goto L_00482484;
    case 287u: goto L_004824A0;
    case 288u: goto L_004824B4;
    case 289u: goto L_004824C4;
    case 290u: goto L_004824E8;
    case 291u: goto L_00482500;
    case 292u: goto L_00482518;
    case 293u: goto L_0048252C;
    case 294u: goto L_0048254C;
    case 295u: goto L_00482568;
    case 296u: goto L_00482570;
    case 297u: goto L_00482584;
    case 298u: goto L_004825A0;
    case 299u: goto L_004825A8;
    case 300u: goto L_004825B0;
    case 301u: goto L_004825D0;
    case 302u: goto L_004825E8;
    case 303u: goto L_004825F4;
    case 304u: goto L_00482600;
    case 305u: goto L_00482620;
    case 306u: goto L_00482680;
    case 307u: goto L_004826AC;
    case 308u: goto L_004826DC;
    case 309u: goto L_004826E8;
    case 310u: goto L_00482700;
    case 311u: goto L_00482720;
    case 312u: goto L_00482744;
    case 313u: goto L_00482750;
    case 314u: goto L_004827A4;
    case 315u: goto L_004827E0;
    case 316u: goto L_00482800;
    case 317u: goto L_00482810;
    case 318u: goto L_00482818;
    case 319u: goto L_00482854;
    case 320u: goto L_00482860;
    case 321u: goto L_0048287C;
    case 322u: goto L_00482884;
    case 323u: goto L_00482898;
    case 324u: goto L_004828E0;
    case 325u: goto L_004828EC;
    case 326u: goto L_0048291C;
    case 327u: goto L_00482944;
    case 328u: goto L_00482968;
    case 329u: goto L_00482988;
    case 330u: goto L_004829C4;
    case 331u: goto L_004829EC;
    case 332u: goto L_00482A00;
    case 333u: goto L_00482A20;
    case 334u: goto L_00482A40;
    case 335u: goto L_00482A6C;
    case 336u: goto L_00482A7C;
    case 337u: goto L_00482A9C;
    case 338u: goto L_00482ABC;
    case 339u: goto L_00482AD8;
    case 340u: goto L_00482AF4;
    case 341u: goto L_00482B0C;
    case 342u: goto L_00482B2C;
    case 343u: goto L_00482B44;
    case 344u: goto L_00482B64;
    case 345u: goto L_00482B8C;
    case 346u: goto L_00482B98;
    case 347u: goto L_00482BA4;
    case 348u: goto L_00482BB0;
    case 349u: goto L_00482BBC;
    case 350u: goto L_00482BFC;
    case 351u: goto L_00482C10;
    case 352u: goto L_00482C24;
    case 353u: goto L_00482C38;
    case 354u: goto L_00482C4C;
    case 355u: goto L_00482C60;
    case 356u: goto L_00482C70;
    case 357u: goto L_00482C80;
    case 358u: goto L_00482CA4;
    case 359u: goto L_00482CC8;
    case 360u: goto L_00482CD8;
    case 361u: goto L_00482CEC;
    case 362u: goto L_00482D04;
    case 363u: goto L_00482D40;
    case 364u: goto L_00482D5C;
    case 365u: goto L_00482D78;
    case 366u: goto L_00482DE8;
    case 367u: goto L_00482E00;
    case 368u: goto L_00482E44;
    case 369u: goto L_00482E80;
    case 370u: goto L_00482EA0;
    case 371u: goto L_00482EB0;
    case 372u: goto L_00482EEC;
    case 373u: goto L_00482F04;
    case 374u: goto L_00482F10;
    case 375u: goto L_00482F2C;
    case 376u: goto L_00482F4C;
    case 377u: goto L_00482F68;
    case 378u: goto L_00482F7C;
    case 379u: goto L_00482F98;
    case 380u: goto L_00482FB8;
    case 381u: goto L_00482FCC;
    case 382u: goto L_00482FD4;
    case 383u: goto L_00482FF0;
    case 384u: goto L_00483014;
    case 385u: goto L_0048302C;
    case 386u: goto L_00483050;
    case 387u: goto L_00483060;
    case 388u: goto L_00483070;
    case 389u: goto L_00483094;
    case 390u: goto L_004830AC;
    case 391u: goto L_004830C0;
    case 392u: goto L_004830D8;
    case 393u: goto L_004830E4;
    case 394u: goto L_004830F0;
    case 395u: goto L_004830FC;
    case 396u: goto L_00483108;
    case 397u: goto L_0048311C;
    case 398u: goto L_00483134;
    case 399u: goto L_00483140;
    case 400u: goto L_0048315C;
    case 401u: goto L_0048317C;
    case 402u: goto L_00483198;
    case 403u: goto L_004831AC;
    case 404u: goto L_00483208;
    case 405u: goto L_0048322C;
    case 406u: goto L_0048324C;
    case 407u: goto L_00483280;
    case 408u: goto L_0048329C;
    case 409u: goto L_004832AC;
    case 410u: goto L_004832B8;
    case 411u: goto L_004832D8;
    case 412u: goto L_004832E0;
    case 413u: goto L_004832F8;
    case 414u: goto L_00483334;
    case 415u: goto L_00483358;
    case 416u: goto L_00483378;
    case 417u: goto L_0048338C;
    case 418u: goto L_004833AC;
    case 419u: goto L_004833BC;
    case 420u: goto L_004833E0;
    case 421u: goto L_004833F8;
    case 422u: goto L_0048340C;
    case 423u: goto L_00483424;
    case 424u: goto L_00483430;
    case 425u: goto L_0048343C;
    case 426u: goto L_00483448;
    case 427u: goto L_00483454;
    case 428u: goto L_00483480;
    case 429u: goto L_004834B0;
    case 430u: goto L_004834BC;
    case 431u: goto L_004834C8;
    case 432u: goto L_004834D8;
    case 433u: goto L_00483500;
    case 434u: goto L_0048350C;
    case 435u: goto L_00483518;
    case 436u: goto L_0048352C;
    case 437u: goto L_00483538;
    case 438u: goto L_00483548;
    case 439u: goto L_00483570;
    case 440u: goto L_0048357C;
    case 441u: goto L_00483588;
    case 442u: goto L_00483594;
    case 443u: goto L_004835A4;
    case 444u: goto L_004835D4;
    case 445u: goto L_0048360C;
    case 446u: goto L_00483618;
    case 447u: goto L_00483624;
    case 448u: goto L_00483640;
    case 449u: goto L_0048367C;
    case 450u: goto L_00483690;
    case 451u: goto L_004836B8;
    case 452u: goto L_004836D4;
    case 453u: goto L_004836EC;
    case 454u: goto L_00483700;
    case 455u: goto L_00483724;
    case 456u: goto L_00483740;
    case 457u: goto L_00483748;
    case 458u: goto L_0048375C;
    case 459u: goto L_00483778;
    case 460u: goto L_00483780;
    case 461u: goto L_00483788;
    case 462u: goto L_0048379C;
    case 463u: goto L_004837A8;
    case 464u: goto L_004837B4;
    case 465u: goto L_004837C0;
    case 466u: goto L_004837E0;
    case 467u: goto L_00483840;
    case 468u: goto L_0048386C;
    case 469u: goto L_0048389C;
    case 470u: goto L_004838A8;
    case 471u: goto L_004838C0;
    case 472u: goto L_004838E0;
    case 473u: goto L_00483904;
    case 474u: goto L_00483910;
    case 475u: goto L_00483978;
    case 476u: goto L_00483990;
    case 477u: goto L_004839B0;
    case 478u: goto L_004839F0;
    case 479u: goto L_00483A00;
    case 480u: goto L_00483A3C;
    case 481u: goto L_00483A50;
    case 482u: goto L_00483A6C;
    case 483u: goto L_00483A78;
    case 484u: goto L_00483A90;
    case 485u: goto L_00483AB4;
    case 486u: goto L_00483ACC;
    case 487u: goto L_00483B10;
    case 488u: goto L_00483B28;
    case 489u: goto L_00483B58;
    case 490u: goto L_00483B68;
    case 491u: goto L_00483B88;
    case 492u: goto L_00483BA4;
    case 493u: goto L_00483BB0;
    case 494u: goto L_00483BF8;
    case 495u: goto L_00483C1C;
    case 496u: goto L_00483C50;
    case 497u: goto L_00483C9C;
    case 498u: goto L_00483CB0;
    case 499u: goto L_00483CC8;
    case 500u: goto L_00483D14;
    case 501u: goto L_00483D30;
    case 502u: goto L_00483D7C;
    case 503u: goto L_00483D94;
    case 504u: goto L_00483DA0;
    case 505u: goto L_00483DD0;
    case 506u: goto L_00483DEC;
    case 507u: goto L_00483E18;
    case 508u: goto L_00483E40;
    case 509u: goto L_00483E60;
    case 510u: goto L_00483E6C;
    case 511u: goto L_00483E80;
    case 512u: goto L_00483E88;
    case 513u: goto L_00483E90;
    case 514u: goto L_00483EA0;
    case 515u: goto L_00483ED4;
    case 516u: goto L_00483EE8;
    case 517u: goto L_00483EF8;
    case 518u: goto L_00483F00;
    case 519u: goto L_00483F0C;
    case 520u: goto L_00483F20;
    case 521u: goto L_00483F40;
    case 522u: goto L_00483F70;
    case 523u: goto L_00483F98;
    case 524u: goto L_00483FA4;
    case 525u: goto L_00483FF8;
    default: bad_entry(c, 0x00480000u); return;
    }
L_00480000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[20].w[0])));  if (t) { goto L_00480040; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 396u)));
    c.budget -= 1;
L_0048000C:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0048003C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480020u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 186u, depth + 1u); else { c.pc = 0x0018AB50u; return; } if (c.pc != 0x00480020u) [[unlikely]] return; }
L_00480020:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 396u)));  goto L_00480038; }
    set32(c.r[2], ld32((c.r[20].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);  if (t) { goto L_0048003C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 396u)));
    c.budget -= 1;
L_00480038:
    set32(c.r[16], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_0048003C:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_00480040:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00480050u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00480050u) [[unlikely]] return; }
L_00480050:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480064u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 46u, depth + 1u); else { c.pc = 0x00480700u; return; } if (c.pc != 0x00480064u) [[unlikely]] return; }
L_00480064:
    c.f[2] = ld32((c.r[29].w[0] + 320u));
    set32(c.r[5], ld32((c.r[28].w[0] - 29856u)));
    c.f[1] = ld32((c.r[29].w[0] + 324u));
    c.f[0] = ld32((c.r[29].w[0] + 328u));
    st32((c.r[29].w[0] + 336u), c.f[2]);
    st32((c.r[29].w[0] + 340u), c.f[1]);
    st32((c.r[29].w[0] + 344u), c.f[0]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00480090u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00480090u) [[unlikely]] return; }
L_00480090:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_00480514; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004800A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 273u, depth + 1u); else { c.pc = 0x0048A4A0u; return; } if (c.pc != 0x004800A0u) [[unlikely]] return; }
L_004800A0:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 412u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[22].w[0] - c.r[19].w[0]);  goto L_00480208; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004800C0; } }
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 1;
L_004800C0:
    set32(c.r[16], c.r[22].w[0] - c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_004800D0; } }
    set32(c.r[16], 0u - c.r[16].w[0]);
    c.budget -= 1;
L_004800D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004800D8u);  if (depth < kMaxDepth) unit_00E0(c, 108u, depth + 1u); else { c.pc = 0x00481010u; return; } if (c.pc != 0x004800D8u) [[unlikely]] return; }
L_004800D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004800E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 135u, depth + 1u); else { c.pc = 0x00481320u; return; } if (c.pc != 0x004800E4u) [[unlikely]] return; }
L_004800E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 292u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 312u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 308u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 314u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00480118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480110u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00480110u) [[unlikely]] return; }
L_00480110:
    set32(c.r[2], c.r[29].w[0] + 292u);
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 2;
L_00480118:
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    set32(c.r[5], c.r[29].w[0] + 292u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 124u)));
    set32(c.r[21], ld32((c.r[18].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 314u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[21].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    c.budget -= 18;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[18], ld32((c.r[29].w[0] + 292u)));  goto L_00480194; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048016Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048016Cu) [[unlikely]] return; }
L_0048016C:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_00480188; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480184u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00480184u) [[unlikely]] return; }
L_00480184:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00480188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004801B8; } }
    set32(c.r[18], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 1;
L_00480194:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004801A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004801A0u) [[unlikely]] return; }
L_004801A0:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 308u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004801B4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004801B4u) [[unlikely]] return; }
L_004801B4:
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_004801B8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004801CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004801CCu) [[unlikely]] return; }
L_004801CC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 314u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 288u), c.r[4].w[0]);  if (t) { goto L_00480510; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[3], c.r[29].w[0] + 292u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00480510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004801FCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004801FCu) [[unlikely]] return; }
L_004801FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00480510; } }
    set32(c.r[17], c.r[22].w[0] - c.r[19].w[0]);
    c.budget -= 1;
L_00480208:
    c.r[4].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; c.r[3].d[0] = c.r[17].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_0048021C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - c.r[17].w[0]);  if (t) { goto L_00480220; } }
L_0048021C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00480220:
    c.budget -= 2;
    if (c.r[22].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_004804C0; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00480244; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 412u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0048025C; } }
L_00480244:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004804BC; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 412u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004804BC; } }
L_0048025C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 260u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 280u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 276u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 282u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00480290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480288u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00480288u) [[unlikely]] return; }
L_00480288:
    set32(c.r[2], c.r[29].w[0] + 260u);
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 2;
L_00480290:
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    set32(c.r[5], c.r[29].w[0] + 260u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[21], ld32((c.r[18].w[0] + 124u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 282u)));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 19;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[23], ld32((c.r[29].w[0] + 260u)));  goto L_00480310; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004802E8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004802E8u) [[unlikely]] return; }
L_004802E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_00480304; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480300u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00480300u) [[unlikely]] return; }
L_00480300:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00480304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00480334; } }
    set32(c.r[23], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 1;
L_00480310:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048031Cu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048031Cu) [[unlikely]] return; }
L_0048031C:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480330u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00480330u) [[unlikely]] return; }
L_00480330:
    st32((c.r[16].w[0] + 4u), c.r[23].w[0]);
    c.budget -= 1;
L_00480334:
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00480348u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00480348u) [[unlikely]] return; }
L_00480348:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 282u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 256u), c.r[3].w[0]);  if (t) { goto L_00480378; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[2], c.r[29].w[0] + 260u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[23].d[0] = 0ull + 0ull;  goto L_004804AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480378u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00480378u) [[unlikely]] return; }
L_00480378:
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004804AC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00480388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480390u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00480390u) [[unlikely]] return; }
L_00480390:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { set32(c.r[23], c.r[23].w[0] + 1u);  goto L_004804AC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 228u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 248u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 244u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 250u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004803D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004803C8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004803C8u) [[unlikely]] return; }
L_004803C8:
    set32(c.r[2], c.r[29].w[0] + 228u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 2;
L_004803D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[5], c.r[29].w[0] + 228u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 250u)));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 13;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 228u)));  goto L_00480438; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480410u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00480410u) [[unlikely]] return; }
L_00480410:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0048042C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480428u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00480428u) [[unlikely]] return; }
L_00480428:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0048042C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00480464; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 1;
L_00480438:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480448u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00480448u) [[unlikely]] return; }
L_00480448:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048045Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048045Cu) [[unlikely]] return; }
L_0048045C:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_00480464:
    set32(c.r[25], ld32((c.r[21].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00480478u); set32(c.r[4], c.r[21].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00480478u) [[unlikely]] return; }
L_00480478:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 250u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 224u), c.r[3].w[0]);  if (t) { goto L_004804A8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_004804A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004804A8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004804A8u) [[unlikely]] return; }
L_004804A8:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_004804AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 272u)));
    c.r[2].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00480388u | kUnwind; return; } goto L_00480388; }
L_004804BC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004804C0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004804CC; } }
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 1;
L_004804CC:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_004804D8; } }
    set32(c.r[17], 0u - c.r[17].w[0]);
    c.budget -= 1;
L_004804D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004804E0u);  if (depth < kMaxDepth) unit_00E0(c, 108u, depth + 1u); else { c.pc = 0x00481010u; return; } if (c.pc != 0x004804E0u) [[unlikely]] return; }
L_004804E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004804ECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 129u, depth + 1u); else { c.pc = 0x00481250u; return; } if (c.pc != 0x004804ECu) [[unlikely]] return; }
L_004804EC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 32252u));  goto L_004804FC; }
    set32(c.r[18], c.r[18].w[0] + 72u);
    c.f[12] = ld32((c.r[28].w[0] - 32252u));
    c.budget -= 2;
L_004804FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480510u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 216u, depth + 1u); else { c.pc = 0x00489E00u; return; } if (c.pc != 0x00480510u) [[unlikely]] return; }
L_00480510:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00480514:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047FFD4u | kUnwind; return; } [[clang::musttail]] return unit_00DF(c, 494u, depth); }
    c.budget -= 2;
    if (c.r[30].sd[0] <= 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_004806AC; }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 412u));
    c.r[4].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[20].w[0] + 412u));  goto L_0048054C; }
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004806A8; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 412u));
    c.budget -= 1;
L_0048054C:
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004806A8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  goto L_004805DC; }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[16], c.r[2].w[0] - 1u);
    c.budget -= 4;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], ld32((c.r[20].w[0] + 396u)));  goto L_004805A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048057Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 186u, depth + 1u); else { c.pc = 0x0018AB50u; return; } if (c.pc != 0x0048057Cu) [[unlikely]] return; }
L_0048057C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00480594; }
    set32(c.r[2], ld32((c.r[20].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);  if (t) { goto L_00480594; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00480594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004805D0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 396u)));
    c.budget -= 1;
L_004805A0:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_00480648; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004805B4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 186u, depth + 1u); else { c.pc = 0x0018AB50u; return; } if (c.pc != 0x004805B4u) [[unlikely]] return; }
L_004805B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 396u)));  goto L_004805CC; }
    set32(c.r[2], ld32((c.r[20].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);  if (t) { goto L_004805D0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 396u)));
    c.budget -= 1;
L_004805CC:
    set32(c.r[16], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_004805D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00480644; } }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 1;
L_004805DC:
    set32(c.r[16], c.r[2].w[0] + c.r[30].w[0]);
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], ld32((c.r[20].w[0] + 396u)));  goto L_00480614; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004805F0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 186u, depth + 1u); else { c.pc = 0x0018AB50u; return; } if (c.pc != 0x004805F0u) [[unlikely]] return; }
L_004805F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00480608; }
    set32(c.r[2], ld32((c.r[20].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);  if (t) { goto L_00480608; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00480608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00480644; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 396u)));
    c.budget -= 1;
L_00480614:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00480644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480628u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 186u, depth + 1u); else { c.pc = 0x0018AB50u; return; } if (c.pc != 0x00480628u) [[unlikely]] return; }
L_00480628:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 396u)));  goto L_00480640; }
    set32(c.r[2], ld32((c.r[20].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);  if (t) { goto L_00480644; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 396u)));
    c.budget -= 1;
L_00480640:
    set32(c.r[16], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00480644:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_00480648:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00480658u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00480658u) [[unlikely]] return; }
L_00480658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 416u), c.r[2].w[0]);  if (t) { goto L_004806A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00480694; } }
L_00480668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480670u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00480670u) [[unlikely]] return; }
L_00480670:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00480694; }
    c.f[13] = ld32((c.r[28].w[0] - 32252u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480690u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_00E2(c, 190u, depth + 1u); else { c.pc = 0x00489BA0u; return; } if (c.pc != 0x00480690u) [[unlikely]] return; }
L_00480690:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00480694:
    set32(c.r[4], ld32((c.r[20].w[0] + 416u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 272u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00480668u | kUnwind; return; } goto L_00480668; } }
L_004806A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_004806AC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_004806E0:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 412u));
    c.r[5].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 5u);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 412u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00480700:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = ld32((c.r[5].w[0] + 352u));
    c.f[22] = ld32((c.r[5].w[0] + 356u));
    c.f[20] = ld32((c.r[5].w[0] + 360u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480748u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EC(c, 424u, depth + 1u); else { c.pc = 0x004B3600u; return; } if (c.pc != 0x00480748u) [[unlikely]] return; }
L_00480748:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_0048075C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0048075C:
    set32(c.r[16], c.r[17].w[0] - c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0048076C; } }
    set32(c.r[16], 0u - c.r[16].w[0]);
    c.budget -= 1;
L_0048076C:
    c.f[0] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 31660u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048079Cu);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0048079Cu) [[unlikely]] return; }
L_0048079C:
    c.f[0] = c.f[0] & fp::kAbs;
    c.r[4].d[0] = 0ull + 0ull;
    c.f[1] = 0u;
    c.f[3] = ld32((c.r[28].w[0] - 32564u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_004807D0; } }
L_004807B4:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[2] = ld32((c.r[3].w[0] + 420u));
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 328u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[2]));
    c.budget -= 7;
L_004807D0:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004807B4u | kUnwind; return; } goto L_004807B4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[1].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.f[1] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_004807F4; } }
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_004807F4:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 332u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[19].w[0] + 356u));  goto L_0048080C; }
L_00480800:
    c.f[0] = ld32((c.r[19].w[0] + 352u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[21] = fp::add(c.f[0], c.f[1]);  if (t) { goto L_00480810; } }
L_0048080C:
    c.f[22] = fp::add(c.f[0], c.f[1]);
    c.budget -= 1;
L_00480810:
    st32((c.r[20].w[0]), c.f[21]);
    st32((c.r[20].w[0] + 4u), c.f[22]);
    st32((c.r[20].w[0] + 8u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00480850:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00480888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00480A28; } }
L_00480888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480890u);  if (depth < kMaxDepth) unit_00EC(c, 439u, depth + 1u); else { c.pc = 0x004B38E0u; return; } if (c.pc != 0x00480890u) [[unlikely]] return; }
L_00480890:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_004808A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00480A28; } }
L_004808A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004808A8u);  if (depth < kMaxDepth) unit_00EC(c, 424u, depth + 1u); else { c.pc = 0x004B3600u; return; } if (c.pc != 0x004808A8u) [[unlikely]] return; }
L_004808A8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_004808B8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_004808B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 408u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 416u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] - c.r[17].w[0]);  if (t) { goto L_004808D8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004808D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004808D8u) [[unlikely]] return; }
L_004808D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004809F4; } }
L_004808E0:
    set32(c.r[20], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[20].sd[0] >= 0) { set32(c.r[2], ld32((c.r[18].w[0] + 396u)));  goto L_0048090C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004808F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 186u, depth + 1u); else { c.pc = 0x0018AB50u; return; } if (c.pc != 0x004808F4u) [[unlikely]] return; }
L_004808F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_00480904; }
    set32(c.r[2], ld32((c.r[18].w[0] + 396u)));
    set32(c.r[20], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 2;
L_00480904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[18].w[0])));  if (t) { goto L_0048093C; } }
L_0048090C:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00480938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480920u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 186u, depth + 1u); else { c.pc = 0x0018AB50u; return; } if (c.pc != 0x00480920u) [[unlikely]] return; }
L_00480920:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 396u)));  goto L_00480934; }
    set32(c.r[2], ld32((c.r[18].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] - c.r[2].w[0]);  if (t) { goto L_00480938; } }
L_00480934:
    set32(c.r[20], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00480938:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0048093C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048094Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048094Cu) [[unlikely]] return; }
L_0048094C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[20], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[20].sd[0] >= 0) { set32(c.r[2], ld32((c.r[18].w[0] + 396u)));  goto L_00480980; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480968u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 186u, depth + 1u); else { c.pc = 0x0018AB50u; return; } if (c.pc != 0x00480968u) [[unlikely]] return; }
L_00480968:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_00480978; }
    set32(c.r[2], ld32((c.r[18].w[0] + 396u)));
    set32(c.r[20], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 2;
L_00480978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[18].w[0])));  if (t) { goto L_004809B0; } }
L_00480980:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004809AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480994u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 186u, depth + 1u); else { c.pc = 0x0018AB50u; return; } if (c.pc != 0x00480994u) [[unlikely]] return; }
L_00480994:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 396u)));  goto L_004809A8; }
    set32(c.r[2], ld32((c.r[18].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] - c.r[2].w[0]);  if (t) { goto L_004809AC; } }
L_004809A8:
    set32(c.r[20], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_004809AC:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_004809B0:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004809C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004809C0u) [[unlikely]] return; }
L_004809C0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004809D8; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004809D8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004809D8u) [[unlikely]] return; }
L_004809D8:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] - 1u);  goto L_004809F4; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004809F0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004809F0u) [[unlikely]] return; }
L_004809F0:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_004809F4:
    c.budget -= 2;
    if (c.r[16].sd[0] > 0) { set32(c.r[2], c.r[17].w[0] - c.r[16].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004808E0u | kUnwind; return; } goto L_004808E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480A04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 16u, depth + 1u); else { c.pc = 0x0018C2E0u; return; } if (c.pc != 0x00480A04u) [[unlikely]] return; }
L_00480A04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00480A28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480A14u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 16u, depth + 1u); else { c.pc = 0x0018C2E0u; return; } if (c.pc != 0x00480A14u) [[unlikely]] return; }
L_00480A14:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00480A24u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00480A24u) [[unlikely]] return; }
L_00480A24:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00480A28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00480A50:
    set32(c.r[2], 0u + 2u);
    mmi::pminw(c.r[2], c.r[5], c.r[2]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 420u));
    c.f[0] = ld32((c.r[4].w[0] + 432u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::mul(c.f[1], c.f[0]);  c.pc = t; return; }
L_00480A70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480A9Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 16u, depth + 1u); else { c.pc = 0x0018C2E0u; return; } if (c.pc != 0x00480A9Cu) [[unlikely]] return; }
L_00480A9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_00480AFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480AACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 16u, depth + 1u); else { c.pc = 0x0018C2E0u; return; } if (c.pc != 0x00480AACu) [[unlikely]] return; }
L_00480AAC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00480AC4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00480AC4u) [[unlikely]] return; }
L_00480AC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00480AF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480AD4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 16u, depth + 1u); else { c.pc = 0x0018C2E0u; return; } if (c.pc != 0x00480AD4u) [[unlikely]] return; }
L_00480AD4:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 92u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480AF8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x00480AF8u) [[unlikely]] return; }
L_00480AF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_00480AFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00480B20:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 412u));
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { st8((c.r[4].w[0] + 412u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018AC60u | kUnwind; return; } [[clang::musttail]] return unit_0022(c, 192u, depth); }
L_00480B40:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 412u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { st8((c.r[4].w[0] + 412u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B5F0u | kUnwind; return; } [[clang::musttail]] return unit_0022(c, 198u, depth); }
L_00480B60:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u - 5u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 412u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480BA8u); st8((c.r[4].w[0] + 412u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0023(c, 16u, depth + 1u); else { c.pc = 0x0018C2E0u; return; } if (c.pc != 0x00480BA8u) [[unlikely]] return; }
L_00480BA8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480BB4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 150u, depth + 1u); else { c.pc = 0x00189E80u; return; } if (c.pc != 0x00480BB4u) [[unlikely]] return; }
L_00480BB4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480BC4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 152u, depth + 1u); else { c.pc = 0x00189FB0u; return; } if (c.pc != 0x00480BC4u) [[unlikely]] return; }
L_00480BC4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480BD4u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 185u, depth + 1u); else { c.pc = 0x0018AB20u; return; } if (c.pc != 0x00480BD4u) [[unlikely]] return; }
L_00480BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00480C04; } }
L_00480BDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480BE4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 185u, depth + 1u); else { c.pc = 0x0018AB20u; return; } if (c.pc != 0x00480BE4u) [[unlikely]] return; }
L_00480BE4:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480BFCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 152u, depth + 1u); else { c.pc = 0x00189FB0u; return; } if (c.pc != 0x00480BFCu) [[unlikely]] return; }
L_00480BFC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00480C04:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00480C9C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 192u));
    c.r[2].d[0] = c.r[3].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00480C38; } }
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00480C38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;  goto L_00480C94; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 22351u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480C5Cu); set32(c.r[7], c.r[7].w[0] - 22340u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x00480C5Cu) [[unlikely]] return; }
L_00480C5C:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_00480C70; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_00480C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480C78u); set32(c.r[4], ld32((c.r[28].w[0] - 22944u)));  if (depth < kMaxDepth) unit_00ED(c, 491u, depth + 1u); else { c.pc = 0x004B7610u; return; } if (c.pc != 0x00480C78u) [[unlikely]] return; }
L_00480C78:
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480C88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00480C88u) [[unlikely]] return; }
L_00480C88:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_00480C9C; } }
    c.r[2].d[0] = c.r[16].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00480C94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00480BDCu | kUnwind; return; } goto L_00480BDC; } }
L_00480C9C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_00480CD8; }
    c.r[7].d[0] = ld8((c.r[20].w[0] + 412u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 412u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 236u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00480CD4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00480CD4u) [[unlikely]] return; }
L_00480CD4:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00480CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480CE0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 60u, depth + 1u); else { c.pc = 0x004B4610u; return; } if (c.pc != 0x00480CE0u) [[unlikely]] return; }
L_00480CE0:
    c.r[3].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[20].w[0] + 412u));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 412u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00480D30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480D44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 36u, depth + 1u); else { c.pc = 0x004B43B0u; return; } if (c.pc != 0x00480D44u) [[unlikely]] return; }
L_00480D44:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 412u));
    set32(c.r[5], 0u - 2u);
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 3u);
    set32(c.r[4], c.r[6].w[0] << 1);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 412u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 412u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 412u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00480D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480DA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 73u, depth + 1u); else { c.pc = 0x004B47A0u; return; } if (c.pc != 0x00480DA4u) [[unlikely]] return; }
L_00480DA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 32336u);
    c.r[9].d[0] = 0ull & 1ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 32360u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32392u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 32404u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32428u);
    set32(c.r[8], c.r[9].w[0] << 1);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[7], 0u - 3u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 412u));
    set32(c.r[2], 0u - 2u);
    set32(c.r[3], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.f[2] = ld32((c.r[28].w[0] - 32068u));
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[9].d[0] = c.r[4].d[0] | c.r[9].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 412u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.f[1] = ld32((c.r[28].w[0] - 31564u));
    c.r[9].d[0] = ld8((c.r[16].w[0] + 412u));
    c.f[0] = ld32((c.r[28].w[0] - 31440u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 412u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 412u));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 412u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 416u), 0u);
    st32((c.r[16].w[0] + 432u), c.f[2]);
    st32((c.r[16].w[0] + 420u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 424u), c.f[1]);
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480E58u); st32((c.r[16].w[0] + 428u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 187u, depth + 1u); else { c.pc = 0x0018AB70u; return; } if (c.pc != 0x00480E58u) [[unlikely]] return; }
L_00480E58:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00480E70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29860u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00480E8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00480E9C; } }
L_00480E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480E94u);  if (depth < kMaxDepth) unit_00ED(c, 81u, depth + 1u); else { c.pc = 0x004B48B0u; return; } if (c.pc != 0x00480E94u) [[unlikely]] return; }
L_00480E94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_00480E9C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00480EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480ED4u); set32(c.r[4], c.r[4].w[0] - 22528u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00480ED4u) [[unlikely]] return; }
L_00480ED4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00480EE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00480EF4; } }
L_00480EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480EECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 83u, depth + 1u); else { c.pc = 0x004B48F0u; return; } if (c.pc != 0x00480EECu) [[unlikely]] return; }
L_00480EEC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00480EF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00480F10:
    set32(c.r[2], ld32((c.r[28].w[0] - 29572u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00480F20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29860u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00480F3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00480F44; } }
L_00480F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480F44u);  if (depth < kMaxDepth) unit_00ED(c, 87u, depth + 1u); else { c.pc = 0x004B4960u; return; } if (c.pc != 0x00480F44u) [[unlikely]] return; }
L_00480F44:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00480F50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29860u)));  c.pc = t; return; }
L_00480F60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 22496u);  c.pc = t; return; }
L_00480F70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 400u)));  c.pc = t; return; }
L_00480F80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00480FF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 32336u);
    set32(c.r[3], c.r[3].w[0] + 32360u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32392u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 32404u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32428u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480FE0u); st32((c.r[17].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00ED(c, 69u, depth + 1u); else { c.pc = 0x004B46C0u; return; } if (c.pc != 0x00480FE0u) [[unlikely]] return; }
L_00480FE0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00480FFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00480FF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00480FF8u) [[unlikely]] return; }
L_00480FF8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00480FFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00481010:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00481024; } }
    goto L_0048101C;
L_00481018:
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 1;
L_0048101C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00481034; } }
L_00481024:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00481034u); set32(c.r[5], ld32((c.r[28].w[0] - 29856u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00481034u) [[unlikely]] return; }
L_00481034:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00481040:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00480EB0u | kUnwind; return; } goto L_00480EB0; }
L_00481050:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00480E70u | kUnwind; return; } goto L_00480E70; }
L_00481060:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00480F10u | kUnwind; return; } goto L_00480F10; }
L_00481070:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00480F20u | kUnwind; return; } goto L_00480F20; }
L_00481080:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00480F50u | kUnwind; return; } goto L_00480F50; }
L_00481090:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00480F80u | kUnwind; return; } goto L_00480F80; }
L_004810A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00480F80u | kUnwind; return; } goto L_00480F80; }
L_004810B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00480F80u | kUnwind; return; } goto L_00480F80; }
L_004810C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 132u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00480F80u | kUnwind; return; } goto L_00480F80; }
L_004810D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00481160; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 32656u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00481148; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21296u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00481148; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17744u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00481148; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21552u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00481148; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00481148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481148u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00481148u) [[unlikely]] return; }
L_00481148:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00481164; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481160u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00481160u) [[unlikely]] return; }
L_00481160:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00481164:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00481180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00481190:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00481218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004811C4u); set32(c.r[4], 0u + 284u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004811C4u) [[unlikely]] return; }
L_004811C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00481218; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004811DCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_001C(c, 272u, depth + 1u); else { c.pc = 0x00173240u; return; } if (c.pc != 0x004811DCu) [[unlikely]] return; }
L_004811DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 32704u);
    set32(c.r[3], c.r[3].w[0] + 32728u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32760u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 32764u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 32740u);
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 15;
L_00481218:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048122Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 86u, depth + 1u); else { c.pc = 0x00171280u; return; } if (c.pc != 0x0048122Cu) [[unlikely]] return; }
L_0048122C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00481250:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004812F4; } }
L_00481278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481280u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00481280u) [[unlikely]] return; }
L_00481280:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_004812F4; }
    set32(c.r[4], ld32((c.r[19].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_004812A0; }
    set32(c.r[4], c.r[4].w[0] - 72u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_004812A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004812A8u);  if (depth < kMaxDepth) unit_00E0(c, 67u, depth + 1u); else { c.pc = 0x00480A50u; return; } if (c.pc != 0x004812A8u) [[unlikely]] return; }
L_004812A8:
    c.f[13] = ld32((c.r[28].w[0] - 32252u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.f[14] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004812C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 190u, depth + 1u); else { c.pc = 0x00489BA0u; return; } if (c.pc != 0x004812C0u) [[unlikely]] return; }
L_004812C0:
    set32(c.r[2], 0u + 2u);
    mmi::pminw(c.r[2], c.r[16], c.r[2]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 22304u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[28].w[0] - 32252u));
    c.f[14] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004812F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 175u, depth + 1u); else { c.pc = 0x004899C0u; return; } if (c.pc != 0x004812F0u) [[unlikely]] return; }
L_004812F0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_004812F4:
    set32(c.r[3], ld32((c.r[19].w[0] + 272u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00481278u | kUnwind; return; } goto L_00481278; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00481320:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00481618; } }
L_00481358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481360u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00481360u) [[unlikely]] return; }
L_00481360:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00481618; }
    set32(c.r[3], ld32((c.r[19].w[0] + 120u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481384u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x00481384u) [[unlikely]] return; }
L_00481384:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481390u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x00481390u) [[unlikely]] return; }
L_00481390:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 224u);  goto L_004813B8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004813B4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004813B4u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x004813B4u) [[unlikely]] return; }
L_004813B4:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 1;
L_004813B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004813C0u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x004813C0u) [[unlikely]] return; }
L_004813C0:
    set32(c.r[2], 0u + 2u);
    mmi::pminw(c.r[2], c.r[22], c.r[2]);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 196u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 212u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 22304u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st32((c.r[29].w[0] + 236u), c.f[0]);  if (t) { goto L_00481414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048140Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048140Cu) [[unlikely]] return; }
L_0048140C:
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 2;
L_00481414:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[5], c.r[29].w[0] + 196u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[21], ld32((c.r[19].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    set32(c.r[4], c.r[21].w[0] << 5);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 19;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 196u)));  goto L_00481490; }
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048146Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048146Cu) [[unlikely]] return; }
L_0048146C:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[18].w[0] + 4u);  goto L_00481488; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481484u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00481484u) [[unlikely]] return; }
L_00481484:
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_00481488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004814B4; } }
L_00481490:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048149Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048149Cu) [[unlikely]] return; }
L_0048149C:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004814B0u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004814B0u) [[unlikely]] return; }
L_004814B0:
    st32((c.r[18].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_004814B4:
    set32(c.r[25], ld32((c.r[19].w[0] + 60u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004814C8u); set32(c.r[4], c.r[19].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004814C8u) [[unlikely]] return; }
L_004814C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_004814F8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 120u)));  goto L_004814FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004814F8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004814F8u) [[unlikely]] return; }
L_004814F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 1;
L_004814FC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = c.r[22].d[0] + 0ull;  goto L_0048150C; }
    set32(c.r[4], c.r[4].w[0] - 72u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 2;
L_0048150C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481514u);  if (depth < kMaxDepth) unit_00E0(c, 67u, depth + 1u); else { c.pc = 0x00480A50u; return; } if (c.pc != 0x00481514u) [[unlikely]] return; }
L_00481514:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 164u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 184u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.f[20] = c.f[0];
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 180u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0048154C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481544u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00481544u) [[unlikely]] return; }
L_00481544:
    set32(c.r[2], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 2;
L_0048154C:
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[5], c.r[29].w[0] + 164u);
    st32((c.r[2].w[0]), c.f[20]);
    set32(c.r[21], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 186u)));
    set32(c.r[4], c.r[21].w[0] << 5);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 12;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 164u)));  goto L_004815AC; }
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481588u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00481588u) [[unlikely]] return; }
L_00481588:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[18].w[0] + 4u);  goto L_004815A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004815A0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004815A0u) [[unlikely]] return; }
L_004815A0:
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_004815A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004815D0; } }
L_004815AC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004815B8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004815B8u) [[unlikely]] return; }
L_004815B8:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004815CCu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004815CCu) [[unlikely]] return; }
L_004815CC:
    st32((c.r[18].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_004815D0:
    set32(c.r[25], ld32((c.r[19].w[0] + 60u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004815E4u); set32(c.r[4], c.r[19].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004815E4u) [[unlikely]] return; }
L_004815E4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 186u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 160u), c.r[4].w[0]);  if (t) { goto L_00481614; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[3], c.r[29].w[0] + 164u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00481614; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481614u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00481614u) [[unlikely]] return; }
L_00481614:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00481618:
    set32(c.r[3], ld32((c.r[17].w[0] + 272u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00481358u | kUnwind; return; } goto L_00481358; }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00481660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004816D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 32704u);
    set32(c.r[3], c.r[3].w[0] + 32728u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32760u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 32764u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 32740u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004816C0u); st32((c.r[17].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001C(c, 269u, depth + 1u); else { c.pc = 0x00173190u; return; } if (c.pc != 0x004816C0u) [[unlikely]] return; }
L_004816C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004816DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004816D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004816D8u) [[unlikely]] return; }
L_004816D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004816DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004816F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29856u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0048170C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0048171C; } }
L_0048170C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481714u);  if (depth < kMaxDepth) unit_001C(c, 274u, depth + 1u); else { c.pc = 0x001732E0u; return; } if (c.pc != 0x00481714u) [[unlikely]] return; }
L_00481714:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0048171C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00481730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481754u); set32(c.r[4], c.r[4].w[0] - 22288u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00481754u) [[unlikely]] return; }
L_00481754:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00481764; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00481774; } }
L_00481764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048176Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 276u, depth + 1u); else { c.pc = 0x00173340u; return; } if (c.pc != 0x0048176Cu) [[unlikely]] return; }
L_0048176C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00481774:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00481790:
    set32(c.r[2], ld32((c.r[28].w[0] - 30984u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004817A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29856u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_004817BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004817C4; } }
L_004817BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004817C4u);  if (depth < kMaxDepth) unit_001C(c, 280u, depth + 1u); else { c.pc = 0x001733E0u; return; } if (c.pc != 0x004817C4u) [[unlikely]] return; }
L_004817C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004817D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29856u)));  c.pc = t; return; }
L_004817E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 22256u);  c.pc = t; return; }
L_004817F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00481730u | kUnwind; return; } goto L_00481730; }
L_00481800:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004816F0u | kUnwind; return; } goto L_004816F0; }
L_00481810:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00481790u | kUnwind; return; } goto L_00481790; }
L_00481818:
    c.budget -= 2;
L_00481820:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004817A0u | kUnwind; return; } goto L_004817A0; }
L_00481824:
    set32(c.r[4], c.r[4].w[0] - 48u);
    c.budget -= 1;
    c.pc = 0x00481828u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00481830:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004817D0u | kUnwind; return; } goto L_004817D0; }
L_00481840:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00481660u | kUnwind; return; } goto L_00481660; }
L_00481850:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00481660u | kUnwind; return; } goto L_00481660; }
L_00481860:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00481660u | kUnwind; return; } goto L_00481660; }
L_00481870:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 132u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00481660u | kUnwind; return; } goto L_00481660; }
L_00481880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00481910; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 32592u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004818F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 32464u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004818F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27552u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004818D4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x004818D4u) [[unlikely]] return; }
L_004818D4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004818FC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31120u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004818F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004818F8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004818FC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00481914; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481910u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00481910u) [[unlikely]] return; }
L_00481910:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00481914:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00481930:
    c.budget -= 2;
    {  goto L_004822D0; }
L_00481940:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[20].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] - 22224u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481974u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00481974u) [[unlikely]] return; }
L_00481974:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481980u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x00481980u) [[unlikely]] return; }
L_00481980:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 177u);  goto L_00481994; }
    set32(c.r[5], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_00481994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048199Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0048199Cu) [[unlikely]] return; }
L_0048199C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004819ACu); set32(c.r[17], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00B3(c, 282u, depth + 1u); else { c.pc = 0x003CE3F0u; return; } if (c.pc != 0x004819ACu) [[unlikely]] return; }
L_004819AC:
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[5], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004819BCu); set32(c.r[4], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x004819BCu) [[unlikely]] return; }
L_004819BC:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 48u);  if (t) { goto L_004819D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_004819DC; } }
L_004819D8:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_004819DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004819E4u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x004819E4u) [[unlikely]] return; }
L_004819E4:
    set32(c.r[5], c.r[2].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004819F0u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004819F0u) [[unlikely]] return; }
L_004819F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 161u);  goto L_00481A04; }
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_00481A04:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481A10u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00481A10u) [[unlikely]] return; }
L_00481A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481A18u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00481A18u) [[unlikely]] return; }
L_00481A18:
    set32(c.r[3], ld32((c.r[16].w[0] + 424u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00481AAC; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00481AAC; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  goto L_00481A44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  if (t) { goto L_00481AC4; } }
L_00481A44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], 0u + 60u);
    c.f[2] = ld32((c.r[4].w[0] + 28u));
    set32(c.r[2], 0u + 100u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] - 22216u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[1]);
    mmi::div(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[7].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481AA4u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00481AA4u) [[unlikely]] return; }
L_00481AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 144u)));  if (t) { goto L_00481AD4; } }
L_00481AAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481ABCu); set32(c.r[5], c.r[5].w[0] - 22201u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00481ABCu) [[unlikely]] return; }
L_00481ABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00481AD0; } }
L_00481AC4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481AD0u); set32(c.r[5], c.r[5].w[0] - 22187u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00481AD0u) [[unlikely]] return; }
L_00481AD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_00481AD4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 145u);  goto L_00481AE4; }
    set32(c.r[6], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_00481AE4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481AF0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00481AF0u) [[unlikely]] return; }
L_00481AF0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 22181u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481B08u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00481B08u) [[unlikely]] return; }
L_00481B08:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_00481B1C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_00481B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481B24u); set32(c.r[4], c.r[19].w[0] + 56u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00481B24u) [[unlikely]] return; }
L_00481B24:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481B3Cu); set32(c.r[6], c.r[6].w[0] - 22168u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00481B3Cu) [[unlikely]] return; }
L_00481B3C:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 113u);  goto L_00481B50; }
    set32(c.r[6], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_00481B50:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481B5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00481B5Cu) [[unlikely]] return; }
L_00481B5C:
    st32((c.r[29].w[0] + 96u), 0u);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 32272u));  goto L_00481B9C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_00481BB0; } }
L_00481B9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.budget -= 5;
L_00481BB0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481BC0u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00E6(c, 566u, depth + 1u); else { c.pc = 0x0049B530u; return; } if (c.pc != 0x00481BC0u) [[unlikely]] return; }
L_00481BC0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481BD0u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00E6(c, 566u, depth + 1u); else { c.pc = 0x0049B530u; return; } if (c.pc != 0x00481BD0u) [[unlikely]] return; }
L_00481BD0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481BE0u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00E6(c, 566u, depth + 1u); else { c.pc = 0x0049B530u; return; } if (c.pc != 0x00481BE0u) [[unlikely]] return; }
L_00481BE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481BF0u); set32(c.r[5], c.r[5].w[0] - 22165u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00481BF0u) [[unlikely]] return; }
L_00481BF0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 207u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481C00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x00481C00u) [[unlikely]] return; }
L_00481C00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 207u));  goto L_00481C28; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00481C24; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 207u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481C24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x00481C24u) [[unlikely]] return; }
L_00481C24:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 207u));
    c.budget -= 1;
L_00481C28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 64u)));  goto L_00481C54; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481C3Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x00481C3Cu) [[unlikely]] return; }
L_00481C3C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 220u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00481C50u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00481C50u) [[unlikely]] return; }
L_00481C50:
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 1;
L_00481C54:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481C68u); st32((c.r[20].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00481C68u) [[unlikely]] return; }
L_00481C68:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481C74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00481C74u) [[unlikely]] return; }
L_00481C74:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481C80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00481C80u) [[unlikely]] return; }
L_00481C80:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481C8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00481C8Cu) [[unlikely]] return; }
L_00481C8C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481C98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00481C98u) [[unlikely]] return; }
L_00481C98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00481CC0:
    c.budget -= 2;
    {  goto L_004822E0; }
L_00481CD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00481D60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 32528u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00481D48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 32464u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00481D48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27552u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481D24u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x00481D24u) [[unlikely]] return; }
L_00481D24:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00481D4C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31120u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00481D48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00481D48:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00481D4C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00481D64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481D60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00481D60u) [[unlikely]] return; }
L_00481D60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00481D64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00481D80:
    c.budget -= 2;
    {  goto L_004822D0; }
L_00481D90:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[20].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] - 22016u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481DC8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00481DC8u) [[unlikely]] return; }
L_00481DC8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481DD4u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x00481DD4u) [[unlikely]] return; }
L_00481DD4:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 193u);  goto L_00481DE8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_00481DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481DF0u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x00481DF0u) [[unlikely]] return; }
L_00481DF0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481E04u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00D0(c, 484u, depth + 1u); else { c.pc = 0x004434D0u; return; } if (c.pc != 0x00481E04u) [[unlikely]] return; }
L_00481E04:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].sd[0] <= 0) { set32(c.r[3], ld32((c.r[20].w[0] + 64u)));  goto L_00482034; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481E18u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x00481E18u) [[unlikely]] return; }
L_00481E18:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481E24u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 375u, depth + 1u); else { c.pc = 0x0040E830u; return; } if (c.pc != 0x00481E24u) [[unlikely]] return; }
L_00481E24:
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_00481E40; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00481E40; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_00481E40:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00481E54; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 22048u);  if (t) { goto L_00481E58; } }
L_00481E54:
    set32(c.r[6], c.r[6].w[0] - 22064u);
    c.budget -= 1;
L_00481E58:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481E64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x00481E64u) [[unlikely]] return; }
L_00481E64:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 9u);  goto L_00481E78; }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_00481E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481E80u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x00481E80u) [[unlikely]] return; }
L_00481E80:
    set32(c.r[5], c.r[2].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481E8Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00481E8Cu) [[unlikely]] return; }
L_00481E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481E94u);  if (depth < kMaxDepth) unit_00B3(c, 282u, depth + 1u); else { c.pc = 0x003CE3F0u; return; } if (c.pc != 0x00481E94u) [[unlikely]] return; }
L_00481E94:
    set32(c.r[21], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481EA0u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00481EA0u) [[unlikely]] return; }
L_00481EA0:
    set32(c.r[2], ld32((c.r[21].w[0] + 60u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 176u)));  goto L_00481EF4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00481EF0; } }
    set32(c.r[7], c.r[2].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 177u);  goto L_00481ED8; }
    set32(c.r[6], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_00481ED8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481EE8u); set32(c.r[5], c.r[5].w[0] - 22008u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00481EE8u) [[unlikely]] return; }
L_00481EE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 160u)));  if (t) { goto L_00481F10; } }
L_00481EF0:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_00481EF4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 177u);  goto L_00481F04; }
    set32(c.r[5], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_00481F04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481F0Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00481F0Cu) [[unlikely]] return; }
L_00481F0C:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 1;
L_00481F10:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 161u);  goto L_00481F20; }
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_00481F20:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481F2Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00481F2Cu) [[unlikely]] return; }
L_00481F2C:
    set32(c.r[7], ld32((c.r[16].w[0] + 24u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481F44u); set32(c.r[6], c.r[6].w[0] - 21984u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00481F44u) [[unlikely]] return; }
L_00481F44:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 145u);  goto L_00481F58; }
    set32(c.r[6], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_00481F58:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481F64u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00481F64u) [[unlikely]] return; }
L_00481F64:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 21981u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481F7Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00481F7Cu) [[unlikely]] return; }
L_00481F7C:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_00481F90; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_00481F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481F98u); set32(c.r[4], c.r[19].w[0] + 56u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00481F98u) [[unlikely]] return; }
L_00481F98:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481FB0u); set32(c.r[6], c.r[6].w[0] - 21984u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00481FB0u) [[unlikely]] return; }
L_00481FB0:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 113u);  goto L_00481FC4; }
    set32(c.r[6], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_00481FC4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481FD0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00481FD0u) [[unlikely]] return; }
L_00481FD0:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_00481FF4; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481FF0u); set32(c.r[6], c.r[6].w[0] - 22032u);  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x00481FF0u) [[unlikely]] return; }
L_00481FF0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_00481FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00481FFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00481FFCu) [[unlikely]] return; }
L_00481FFC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482008u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00482008u) [[unlikely]] return; }
L_00482008:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482014u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00482014u) [[unlikely]] return; }
L_00482014:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482020u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00482020u) [[unlikely]] return; }
L_00482020:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048202Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0048202Cu) [[unlikely]] return; }
L_0048202C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004820A8; } }
L_00482034:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_00482048; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00482048; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_00482048:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0048205C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 22048u);  if (t) { goto L_00482060; } }
L_0048205C:
    set32(c.r[6], c.r[6].w[0] - 22064u);
    c.budget -= 1;
L_00482060:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048206Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x0048206Cu) [[unlikely]] return; }
L_0048206C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482080u); set32(c.r[6], c.r[6].w[0] - 21968u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00482080u) [[unlikely]] return; }
L_00482080:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482094u); set32(c.r[6], c.r[6].w[0] - 21942u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00482094u) [[unlikely]] return; }
L_00482094:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004820A8u); set32(c.r[6], c.r[6].w[0] - 21942u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004820A8u) [[unlikely]] return; }
L_004820A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004820B8u); set32(c.r[5], c.r[5].w[0] - 21936u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004820B8u) [[unlikely]] return; }
L_004820B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 223u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004820C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x004820C8u) [[unlikely]] return; }
L_004820C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 223u));  goto L_004820F0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004820EC; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 223u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004820ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x004820ECu) [[unlikely]] return; }
L_004820EC:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 223u));
    c.budget -= 1;
L_004820F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 64u)));  goto L_0048211C; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482104u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x00482104u) [[unlikely]] return; }
L_00482104:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 220u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00482118u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00482118u) [[unlikely]] return; }
L_00482118:
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 1;
L_0048211C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482130u); st32((c.r[20].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00482130u) [[unlikely]] return; }
L_00482130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00482160:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482190u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x00482190u) [[unlikely]] return; }
L_00482190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482198u); c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 282u, depth + 1u); else { c.pc = 0x003CE3F0u; return; } if (c.pc != 0x00482198u) [[unlikely]] return; }
L_00482198:
    set32(c.r[19], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[20], 0u + 1u);
    set32(c.r[18], ld32((c.r[19].w[0] + 104u)));
    st32((c.r[17].w[0] + 68u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), 0u);  if (t) { goto L_004821F0; } }
L_004821B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004821B8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 375u, depth + 1u); else { c.pc = 0x0040E830u; return; } if (c.pc != 0x004821B8u) [[unlikely]] return; }
L_004821B8:
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_004821F0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0] + 72u), c.r[20].w[0]);  goto L_004821FC; }
    st32((c.r[17].w[0] + 68u), c.r[20].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004821EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00482200; } }
L_004821EC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_004821F0:
    c.r[1].d[0] = c.r[18].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004821B0u | kUnwind; return; } goto L_004821B0; }
L_004821FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00482200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482208u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 268u, depth + 1u); else { c.pc = 0x004822E0u; return; } if (c.pc != 0x00482208u) [[unlikely]] return; }
L_00482208:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00482230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004822B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 32464u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00482298; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27552u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482274u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x00482274u) [[unlikely]] return; }
L_00482274:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_0048229C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31120u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00482298; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00482298:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_0048229C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004822B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004822B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004822B0u) [[unlikely]] return; }
L_004822B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004822B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004822D0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00480000u < 16384u) { entry = entries_00E0[(t - 0x00480000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004822E0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00482314u); set32(c.r[4], c.r[29].w[0] + 224u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00482314u) [[unlikely]] return; }
L_00482314:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482320u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00482320u) [[unlikely]] return; }
L_00482320:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482330u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_00E0(c, 305u, depth + 1u); else { c.pc = 0x00482620u; return; } if (c.pc != 0x00482330u) [[unlikely]] return; }
L_00482330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[29].w[0] + 188u), 0u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00482358u); set32(c.r[5], c.r[5].w[0] - 21872u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00482358u) [[unlikely]] return; }
L_00482358:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482364u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00482364u) [[unlikely]] return; }
L_00482364:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482370u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00482370u) [[unlikely]] return; }
L_00482370:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[5].w[0] - 21864u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482384u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0027(c, 9u, depth + 1u); else { c.pc = 0x0019C0F0u; return; } if (c.pc != 0x00482384u) [[unlikely]] return; }
L_00482384:
    set32(c.r[6], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482398u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x00482398u) [[unlikely]] return; }
L_00482398:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004823A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004823A4u) [[unlikely]] return; }
L_004823A4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004823B4u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_00E0(c, 305u, depth + 1u); else { c.pc = 0x00482620u; return; } if (c.pc != 0x004823B4u) [[unlikely]] return; }
L_004823B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[29].w[0] + 156u), 0u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004823DCu); set32(c.r[5], c.r[5].w[0] - 21862u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004823DCu) [[unlikely]] return; }
L_004823DC:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004823E8u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004823E8u) [[unlikely]] return; }
L_004823E8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004823F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004823F4u) [[unlikely]] return; }
L_004823F4:
    set32(c.r[19], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482404u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00482404u) [[unlikely]] return; }
L_00482404:
    st16((c.r[29].w[0] + 120u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = ld8((c.r[28].w[0] - 29852u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0048243C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482434u); set32(c.r[4], ld32((c.r[19].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00482434u) [[unlikely]] return; }
L_00482434:
    set32(c.r[2], c.r[19].w[0] + 4u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0048243C:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048246Cu); set32(c.r[5], c.r[5].w[0] - 21857u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048246Cu) [[unlikely]] return; }
L_0048246C:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482478u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00482478u) [[unlikely]] return; }
L_00482478:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482484u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00482484u) [[unlikely]] return; }
L_00482484:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004824A0u); mmi::pminw(c.r[20], c.r[3], c.r[2]);  if (depth < kMaxDepth) unit_00B3(c, 282u, depth + 1u); else { c.pc = 0x003CE3F0u; return; } if (c.pc != 0x004824A0u) [[unlikely]] return; }
L_004824A0:
    set32(c.r[18], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[4], 0u + 56u);
    set32(c.r[19], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004824B4u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004824B4u) [[unlikely]] return; }
L_004824B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 76u), c.r[2].w[0]);  goto L_004824C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004824C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 500u, depth + 1u); else { c.pc = 0x004438E0u; return; } if (c.pc != 0x004824C4u) [[unlikely]] return; }
L_004824C4:
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_004824C8:
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 68u)));  goto L_004824F0; }
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004824E8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 486u, depth + 1u); else { c.pc = 0x00443520u; return; } if (c.pc != 0x004824E8u) [[unlikely]] return; }
L_004824E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00482504; } }
L_004824F0:
    set32(c.r[6], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482500u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 487u, depth + 1u); else { c.pc = 0x00443540u; return; } if (c.pc != 0x00482500u) [[unlikely]] return; }
L_00482500:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00482504:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00482510; } }
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_00482510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482518u);  if (depth < kMaxDepth) unit_00E0(c, 311u, depth + 1u); else { c.pc = 0x00482720u; return; } if (c.pc != 0x00482518u) [[unlikely]] return; }
L_00482518:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048252Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048252Cu) [[unlikely]] return; }
L_0048252C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[6].w[0] - 21847u);
    set32(c.r[7], c.r[7].w[0] - 21829u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048254Cu); st32((c.r[17].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x0048254Cu) [[unlikely]] return; }
L_0048254C:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 193u);  goto L_00482560; }
    set32(c.r[4], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_00482560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482568u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x00482568u) [[unlikely]] return; }
L_00482568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482570u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 103u, depth + 1u); else { c.pc = 0x0047CD10u; return; } if (c.pc != 0x00482570u) [[unlikely]] return; }
L_00482570:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29244u)));
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482584u); st32((c.r[28].w[0] - 29244u), 0u);  if (depth < kMaxDepth) unit_0026(c, 323u, depth + 1u); else { c.pc = 0x0019BE80u; return; } if (c.pc != 0x00482584u) [[unlikely]] return; }
L_00482584:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[16].w[0] + 60u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004825A0u); c.r[9].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 306u, depth + 1u); else { c.pc = 0x0019BB20u; return; } if (c.pc != 0x004825A0u) [[unlikely]] return; }
L_004825A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004825A8u); set32(c.r[4], c.r[16].w[0] + 60u);  if (depth < kMaxDepth) unit_000F(c, 108u, depth + 1u); else { c.pc = 0x0013D410u; return; } if (c.pc != 0x004825A8u) [[unlikely]] return; }
L_004825A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004825B0u); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_000C(c, 347u, depth + 1u); else { c.pc = 0x00133590u; return; } if (c.pc != 0x004825B0u) [[unlikely]] return; }
L_004825B0:
    st32((c.r[17].w[0] + 64u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 252u)));  goto L_004825D4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004825D0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004825D0u) [[unlikely]] return; }
L_004825D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    c.budget -= 1;
L_004825D4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    st32((c.r[17].w[0] + 76u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004825E8u); st32((c.r[28].w[0] - 29244u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004825E8u) [[unlikely]] return; }
L_004825E8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004825F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004825F4u) [[unlikely]] return; }
L_004825F4:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482600u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00482600u) [[unlikely]] return; }
L_00482600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00482620:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[19].w[0] + 4u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st16((c.r[4].w[0] + 24u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[2], 0u + 256u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st16((c.r[4].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 19;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[5].w[0] + 1u);  goto L_00482670; }
    set32(c.r[17], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 1;
L_00482670:
    set32(c.r[2], 0u + 512u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482680u); st16((c.r[19].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00482680u) [[unlikely]] return; }
L_00482680:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 16u);  if (t) { goto L_004826B4; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_004826B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004826ACu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004826ACu) [[unlikely]] return; }
L_004826AC:
    set32(c.r[2], c.r[19].w[0] + 4u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_004826B4:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 20u)));  goto L_004826F8; }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[19].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));  goto L_004826E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004826DCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004826DCu) [[unlikely]] return; }
L_004826DC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_004826E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004826E8u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004826E8u) [[unlikely]] return; }
L_004826E8:
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 4;
L_004826F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482700u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x00482700u) [[unlikely]] return; }
L_00482700:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00482720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00482734; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00482744; } }
L_00482734:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00482744u); set32(c.r[5], ld32((c.r[28].w[0] - 30920u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00482744u) [[unlikely]] return; }
L_00482744:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00482750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004827E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 32400u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004827C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 32464u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004827C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27552u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004827A4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x004827A4u) [[unlikely]] return; }
L_004827A4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004827CC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31120u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004827C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004827C8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004827CC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004827E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004827E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004827E0u) [[unlikely]] return; }
L_004827E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004827E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00482800:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004822D0u | kUnwind; return; } goto L_004822D0; }
L_00482810:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.budget -= 2;
L_00482818:
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 21680u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482854u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00482854u) [[unlikely]] return; }
L_00482854:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482860u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x00482860u) [[unlikely]] return; }
L_00482860:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 225u);  goto L_00482874; }
    set32(c.r[5], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 1;
L_00482874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048287Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0048287Cu) [[unlikely]] return; }
L_0048287C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482884u); c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 282u, depth + 1u); else { c.pc = 0x003CE3F0u; return; } if (c.pc != 0x00482884u) [[unlikely]] return; }
L_00482884:
    set32(c.r[22], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482898u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00D0(c, 484u, depth + 1u); else { c.pc = 0x004434D0u; return; } if (c.pc != 0x00482898u) [[unlikely]] return; }
L_00482898:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[23].sd[0] <= 0) { set32(c.r[3], ld32((c.r[17].w[0] + 64u)));  goto L_00482BC4; }
    set32(c.r[2], ld32((c.r[22].w[0] + 108u)));
    set32(c.r[3], c.r[23].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[20], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + 48u);  if (t) { goto L_004828D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_004828D8; } }
L_004828D4:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_004828D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004828E0u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x004828E0u) [[unlikely]] return; }
L_004828E0:
    set32(c.r[18], c.r[2].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004828ECu); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004828ECu) [[unlikely]] return; }
L_004828EC:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  goto L_00482950; }
    set32(c.r[2], ld32((c.r[22].w[0] + 60u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0048294C; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048291Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 202u, depth + 1u); else { c.pc = 0x004D1CE0u; return; } if (c.pc != 0x0048291Cu) [[unlikely]] return; }
L_0048291C:
    set32(c.r[7], c.r[2].w[0] + 1u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[18].w[0] + 1u);  goto L_00482934; }
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_00482934:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482944u); set32(c.r[5], c.r[5].w[0] - 21672u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00482944u) [[unlikely]] return; }
L_00482944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 208u)));  if (t) { goto L_0048296C; } }
L_0048294C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00482950:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] + 1u);  goto L_00482960; }
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_00482960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482968u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00482968u) [[unlikely]] return; }
L_00482968:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 1;
L_0048296C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 209u);  goto L_0048297C; }
    set32(c.r[6], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 1;
L_0048297C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482988u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00482988u) [[unlikely]] return; }
L_00482988:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_004829A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004829A0; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_004829A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004829B4; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 21712u);  if (t) { goto L_004829B8; } }
L_004829B4:
    set32(c.r[6], c.r[6].w[0] - 21728u);
    c.budget -= 1;
L_004829B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004829C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x004829C4u) [[unlikely]] return; }
L_004829C4:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[19].w[0] + 28u));  goto L_004829F4; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004829ECu); set32(c.r[6], c.r[6].w[0] - 21648u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004829ECu) [[unlikely]] return; }
L_004829EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[19].w[0] + 20u));  if (t) { goto L_00482A44; } }
L_004829F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482A00u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00482A00u) [[unlikely]] return; }
L_00482A00:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00482A40; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 29588u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00482A20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00482A20u) [[unlikely]] return; }
L_00482A20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00482A40; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482A40u); set32(c.r[6], c.r[6].w[0] - 21639u);  if (depth < kMaxDepth) unit_00EC(c, 170u, depth + 1u); else { c.pc = 0x004B1B40u; return; } if (c.pc != 0x00482A40u) [[unlikely]] return; }
L_00482A40:
    c.f[20] = ld32((c.r[19].w[0] + 20u));
    c.budget -= 1;
L_00482A44:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00482A74; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482A6Cu); set32(c.r[6], c.r[6].w[0] - 21638u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00482A6Cu) [[unlikely]] return; }
L_00482A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 64u)));  if (t) { goto L_00482AC0; } }
L_00482A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482A7Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00482A7Cu) [[unlikely]] return; }
L_00482A7C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00482ABC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 29588u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00482A9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00482A9Cu) [[unlikely]] return; }
L_00482A9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00482ABC; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482ABCu); set32(c.r[6], c.r[6].w[0] - 21639u);  if (depth < kMaxDepth) unit_00EC(c, 170u, depth + 1u); else { c.pc = 0x004B1B40u; return; } if (c.pc != 0x00482ABCu) [[unlikely]] return; }
L_00482ABC:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 1;
L_00482AC0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 21632u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482AD8u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00482AD8u) [[unlikely]] return; }
L_00482AD8:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 193u);  goto L_00482AEC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_00482AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482AF4u); set32(c.r[4], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00482AF4u) [[unlikely]] return; }
L_00482AF4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482B0Cu); set32(c.r[6], c.r[6].w[0] - 21619u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00482B0Cu) [[unlikely]] return; }
L_00482B0C:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 177u);  goto L_00482B20; }
    set32(c.r[6], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_00482B20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482B2Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00482B2Cu) [[unlikely]] return; }
L_00482B2C:
    set32(c.r[7], ld32((c.r[19].w[0] + 56u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482B44u); set32(c.r[6], c.r[6].w[0] - 21616u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00482B44u) [[unlikely]] return; }
L_00482B44:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 161u);  goto L_00482B58; }
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_00482B58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482B64u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00482B64u) [[unlikely]] return; }
L_00482B64:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_00482B90; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482B8Cu); set32(c.r[6], c.r[6].w[0] - 21696u);  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x00482B8Cu) [[unlikely]] return; }
L_00482B8C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_00482B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482B98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00482B98u) [[unlikely]] return; }
L_00482B98:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482BA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00482BA4u) [[unlikely]] return; }
L_00482BA4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482BB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00482BB0u) [[unlikely]] return; }
L_00482BB0:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482BBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00482BBCu) [[unlikely]] return; }
L_00482BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00482C60; } }
L_00482BC4:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_00482BD8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00482BD8; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_00482BD8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00482BEC; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 21712u);  if (t) { goto L_00482BF0; } }
L_00482BEC:
    set32(c.r[6], c.r[6].w[0] - 21728u);
    c.budget -= 1;
L_00482BF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482BFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x00482BFCu) [[unlikely]] return; }
L_00482BFC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482C10u); set32(c.r[6], c.r[6].w[0] - 21638u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00482C10u) [[unlikely]] return; }
L_00482C10:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482C24u); set32(c.r[6], c.r[6].w[0] - 21612u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00482C24u) [[unlikely]] return; }
L_00482C24:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482C38u); set32(c.r[6], c.r[6].w[0] - 21638u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00482C38u) [[unlikely]] return; }
L_00482C38:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482C4Cu); set32(c.r[6], c.r[6].w[0] - 21638u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00482C4Cu) [[unlikely]] return; }
L_00482C4C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482C60u); set32(c.r[6], c.r[6].w[0] - 21638u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00482C60u) [[unlikely]] return; }
L_00482C60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482C70u); set32(c.r[5], c.r[5].w[0] - 21586u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00482C70u) [[unlikely]] return; }
L_00482C70:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 255u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482C80u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x00482C80u) [[unlikely]] return; }
L_00482C80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 255u));  goto L_00482CA8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00482CA4; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 255u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482CA4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x00482CA4u) [[unlikely]] return; }
L_00482CA4:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 255u));
    c.budget -= 1;
L_00482CA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 64u)));  goto L_00482CF0; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_00482CC0; }
    set32(c.r[21], c.r[21].w[0] + 48u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_00482CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482CC8u);  if (depth < kMaxDepth) unit_00E0(c, 311u, depth + 1u); else { c.pc = 0x00482720u; return; } if (c.pc != 0x00482CC8u) [[unlikely]] return; }
L_00482CC8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482CD8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x00482CD8u) [[unlikely]] return; }
L_00482CD8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 220u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00482CECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00482CECu) [[unlikely]] return; }
L_00482CEC:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 1;
L_00482CF0:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482D04u); st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00482D04u) [[unlikely]] return; }
L_00482D04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00482D40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482D5Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 282u, depth + 1u); else { c.pc = 0x003CE3F0u; return; } if (c.pc != 0x00482D5Cu) [[unlikely]] return; }
L_00482D5C:
    set32(c.r[6], ld32((c.r[2].w[0] + 320u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[6].w[0] + 104u)));
    st32((c.r[17].w[0] + 68u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), 0u);  if (t) { goto L_00482DD0; } }
L_00482D78:
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00482DD0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] + 1u);  goto L_00482DC4; }
    set32(c.r[2], c.r[7].w[0] + 1u);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00482DCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00482DE0; } }
L_00482DC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_00482DDC; } }
L_00482DCC:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00482DD0:
    c.r[2].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 108u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00482D78u | kUnwind; return; } goto L_00482D78; }
L_00482DDC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00482DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482DE8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 268u, depth + 1u); else { c.pc = 0x004822E0u; return; } if (c.pc != 0x00482DE8u) [[unlikely]] return; }
L_00482DE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00482E00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00482E80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 32336u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00482E68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27552u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482E44u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x00482E44u) [[unlikely]] return; }
L_00482E44:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_00482E6C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31120u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00482E68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00482E68:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_00482E6C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00482E84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482E80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00482E80u) [[unlikely]] return; }
L_00482E80:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00482E84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00482EA0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00480000u < 16384u) { entry = entries_00E0[(t - 0x00480000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00482EB0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 21520u);
    set32(c.r[16], c.r[19].w[0] + 56u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482EECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00482EECu) [[unlikely]] return; }
L_00482EEC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00483110; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482F04u); set32(c.r[5], c.r[5].w[0] - 21484u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00482F04u) [[unlikely]] return; }
L_00482F04:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482F10u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x00482F10u) [[unlikely]] return; }
L_00482F10:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 273u);  goto L_00482F24; }
    set32(c.r[5], ld32((c.r[29].w[0] + 280u)));
    c.budget -= 1;
L_00482F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482F2Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x00482F2Cu) [[unlikely]] return; }
L_00482F2C:
    set32(c.r[7], ld32((c.r[20].w[0] + 68u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 21469u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482F4Cu); set32(c.r[17], c.r[7].w[0] + 1u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00482F4Cu) [[unlikely]] return; }
L_00482F4C:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 257u);  goto L_00482F60; }
    set32(c.r[5], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 1;
L_00482F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482F68u); set32(c.r[4], c.r[19].w[0] + 56u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00482F68u) [[unlikely]] return; }
L_00482F68:
    set32(c.r[16], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00482F7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00482F7Cu) [[unlikely]] return; }
L_00482F7C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 21455u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482F98u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00482F98u) [[unlikely]] return; }
L_00482F98:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 241u);  goto L_00482FAC; }
    set32(c.r[6], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_00482FAC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482FB8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00482FB8u) [[unlikely]] return; }
L_00482FB8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00482FC4; } }
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 1;
L_00482FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482FCCu);  if (depth < kMaxDepth) unit_00E0(c, 472u, depth + 1u); else { c.pc = 0x004838E0u; return; } if (c.pc != 0x00482FCCu) [[unlikely]] return; }
L_00482FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482FD4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 73u, depth + 1u); else { c.pc = 0x0049CBA0u; return; } if (c.pc != 0x00482FD4u) [[unlikely]] return; }
L_00482FD4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00482FF0u); set32(c.r[6], c.r[6].w[0] - 21434u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00482FF0u) [[unlikely]] return; }
L_00482FF0:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 225u);  goto L_00483004; }
    set32(c.r[6], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 1;
L_00483004:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483014u); set32(c.r[5], c.r[5].w[0] - 21406u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x00483014u) [[unlikely]] return; }
L_00483014:
    set32(c.r[7], ld32((c.r[20].w[0] + 68u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048302Cu); set32(c.r[6], c.r[6].w[0] - 21395u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x0048302Cu) [[unlikely]] return; }
L_0048302C:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 209u);  goto L_00483040; }
    set32(c.r[6], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 1;
L_00483040:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483050u); set32(c.r[5], c.r[5].w[0] - 21392u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x00483050u) [[unlikely]] return; }
L_00483050:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483060u); set32(c.r[5], c.r[5].w[0] - 21382u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00483060u) [[unlikely]] return; }
L_00483060:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 303u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483070u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x00483070u) [[unlikely]] return; }
L_00483070:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 303u));  goto L_00483098; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00483094; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 303u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483094u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x00483094u) [[unlikely]] return; }
L_00483094:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 303u));
    c.budget -= 1;
L_00483098:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 68u)));  goto L_004830C4; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004830ACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x004830ACu) [[unlikely]] return; }
L_004830AC:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 220u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004830C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004830C0u) [[unlikely]] return; }
L_004830C0:
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 1;
L_004830C4:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004830D8u); st32((c.r[20].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004830D8u) [[unlikely]] return; }
L_004830D8:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004830E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004830E4u) [[unlikely]] return; }
L_004830E4:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004830F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004830F0u) [[unlikely]] return; }
L_004830F0:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004830FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004830FCu) [[unlikely]] return; }
L_004830FC:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483108u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00483108u) [[unlikely]] return; }
L_00483108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00483458; } }
L_00483110:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048311Cu); set32(c.r[5], c.r[5].w[0] - 21372u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0048311Cu) [[unlikely]] return; }
L_0048311C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00483454; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483134u); set32(c.r[5], c.r[5].w[0] - 21335u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00483134u) [[unlikely]] return; }
L_00483134:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483140u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x00483140u) [[unlikely]] return; }
L_00483140:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 193u);  goto L_00483154; }
    set32(c.r[5], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_00483154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048315Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0048315Cu) [[unlikely]] return; }
L_0048315C:
    set32(c.r[7], ld32((c.r[20].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 21395u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048317Cu); set32(c.r[17], c.r[7].w[0] + 1u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x0048317Cu) [[unlikely]] return; }
L_0048317C:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 177u);  goto L_00483190; }
    set32(c.r[5], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_00483190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483198u); set32(c.r[4], c.r[19].w[0] + 56u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00483198u) [[unlikely]] return; }
L_00483198:
    set32(c.r[16], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004831ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004831ACu) [[unlikely]] return; }
L_004831AC:
    set32(c.r[3], c.r[17].w[0] - 1u);
    set32(c.r[21], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[28].w[0] - 26064u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[7], c.r[21].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] - 21319u);
    set32(c.r[2], ld32((c.r[8].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483208u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00483208u) [[unlikely]] return; }
L_00483208:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 4u);  if (t) { goto L_00483220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_00483224; } }
L_00483220:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00483224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048322Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0048322Cu) [[unlikely]] return; }
L_0048322C:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 161u);  goto L_00483240; }
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_00483240:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048324Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0048324Cu) [[unlikely]] return; }
L_0048324C:
    c.f[0] = ld32((c.r[28].w[0] - 31444u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 21434u);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483280u); st32((c.r[29].w[0] + 152u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00483280u) [[unlikely]] return; }
L_00483280:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_00483294; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_00483294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048329Cu); set32(c.r[4], ld32((c.r[28].w[0] - 22944u)));  if (depth < kMaxDepth) unit_00ED(c, 491u, depth + 1u); else { c.pc = 0x004B7610u; return; } if (c.pc != 0x0048329Cu) [[unlikely]] return; }
L_0048329C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], ld32((c.r[16].w[0] + 28u)));  goto L_004832CC; }
    set32(c.r[17], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_004832AC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004832B8u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x004832B8u) [[unlikely]] return; }
L_004832B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004832ACu | kUnwind; return; } goto L_004832AC; }
    set32(c.r[21], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_004832CC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004832D8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x004832D8u) [[unlikely]] return; }
L_004832D8:
    set32(c.r[17], 0u + 1u);
    c.r[1].d[0] = c.r[21].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004832E0:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] - 1u);  goto L_00483300; }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004832F8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x004832F8u) [[unlikely]] return; }
L_004832F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00483390; } }
L_00483300:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_0048332C; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0048332C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483334u); set32(c.r[4], ld32((c.r[28].w[0] - 24272u)));  if (depth < kMaxDepth) unit_00DB(c, 268u, depth + 1u); else { c.pc = 0x0046FC50u; return; } if (c.pc != 0x00483334u) [[unlikely]] return; }
L_00483334:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_00483348; }
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_00483348:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483358u); set32(c.r[5], c.r[5].w[0] - 21301u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00483358u) [[unlikely]] return; }
L_00483358:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 113u);  goto L_0048336C; }
    set32(c.r[6], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_0048336C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483378u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 342u, depth + 1u); else { c.pc = 0x0048AC70u; return; } if (c.pc != 0x00483378u) [[unlikely]] return; }
L_00483378:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048338Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0048338Cu) [[unlikely]] return; }
L_0048338C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00483390:
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].d[0] = c.r[21].d[0] < c.r[17].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004832E0u | kUnwind; return; } goto L_004832E0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004833ACu); set32(c.r[5], c.r[5].w[0] - 21382u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004833ACu) [[unlikely]] return; }
L_004833AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 302u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004833BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x004833BCu) [[unlikely]] return; }
L_004833BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 302u));  goto L_004833E4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004833E0; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 302u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004833E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x004833E0u) [[unlikely]] return; }
L_004833E0:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 302u));
    c.budget -= 1;
L_004833E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 72u)));  goto L_00483410; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004833F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x004833F8u) [[unlikely]] return; }
L_004833F8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 220u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048340Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048340Cu) [[unlikely]] return; }
L_0048340C:
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_00483410:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483424u); st32((c.r[20].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00483424u) [[unlikely]] return; }
L_00483424:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483430u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00483430u) [[unlikely]] return; }
L_00483430:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048343Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0048343Cu) [[unlikely]] return; }
L_0048343C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483448u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00483448u) [[unlikely]] return; }
L_00483448:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483454u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00483454u) [[unlikely]] return; }
L_00483454:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00483458:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_00483480:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004834B0u); set32(c.r[4], c.r[29].w[0] + 240u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004834B0u) [[unlikely]] return; }
L_004834B0:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004834BCu); set32(c.r[5], c.r[18].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004834BCu) [[unlikely]] return; }
L_004834BC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004834C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004834C8u) [[unlikely]] return; }
L_004834C8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004834D8u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_00E0(c, 466u, depth + 1u); else { c.pc = 0x004837E0u; return; } if (c.pc != 0x004834D8u) [[unlikely]] return; }
L_004834D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[29].w[0] + 188u), 0u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00483500u); set32(c.r[5], c.r[5].w[0] - 21484u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00483500u) [[unlikely]] return; }
L_00483500:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048350Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0048350Cu) [[unlikely]] return; }
L_0048350C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483518u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00483518u) [[unlikely]] return; }
L_00483518:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048352Cu); set32(c.r[6], c.r[6].w[0] - 21283u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0048352Cu) [[unlikely]] return; }
L_0048352C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483538u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00483538u) [[unlikely]] return; }
L_00483538:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483548u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00E0(c, 466u, depth + 1u); else { c.pc = 0x004837E0u; return; } if (c.pc != 0x00483548u) [[unlikely]] return; }
L_00483548:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[29].w[0] + 140u), 0u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00483570u); set32(c.r[5], c.r[5].w[0] - 21335u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00483570u) [[unlikely]] return; }
L_00483570:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048357Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0048357Cu) [[unlikely]] return; }
L_0048357C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483588u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00483588u) [[unlikely]] return; }
L_00483588:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483594u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00483594u) [[unlikely]] return; }
L_00483594:
    set32(c.r[17], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004835A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004835A4u) [[unlikely]] return; }
L_004835A4:
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 84u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = ld8((c.r[28].w[0] - 29848u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004835DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004835D4u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004835D4u) [[unlikely]] return; }
L_004835D4:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_004835DC:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048360Cu); set32(c.r[5], c.r[5].w[0] - 21382u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048360Cu) [[unlikely]] return; }
L_0048360C:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483618u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00483618u) [[unlikely]] return; }
L_00483618:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483624u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00483624u) [[unlikely]] return; }
L_00483624:
    set32(c.r[16], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26064u)));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00483640u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00483640u) [[unlikely]] return; }
L_00483640:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00483674; } }
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 1;
L_00483674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048367Cu);  if (depth < kMaxDepth) unit_00E0(c, 311u, depth + 1u); else { c.pc = 0x00482720u; return; } if (c.pc != 0x0048367Cu) [[unlikely]] return; }
L_0048367C:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00483690u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00483690u) [[unlikely]] return; }
L_00483690:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 241u);  goto L_004836A4; }
    set32(c.r[7], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_004836A4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004836B8u); set32(c.r[6], c.r[6].w[0] - 21275u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004836B8u) [[unlikely]] return; }
L_004836B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 209u);  goto L_004836CC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 1;
L_004836CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004836D4u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x004836D4u) [[unlikely]] return; }
L_004836D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_004836E4; }
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_004836E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004836ECu);  if (depth < kMaxDepth) unit_00E0(c, 311u, depth + 1u); else { c.pc = 0x00482720u; return; } if (c.pc != 0x004836ECu) [[unlikely]] return; }
L_004836EC:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00483700u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00483700u) [[unlikely]] return; }
L_00483700:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[19].w[0] + 68u), 0u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[6].w[0] - 21265u);
    set32(c.r[7], c.r[7].w[0] - 21247u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483724u); st32((c.r[19].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x00483724u) [[unlikely]] return; }
L_00483724:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 193u);  goto L_00483738; }
    set32(c.r[4], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_00483738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483740u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x00483740u) [[unlikely]] return; }
L_00483740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483748u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 103u, depth + 1u); else { c.pc = 0x0047CD10u; return; } if (c.pc != 0x00483748u) [[unlikely]] return; }
L_00483748:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29244u)));
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048375Cu); st32((c.r[28].w[0] - 29244u), 0u);  if (depth < kMaxDepth) unit_0026(c, 323u, depth + 1u); else { c.pc = 0x0019BE80u; return; } if (c.pc != 0x0048375Cu) [[unlikely]] return; }
L_0048375C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[17].w[0] + 60u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483778u); c.r[9].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 306u, depth + 1u); else { c.pc = 0x0019BB20u; return; } if (c.pc != 0x00483778u) [[unlikely]] return; }
L_00483778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483780u); set32(c.r[4], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_000F(c, 108u, depth + 1u); else { c.pc = 0x0013D410u; return; } if (c.pc != 0x00483780u) [[unlikely]] return; }
L_00483780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483788u); set32(c.r[4], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_000C(c, 347u, depth + 1u); else { c.pc = 0x00133590u; return; } if (c.pc != 0x00483788u) [[unlikely]] return; }
L_00483788:
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048379Cu); st32((c.r[28].w[0] - 29244u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0048379Cu) [[unlikely]] return; }
L_0048379C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004837A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004837A8u) [[unlikely]] return; }
L_004837A8:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004837B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004837B4u) [[unlikely]] return; }
L_004837B4:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004837C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004837C0u) [[unlikely]] return; }
L_004837C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_004837E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[19].w[0] + 4u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st16((c.r[4].w[0] + 24u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[2], 0u + 256u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st16((c.r[4].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 19;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[5].w[0] + 1u);  goto L_00483830; }
    set32(c.r[17], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 1;
L_00483830:
    set32(c.r[2], 0u + 512u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483840u); st16((c.r[19].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00483840u) [[unlikely]] return; }
L_00483840:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 16u);  if (t) { goto L_00483874; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_00483874; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048386Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048386Cu) [[unlikely]] return; }
L_0048386C:
    set32(c.r[2], c.r[19].w[0] + 4u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00483874:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 20u)));  goto L_004838B8; }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[19].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));  goto L_004838A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048389Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048389Cu) [[unlikely]] return; }
L_0048389C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_004838A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004838A8u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004838A8u) [[unlikely]] return; }
L_004838A8:
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 4;
L_004838B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004838C0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x004838C0u) [[unlikely]] return; }
L_004838C0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004838E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004838F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00483904; } }
L_004838F4:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00483904u); set32(c.r[5], ld32((c.r[28].w[0] - 29656u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00483904u) [[unlikely]] return; }
L_00483904:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00483910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00483990; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 32272u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00483978; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17776u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00483978; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 18208u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00483978; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00483978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483978u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00483978u) [[unlikely]] return; }
L_00483978:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00483994; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483990u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00483990u) [[unlikely]] return; }
L_00483990:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00483994:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004839B0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004839D8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_004839D0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_004839D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004839DC; } }
L_004839D8:
    set32(c.r[2], c.r[2].w[0] - 21120u);
    c.budget -= 1;
L_004839DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004839F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 21104u);  c.pc = t; return; }
L_00483A00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[19].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00483A54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483A3Cu); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00483A3Cu) [[unlikely]] return; }
L_00483A3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = c.r[2].d[0] + 0ull;  goto L_00483A54; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483A50u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 22u, depth + 1u); else { c.pc = 0x00484260u; return; } if (c.pc != 0x00483A50u) [[unlikely]] return; }
L_00483A50:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00483A54:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483A6Cu); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 155u, depth + 1u); else { c.pc = 0x00192610u; return; } if (c.pc != 0x00483A6Cu) [[unlikely]] return; }
L_00483A6C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483A78u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x00483A78u) [[unlikely]] return; }
L_00483A78:
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 21072u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483A90u); set32(c.r[7], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x00483A90u) [[unlikely]] return; }
L_00483A90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 100u)));  goto L_00483AB8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_00483AAC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_00483AAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483AB4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 508u, depth + 1u); else { c.pc = 0x00483E40u; return; } if (c.pc != 0x00483AB4u) [[unlikely]] return; }
L_00483AB4:
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    c.budget -= 1;
L_00483AB8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 21061u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483ACCu); set32(c.r[7], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x00483ACCu) [[unlikely]] return; }
L_00483ACC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 100u)));  goto L_00483BE4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 97u);  goto L_00483AE8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_00483AE8:
    set32(c.r[2], ld32((c.r[19].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00483BE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], ld32((c.r[2].w[0])));  if (t) { goto L_00483B08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_00483B10; } }
L_00483B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483B10u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00483B10u) [[unlikely]] return; }
L_00483B10:
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00483B28u); set32(c.r[5], c.r[29].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00483B28u) [[unlikely]] return; }
L_00483B28:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00483B88; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483B58u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00483B58u) [[unlikely]] return; }
L_00483B58:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483B68u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00483B68u) [[unlikely]] return; }
L_00483B68:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00483B88; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483B88u); set32(c.r[5], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00483B88u) [[unlikely]] return; }
L_00483B88:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_00483B98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00483BDC; } }
L_00483B98:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00483BA4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00483BA4u) [[unlikely]] return; }
L_00483BA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 17928u);  if (t) { goto L_00483BC0; } }
L_00483BB0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00483BC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00483BCC; } }
L_00483BC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00483BB0u | kUnwind; return; } goto L_00483BB0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00483BCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_00483BDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00483BDC; } }
L_00483BDC:
    st32((c.r[19].w[0] + 148u), c.r[18].w[0]);
    c.budget -= 1;
L_00483BE0:
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    c.budget -= 1;
L_00483BE4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 21049u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483BF8u); set32(c.r[7], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x00483BF8u) [[unlikely]] return; }
L_00483BF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 100u)));  goto L_00483C3C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 97u);  goto L_00483C14; }
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_00483C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483C1Cu); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x00483C1Cu) [[unlikely]] return; }
L_00483C1C:
    c.f[1] = ld32((c.r[29].w[0] + 124u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00483C38; } }
    st32((c.r[19].w[0] + 164u), c.f[1]);
    c.budget -= 1;
L_00483C38:
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    c.budget -= 1;
L_00483C3C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 21034u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483C50u); set32(c.r[7], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x00483C50u) [[unlikely]] return; }
L_00483C50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 100u)));  goto L_00483CB4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 100u)));  goto L_00483C80; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 96u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_00483C80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00483CB0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 104u)));  goto L_00483C94; }
    set32(c.r[4], c.r[29].w[0] + 97u);
    c.budget -= 1;
L_00483C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483C9Cu); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x00483C9Cu) [[unlikely]] return; }
L_00483C9C:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.f[12] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00483CB0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00483CB0u) [[unlikely]] return; }
L_00483CB0:
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    c.budget -= 1;
L_00483CB4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 21028u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483CC8u); set32(c.r[7], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x00483CC8u) [[unlikely]] return; }
L_00483CC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 100u)));  goto L_00483D1C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 100u)));  goto L_00483CF8; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 96u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_00483CF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00483D18; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 104u)));  goto L_00483D0C; }
    set32(c.r[4], c.r[29].w[0] + 97u);
    c.budget -= 1;
L_00483D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483D14u);  if (depth < kMaxDepth) unit_000F(c, 289u, depth + 1u); else { c.pc = 0x0013EE00u; return; } if (c.pc != 0x00483D14u) [[unlikely]] return; }
L_00483D14:
    st8((c.r[19].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00483D18:
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    c.budget -= 1;
L_00483D1C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 21013u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483D30u); set32(c.r[7], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x00483D30u) [[unlikely]] return; }
L_00483D30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_00483D84; }
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 100u)));  goto L_00483D60; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 96u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_00483D60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00483D80; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 104u)));  goto L_00483D74; }
    set32(c.r[4], c.r[29].w[0] + 97u);
    c.budget -= 1;
L_00483D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483D7Cu);  if (depth < kMaxDepth) unit_000F(c, 289u, depth + 1u); else { c.pc = 0x0013EE00u; return; } if (c.pc != 0x00483D7Cu) [[unlikely]] return; }
L_00483D7C:
    st8((c.r[19].w[0] + 173u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00483D80:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_00483D84:
    c.f[12] = 0u;
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00483D94u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00483D94u) [[unlikely]] return; }
L_00483D94:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483DA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00483DA0u) [[unlikely]] return; }
L_00483DA0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00483DD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483DECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 170u, depth + 1u); else { c.pc = 0x001B2E50u; return; } if (c.pc != 0x00483DECu) [[unlikely]] return; }
L_00483DEC:
    set32(c.r[3], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00483E24; }
    set32(c.r[3], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00483E20; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00483E18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00483E18u) [[unlikely]] return; }
L_00483E18:
    c.f[0] = c.f[0] & fp::kAbs;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 2;
L_00483E20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00483E24:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00483E40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483E60u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x00483E60u) [[unlikely]] return; }
L_00483E60:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483E6Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00483E6Cu) [[unlikely]] return; }
L_00483E6C:
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_00483E80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483E80u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x00483E80u) [[unlikely]] return; }
L_00483E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483E88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x00483E88u) [[unlikely]] return; }
L_00483E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483E90u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0400u; return; } if (c.pc != 0x00483E90u) [[unlikely]] return; }
L_00483E90:
    st32((c.r[17].w[0] + 144u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483EA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x00483EA0u) [[unlikely]] return; }
L_00483EA0:
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    st32((c.r[17].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], ld32((c.r[2].w[0])));  if (t) { goto L_00483EC4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 56u)));  goto L_00483F04; }
L_00483EC4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 152u)));  goto L_00483ED8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483ED4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 313u, depth + 1u); else { c.pc = 0x0029B960u; return; } if (c.pc != 0x00483ED4u) [[unlikely]] return; }
L_00483ED4:
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_00483ED8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00483EE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483EE8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 313u, depth + 1u); else { c.pc = 0x0029B960u; return; } if (c.pc != 0x00483EE8u) [[unlikely]] return; }
L_00483EE8:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483EF8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x00483EF8u) [[unlikely]] return; }
L_00483EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483F00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 474u, depth + 1u); else { c.pc = 0x00283090u; return; } if (c.pc != 0x00483F00u) [[unlikely]] return; }
L_00483F00:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_00483F04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483F0Cu);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00483F0Cu) [[unlikely]] return; }
L_00483F0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00483F20:
    st32((c.r[4].w[0] + 168u), c.f[12]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00480000u < 16384u) { entry = entries_00E0[(t - 0x00480000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00483F40:
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00483F58; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 175u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00483F64; } }
L_00483F58:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00483F64; } }
    st8((c.r[4].w[0] + 175u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00483F64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00483F70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 175u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { [[clang::musttail]] return unit_00E1(c, 2u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483F98u); set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x00483F98u) [[unlikely]] return; }
L_00483F98:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483FA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00483FA4u) [[unlikely]] return; }
L_00483FA4:
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 173u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_00483FC4; } }
    c.f[0] = ld32((c.r[28].w[0] - 29052u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 168u), c.f[0]);  if (t) { goto L_00483FEC; } }
L_00483FC4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 172u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[16].w[0] + 168u));  goto L_00483FE4; }
    c.f[1] = ld32((c.r[16].w[0] + 168u));
    c.f[0] = ld32((c.r[28].w[0] - 29056u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 168u), c.f[0]);  if (t) { goto L_00483FEC; } }
L_00483FE4:
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 168u), c.f[0]);
    c.budget -= 2;
L_00483FEC:
    c.f[12] = ld32((c.r[16].w[0] + 168u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00483FF8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x00483FF8u) [[unlikely]] return; }
L_00483FF8:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484004u); st8((c.r[16].w[0] + 174u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00484004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00E1(c, 2u, depth);
}

}
