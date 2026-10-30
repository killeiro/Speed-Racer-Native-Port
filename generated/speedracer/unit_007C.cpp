#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007C[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13,
    0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0,
    0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41,
    0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55,
    0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0,
    0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0,
    69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108,
    0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0,
    0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0,
    0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0,
    0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0,
    0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 184,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188,
    0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0,
    0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0,
    0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0,
    0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0,
    0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0,
    0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0,
    0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266,
    0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286,
    0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0,
    0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0,
    0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322,
    0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0,
    0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347,
    0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0,
    0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0,
    0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0,
    0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0,
    0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0,
    0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0,
    0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0,
    0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0,
    0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0,
    0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0,
    0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421,
    0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0,
    0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0,
    0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0,
    0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0,
    0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0,
    0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 456,
    0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0,
    0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0,
    0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0,
    0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0,
    0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481,
    0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0,
    501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0,
};

void unit_007C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002F0000;
    case 2u: goto L_002F001C;
    case 3u: goto L_002F0020;
    case 4u: goto L_002F002C;
    case 5u: goto L_002F0034;
    case 6u: goto L_002F0054;
    case 7u: goto L_002F0070;
    case 8u: goto L_002F0090;
    case 9u: goto L_002F00A8;
    case 10u: goto L_002F00B8;
    case 11u: goto L_002F00C8;
    case 12u: goto L_002F00EC;
    case 13u: goto L_002F00FC;
    case 14u: goto L_002F011C;
    case 15u: goto L_002F0140;
    case 16u: goto L_002F0150;
    case 17u: goto L_002F0170;
    case 18u: goto L_002F0194;
    case 19u: goto L_002F01A4;
    case 20u: goto L_002F01C4;
    case 21u: goto L_002F01E4;
    case 22u: goto L_002F01F4;
    case 23u: goto L_002F021C;
    case 24u: goto L_002F022C;
    case 25u: goto L_002F024C;
    case 26u: goto L_002F0274;
    case 27u: goto L_002F0284;
    case 28u: goto L_002F02A4;
    case 29u: goto L_002F02A8;
    case 30u: goto L_002F02E0;
    case 31u: goto L_002F034C;
    case 32u: goto L_002F0380;
    case 33u: goto L_002F03B0;
    case 34u: goto L_002F0424;
    case 35u: goto L_002F0454;
    case 36u: goto L_002F046C;
    case 37u: goto L_002F049C;
    case 38u: goto L_002F04AC;
    case 39u: goto L_002F04CC;
    case 40u: goto L_002F04D8;
    case 41u: goto L_002F04FC;
    case 42u: goto L_002F0510;
    case 43u: goto L_002F0520;
    case 44u: goto L_002F054C;
    case 45u: goto L_002F055C;
    case 46u: goto L_002F057C;
    case 47u: goto L_002F05A0;
    case 48u: goto L_002F05B4;
    case 49u: goto L_002F05C4;
    case 50u: goto L_002F05F0;
    case 51u: goto L_002F0600;
    case 52u: goto L_002F0620;
    case 53u: goto L_002F0644;
    case 54u: goto L_002F0668;
    case 55u: goto L_002F067C;
    case 56u: goto L_002F068C;
    case 57u: goto L_002F06B8;
    case 58u: goto L_002F06C8;
    case 59u: goto L_002F06E8;
    case 60u: goto L_002F0714;
    case 61u: goto L_002F0728;
    case 62u: goto L_002F0738;
    case 63u: goto L_002F0764;
    case 64u: goto L_002F0774;
    case 65u: goto L_002F0794;
    case 66u: goto L_002F07B8;
    case 67u: goto L_002F07C8;
    case 68u: goto L_002F07F8;
    case 69u: goto L_002F0800;
    case 70u: goto L_002F0808;
    case 71u: goto L_002F0828;
    case 72u: goto L_002F0860;
    case 73u: goto L_002F08F0;
    case 74u: goto L_002F0918;
    case 75u: goto L_002F0974;
    case 76u: goto L_002F0998;
    case 77u: goto L_002F09BC;
    case 78u: goto L_002F09E0;
    case 79u: goto L_002F0A0C;
    case 80u: goto L_002F0A40;
    case 81u: goto L_002F0A50;
    case 82u: goto L_002F0A70;
    case 83u: goto L_002F0AA0;
    case 84u: goto L_002F0AB0;
    case 85u: goto L_002F0AD0;
    case 86u: goto L_002F0B00;
    case 87u: goto L_002F0B10;
    case 88u: goto L_002F0B30;
    case 89u: goto L_002F0B60;
    case 90u: goto L_002F0B70;
    case 91u: goto L_002F0B90;
    case 92u: goto L_002F0BD4;
    case 93u: goto L_002F0C18;
    case 94u: goto L_002F0C40;
    case 95u: goto L_002F0C68;
    case 96u: goto L_002F0C94;
    case 97u: goto L_002F0CBC;
    case 98u: goto L_002F0CEC;
    case 99u: goto L_002F0D14;
    case 100u: goto L_002F0D60;
    case 101u: goto L_002F0DC0;
    case 102u: goto L_002F0DD8;
    case 103u: goto L_002F0E08;
    case 104u: goto L_002F0E18;
    case 105u: goto L_002F0E38;
    case 106u: goto L_002F0E44;
    case 107u: goto L_002F0E68;
    case 108u: goto L_002F0E7C;
    case 109u: goto L_002F0E8C;
    case 110u: goto L_002F0EB8;
    case 111u: goto L_002F0EC8;
    case 112u: goto L_002F0EE8;
    case 113u: goto L_002F0F0C;
    case 114u: goto L_002F0F20;
    case 115u: goto L_002F0F30;
    case 116u: goto L_002F0F5C;
    case 117u: goto L_002F0F6C;
    case 118u: goto L_002F0F8C;
    case 119u: goto L_002F0FB0;
    case 120u: goto L_002F1000;
    case 121u: goto L_002F1024;
    case 122u: goto L_002F103C;
    case 123u: goto L_002F104C;
    case 124u: goto L_002F105C;
    case 125u: goto L_002F1088;
    case 126u: goto L_002F1098;
    case 127u: goto L_002F10B8;
    case 128u: goto L_002F10E4;
    case 129u: goto L_002F10F4;
    case 130u: goto L_002F1114;
    case 131u: goto L_002F1140;
    case 132u: goto L_002F1150;
    case 133u: goto L_002F1170;
    case 134u: goto L_002F1194;
    case 135u: goto L_002F11A4;
    case 136u: goto L_002F11D4;
    case 137u: goto L_002F11E4;
    case 138u: goto L_002F1204;
    case 139u: goto L_002F1240;
    case 140u: goto L_002F12B8;
    case 141u: goto L_002F12D0;
    case 142u: goto L_002F1300;
    case 143u: goto L_002F1310;
    case 144u: goto L_002F1330;
    case 145u: goto L_002F133C;
    case 146u: goto L_002F1360;
    case 147u: goto L_002F1374;
    case 148u: goto L_002F1384;
    case 149u: goto L_002F13B0;
    case 150u: goto L_002F13C0;
    case 151u: goto L_002F13E0;
    case 152u: goto L_002F1404;
    case 153u: goto L_002F1428;
    case 154u: goto L_002F143C;
    case 155u: goto L_002F144C;
    case 156u: goto L_002F1478;
    case 157u: goto L_002F1488;
    case 158u: goto L_002F14A8;
    case 159u: goto L_002F14CC;
    case 160u: goto L_002F14DC;
    case 161u: goto L_002F150C;
    case 162u: goto L_002F151C;
    case 163u: goto L_002F153C;
    case 164u: goto L_002F1568;
    case 165u: goto L_002F1580;
    case 166u: goto L_002F15B0;
    case 167u: goto L_002F15C0;
    case 168u: goto L_002F15E0;
    case 169u: goto L_002F15EC;
    case 170u: goto L_002F1610;
    case 171u: goto L_002F1624;
    case 172u: goto L_002F1634;
    case 173u: goto L_002F1660;
    case 174u: goto L_002F1670;
    case 175u: goto L_002F1690;
    case 176u: goto L_002F16B4;
    case 177u: goto L_002F16C8;
    case 178u: goto L_002F16D8;
    case 179u: goto L_002F1704;
    case 180u: goto L_002F1714;
    case 181u: goto L_002F1734;
    case 182u: goto L_002F1758;
    case 183u: goto L_002F176C;
    case 184u: goto L_002F177C;
    case 185u: goto L_002F17A8;
    case 186u: goto L_002F17B8;
    case 187u: goto L_002F17D8;
    case 188u: goto L_002F17FC;
    case 189u: goto L_002F1810;
    case 190u: goto L_002F1820;
    case 191u: goto L_002F184C;
    case 192u: goto L_002F185C;
    case 193u: goto L_002F187C;
    case 194u: goto L_002F18A0;
    case 195u: goto L_002F18B0;
    case 196u: goto L_002F18E4;
    case 197u: goto L_002F18F4;
    case 198u: goto L_002F1914;
    case 199u: goto L_002F1950;
    case 200u: goto L_002F19B4;
    case 201u: goto L_002F19CC;
    case 202u: goto L_002F19FC;
    case 203u: goto L_002F1A0C;
    case 204u: goto L_002F1A2C;
    case 205u: goto L_002F1A44;
    case 206u: goto L_002F1A68;
    case 207u: goto L_002F1A8C;
    case 208u: goto L_002F1AA0;
    case 209u: goto L_002F1AB0;
    case 210u: goto L_002F1ADC;
    case 211u: goto L_002F1AEC;
    case 212u: goto L_002F1B0C;
    case 213u: goto L_002F1B30;
    case 214u: goto L_002F1B54;
    case 215u: goto L_002F1B68;
    case 216u: goto L_002F1B78;
    case 217u: goto L_002F1BA4;
    case 218u: goto L_002F1BB4;
    case 219u: goto L_002F1BD4;
    case 220u: goto L_002F1BF8;
    case 221u: goto L_002F1C0C;
    case 222u: goto L_002F1C1C;
    case 223u: goto L_002F1C48;
    case 224u: goto L_002F1C58;
    case 225u: goto L_002F1C78;
    case 226u: goto L_002F1C9C;
    case 227u: goto L_002F1CAC;
    case 228u: goto L_002F1CDC;
    case 229u: goto L_002F1CEC;
    case 230u: goto L_002F1D0C;
    case 231u: goto L_002F1D30;
    case 232u: goto L_002F1D40;
    case 233u: goto L_002F1D70;
    case 234u: goto L_002F1D80;
    case 235u: goto L_002F1DA0;
    case 236u: goto L_002F1DCC;
    case 237u: goto L_002F1DE4;
    case 238u: goto L_002F1E14;
    case 239u: goto L_002F1E24;
    case 240u: goto L_002F1E44;
    case 241u: goto L_002F1E5C;
    case 242u: goto L_002F1E80;
    case 243u: goto L_002F1EA4;
    case 244u: goto L_002F1EB8;
    case 245u: goto L_002F1EC8;
    case 246u: goto L_002F1EF4;
    case 247u: goto L_002F1F04;
    case 248u: goto L_002F1F24;
    case 249u: goto L_002F1F48;
    case 250u: goto L_002F1F5C;
    case 251u: goto L_002F1F6C;
    case 252u: goto L_002F1F98;
    case 253u: goto L_002F1FA8;
    case 254u: goto L_002F1FC8;
    case 255u: goto L_002F1FEC;
    case 256u: goto L_002F1FFC;
    case 257u: goto L_002F202C;
    case 258u: goto L_002F203C;
    case 259u: goto L_002F205C;
    case 260u: goto L_002F2090;
    case 261u: goto L_002F20A0;
    case 262u: goto L_002F2104;
    case 263u: goto L_002F211C;
    case 264u: goto L_002F214C;
    case 265u: goto L_002F215C;
    case 266u: goto L_002F217C;
    case 267u: goto L_002F2188;
    case 268u: goto L_002F21AC;
    case 269u: goto L_002F21D0;
    case 270u: goto L_002F21F4;
    case 271u: goto L_002F2218;
    case 272u: goto L_002F2244;
    case 273u: goto L_002F2270;
    case 274u: goto L_002F2280;
    case 275u: goto L_002F22A0;
    case 276u: goto L_002F22CC;
    case 277u: goto L_002F22DC;
    case 278u: goto L_002F22FC;
    case 279u: goto L_002F2328;
    case 280u: goto L_002F2338;
    case 281u: goto L_002F2358;
    case 282u: goto L_002F2384;
    case 283u: goto L_002F2394;
    case 284u: goto L_002F23B4;
    case 285u: goto L_002F23D8;
    case 286u: goto L_002F23FC;
    case 287u: goto L_002F2420;
    case 288u: goto L_002F243C;
    case 289u: goto L_002F2468;
    case 290u: goto L_002F2478;
    case 291u: goto L_002F2498;
    case 292u: goto L_002F24C4;
    case 293u: goto L_002F24D4;
    case 294u: goto L_002F24F4;
    case 295u: goto L_002F2518;
    case 296u: goto L_002F2530;
    case 297u: goto L_002F255C;
    case 298u: goto L_002F256C;
    case 299u: goto L_002F258C;
    case 300u: goto L_002F25B0;
    case 301u: goto L_002F25C0;
    case 302u: goto L_002F25F0;
    case 303u: goto L_002F2600;
    case 304u: goto L_002F2620;
    case 305u: goto L_002F2658;
    case 306u: goto L_002F2670;
    case 307u: goto L_002F26A0;
    case 308u: goto L_002F26B0;
    case 309u: goto L_002F26D0;
    case 310u: goto L_002F26DC;
    case 311u: goto L_002F2700;
    case 312u: goto L_002F2724;
    case 313u: goto L_002F2748;
    case 314u: goto L_002F276C;
    case 315u: goto L_002F2798;
    case 316u: goto L_002F27C4;
    case 317u: goto L_002F27D4;
    case 318u: goto L_002F27F4;
    case 319u: goto L_002F2820;
    case 320u: goto L_002F2830;
    case 321u: goto L_002F2850;
    case 322u: goto L_002F287C;
    case 323u: goto L_002F288C;
    case 324u: goto L_002F28AC;
    case 325u: goto L_002F28CC;
    case 326u: goto L_002F28D8;
    case 327u: goto L_002F28E8;
    case 328u: goto L_002F2908;
    case 329u: goto L_002F292C;
    case 330u: goto L_002F2950;
    case 331u: goto L_002F2974;
    case 332u: goto L_002F2998;
    case 333u: goto L_002F29C4;
    case 334u: goto L_002F29F0;
    case 335u: goto L_002F2A00;
    case 336u: goto L_002F2A20;
    case 337u: goto L_002F2A4C;
    case 338u: goto L_002F2A5C;
    case 339u: goto L_002F2A7C;
    case 340u: goto L_002F2AA8;
    case 341u: goto L_002F2AB8;
    case 342u: goto L_002F2AD8;
    case 343u: goto L_002F2B04;
    case 344u: goto L_002F2B14;
    case 345u: goto L_002F2B34;
    case 346u: goto L_002F2B58;
    case 347u: goto L_002F2B7C;
    case 348u: goto L_002F2BA0;
    case 349u: goto L_002F2BC4;
    case 350u: goto L_002F2BF0;
    case 351u: goto L_002F2C1C;
    case 352u: goto L_002F2C2C;
    case 353u: goto L_002F2C4C;
    case 354u: goto L_002F2C78;
    case 355u: goto L_002F2C88;
    case 356u: goto L_002F2CA8;
    case 357u: goto L_002F2CD4;
    case 358u: goto L_002F2CE4;
    case 359u: goto L_002F2D04;
    case 360u: goto L_002F2D30;
    case 361u: goto L_002F2D40;
    case 362u: goto L_002F2D60;
    case 363u: goto L_002F2D84;
    case 364u: goto L_002F2DAC;
    case 365u: goto L_002F2DD0;
    case 366u: goto L_002F2DF4;
    case 367u: goto L_002F2E10;
    case 368u: goto L_002F2E3C;
    case 369u: goto L_002F2E4C;
    case 370u: goto L_002F2E6C;
    case 371u: goto L_002F2E98;
    case 372u: goto L_002F2EA8;
    case 373u: goto L_002F2EC8;
    case 374u: goto L_002F2EEC;
    case 375u: goto L_002F2F10;
    case 376u: goto L_002F2F2C;
    case 377u: goto L_002F2F58;
    case 378u: goto L_002F2F68;
    case 379u: goto L_002F2F88;
    case 380u: goto L_002F2FB4;
    case 381u: goto L_002F2FC4;
    case 382u: goto L_002F2FE4;
    case 383u: goto L_002F3008;
    case 384u: goto L_002F302C;
    case 385u: goto L_002F3048;
    case 386u: goto L_002F3074;
    case 387u: goto L_002F3084;
    case 388u: goto L_002F30A4;
    case 389u: goto L_002F30D0;
    case 390u: goto L_002F30E0;
    case 391u: goto L_002F3100;
    case 392u: goto L_002F3124;
    case 393u: goto L_002F313C;
    case 394u: goto L_002F3168;
    case 395u: goto L_002F3178;
    case 396u: goto L_002F3198;
    case 397u: goto L_002F31BC;
    case 398u: goto L_002F31D4;
    case 399u: goto L_002F3200;
    case 400u: goto L_002F3210;
    case 401u: goto L_002F3230;
    case 402u: goto L_002F3254;
    case 403u: goto L_002F3264;
    case 404u: goto L_002F3294;
    case 405u: goto L_002F32A4;
    case 406u: goto L_002F32C4;
    case 407u: goto L_002F32E8;
    case 408u: goto L_002F32F8;
    case 409u: goto L_002F3318;
    case 410u: goto L_002F3328;
    case 411u: goto L_002F3338;
    case 412u: goto L_002F3358;
    case 413u: goto L_002F338C;
    case 414u: goto L_002F33A4;
    case 415u: goto L_002F33D4;
    case 416u: goto L_002F33E4;
    case 417u: goto L_002F3404;
    case 418u: goto L_002F3410;
    case 419u: goto L_002F3434;
    case 420u: goto L_002F3458;
    case 421u: goto L_002F347C;
    case 422u: goto L_002F34A0;
    case 423u: goto L_002F34CC;
    case 424u: goto L_002F34F8;
    case 425u: goto L_002F3508;
    case 426u: goto L_002F3528;
    case 427u: goto L_002F3554;
    case 428u: goto L_002F3564;
    case 429u: goto L_002F3584;
    case 430u: goto L_002F35B0;
    case 431u: goto L_002F35C0;
    case 432u: goto L_002F35E0;
    case 433u: goto L_002F360C;
    case 434u: goto L_002F361C;
    case 435u: goto L_002F363C;
    case 436u: goto L_002F3660;
    case 437u: goto L_002F3684;
    case 438u: goto L_002F36A8;
    case 439u: goto L_002F36CC;
    case 440u: goto L_002F36F8;
    case 441u: goto L_002F3724;
    case 442u: goto L_002F3734;
    case 443u: goto L_002F3754;
    case 444u: goto L_002F3780;
    case 445u: goto L_002F3790;
    case 446u: goto L_002F37B0;
    case 447u: goto L_002F37DC;
    case 448u: goto L_002F37EC;
    case 449u: goto L_002F380C;
    case 450u: goto L_002F3838;
    case 451u: goto L_002F3848;
    case 452u: goto L_002F3868;
    case 453u: goto L_002F388C;
    case 454u: goto L_002F38B4;
    case 455u: goto L_002F38D8;
    case 456u: goto L_002F38FC;
    case 457u: goto L_002F3918;
    case 458u: goto L_002F3944;
    case 459u: goto L_002F3954;
    case 460u: goto L_002F3974;
    case 461u: goto L_002F39A0;
    case 462u: goto L_002F39B0;
    case 463u: goto L_002F39D0;
    case 464u: goto L_002F39F4;
    case 465u: goto L_002F3A18;
    case 466u: goto L_002F3A34;
    case 467u: goto L_002F3A60;
    case 468u: goto L_002F3A70;
    case 469u: goto L_002F3A90;
    case 470u: goto L_002F3ABC;
    case 471u: goto L_002F3ACC;
    case 472u: goto L_002F3AEC;
    case 473u: goto L_002F3B10;
    case 474u: goto L_002F3B28;
    case 475u: goto L_002F3B54;
    case 476u: goto L_002F3B64;
    case 477u: goto L_002F3B84;
    case 478u: goto L_002F3BA8;
    case 479u: goto L_002F3BC0;
    case 480u: goto L_002F3BEC;
    case 481u: goto L_002F3BFC;
    case 482u: goto L_002F3C1C;
    case 483u: goto L_002F3C40;
    case 484u: goto L_002F3C50;
    case 485u: goto L_002F3C80;
    case 486u: goto L_002F3C90;
    case 487u: goto L_002F3CB0;
    case 488u: goto L_002F3CD4;
    case 489u: goto L_002F3CE4;
    case 490u: goto L_002F3D14;
    case 491u: goto L_002F3D24;
    case 492u: goto L_002F3D44;
    case 493u: goto L_002F3D70;
    case 494u: goto L_002F3E08;
    case 495u: goto L_002F3E2C;
    case 496u: goto L_002F3E50;
    case 497u: goto L_002F3E74;
    case 498u: goto L_002F3EA0;
    case 499u: goto L_002F3ED0;
    case 500u: goto L_002F3EE0;
    case 501u: goto L_002F3F00;
    case 502u: goto L_002F3F2C;
    case 503u: goto L_002F3F3C;
    case 504u: goto L_002F3F5C;
    case 505u: goto L_002F3F88;
    case 506u: goto L_002F3F98;
    case 507u: goto L_002F3FB8;
    case 508u: goto L_002F3FE4;
    case 509u: goto L_002F3FF4;
    default: bad_entry(c, 0x002F0000u); return;
    }
L_002F0000:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F001C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F001Cu); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F001Cu) [[unlikely]] return; }
L_002F001C:
    set32(c.r[7], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 1;
L_002F0020:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[29].w[0] + 184u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
L_002F002C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0034u); set32(c.r[6], c.r[6].w[0] - 27411u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002F0034u) [[unlikely]] return; }
L_002F0034:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27406u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F004C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F0054; } }
L_002F004C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0054u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F0054u) [[unlikely]] return; }
L_002F0054:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 212u), c.r[2].w[0]);  if (t) { goto L_002F0068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F0070; } }
L_002F0068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0070u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F0070u) [[unlikely]] return; }
L_002F0070:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26509u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (t) { goto L_002F0088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F0090; } }
L_002F0088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0090u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F0090u) [[unlikely]] return; }
L_002F0090:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 212u);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00A8u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_006C(c, 510u, depth + 1u); else { c.pc = 0x002B3E20u; return; } if (c.pc != 0x002F00A8u) [[unlikely]] return; }
L_002F00A8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00B8u); set32(c.r[5], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F00B8u) [[unlikely]] return; }
L_002F00B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00C8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F00C8u) [[unlikely]] return; }
L_002F00C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 208u)));  goto L_002F0120; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00ECu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F00ECu) [[unlikely]] return; }
L_002F00EC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00FCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F00FCu) [[unlikely]] return; }
L_002F00FC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F011C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F011Cu); set32(c.r[5], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F011Cu) [[unlikely]] return; }
L_002F011C:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 1;
L_002F0120:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 212u)));  goto L_002F0174; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0140u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F0140u) [[unlikely]] return; }
L_002F0140:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0150u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F0150u) [[unlikely]] return; }
L_002F0150:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F0170; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0170u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F0170u) [[unlikely]] return; }
L_002F0170:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 1;
L_002F0174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_002F01C4; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0194u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F0194u) [[unlikely]] return; }
L_002F0194:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F01A4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F01A4u) [[unlikely]] return; }
L_002F01A4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F01C4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F01C4u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F01C4u) [[unlikely]] return; }
L_002F01C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26495u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F01DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F01E4; } }
L_002F01DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F01E4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F01E4u) [[unlikely]] return; }
L_002F01E4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F01F4u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002F01F4u) [[unlikely]] return; }
L_002F01F4:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[3], ld32((c.r[22].w[0])));  goto L_002F0250; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F021Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F021Cu) [[unlikely]] return; }
L_002F021C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F022Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F022Cu) [[unlikely]] return; }
L_002F022C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F024C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F024Cu); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F024Cu) [[unlikely]] return; }
L_002F024C:
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.budget -= 1;
L_002F0250:
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; c.r[18].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_002F02A4; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0274u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F0274u) [[unlikely]] return; }
L_002F0274:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0284u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F0284u) [[unlikely]] return; }
L_002F0284:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_002F02A8; }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F02A4u); set32(c.r[5], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F02A4u) [[unlikely]] return; }
L_002F02A4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002F02A8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_002F02E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[9].d[0] == 0ull; st32((c.r[29].w[0] + 108u), 0u);  if (t) { goto L_002F0314; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002F0314:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0]), 0ull);
    st64((c.r[29].w[0] + 8u), c.r[7].d[0]);
    set32(c.r[2], c.r[29].w[0] + 108u);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[11], ld32((c.r[7].w[0])));
    set32(c.r[6], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 320u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F034Cu); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F034Cu) [[unlikely]] return; }
L_002F034C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0])));  goto L_002F035C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F0390; } }
L_002F035C:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 108u)));  goto L_002F0388; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 108u)));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 296u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0380u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0380u) [[unlikely]] return; }
L_002F0380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_002F0394; } }
L_002F0388:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_002F0390:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002F0394:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002F03B0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 188u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    set32(c.r[2], c.r[29].w[0] + 184u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    set32(c.r[9], 0u + 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 188u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 184u), 0u);
    st64((c.r[29].w[0]), 0ull);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[10], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 320u)));
    c.budget -= 29;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0424u); c.r[11].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0424u) [[unlikely]] return; }
L_002F0424:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002F0434; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F082C; } }
L_002F0434:
    set32(c.r[4], c.r[4].w[0] - 26480u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F044C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F0454; } }
L_002F044C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0454u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F0454u) [[unlikely]] return; }
L_002F0454:
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F046Cu); set32(c.r[5], c.r[29].w[0] + 180u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F046Cu) [[unlikely]] return; }
L_002F046C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_002F04D0; }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F049Cu); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F049Cu) [[unlikely]] return; }
L_002F049C:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F04ACu); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F04ACu) [[unlikely]] return; }
L_002F04AC:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F04CC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F04CCu); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F04CCu) [[unlikely]] return; }
L_002F04CC:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_002F04D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F04D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F04D8u) [[unlikely]] return; }
L_002F04D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F04F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F04FC; } }
L_002F04F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F04FCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F04FCu) [[unlikely]] return; }
L_002F04FC:
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0510u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F0510u) [[unlikely]] return; }
L_002F0510:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0520u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F0520u) [[unlikely]] return; }
L_002F0520:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F057C; } }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F054Cu); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F054Cu) [[unlikely]] return; }
L_002F054C:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F055Cu); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F055Cu) [[unlikely]] return; }
L_002F055C:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F057C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F057Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F057Cu) [[unlikely]] return; }
L_002F057C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26456u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F0598; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F05A0; } }
L_002F0598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F05A0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F05A0u) [[unlikely]] return; }
L_002F05A0:
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F05B4u); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F05B4u) [[unlikely]] return; }
L_002F05B4:
    set32(c.r[5], ld32((c.r[29].w[0] + 188u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F05C4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F05C4u) [[unlikely]] return; }
L_002F05C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_002F0624; }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F05F0u); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F05F0u) [[unlikely]] return; }
L_002F05F0:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0600u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F0600u) [[unlikely]] return; }
L_002F0600:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F0620; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0620u); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F0620u) [[unlikely]] return; }
L_002F0620:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002F0624:
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 105u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0644u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0644u) [[unlikely]] return; }
L_002F0644:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26449u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F0660; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F0668; } }
L_002F0660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0668u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F0668u) [[unlikely]] return; }
L_002F0668:
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F067Cu); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F067Cu) [[unlikely]] return; }
L_002F067C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F068Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F068Cu) [[unlikely]] return; }
L_002F068C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F06E8; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F06B8u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F06B8u) [[unlikely]] return; }
L_002F06B8:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F06C8u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F06C8u) [[unlikely]] return; }
L_002F06C8:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F06E8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F06E8u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F06E8u) [[unlikely]] return; }
L_002F06E8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002F0794; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26437u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F070C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F0714; } }
L_002F070C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0714u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F0714u) [[unlikely]] return; }
L_002F0714:
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0728u); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F0728u) [[unlikely]] return; }
L_002F0728:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0738u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F0738u) [[unlikely]] return; }
L_002F0738:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F0794; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0764u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F0764u) [[unlikely]] return; }
L_002F0764:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0774u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F0774u) [[unlikely]] return; }
L_002F0774:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F0794; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0794u); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F0794u) [[unlikely]] return; }
L_002F0794:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26418u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F07B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F07B8; } }
L_002F07B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F07B8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F07B8u) [[unlikely]] return; }
L_002F07B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F07C8u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002F07C8u) [[unlikely]] return; }
L_002F07C8:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002F082C; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F07F8u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F07F8u) [[unlikely]] return; }
L_002F07F8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 2;
L_002F0800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0808u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F0808u) [[unlikely]] return; }
L_002F0808:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F0828; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0828u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F0828u) [[unlikely]] return; }
L_002F0828:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002F082C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002F0860:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[10].w[0]), 0u);
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[30], ld32((c.r[29].w[0] + 256u)));
    st32((c.r[9].w[0]), 0u);
    set32(c.r[21], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[30].w[0]), 0u);
    st32((c.r[21].w[0]), 0u);
    st32((c.r[11].w[0]), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 28;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_002F091C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 75u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F08F0u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F08F0u) [[unlikely]] return; }
L_002F08F0:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[7], 0u + 1u);
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 77u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0918u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0918u) [[unlikely]] return; }
L_002F0918:
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002F091C:
    c.r[2].d[0] = c.r[18].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] & 255ull;  goto L_002F0948; }
    c.r[2].d[0] = c.r[18].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F0944; } }
    c.r[2].d[0] = c.r[17].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002F0944:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002F0948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_002F0B90; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28421u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F096C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F0974; } }
L_002F096C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0974u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F0974u) [[unlikely]] return; }
L_002F0974:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28291u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_002F0990; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F0998; } }
L_002F0990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0998u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F0998u) [[unlikely]] return; }
L_002F0998:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 248u), c.r[2].w[0]);  if (t) { goto L_002F09B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F09BC; } }
L_002F09B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F09BCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F09BCu) [[unlikely]] return; }
L_002F09BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26401u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 244u), c.r[2].w[0]);  if (t) { goto L_002F09D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F09E0; } }
L_002F09D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F09E0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F09E0u) [[unlikely]] return; }
L_002F09E0:
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 252u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 248u);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 244u);
    set32(c.r[8], c.r[29].w[0] + 240u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0A0Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F0A0Cu) [[unlikely]] return; }
L_002F0A0C:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F0A70; } }
    set32(c.r[23], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0A40u); st32((c.r[29].w[0] + 224u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F0A40u) [[unlikely]] return; }
L_002F0A40:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0A50u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F0A50u) [[unlikely]] return; }
L_002F0A50:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F0A70; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0A70u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F0A70u) [[unlikely]] return; }
L_002F0A70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F0AD0; } }
    set32(c.r[23], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0AA0u); st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F0AA0u) [[unlikely]] return; }
L_002F0AA0:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0AB0u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F0AB0u) [[unlikely]] return; }
L_002F0AB0:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F0AD0; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0AD0u); set32(c.r[5], c.r[29].w[0] + 244u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F0AD0u) [[unlikely]] return; }
L_002F0AD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F0B30; } }
    set32(c.r[23], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0B00u); st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F0B00u) [[unlikely]] return; }
L_002F0B00:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0B10u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F0B10u) [[unlikely]] return; }
L_002F0B10:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F0B30; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0B30u); set32(c.r[5], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F0B30u) [[unlikely]] return; }
L_002F0B30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F0B90; } }
    set32(c.r[23], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0B60u); st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F0B60u) [[unlikely]] return; }
L_002F0B60:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0B70u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F0B70u) [[unlikely]] return; }
L_002F0B70:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F0B90; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0B90u); set32(c.r[5], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F0B90u) [[unlikely]] return; }
L_002F0B90:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002F0C48; }
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[7].d[0]) { st32((c.r[21].w[0]), c.r[22].w[0]);  goto L_002F0BF0; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002F0BB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0])));  if (t) { goto L_002F0CC4; } }
L_002F0BB8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 76u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0BD4u); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0BD4u) [[unlikely]] return; }
L_002F0BD4:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002F0CC0; } }
    st32((c.r[16].w[0]), c.r[22].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0]), c.r[22].w[0]);  if (t) { goto L_002F0CC0; } }
L_002F0BF0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[7].d[0];  if (t) { goto L_002F0CC0; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 73u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0C18u); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0C18u) [[unlikely]] return; }
L_002F0C18:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[7], 0u + 1u);
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 74u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0C40u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0C40u) [[unlikely]] return; }
L_002F0C40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0]), c.r[2].w[0]);  if (t) { goto L_002F0CC0; } }
L_002F0C48:
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 76u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0C68u); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0C68u) [[unlikely]] return; }
L_002F0C68:
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[7].d[0]; st32((c.r[21].w[0]), c.r[2].w[0]);  if (t) { goto L_002F0CC0; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 73u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0C94u); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0C94u) [[unlikely]] return; }
L_002F0C94:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[7], 0u + 1u);
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 74u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0CBCu); c.r[8].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0CBCu) [[unlikely]] return; }
L_002F0CBC:
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002F0CC0:
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002F0CC4:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002F0CFC; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 272u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0CECu); c.r[7].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0CECu) [[unlikely]] return; }
L_002F0CEC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002F0D28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F0D28; } }
L_002F0CFC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 272u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0D14u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0D14u) [[unlikely]] return; }
L_002F0D14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F0D24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F0D28; } }
L_002F0D24:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002F0D28:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_002F0D60:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26388u);
    c.budget -= 19;
    { const bool t = c.r[4].d[0] != 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002F0DB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F0DC0; } }
L_002F0DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0DC0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F0DC0u) [[unlikely]] return; }
L_002F0DC0:
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0DD8u); set32(c.r[5], c.r[29].w[0] + 172u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0DD8u) [[unlikely]] return; }
L_002F0DD8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0])));  goto L_002F0E3C; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0E08u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F0E08u) [[unlikely]] return; }
L_002F0E08:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0E18u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F0E18u) [[unlikely]] return; }
L_002F0E18:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F0E38; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0E38u); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F0E38u) [[unlikely]] return; }
L_002F0E38:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002F0E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0E44u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F0E44u) [[unlikely]] return; }
L_002F0E44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27482u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F0E60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F0E68; } }
L_002F0E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0E68u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F0E68u) [[unlikely]] return; }
L_002F0E68:
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0E7Cu); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F0E7Cu) [[unlikely]] return; }
L_002F0E7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0E8Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F0E8Cu) [[unlikely]] return; }
L_002F0E8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F0EE8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0EB8u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F0EB8u) [[unlikely]] return; }
L_002F0EB8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0EC8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F0EC8u) [[unlikely]] return; }
L_002F0EC8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F0EE8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0EE8u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F0EE8u) [[unlikely]] return; }
L_002F0EE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27242u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F0F04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F0F0C; } }
L_002F0F04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0F0Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F0F0Cu) [[unlikely]] return; }
L_002F0F0C:
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0F20u); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F0F20u) [[unlikely]] return; }
L_002F0F20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0F30u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F0F30u) [[unlikely]] return; }
L_002F0F30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F0F8C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0F5Cu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F0F5Cu) [[unlikely]] return; }
L_002F0F5C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0F6Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F0F6Cu) [[unlikely]] return; }
L_002F0F6C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F0F8C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0F8Cu); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F0F8Cu) [[unlikely]] return; }
L_002F0F8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27543u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F0FA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F0FB0; } }
L_002F0FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0FB0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F0FB0u) [[unlikely]] return; }
L_002F0FB0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_002F0FC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 27538u);  if (t) { goto L_002F0FCC; } }
L_002F0FC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 27531u);
    c.budget -= 2;
L_002F0FCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F0FE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F1000; } }
L_002F0FE0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002F0FF4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 27538u);  if (t) { goto L_002F0FF8; } }
L_002F0FF4:
    set32(c.r[4], c.r[4].w[0] - 27531u);
    c.budget -= 1;
L_002F0FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1000u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F1000u) [[unlikely]] return; }
L_002F1000:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26375u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_002F101C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F1024; } }
L_002F101C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1024u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F1024u) [[unlikely]] return; }
L_002F1024:
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[20].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F103Cu); set32(c.r[6], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_006C(c, 510u, depth + 1u); else { c.pc = 0x002B3E20u; return; } if (c.pc != 0x002F103Cu) [[unlikely]] return; }
L_002F103C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F104Cu); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F104Cu) [[unlikely]] return; }
L_002F104C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F105Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F105Cu) [[unlikely]] return; }
L_002F105C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F10B8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1088u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F1088u) [[unlikely]] return; }
L_002F1088:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1098u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F1098u) [[unlikely]] return; }
L_002F1098:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F10B8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F10B8u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F10B8u) [[unlikely]] return; }
L_002F10B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1114; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F10E4u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F10E4u) [[unlikely]] return; }
L_002F10E4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F10F4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F10F4u) [[unlikely]] return; }
L_002F10F4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F1114; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1114u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F1114u) [[unlikely]] return; }
L_002F1114:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1170; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1140u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F1140u) [[unlikely]] return; }
L_002F1140:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1150u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F1150u) [[unlikely]] return; }
L_002F1150:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F1170; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1170u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F1170u) [[unlikely]] return; }
L_002F1170:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26388u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F118C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F1194; } }
L_002F118C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1194u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F1194u) [[unlikely]] return; }
L_002F1194:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F11A4u); set32(c.r[5], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002F11A4u) [[unlikely]] return; }
L_002F11A4:
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_002F1208; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F11D4u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F11D4u) [[unlikely]] return; }
L_002F11D4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F11E4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F11E4u) [[unlikely]] return; }
L_002F11E4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F1204; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1204u); set32(c.r[5], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F1204u) [[unlikely]] return; }
L_002F1204:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_002F1208:
    set32(c.r[2], 0u + 1u);
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
L_002F1240:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 26359u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[18].d[0] = c.r[11].d[0] + 0ull;
    st32((c.r[11].w[0]), 0u);
    st32((c.r[29].w[0] + 164u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[9].w[0]);
    c.budget -= 25;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_002F12B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F12B8; } }
L_002F12B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F12B8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F12B8u) [[unlikely]] return; }
L_002F12B8:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F12D0u); set32(c.r[5], c.r[29].w[0] + 204u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F12D0u) [[unlikely]] return; }
L_002F12D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002F1334; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1300u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F1300u) [[unlikely]] return; }
L_002F1300:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1310u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F1310u) [[unlikely]] return; }
L_002F1310:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F1330; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1330u); set32(c.r[5], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F1330u) [[unlikely]] return; }
L_002F1330:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002F1334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F133Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F133Cu) [[unlikely]] return; }
L_002F133C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27491u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F1358; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F1360; } }
L_002F1358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1360u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F1360u) [[unlikely]] return; }
L_002F1360:
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1374u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F1374u) [[unlikely]] return; }
L_002F1374:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1384u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F1384u) [[unlikely]] return; }
L_002F1384:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002F13E4; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F13B0u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F13B0u) [[unlikely]] return; }
L_002F13B0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F13C0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F13C0u) [[unlikely]] return; }
L_002F13C0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F13E0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F13E0u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F13E0u) [[unlikely]] return; }
L_002F13E0:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002F13E4:
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 78u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1404u); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1404u) [[unlikely]] return; }
L_002F1404:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26339u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F1420; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F1428; } }
L_002F1420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1428u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F1428u) [[unlikely]] return; }
L_002F1428:
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F143Cu); set32(c.r[5], c.r[29].w[0] + 196u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F143Cu) [[unlikely]] return; }
L_002F143C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F144Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F144Cu) [[unlikely]] return; }
L_002F144C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F14A8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1478u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F1478u) [[unlikely]] return; }
L_002F1478:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1488u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F1488u) [[unlikely]] return; }
L_002F1488:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F14A8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F14A8u); set32(c.r[5], c.r[29].w[0] + 196u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F14A8u) [[unlikely]] return; }
L_002F14A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27242u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F14C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F14CC; } }
L_002F14C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F14CCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F14CCu) [[unlikely]] return; }
L_002F14CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F14DCu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002F14DCu) [[unlikely]] return; }
L_002F14DC:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F153C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F150Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F150Cu) [[unlikely]] return; }
L_002F150C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F151Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F151Cu) [[unlikely]] return; }
L_002F151C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F153C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F153Cu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F153Cu) [[unlikely]] return; }
L_002F153C:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_002F1918; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26329u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F1560; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F1568; } }
L_002F1560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1568u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F1568u) [[unlikely]] return; }
L_002F1568:
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1580u); set32(c.r[5], c.r[29].w[0] + 188u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1580u) [[unlikely]] return; }
L_002F1580:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002F15E4; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F15B0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F15B0u) [[unlikely]] return; }
L_002F15B0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F15C0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F15C0u) [[unlikely]] return; }
L_002F15C0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F15E0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F15E0u); set32(c.r[5], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F15E0u) [[unlikely]] return; }
L_002F15E0:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002F15E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F15ECu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F15ECu) [[unlikely]] return; }
L_002F15EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27908u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F1608; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F1610; } }
L_002F1608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1610u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F1610u) [[unlikely]] return; }
L_002F1610:
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1624u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F1624u) [[unlikely]] return; }
L_002F1624:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1634u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F1634u) [[unlikely]] return; }
L_002F1634:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1690; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1660u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F1660u) [[unlikely]] return; }
L_002F1660:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1670u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F1670u) [[unlikely]] return; }
L_002F1670:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F1690; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1690u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F1690u) [[unlikely]] return; }
L_002F1690:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26554u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F16AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F16B4; } }
L_002F16AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F16B4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F16B4u) [[unlikely]] return; }
L_002F16B4:
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F16C8u); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F16C8u) [[unlikely]] return; }
L_002F16C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F16D8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F16D8u) [[unlikely]] return; }
L_002F16D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1734; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1704u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F1704u) [[unlikely]] return; }
L_002F1704:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1714u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F1714u) [[unlikely]] return; }
L_002F1714:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F1734; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1734u); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F1734u) [[unlikely]] return; }
L_002F1734:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26540u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F1750; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F1758; } }
L_002F1750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1758u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F1758u) [[unlikely]] return; }
L_002F1758:
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F176Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F176Cu) [[unlikely]] return; }
L_002F176C:
    set32(c.r[5], ld32((c.r[29].w[0] + 164u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F177Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F177Cu) [[unlikely]] return; }
L_002F177C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F17D8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F17A8u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F17A8u) [[unlikely]] return; }
L_002F17A8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F17B8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F17B8u) [[unlikely]] return; }
L_002F17B8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F17D8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F17D8u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F17D8u) [[unlikely]] return; }
L_002F17D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26524u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F17F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F17FC; } }
L_002F17F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F17FCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F17FCu) [[unlikely]] return; }
L_002F17FC:
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1810u); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F1810u) [[unlikely]] return; }
L_002F1810:
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1820u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F1820u) [[unlikely]] return; }
L_002F1820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F187C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F184Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F184Cu) [[unlikely]] return; }
L_002F184C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F185Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F185Cu) [[unlikely]] return; }
L_002F185C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F187C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F187Cu); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F187Cu) [[unlikely]] return; }
L_002F187C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27899u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F1898; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F18A0; } }
L_002F1898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F18A0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F18A0u) [[unlikely]] return; }
L_002F18A0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F18B0u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002F18B0u) [[unlikely]] return; }
L_002F18B0:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1914; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F18E4u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F18E4u) [[unlikely]] return; }
L_002F18E4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F18F4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F18F4u) [[unlikely]] return; }
L_002F18F4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F1914; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1914u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F1914u) [[unlikely]] return; }
L_002F1914:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_002F1918:
    set32(c.r[2], 0u + 1u);
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002F1950:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[6].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002F1DA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26314u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F19AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F19B4; } }
L_002F19AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F19B4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F19B4u) [[unlikely]] return; }
L_002F19B4:
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F19CCu); set32(c.r[5], c.r[29].w[0] + 188u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F19CCu) [[unlikely]] return; }
L_002F19CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1A2C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F19FCu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F19FCu) [[unlikely]] return; }
L_002F19FC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A0Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F1A0Cu) [[unlikely]] return; }
L_002F1A0C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F1A2C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A2Cu); set32(c.r[5], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F1A2Cu) [[unlikely]] return; }
L_002F1A2C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002F1A3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2060; } }
L_002F1A3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A44u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F1A44u) [[unlikely]] return; }
L_002F1A44:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A68u); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1A68u) [[unlikely]] return; }
L_002F1A68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26281u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F1A84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F1A8C; } }
L_002F1A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A8Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F1A8Cu) [[unlikely]] return; }
L_002F1A8C:
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1AA0u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F1AA0u) [[unlikely]] return; }
L_002F1AA0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1AB0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F1AB0u) [[unlikely]] return; }
L_002F1AB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002F1B10; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1ADCu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F1ADCu) [[unlikely]] return; }
L_002F1ADC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1AECu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F1AECu) [[unlikely]] return; }
L_002F1AEC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F1B0C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1B0Cu); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F1B0Cu) [[unlikely]] return; }
L_002F1B0C:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002F1B10:
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], 0u + 4u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1B30u); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1B30u) [[unlikely]] return; }
L_002F1B30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26267u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F1B4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F1B54; } }
L_002F1B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1B54u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F1B54u) [[unlikely]] return; }
L_002F1B54:
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1B68u); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F1B68u) [[unlikely]] return; }
L_002F1B68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1B78u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F1B78u) [[unlikely]] return; }
L_002F1B78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1BD4; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1BA4u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F1BA4u) [[unlikely]] return; }
L_002F1BA4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1BB4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F1BB4u) [[unlikely]] return; }
L_002F1BB4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F1BD4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1BD4u); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F1BD4u) [[unlikely]] return; }
L_002F1BD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26253u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F1BF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F1BF8; } }
L_002F1BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1BF8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F1BF8u) [[unlikely]] return; }
L_002F1BF8:
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C0Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F1C0Cu) [[unlikely]] return; }
L_002F1C0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C1Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F1C1Cu) [[unlikely]] return; }
L_002F1C1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1C78; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C48u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F1C48u) [[unlikely]] return; }
L_002F1C48:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C58u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F1C58u) [[unlikely]] return; }
L_002F1C58:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F1C78; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C78u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F1C78u) [[unlikely]] return; }
L_002F1C78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26239u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F1C94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F1C9C; } }
L_002F1C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C9Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F1C9Cu) [[unlikely]] return; }
L_002F1C9C:
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1CACu); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002F1CACu) [[unlikely]] return; }
L_002F1CAC:
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1D0C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1CDCu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F1CDCu) [[unlikely]] return; }
L_002F1CDC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1CECu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F1CECu) [[unlikely]] return; }
L_002F1CEC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F1D0C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D0Cu); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F1D0Cu) [[unlikely]] return; }
L_002F1D0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26231u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F1D28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F1D30; } }
L_002F1D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D30u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F1D30u) [[unlikely]] return; }
L_002F1D30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D40u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002F1D40u) [[unlikely]] return; }
L_002F1D40:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002F2060; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D70u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F1D70u) [[unlikely]] return; }
L_002F1D70:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D80u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F1D80u) [[unlikely]] return; }
L_002F1D80:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F205C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1DA0u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F1DA0u) [[unlikely]] return; }
L_002F1DA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F205C; } }
L_002F1DA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26223u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F1DC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F1DCC; } }
L_002F1DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1DCCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F1DCCu) [[unlikely]] return; }
L_002F1DCC:
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1DE4u); set32(c.r[5], c.r[29].w[0] + 164u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1DE4u) [[unlikely]] return; }
L_002F1DE4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1E44; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E14u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F1E14u) [[unlikely]] return; }
L_002F1E14:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E24u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F1E24u) [[unlikely]] return; }
L_002F1E24:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F1E44; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E44u); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F1E44u) [[unlikely]] return; }
L_002F1E44:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002F1E54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2060; } }
L_002F1E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E5Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F1E5Cu) [[unlikely]] return; }
L_002F1E5C:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 9u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E80u); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1E80u) [[unlikely]] return; }
L_002F1E80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26196u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F1E9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F1EA4; } }
L_002F1E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1EA4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F1EA4u) [[unlikely]] return; }
L_002F1EA4:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1EB8u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F1EB8u) [[unlikely]] return; }
L_002F1EB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1EC8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F1EC8u) [[unlikely]] return; }
L_002F1EC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1F24; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1EF4u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F1EF4u) [[unlikely]] return; }
L_002F1EF4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1F04u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F1F04u) [[unlikely]] return; }
L_002F1F04:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F1F24; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1F24u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F1F24u) [[unlikely]] return; }
L_002F1F24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26253u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F1F40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F1F48; } }
L_002F1F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1F48u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F1F48u) [[unlikely]] return; }
L_002F1F48:
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1F5Cu); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F1F5Cu) [[unlikely]] return; }
L_002F1F5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1F6Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F1F6Cu) [[unlikely]] return; }
L_002F1F6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1FC8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1F98u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F1F98u) [[unlikely]] return; }
L_002F1F98:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1FA8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F1FA8u) [[unlikely]] return; }
L_002F1FA8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F1FC8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1FC8u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F1FC8u) [[unlikely]] return; }
L_002F1FC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26231u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F1FE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F1FEC; } }
L_002F1FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1FECu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F1FECu) [[unlikely]] return; }
L_002F1FEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1FFCu); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002F1FFCu) [[unlikely]] return; }
L_002F1FFC:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F205C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F202Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F202Cu) [[unlikely]] return; }
L_002F202C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F203Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F203Cu) [[unlikely]] return; }
L_002F203C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F205C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F205Cu); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F205Cu) [[unlikely]] return; }
L_002F205C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002F2060:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002F2090:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002F20A0:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[7].w[0]), 0u);
    c.budget -= 16;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[8].w[0]), 0u);  if (t) { goto L_002F2628; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26181u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F20FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F2104; } }
L_002F20FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2104u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F2104u) [[unlikely]] return; }
L_002F2104:
    st32((c.r[29].w[0] + 348u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F211Cu); set32(c.r[5], c.r[29].w[0] + 348u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F211Cu) [[unlikely]] return; }
L_002F211C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 348u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002F2180; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F214Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F214Cu) [[unlikely]] return; }
L_002F214C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F215Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F215Cu) [[unlikely]] return; }
L_002F215C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F217C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F217Cu); set32(c.r[5], c.r[29].w[0] + 348u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F217Cu) [[unlikely]] return; }
L_002F217C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002F2180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2188u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F2188u) [[unlikely]] return; }
L_002F2188:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F21A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F21AC; } }
L_002F21A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F21ACu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F21ACu) [[unlikely]] return; }
L_002F21AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26163u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 344u), c.r[2].w[0]);  if (t) { goto L_002F21C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F21D0; } }
L_002F21C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F21D0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F21D0u) [[unlikely]] return; }
L_002F21D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26154u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 340u), c.r[2].w[0]);  if (t) { goto L_002F21EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F21F4; } }
L_002F21EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F21F4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F21F4u) [[unlikely]] return; }
L_002F21F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26163u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 336u), c.r[2].w[0]);  if (t) { goto L_002F2210; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F2218; } }
L_002F2210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2218u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F2218u) [[unlikely]] return; }
L_002F2218:
    st32((c.r[29].w[0] + 332u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 344u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 340u);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 336u);
    set32(c.r[8], c.r[29].w[0] + 332u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2244u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F2244u) [[unlikely]] return; }
L_002F2244:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 332u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F22A0; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2270u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F2270u) [[unlikely]] return; }
L_002F2270:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2280u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F2280u) [[unlikely]] return; }
L_002F2280:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F22A0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F22A0u); set32(c.r[5], c.r[29].w[0] + 332u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F22A0u) [[unlikely]] return; }
L_002F22A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F22FC; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F22CCu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F22CCu) [[unlikely]] return; }
L_002F22CC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F22DCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F22DCu) [[unlikely]] return; }
L_002F22DC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F22FC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F22FCu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F22FCu) [[unlikely]] return; }
L_002F22FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 340u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F2358; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2328u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F2328u) [[unlikely]] return; }
L_002F2328:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2338u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F2338u) [[unlikely]] return; }
L_002F2338:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F2358; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2358u); set32(c.r[5], c.r[29].w[0] + 340u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F2358u) [[unlikely]] return; }
L_002F2358:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 344u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002F23B8; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2384u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F2384u) [[unlikely]] return; }
L_002F2384:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2394u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F2394u) [[unlikely]] return; }
L_002F2394:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F23B4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F23B4u); set32(c.r[5], c.r[29].w[0] + 344u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F23B4u) [[unlikely]] return; }
L_002F23B4:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002F23B8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 5u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F23D8u); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F23D8u) [[unlikely]] return; }
L_002F23D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26163u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_002F23F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F23FC; } }
L_002F23F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F23FCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F23FCu) [[unlikely]] return; }
L_002F23FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26163u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 328u), c.r[2].w[0]);  if (t) { goto L_002F2418; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F2420; } }
L_002F2418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2420u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F2420u) [[unlikely]] return; }
L_002F2420:
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 328u);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[7], c.r[29].w[0] + 324u);
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F243Cu); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 195u, depth + 1u); else { c.pc = 0x002B1440u; return; } if (c.pc != 0x002F243Cu) [[unlikely]] return; }
L_002F243C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F2498; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2468u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F2468u) [[unlikely]] return; }
L_002F2468:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2478u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F2478u) [[unlikely]] return; }
L_002F2478:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F2498; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2498u); set32(c.r[5], c.r[29].w[0] + 324u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F2498u) [[unlikely]] return; }
L_002F2498:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F24F4; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F24C4u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F24C4u) [[unlikely]] return; }
L_002F24C4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F24D4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F24D4u) [[unlikely]] return; }
L_002F24D4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F24F4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F24F4u); set32(c.r[5], c.r[29].w[0] + 328u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F24F4u) [[unlikely]] return; }
L_002F24F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26148u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F2510; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F2518; } }
L_002F2510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2518u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F2518u) [[unlikely]] return; }
L_002F2518:
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 320u);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2530u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B1320u; return; } if (c.pc != 0x002F2530u) [[unlikely]] return; }
L_002F2530:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F258C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F255Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F255Cu) [[unlikely]] return; }
L_002F255C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F256Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F256Cu) [[unlikely]] return; }
L_002F256C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F258C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F258Cu); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F258Cu) [[unlikely]] return; }
L_002F258C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27491u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F25A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F25B0; } }
L_002F25A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F25B0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F25B0u) [[unlikely]] return; }
L_002F25B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F25C0u); set32(c.r[5], c.r[29].w[0] + 316u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002F25C0u) [[unlikely]] return; }
L_002F25C0:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_002F3D48; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F25F0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F25F0u) [[unlikely]] return; }
L_002F25F0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2600u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F2600u) [[unlikely]] return; }
L_002F2600:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3D44; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2620u); set32(c.r[5], c.r[29].w[0] + 316u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F2620u) [[unlikely]] return; }
L_002F2620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3D44; } }
L_002F2628:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_002F3360; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26142u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F2650; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F2658; } }
L_002F2650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2658u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F2658u) [[unlikely]] return; }
L_002F2658:
    st32((c.r[29].w[0] + 312u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2670u); set32(c.r[5], c.r[29].w[0] + 312u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2670u) [[unlikely]] return; }
L_002F2670:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002F26D4; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F26A0u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F26A0u) [[unlikely]] return; }
L_002F26A0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F26B0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F26B0u) [[unlikely]] return; }
L_002F26B0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F26D0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F26D0u); set32(c.r[5], c.r[29].w[0] + 312u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F26D0u) [[unlikely]] return; }
L_002F26D0:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002F26D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F26DCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F26DCu) [[unlikely]] return; }
L_002F26DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F26F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F2700; } }
L_002F26F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2700u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F2700u) [[unlikely]] return; }
L_002F2700:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26163u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 308u), c.r[2].w[0]);  if (t) { goto L_002F271C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F2724; } }
L_002F271C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2724u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F2724u) [[unlikely]] return; }
L_002F2724:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26154u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 304u), c.r[2].w[0]);  if (t) { goto L_002F2740; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F2748; } }
L_002F2740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2748u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F2748u) [[unlikely]] return; }
L_002F2748:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26163u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 300u), c.r[2].w[0]);  if (t) { goto L_002F2764; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F276C; } }
L_002F2764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F276Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F276Cu) [[unlikely]] return; }
L_002F276C:
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 308u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 304u);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 300u);
    set32(c.r[8], c.r[29].w[0] + 296u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2798u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F2798u) [[unlikely]] return; }
L_002F2798:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F27F4; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F27C4u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F27C4u) [[unlikely]] return; }
L_002F27C4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F27D4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F27D4u) [[unlikely]] return; }
L_002F27D4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F27F4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F27F4u); set32(c.r[5], c.r[29].w[0] + 296u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F27F4u) [[unlikely]] return; }
L_002F27F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F2850; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2820u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F2820u) [[unlikely]] return; }
L_002F2820:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2830u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F2830u) [[unlikely]] return; }
L_002F2830:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F2850; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2850u); set32(c.r[5], c.r[29].w[0] + 300u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F2850u) [[unlikely]] return; }
L_002F2850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F28AC; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F287Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F287Cu) [[unlikely]] return; }
L_002F287C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F288Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F288Cu) [[unlikely]] return; }
L_002F288C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F28AC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F28ACu); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F28ACu) [[unlikely]] return; }
L_002F28AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F2908; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.budget -= 3;
L_002F28CC:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F28D8u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F28D8u) [[unlikely]] return; }
L_002F28D8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F28E8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F28E8u) [[unlikely]] return; }
L_002F28E8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F2908; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2908u); set32(c.r[5], c.r[29].w[0] + 308u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F2908u) [[unlikely]] return; }
L_002F2908:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28421u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F2924; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F292C; } }
L_002F2924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F292Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F292Cu) [[unlikely]] return; }
L_002F292C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26117u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 292u), c.r[2].w[0]);  if (t) { goto L_002F2948; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F2950; } }
L_002F2948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2950u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F2950u) [[unlikely]] return; }
L_002F2950:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26154u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 288u), c.r[2].w[0]);  if (t) { goto L_002F296C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F2974; } }
L_002F296C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2974u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F2974u) [[unlikely]] return; }
L_002F2974:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26105u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 284u), c.r[2].w[0]);  if (t) { goto L_002F2990; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F2998; } }
L_002F2990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2998u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F2998u) [[unlikely]] return; }
L_002F2998:
    st32((c.r[29].w[0] + 280u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 292u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 288u);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 284u);
    set32(c.r[8], c.r[29].w[0] + 280u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F29C4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F29C4u) [[unlikely]] return; }
L_002F29C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F2A20; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F29F0u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F29F0u) [[unlikely]] return; }
L_002F29F0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2A00u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F2A00u) [[unlikely]] return; }
L_002F2A00:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F2A20; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2A20u); set32(c.r[5], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F2A20u) [[unlikely]] return; }
L_002F2A20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F2A7C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2A4Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F2A4Cu) [[unlikely]] return; }
L_002F2A4C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2A5Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F2A5Cu) [[unlikely]] return; }
L_002F2A5C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F2A7C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2A7Cu); set32(c.r[5], c.r[29].w[0] + 284u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F2A7Cu) [[unlikely]] return; }
L_002F2A7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F2AD8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2AA8u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F2AA8u) [[unlikely]] return; }
L_002F2AA8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2AB8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F2AB8u) [[unlikely]] return; }
L_002F2AB8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F2AD8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2AD8u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F2AD8u) [[unlikely]] return; }
L_002F2AD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F2B34; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2B04u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F2B04u) [[unlikely]] return; }
L_002F2B04:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2B14u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F2B14u) [[unlikely]] return; }
L_002F2B14:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F2B34; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2B34u); set32(c.r[5], c.r[29].w[0] + 292u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F2B34u) [[unlikely]] return; }
L_002F2B34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26092u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F2B50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F2B58; } }
L_002F2B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2B58u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F2B58u) [[unlikely]] return; }
L_002F2B58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26087u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 276u), c.r[2].w[0]);  if (t) { goto L_002F2B74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F2B7C; } }
L_002F2B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2B7Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F2B7Cu) [[unlikely]] return; }
L_002F2B7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26154u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_002F2B98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F2BA0; } }
L_002F2B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2BA0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F2BA0u) [[unlikely]] return; }
L_002F2BA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26087u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 268u), c.r[2].w[0]);  if (t) { goto L_002F2BBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F2BC4; } }
L_002F2BBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2BC4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F2BC4u) [[unlikely]] return; }
L_002F2BC4:
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 276u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 272u);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 268u);
    set32(c.r[8], c.r[29].w[0] + 264u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2BF0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F2BF0u) [[unlikely]] return; }
L_002F2BF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F2C4C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C1Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F2C1Cu) [[unlikely]] return; }
L_002F2C1C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C2Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F2C2Cu) [[unlikely]] return; }
L_002F2C2C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F2C4C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C4Cu); set32(c.r[5], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F2C4Cu) [[unlikely]] return; }
L_002F2C4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F2CA8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C78u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F2C78u) [[unlikely]] return; }
L_002F2C78:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C88u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F2C88u) [[unlikely]] return; }
L_002F2C88:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F2CA8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2CA8u); set32(c.r[5], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F2CA8u) [[unlikely]] return; }
L_002F2CA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F2D04; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2CD4u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F2CD4u) [[unlikely]] return; }
L_002F2CD4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2CE4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F2CE4u) [[unlikely]] return; }
L_002F2CE4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F2D04; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2D04u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F2D04u) [[unlikely]] return; }
L_002F2D04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002F2D64; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2D30u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F2D30u) [[unlikely]] return; }
L_002F2D30:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2D40u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F2D40u) [[unlikely]] return; }
L_002F2D40:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F2D60; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2D60u); set32(c.r[5], c.r[29].w[0] + 276u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F2D60u) [[unlikely]] return; }
L_002F2D60:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002F2D64:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 33u);
    set32(c.r[7], 0u + 3u);
    set32(c.r[8], 0u + 30u);
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2D84u); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2D84u) [[unlikely]] return; }
L_002F2D84:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    set32(c.r[8], 0u + 1u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2DACu); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2DACu) [[unlikely]] return; }
L_002F2DAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26163u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_002F2DC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F2DD0; } }
L_002F2DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2DD0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F2DD0u) [[unlikely]] return; }
L_002F2DD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26163u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 260u), c.r[2].w[0]);  if (t) { goto L_002F2DEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F2DF4; } }
L_002F2DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2DF4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F2DF4u) [[unlikely]] return; }
L_002F2DF4:
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 260u);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[7], c.r[29].w[0] + 256u);
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2E10u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 195u, depth + 1u); else { c.pc = 0x002B1440u; return; } if (c.pc != 0x002F2E10u) [[unlikely]] return; }
L_002F2E10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F2E6C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2E3Cu); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F2E3Cu) [[unlikely]] return; }
L_002F2E3C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2E4Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F2E4Cu) [[unlikely]] return; }
L_002F2E4C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F2E6C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2E6Cu); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F2E6Cu) [[unlikely]] return; }
L_002F2E6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F2EC8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2E98u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F2E98u) [[unlikely]] return; }
L_002F2E98:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2EA8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F2EA8u) [[unlikely]] return; }
L_002F2EA8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F2EC8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2EC8u); set32(c.r[5], c.r[29].w[0] + 260u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F2EC8u) [[unlikely]] return; }
L_002F2EC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26105u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F2EE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F2EEC; } }
L_002F2EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2EECu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F2EECu) [[unlikely]] return; }
L_002F2EEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26105u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_002F2F08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F2F10; } }
L_002F2F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2F10u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F2F10u) [[unlikely]] return; }
L_002F2F10:
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 252u);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[7], c.r[29].w[0] + 248u);
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2F2Cu); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 195u, depth + 1u); else { c.pc = 0x002B1440u; return; } if (c.pc != 0x002F2F2Cu) [[unlikely]] return; }
L_002F2F2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F2F88; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2F58u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F2F58u) [[unlikely]] return; }
L_002F2F58:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2F68u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F2F68u) [[unlikely]] return; }
L_002F2F68:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F2F88; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2F88u); set32(c.r[5], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F2F88u) [[unlikely]] return; }
L_002F2F88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F2FE4; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FB4u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F2FB4u) [[unlikely]] return; }
L_002F2FB4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FC4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F2FC4u) [[unlikely]] return; }
L_002F2FC4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F2FE4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FE4u); set32(c.r[5], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F2FE4u) [[unlikely]] return; }
L_002F2FE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26087u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F3000; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F3008; } }
L_002F3000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3008u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F3008u) [[unlikely]] return; }
L_002F3008:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26087u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 244u), c.r[2].w[0]);  if (t) { goto L_002F3024; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F302C; } }
L_002F3024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F302Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F302Cu) [[unlikely]] return; }
L_002F302C:
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 244u);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[7], c.r[29].w[0] + 240u);
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3048u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 195u, depth + 1u); else { c.pc = 0x002B1440u; return; } if (c.pc != 0x002F3048u) [[unlikely]] return; }
L_002F3048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F30A4; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3074u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F3074u) [[unlikely]] return; }
L_002F3074:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3084u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F3084u) [[unlikely]] return; }
L_002F3084:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F30A4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F30A4u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F30A4u) [[unlikely]] return; }
L_002F30A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3100; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F30D0u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F30D0u) [[unlikely]] return; }
L_002F30D0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F30E0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F30E0u) [[unlikely]] return; }
L_002F30E0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3100; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3100u); set32(c.r[5], c.r[29].w[0] + 244u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F3100u) [[unlikely]] return; }
L_002F3100:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26074u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F311C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F3124; } }
L_002F311C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3124u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F3124u) [[unlikely]] return; }
L_002F3124:
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[6], c.r[29].w[0] + 236u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F313Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B1320u; return; } if (c.pc != 0x002F313Cu) [[unlikely]] return; }
L_002F313C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3198; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3168u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F3168u) [[unlikely]] return; }
L_002F3168:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3178u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F3178u) [[unlikely]] return; }
L_002F3178:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3198; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3198u); set32(c.r[5], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F3198u) [[unlikely]] return; }
L_002F3198:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26068u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F31B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F31BC; } }
L_002F31B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F31BCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F31BCu) [[unlikely]] return; }
L_002F31BC:
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 232u);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F31D4u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B1320u; return; } if (c.pc != 0x002F31D4u) [[unlikely]] return; }
L_002F31D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3230; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3200u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F3200u) [[unlikely]] return; }
L_002F3200:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3210u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F3210u) [[unlikely]] return; }
L_002F3210:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3230; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3230u); set32(c.r[5], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F3230u) [[unlikely]] return; }
L_002F3230:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27491u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F324C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F3254; } }
L_002F324C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3254u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F3254u) [[unlikely]] return; }
L_002F3254:
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3264u); set32(c.r[5], c.r[29].w[0] + 228u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002F3264u) [[unlikely]] return; }
L_002F3264:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F32C4; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3294u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F3294u) [[unlikely]] return; }
L_002F3294:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F32A4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F32A4u) [[unlikely]] return; }
L_002F32A4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F32C4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F32C4u); set32(c.r[5], c.r[29].w[0] + 228u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F32C4u) [[unlikely]] return; }
L_002F32C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26047u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F32E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F32E8; } }
L_002F32E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F32E8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F32E8u) [[unlikely]] return; }
L_002F32E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F32F8u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002F32F8u) [[unlikely]] return; }
L_002F32F8:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3D44; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 2;
L_002F3318:
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3328u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F3328u) [[unlikely]] return; }
L_002F3328:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3338u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F3338u) [[unlikely]] return; }
L_002F3338:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3D44; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3358u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F3358u) [[unlikely]] return; }
L_002F3358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3D44; } }
L_002F3360:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_002F3D44; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26029u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F3384; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F338C; } }
L_002F3384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F338Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F338Cu) [[unlikely]] return; }
L_002F338C:
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F33A4u); set32(c.r[5], c.r[29].w[0] + 220u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F33A4u) [[unlikely]] return; }
L_002F33A4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002F3408; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F33D4u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F33D4u) [[unlikely]] return; }
L_002F33D4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F33E4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F33E4u) [[unlikely]] return; }
L_002F33E4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3404; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3404u); set32(c.r[5], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F3404u) [[unlikely]] return; }
L_002F3404:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002F3408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3410u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F3410u) [[unlikely]] return; }
L_002F3410:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F342C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F3434; } }
L_002F342C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3434u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F3434u) [[unlikely]] return; }
L_002F3434:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26163u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 216u), c.r[2].w[0]);  if (t) { goto L_002F3450; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F3458; } }
L_002F3450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3458u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F3458u) [[unlikely]] return; }
L_002F3458:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26154u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 212u), c.r[2].w[0]);  if (t) { goto L_002F3474; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F347C; } }
L_002F3474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F347Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F347Cu) [[unlikely]] return; }
L_002F347C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26163u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (t) { goto L_002F3498; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F34A0; } }
L_002F3498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F34A0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F34A0u) [[unlikely]] return; }
L_002F34A0:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 216u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 212u);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 208u);
    set32(c.r[8], c.r[29].w[0] + 204u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F34CCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F34CCu) [[unlikely]] return; }
L_002F34CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3528; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F34F8u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F34F8u) [[unlikely]] return; }
L_002F34F8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3508u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F3508u) [[unlikely]] return; }
L_002F3508:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3528; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3528u); set32(c.r[5], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F3528u) [[unlikely]] return; }
L_002F3528:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3584; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3554u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F3554u) [[unlikely]] return; }
L_002F3554:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3564u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F3564u) [[unlikely]] return; }
L_002F3564:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3584; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3584u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F3584u) [[unlikely]] return; }
L_002F3584:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F35E0; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F35B0u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F35B0u) [[unlikely]] return; }
L_002F35B0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F35C0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F35C0u) [[unlikely]] return; }
L_002F35C0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F35E0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F35E0u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F35E0u) [[unlikely]] return; }
L_002F35E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F363C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F360Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F360Cu) [[unlikely]] return; }
L_002F360C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F361Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F361Cu) [[unlikely]] return; }
L_002F361C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F363C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F363Cu); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F363Cu) [[unlikely]] return; }
L_002F363C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28421u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F3658; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F3660; } }
L_002F3658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3660u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F3660u) [[unlikely]] return; }
L_002F3660:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26117u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 200u), c.r[2].w[0]);  if (t) { goto L_002F367C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F3684; } }
L_002F367C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3684u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F3684u) [[unlikely]] return; }
L_002F3684:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26154u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 196u), c.r[2].w[0]);  if (t) { goto L_002F36A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F36A8; } }
L_002F36A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F36A8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F36A8u) [[unlikely]] return; }
L_002F36A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26105u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_002F36C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F36CC; } }
L_002F36C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F36CCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F36CCu) [[unlikely]] return; }
L_002F36CC:
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 200u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 196u);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 192u);
    set32(c.r[8], c.r[29].w[0] + 188u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F36F8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F36F8u) [[unlikely]] return; }
L_002F36F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3754; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3724u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F3724u) [[unlikely]] return; }
L_002F3724:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3734u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F3734u) [[unlikely]] return; }
L_002F3734:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3754; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3754u); set32(c.r[5], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F3754u) [[unlikely]] return; }
L_002F3754:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F37B0; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3780u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F3780u) [[unlikely]] return; }
L_002F3780:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3790u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F3790u) [[unlikely]] return; }
L_002F3790:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F37B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F37B0u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F37B0u) [[unlikely]] return; }
L_002F37B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F380C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F37DCu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F37DCu) [[unlikely]] return; }
L_002F37DC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F37ECu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F37ECu) [[unlikely]] return; }
L_002F37EC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F380C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F380Cu); set32(c.r[5], c.r[29].w[0] + 196u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F380Cu) [[unlikely]] return; }
L_002F380C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002F386C; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3838u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F3838u) [[unlikely]] return; }
L_002F3838:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3848u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F3848u) [[unlikely]] return; }
L_002F3848:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3868; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3868u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F3868u) [[unlikely]] return; }
L_002F3868:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002F386C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 33u);
    set32(c.r[7], 0u + 3u);
    set32(c.r[8], 0u + 4u);
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F388Cu); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F388Cu) [[unlikely]] return; }
L_002F388C:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    set32(c.r[8], 0u + 1u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F38B4u); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F38B4u) [[unlikely]] return; }
L_002F38B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26163u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_002F38D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F38D8; } }
L_002F38D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F38D8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F38D8u) [[unlikely]] return; }
L_002F38D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26163u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 184u), c.r[2].w[0]);  if (t) { goto L_002F38F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F38FC; } }
L_002F38F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F38FCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F38FCu) [[unlikely]] return; }
L_002F38FC:
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 184u);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[7], c.r[29].w[0] + 180u);
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3918u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 195u, depth + 1u); else { c.pc = 0x002B1440u; return; } if (c.pc != 0x002F3918u) [[unlikely]] return; }
L_002F3918:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3974; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3944u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F3944u) [[unlikely]] return; }
L_002F3944:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3954u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F3954u) [[unlikely]] return; }
L_002F3954:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3974; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3974u); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F3974u) [[unlikely]] return; }
L_002F3974:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F39D0; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F39A0u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F39A0u) [[unlikely]] return; }
L_002F39A0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F39B0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F39B0u) [[unlikely]] return; }
L_002F39B0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F39D0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F39D0u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F39D0u) [[unlikely]] return; }
L_002F39D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26105u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F39EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F39F4; } }
L_002F39EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F39F4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F39F4u) [[unlikely]] return; }
L_002F39F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26105u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_002F3A10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F3A18; } }
L_002F3A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3A18u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F3A18u) [[unlikely]] return; }
L_002F3A18:
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[7], c.r[29].w[0] + 172u);
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3A34u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 195u, depth + 1u); else { c.pc = 0x002B1440u; return; } if (c.pc != 0x002F3A34u) [[unlikely]] return; }
L_002F3A34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3A90; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3A60u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F3A60u) [[unlikely]] return; }
L_002F3A60:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3A70u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F3A70u) [[unlikely]] return; }
L_002F3A70:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3A90; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3A90u); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F3A90u) [[unlikely]] return; }
L_002F3A90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3AEC; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3ABCu); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F3ABCu) [[unlikely]] return; }
L_002F3ABC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3ACCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F3ACCu) [[unlikely]] return; }
L_002F3ACC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3AEC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3AECu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F3AECu) [[unlikely]] return; }
L_002F3AEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26074u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F3B08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F3B10; } }
L_002F3B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3B10u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F3B10u) [[unlikely]] return; }
L_002F3B10:
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[6], c.r[29].w[0] + 168u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3B28u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B1320u; return; } if (c.pc != 0x002F3B28u) [[unlikely]] return; }
L_002F3B28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3B84; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3B54u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F3B54u) [[unlikely]] return; }
L_002F3B54:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3B64u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F3B64u) [[unlikely]] return; }
L_002F3B64:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3B84; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3B84u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F3B84u) [[unlikely]] return; }
L_002F3B84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26068u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F3BA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F3BA8; } }
L_002F3BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3BA8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F3BA8u) [[unlikely]] return; }
L_002F3BA8:
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 164u);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3BC0u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B1320u; return; } if (c.pc != 0x002F3BC0u) [[unlikely]] return; }
L_002F3BC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3C1C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3BECu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F3BECu) [[unlikely]] return; }
L_002F3BEC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3BFCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F3BFCu) [[unlikely]] return; }
L_002F3BFC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3C1C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3C1Cu); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F3C1Cu) [[unlikely]] return; }
L_002F3C1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27491u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F3C38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F3C40; } }
L_002F3C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3C40u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F3C40u) [[unlikely]] return; }
L_002F3C40:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3C50u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002F3C50u) [[unlikely]] return; }
L_002F3C50:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3CB0; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3C80u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F3C80u) [[unlikely]] return; }
L_002F3C80:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3C90u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F3C90u) [[unlikely]] return; }
L_002F3C90:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3CB0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3CB0u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F3CB0u) [[unlikely]] return; }
L_002F3CB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26047u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F3CCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F3CD4; } }
L_002F3CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3CD4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F3CD4u) [[unlikely]] return; }
L_002F3CD4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3CE4u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002F3CE4u) [[unlikely]] return; }
L_002F3CE4:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3D44; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3D14u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F3D14u) [[unlikely]] return; }
L_002F3D14:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3D24u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F3D24u) [[unlikely]] return; }
L_002F3D24:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3D44; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3D44u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F3D44u) [[unlikely]] return; }
L_002F3D44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_002F3D48:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_002F3D70:
    set32(c.r[29], c.r[29].w[0] - 304u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[8].w[0]), 0u);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[9].w[0]), 0u);
    st32((c.r[29].w[0] + 188u), c.r[9].w[0]);
    st32((c.r[10].w[0]), 0u);
    c.budget -= 22;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 184u), c.r[10].w[0]);  if (t) { [[clang::musttail]] return unit_007D(c, 28u, depth); } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002F3DE4; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  [[clang::musttail]] return unit_007D(c, 126u, depth); }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_007D(c, 125u, depth); } }
L_002F3DE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F3E00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F3E08; } }
L_002F3E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3E08u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F3E08u) [[unlikely]] return; }
L_002F3E08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25995u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 300u), c.r[2].w[0]);  if (t) { goto L_002F3E24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F3E2C; } }
L_002F3E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3E2Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F3E2Cu) [[unlikely]] return; }
L_002F3E2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26154u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 296u), c.r[2].w[0]);  if (t) { goto L_002F3E48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F3E50; } }
L_002F3E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3E50u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F3E50u) [[unlikely]] return; }
L_002F3E50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25995u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 292u), c.r[2].w[0]);  if (t) { goto L_002F3E6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F3E74; } }
L_002F3E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3E74u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F3E74u) [[unlikely]] return; }
L_002F3E74:
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 300u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 296u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 292u);
    set32(c.r[8], c.r[29].w[0] + 288u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3EA0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F3EA0u) [[unlikely]] return; }
L_002F3EA0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3F00; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3ED0u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F3ED0u) [[unlikely]] return; }
L_002F3ED0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3EE0u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F3EE0u) [[unlikely]] return; }
L_002F3EE0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3F00; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3F00u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F3F00u) [[unlikely]] return; }
L_002F3F00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3F5C; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3F2Cu); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F3F2Cu) [[unlikely]] return; }
L_002F3F2C:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3F3Cu); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F3F3Cu) [[unlikely]] return; }
L_002F3F3C:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3F5C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3F5Cu); set32(c.r[5], c.r[29].w[0] + 292u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F3F5Cu) [[unlikely]] return; }
L_002F3F5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3FB8; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3F88u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F3F88u) [[unlikely]] return; }
L_002F3F88:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3F98u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F3F98u) [[unlikely]] return; }
L_002F3F98:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3FB8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3FB8u); set32(c.r[5], c.r[29].w[0] + 296u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F3FB8u) [[unlikely]] return; }
L_002F3FB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_007D(c, 3u, depth); } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3FE4u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F3FE4u) [[unlikely]] return; }
L_002F3FE4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3FF4u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F3FF4u) [[unlikely]] return; }
L_002F3FF4:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_007D(c, 3u, depth); } }
    [[clang::musttail]] return unit_007D(c, 2u, depth);
}

}
