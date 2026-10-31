#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007D[4096] = {
    1, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38,
    0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0,
    0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0,
    0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0,
    0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0,
    105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0,
    0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0,
    0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0,
    0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0,
    0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0,
    0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0,
    0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0,
    0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0,
    0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261,
    0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290,
    0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0,
    0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0,
    325, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329,
    0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 335, 0, 0,
    0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339,
    0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0,
    0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 357, 0, 358, 0, 359, 0, 360, 0, 361, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0,
    0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376,
    0, 377, 0, 378, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 387, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 396, 0, 397, 0, 398, 0, 0, 0, 0, 0,
    399, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 412, 0, 413, 0, 414, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 421, 0, 422, 0, 423, 0, 0, 0, 0, 0,
    424, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0,
    0, 0, 432, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 443, 0, 444, 0, 445, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0,
    0, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 459, 0, 460, 0, 461, 0, 462, 0, 0, 0, 0, 0, 463, 0,
    0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 474, 0, 0, 475, 0, 476, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 482, 0,
    0, 483, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 490, 0, 0, 491, 0, 492, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 499, 0, 0, 500, 0, 501, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 508, 0, 0, 509, 0,
    0, 510, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0,
    0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 518, 0, 519,
    0, 520, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523,
    0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 527,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 530, 0, 531, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533,
    0, 0, 0, 0, 0, 534, 0, 0, 535, 0, 0, 536, 0, 0, 537, 0, 0, 538, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 543, 0,
};

void unit_007D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002F4000;
    case 2u: goto L_002F4004;
    case 3u: goto L_002F4014;
    case 4u: goto L_002F4038;
    case 5u: goto L_002F404C;
    case 6u: goto L_002F4050;
    case 7u: goto L_002F4080;
    case 8u: goto L_002F4090;
    case 9u: goto L_002F40B0;
    case 10u: goto L_002F40BC;
    case 11u: goto L_002F40E0;
    case 12u: goto L_002F40F4;
    case 13u: goto L_002F4104;
    case 14u: goto L_002F4130;
    case 15u: goto L_002F4140;
    case 16u: goto L_002F4160;
    case 17u: goto L_002F4184;
    case 18u: goto L_002F4198;
    case 19u: goto L_002F41A8;
    case 20u: goto L_002F41D4;
    case 21u: goto L_002F41E4;
    case 22u: goto L_002F4204;
    case 23u: goto L_002F4228;
    case 24u: goto L_002F4238;
    case 25u: goto L_002F4268;
    case 26u: goto L_002F4278;
    case 27u: goto L_002F4298;
    case 28u: goto L_002F42A4;
    case 29u: goto L_002F42C8;
    case 30u: goto L_002F42EC;
    case 31u: goto L_002F4310;
    case 32u: goto L_002F4334;
    case 33u: goto L_002F4360;
    case 34u: goto L_002F4390;
    case 35u: goto L_002F43A0;
    case 36u: goto L_002F43C0;
    case 37u: goto L_002F43EC;
    case 38u: goto L_002F43FC;
    case 39u: goto L_002F441C;
    case 40u: goto L_002F4448;
    case 41u: goto L_002F4458;
    case 42u: goto L_002F4478;
    case 43u: goto L_002F44A4;
    case 44u: goto L_002F44B4;
    case 45u: goto L_002F44D4;
    case 46u: goto L_002F44F8;
    case 47u: goto L_002F451C;
    case 48u: goto L_002F4540;
    case 49u: goto L_002F4564;
    case 50u: goto L_002F4590;
    case 51u: goto L_002F45C0;
    case 52u: goto L_002F45D0;
    case 53u: goto L_002F45F0;
    case 54u: goto L_002F461C;
    case 55u: goto L_002F462C;
    case 56u: goto L_002F464C;
    case 57u: goto L_002F4678;
    case 58u: goto L_002F4688;
    case 59u: goto L_002F46A8;
    case 60u: goto L_002F46D4;
    case 61u: goto L_002F46E4;
    case 62u: goto L_002F4704;
    case 63u: goto L_002F4728;
    case 64u: goto L_002F474C;
    case 65u: goto L_002F4770;
    case 66u: goto L_002F4794;
    case 67u: goto L_002F47C0;
    case 68u: goto L_002F47F0;
    case 69u: goto L_002F4800;
    case 70u: goto L_002F4820;
    case 71u: goto L_002F484C;
    case 72u: goto L_002F485C;
    case 73u: goto L_002F487C;
    case 74u: goto L_002F48A8;
    case 75u: goto L_002F48B8;
    case 76u: goto L_002F48D8;
    case 77u: goto L_002F4904;
    case 78u: goto L_002F4914;
    case 79u: goto L_002F4934;
    case 80u: goto L_002F4958;
    case 81u: goto L_002F4970;
    case 82u: goto L_002F49A0;
    case 83u: goto L_002F49B0;
    case 84u: goto L_002F49D0;
    case 85u: goto L_002F49DC;
    case 86u: goto L_002F4A00;
    case 87u: goto L_002F4A14;
    case 88u: goto L_002F4A24;
    case 89u: goto L_002F4A50;
    case 90u: goto L_002F4A60;
    case 91u: goto L_002F4A80;
    case 92u: goto L_002F4AA4;
    case 93u: goto L_002F4AB8;
    case 94u: goto L_002F4AC8;
    case 95u: goto L_002F4AF4;
    case 96u: goto L_002F4B04;
    case 97u: goto L_002F4B24;
    case 98u: goto L_002F4B48;
    case 99u: goto L_002F4B5C;
    case 100u: goto L_002F4B6C;
    case 101u: goto L_002F4B98;
    case 102u: goto L_002F4BA8;
    case 103u: goto L_002F4BC8;
    case 104u: goto L_002F4BEC;
    case 105u: goto L_002F4C00;
    case 106u: goto L_002F4C10;
    case 107u: goto L_002F4C3C;
    case 108u: goto L_002F4C4C;
    case 109u: goto L_002F4C6C;
    case 110u: goto L_002F4C90;
    case 111u: goto L_002F4CA0;
    case 112u: goto L_002F4CD0;
    case 113u: goto L_002F4CE0;
    case 114u: goto L_002F4D00;
    case 115u: goto L_002F4D24;
    case 116u: goto L_002F4D34;
    case 117u: goto L_002F4D68;
    case 118u: goto L_002F4D78;
    case 119u: goto L_002F4D98;
    case 120u: goto L_002F4DBC;
    case 121u: goto L_002F4DCC;
    case 122u: goto L_002F4E00;
    case 123u: goto L_002F4E10;
    case 124u: goto L_002F4E30;
    case 125u: goto L_002F4E40;
    case 126u: goto L_002F4E44;
    case 127u: goto L_002F4E70;
    case 128u: goto L_002F4EF0;
    case 129u: goto L_002F4F38;
    case 130u: goto L_002F4F64;
    case 131u: goto L_002F4F98;
    case 132u: goto L_002F4FCC;
    case 133u: goto L_002F5008;
    case 134u: goto L_002F502C;
    case 135u: goto L_002F5050;
    case 136u: goto L_002F5074;
    case 137u: goto L_002F50A0;
    case 138u: goto L_002F50D0;
    case 139u: goto L_002F50E0;
    case 140u: goto L_002F5100;
    case 141u: goto L_002F512C;
    case 142u: goto L_002F513C;
    case 143u: goto L_002F515C;
    case 144u: goto L_002F5188;
    case 145u: goto L_002F5198;
    case 146u: goto L_002F51B8;
    case 147u: goto L_002F51E4;
    case 148u: goto L_002F51F4;
    case 149u: goto L_002F5214;
    case 150u: goto L_002F5238;
    case 151u: goto L_002F525C;
    case 152u: goto L_002F5280;
    case 153u: goto L_002F52A4;
    case 154u: goto L_002F52D0;
    case 155u: goto L_002F52FC;
    case 156u: goto L_002F530C;
    case 157u: goto L_002F532C;
    case 158u: goto L_002F5358;
    case 159u: goto L_002F5368;
    case 160u: goto L_002F5388;
    case 161u: goto L_002F53B4;
    case 162u: goto L_002F53C4;
    case 163u: goto L_002F53E4;
    case 164u: goto L_002F5410;
    case 165u: goto L_002F5420;
    case 166u: goto L_002F5440;
    case 167u: goto L_002F5450;
    case 168u: goto L_002F5494;
    case 169u: goto L_002F54B8;
    case 170u: goto L_002F54DC;
    case 171u: goto L_002F5500;
    case 172u: goto L_002F552C;
    case 173u: goto L_002F555C;
    case 174u: goto L_002F556C;
    case 175u: goto L_002F558C;
    case 176u: goto L_002F55B8;
    case 177u: goto L_002F55C8;
    case 178u: goto L_002F55E8;
    case 179u: goto L_002F5614;
    case 180u: goto L_002F5624;
    case 181u: goto L_002F5644;
    case 182u: goto L_002F5670;
    case 183u: goto L_002F5680;
    case 184u: goto L_002F56A0;
    case 185u: goto L_002F56C4;
    case 186u: goto L_002F56E8;
    case 187u: goto L_002F570C;
    case 188u: goto L_002F5730;
    case 189u: goto L_002F575C;
    case 190u: goto L_002F5788;
    case 191u: goto L_002F5798;
    case 192u: goto L_002F57B8;
    case 193u: goto L_002F57E4;
    case 194u: goto L_002F57F4;
    case 195u: goto L_002F5814;
    case 196u: goto L_002F5840;
    case 197u: goto L_002F5850;
    case 198u: goto L_002F5870;
    case 199u: goto L_002F589C;
    case 200u: goto L_002F58AC;
    case 201u: goto L_002F58CC;
    case 202u: goto L_002F58DC;
    case 203u: goto L_002F590C;
    case 204u: goto L_002F5930;
    case 205u: goto L_002F5954;
    case 206u: goto L_002F5978;
    case 207u: goto L_002F59A4;
    case 208u: goto L_002F59D4;
    case 209u: goto L_002F59E4;
    case 210u: goto L_002F5A04;
    case 211u: goto L_002F5A30;
    case 212u: goto L_002F5A40;
    case 213u: goto L_002F5A60;
    case 214u: goto L_002F5A8C;
    case 215u: goto L_002F5A9C;
    case 216u: goto L_002F5ABC;
    case 217u: goto L_002F5AE8;
    case 218u: goto L_002F5AF8;
    case 219u: goto L_002F5B18;
    case 220u: goto L_002F5B3C;
    case 221u: goto L_002F5B60;
    case 222u: goto L_002F5B84;
    case 223u: goto L_002F5BA8;
    case 224u: goto L_002F5BD4;
    case 225u: goto L_002F5C00;
    case 226u: goto L_002F5C10;
    case 227u: goto L_002F5C30;
    case 228u: goto L_002F5C5C;
    case 229u: goto L_002F5C6C;
    case 230u: goto L_002F5C8C;
    case 231u: goto L_002F5CB8;
    case 232u: goto L_002F5CC8;
    case 233u: goto L_002F5CE8;
    case 234u: goto L_002F5D14;
    case 235u: goto L_002F5D24;
    case 236u: goto L_002F5D44;
    case 237u: goto L_002F5D54;
    case 238u: goto L_002F5D78;
    case 239u: goto L_002F5D9C;
    case 240u: goto L_002F5DC0;
    case 241u: goto L_002F5DE4;
    case 242u: goto L_002F5E10;
    case 243u: goto L_002F5E40;
    case 244u: goto L_002F5E50;
    case 245u: goto L_002F5E70;
    case 246u: goto L_002F5E9C;
    case 247u: goto L_002F5EAC;
    case 248u: goto L_002F5ECC;
    case 249u: goto L_002F5EF8;
    case 250u: goto L_002F5F08;
    case 251u: goto L_002F5F28;
    case 252u: goto L_002F5F54;
    case 253u: goto L_002F5F64;
    case 254u: goto L_002F5F84;
    case 255u: goto L_002F5FA8;
    case 256u: goto L_002F5FCC;
    case 257u: goto L_002F5FF0;
    case 258u: goto L_002F6014;
    case 259u: goto L_002F6040;
    case 260u: goto L_002F606C;
    case 261u: goto L_002F607C;
    case 262u: goto L_002F609C;
    case 263u: goto L_002F60C8;
    case 264u: goto L_002F60D8;
    case 265u: goto L_002F60F8;
    case 266u: goto L_002F6124;
    case 267u: goto L_002F6134;
    case 268u: goto L_002F6154;
    case 269u: goto L_002F6180;
    case 270u: goto L_002F6190;
    case 271u: goto L_002F61B0;
    case 272u: goto L_002F61C0;
    case 273u: goto L_002F6234;
    case 274u: goto L_002F6270;
    case 275u: goto L_002F6294;
    case 276u: goto L_002F62B8;
    case 277u: goto L_002F62DC;
    case 278u: goto L_002F6308;
    case 279u: goto L_002F6338;
    case 280u: goto L_002F6348;
    case 281u: goto L_002F6368;
    case 282u: goto L_002F6394;
    case 283u: goto L_002F63A4;
    case 284u: goto L_002F63C4;
    case 285u: goto L_002F63F0;
    case 286u: goto L_002F6400;
    case 287u: goto L_002F6420;
    case 288u: goto L_002F644C;
    case 289u: goto L_002F645C;
    case 290u: goto L_002F647C;
    case 291u: goto L_002F6490;
    case 292u: goto L_002F64BC;
    case 293u: goto L_002F64E0;
    case 294u: goto L_002F6504;
    case 295u: goto L_002F6528;
    case 296u: goto L_002F6554;
    case 297u: goto L_002F6584;
    case 298u: goto L_002F6594;
    case 299u: goto L_002F65B4;
    case 300u: goto L_002F65E0;
    case 301u: goto L_002F65F0;
    case 302u: goto L_002F6610;
    case 303u: goto L_002F663C;
    case 304u: goto L_002F664C;
    case 305u: goto L_002F666C;
    case 306u: goto L_002F6698;
    case 307u: goto L_002F66A8;
    case 308u: goto L_002F66C8;
    case 309u: goto L_002F66D8;
    case 310u: goto L_002F6710;
    case 311u: goto L_002F6730;
    case 312u: goto L_002F6778;
    case 313u: goto L_002F67A8;
    case 314u: goto L_002F67D4;
    case 315u: goto L_002F67E0;
    case 316u: goto L_002F67EC;
    case 317u: goto L_002F67F8;
    case 318u: goto L_002F6804;
    case 319u: goto L_002F6810;
    case 320u: goto L_002F6828;
    case 321u: goto L_002F6848;
    case 322u: goto L_002F685C;
    case 323u: goto L_002F6868;
    case 324u: goto L_002F6874;
    case 325u: goto L_002F6880;
    case 326u: goto L_002F688C;
    case 327u: goto L_002F68A0;
    case 328u: goto L_002F68D0;
    case 329u: goto L_002F68FC;
    case 330u: goto L_002F6914;
    case 331u: goto L_002F6934;
    case 332u: goto L_002F6948;
    case 333u: goto L_002F6958;
    case 334u: goto L_002F6968;
    case 335u: goto L_002F6974;
    case 336u: goto L_002F6988;
    case 337u: goto L_002F69B8;
    case 338u: goto L_002F69E4;
    case 339u: goto L_002F69FC;
    case 340u: goto L_002F6A1C;
    case 341u: goto L_002F6A30;
    case 342u: goto L_002F6A40;
    case 343u: goto L_002F6A50;
    case 344u: goto L_002F6A5C;
    case 345u: goto L_002F6A70;
    case 346u: goto L_002F6AA0;
    case 347u: goto L_002F6ACC;
    case 348u: goto L_002F6AE4;
    case 349u: goto L_002F6B04;
    case 350u: goto L_002F6B18;
    case 351u: goto L_002F6B28;
    case 352u: goto L_002F6B38;
    case 353u: goto L_002F6B60;
    case 354u: goto L_002F6B8C;
    case 355u: goto L_002F6BB8;
    case 356u: goto L_002F6BE4;
    case 357u: goto L_002F6C10;
    case 358u: goto L_002F6C18;
    case 359u: goto L_002F6C20;
    case 360u: goto L_002F6C28;
    case 361u: goto L_002F6C30;
    case 362u: goto L_002F6C3C;
    case 363u: goto L_002F6C50;
    case 364u: goto L_002F6C80;
    case 365u: goto L_002F6CAC;
    case 366u: goto L_002F6CC4;
    case 367u: goto L_002F6CE4;
    case 368u: goto L_002F6CF8;
    case 369u: goto L_002F6D08;
    case 370u: goto L_002F6D18;
    case 371u: goto L_002F6D40;
    case 372u: goto L_002F6D6C;
    case 373u: goto L_002F6D98;
    case 374u: goto L_002F6DC4;
    case 375u: goto L_002F6DF0;
    case 376u: goto L_002F6DFC;
    case 377u: goto L_002F6E04;
    case 378u: goto L_002F6E0C;
    case 379u: goto L_002F6E14;
    case 380u: goto L_002F6E20;
    case 381u: goto L_002F6E74;
    case 382u: goto L_002F6EA0;
    case 383u: goto L_002F6ECC;
    case 384u: goto L_002F6EF8;
    case 385u: goto L_002F6F24;
    case 386u: goto L_002F6F30;
    case 387u: goto L_002F6F38;
    case 388u: goto L_002F6F40;
    case 389u: goto L_002F6F48;
    case 390u: goto L_002F6F94;
    case 391u: goto L_002F6FC0;
    case 392u: goto L_002F6FEC;
    case 393u: goto L_002F7018;
    case 394u: goto L_002F7044;
    case 395u: goto L_002F7050;
    case 396u: goto L_002F7058;
    case 397u: goto L_002F7060;
    case 398u: goto L_002F7068;
    case 399u: goto L_002F7080;
    case 400u: goto L_002F7098;
    case 401u: goto L_002F70A4;
    case 402u: goto L_002F70B0;
    case 403u: goto L_002F70BC;
    case 404u: goto L_002F70C8;
    case 405u: goto L_002F70D4;
    case 406u: goto L_002F7118;
    case 407u: goto L_002F7144;
    case 408u: goto L_002F7170;
    case 409u: goto L_002F719C;
    case 410u: goto L_002F71C8;
    case 411u: goto L_002F71D4;
    case 412u: goto L_002F71DC;
    case 413u: goto L_002F71E4;
    case 414u: goto L_002F71EC;
    case 415u: goto L_002F7214;
    case 416u: goto L_002F7240;
    case 417u: goto L_002F726C;
    case 418u: goto L_002F7298;
    case 419u: goto L_002F72C4;
    case 420u: goto L_002F72D0;
    case 421u: goto L_002F72D8;
    case 422u: goto L_002F72E0;
    case 423u: goto L_002F72E8;
    case 424u: goto L_002F7300;
    case 425u: goto L_002F7318;
    case 426u: goto L_002F7324;
    case 427u: goto L_002F7330;
    case 428u: goto L_002F733C;
    case 429u: goto L_002F7348;
    case 430u: goto L_002F7354;
    case 431u: goto L_002F7370;
    case 432u: goto L_002F7388;
    case 433u: goto L_002F7394;
    case 434u: goto L_002F73A0;
    case 435u: goto L_002F73AC;
    case 436u: goto L_002F73B8;
    case 437u: goto L_002F73C4;
    case 438u: goto L_002F7408;
    case 439u: goto L_002F7434;
    case 440u: goto L_002F7460;
    case 441u: goto L_002F748C;
    case 442u: goto L_002F74B8;
    case 443u: goto L_002F74C4;
    case 444u: goto L_002F74CC;
    case 445u: goto L_002F74D4;
    case 446u: goto L_002F74DC;
    case 447u: goto L_002F74F4;
    case 448u: goto L_002F750C;
    case 449u: goto L_002F7518;
    case 450u: goto L_002F7524;
    case 451u: goto L_002F7530;
    case 452u: goto L_002F753C;
    case 453u: goto L_002F7548;
    case 454u: goto L_002F758C;
    case 455u: goto L_002F75B8;
    case 456u: goto L_002F75E4;
    case 457u: goto L_002F7610;
    case 458u: goto L_002F763C;
    case 459u: goto L_002F7648;
    case 460u: goto L_002F7650;
    case 461u: goto L_002F7658;
    case 462u: goto L_002F7660;
    case 463u: goto L_002F7678;
    case 464u: goto L_002F7690;
    case 465u: goto L_002F769C;
    case 466u: goto L_002F76A8;
    case 467u: goto L_002F76B4;
    case 468u: goto L_002F76C0;
    case 469u: goto L_002F76CC;
    case 470u: goto L_002F77D4;
    case 471u: goto L_002F7800;
    case 472u: goto L_002F782C;
    case 473u: goto L_002F7858;
    case 474u: goto L_002F7884;
    case 475u: goto L_002F7890;
    case 476u: goto L_002F7898;
    case 477u: goto L_002F78A0;
    case 478u: goto L_002F78A8;
    case 479u: goto L_002F78C8;
    case 480u: goto L_002F78E0;
    case 481u: goto L_002F78EC;
    case 482u: goto L_002F78F8;
    case 483u: goto L_002F7904;
    case 484u: goto L_002F7910;
    case 485u: goto L_002F791C;
    case 486u: goto L_002F7954;
    case 487u: goto L_002F7980;
    case 488u: goto L_002F79AC;
    case 489u: goto L_002F79D8;
    case 490u: goto L_002F7A04;
    case 491u: goto L_002F7A10;
    case 492u: goto L_002F7A18;
    case 493u: goto L_002F7A20;
    case 494u: goto L_002F7A28;
    case 495u: goto L_002F7A58;
    case 496u: goto L_002F7A84;
    case 497u: goto L_002F7AB0;
    case 498u: goto L_002F7ADC;
    case 499u: goto L_002F7B08;
    case 500u: goto L_002F7B14;
    case 501u: goto L_002F7B1C;
    case 502u: goto L_002F7B24;
    case 503u: goto L_002F7B2C;
    case 504u: goto L_002F7B74;
    case 505u: goto L_002F7BBC;
    case 506u: goto L_002F7BD4;
    case 507u: goto L_002F7BE0;
    case 508u: goto L_002F7BEC;
    case 509u: goto L_002F7BF8;
    case 510u: goto L_002F7C04;
    case 511u: goto L_002F7C10;
    case 512u: goto L_002F7C38;
    case 513u: goto L_002F7C54;
    case 514u: goto L_002F7C78;
    case 515u: goto L_002F7C9C;
    case 516u: goto L_002F7CB8;
    case 517u: goto L_002F7CE0;
    case 518u: goto L_002F7CF4;
    case 519u: goto L_002F7CFC;
    case 520u: goto L_002F7D04;
    case 521u: goto L_002F7D0C;
    case 522u: goto L_002F7D1C;
    case 523u: goto L_002F7D7C;
    case 524u: goto L_002F7D98;
    case 525u: goto L_002F7DBC;
    case 526u: goto L_002F7DE0;
    case 527u: goto L_002F7DFC;
    case 528u: goto L_002F7E24;
    case 529u: goto L_002F7E38;
    case 530u: goto L_002F7E40;
    case 531u: goto L_002F7E48;
    case 532u: goto L_002F7E50;
    case 533u: goto L_002F7EFC;
    case 534u: goto L_002F7F14;
    case 535u: goto L_002F7F20;
    case 536u: goto L_002F7F2C;
    case 537u: goto L_002F7F38;
    case 538u: goto L_002F7F44;
    case 539u: goto L_002F7F50;
    case 540u: goto L_002F7FC8;
    case 541u: goto L_002F7FE0;
    case 542u: goto L_002F7FEC;
    case 543u: goto L_002F7FF8;
    default: bad_entry(c, 0x002F4000u); return;
    }
L_002F4000:
    c.budget -= 1;
L_002F4004:
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4014u); set32(c.r[5], c.r[29].w[0] + 300u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F4014u) [[unlikely]] return; }
L_002F4014:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25988u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F4030; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F4038; } }
L_002F4030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4038u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F4038u) [[unlikely]] return; }
L_002F4038:
    st32((c.r[29].w[0] + 284u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4050u); set32(c.r[5], c.r[29].w[0] + 284u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F4050u) [[unlikely]] return; }
    goto L_002F4050;
L_002F404C:
    set32(c.r[5], c.r[29].w[0] + 284u);
    c.budget -= 1;
L_002F4050:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 284u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_002F40B4; }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4080u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F4080u) [[unlikely]] return; }
L_002F4080:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4090u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F4090u) [[unlikely]] return; }
L_002F4090:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F40B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F40B0u); set32(c.r[5], c.r[29].w[0] + 284u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F40B0u) [[unlikely]] return; }
L_002F40B0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002F40B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F40BCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F40BCu) [[unlikely]] return; }
L_002F40BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25995u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F40D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F40E0; } }
L_002F40D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F40E0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F40E0u) [[unlikely]] return; }
L_002F40E0:
    st32((c.r[29].w[0] + 280u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F40F4u); set32(c.r[5], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F40F4u) [[unlikely]] return; }
L_002F40F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4104u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F4104u) [[unlikely]] return; }
L_002F4104:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F4160; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4130u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F4130u) [[unlikely]] return; }
L_002F4130:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4140u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F4140u) [[unlikely]] return; }
L_002F4140:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F4160; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4160u); set32(c.r[5], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F4160u) [[unlikely]] return; }
L_002F4160:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26148u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F417C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F4184; } }
L_002F417C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4184u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F4184u) [[unlikely]] return; }
L_002F4184:
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4198u); set32(c.r[5], c.r[29].w[0] + 276u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F4198u) [[unlikely]] return; }
L_002F4198:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F41A8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F41A8u) [[unlikely]] return; }
L_002F41A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F4204; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F41D4u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F41D4u) [[unlikely]] return; }
L_002F41D4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F41E4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F41E4u) [[unlikely]] return; }
L_002F41E4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F4204; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4204u); set32(c.r[5], c.r[29].w[0] + 276u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F4204u) [[unlikely]] return; }
L_002F4204:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27482u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F4220; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F4228; } }
L_002F4220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4228u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F4228u) [[unlikely]] return; }
L_002F4228:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4238u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002F4238u) [[unlikely]] return; }
L_002F4238:
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002F4E40; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4268u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F4268u) [[unlikely]] return; }
L_002F4268:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4278u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F4278u) [[unlikely]] return; }
L_002F4278:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F4298; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4298u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F4298u) [[unlikely]] return; }
L_002F4298:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4E40; } }
L_002F42A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F42C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F42C8; } }
L_002F42C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F42C8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F42C8u) [[unlikely]] return; }
L_002F42C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25995u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 268u), c.r[2].w[0]);  if (t) { goto L_002F42E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F42EC; } }
L_002F42E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F42ECu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F42ECu) [[unlikely]] return; }
L_002F42EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26154u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 264u), c.r[2].w[0]);  if (t) { goto L_002F4308; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F4310; } }
L_002F4308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4310u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F4310u) [[unlikely]] return; }
L_002F4310:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25995u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 260u), c.r[2].w[0]);  if (t) { goto L_002F432C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F4334; } }
L_002F432C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4334u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F4334u) [[unlikely]] return; }
L_002F4334:
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 268u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 264u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 260u);
    set32(c.r[8], c.r[29].w[0] + 256u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4360u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F4360u) [[unlikely]] return; }
L_002F4360:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F43C0; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4390u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F4390u) [[unlikely]] return; }
L_002F4390:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F43A0u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F43A0u) [[unlikely]] return; }
L_002F43A0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F43C0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F43C0u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F43C0u) [[unlikely]] return; }
L_002F43C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F441C; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F43ECu); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F43ECu) [[unlikely]] return; }
L_002F43EC:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F43FCu); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F43FCu) [[unlikely]] return; }
L_002F43FC:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F441C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F441Cu); set32(c.r[5], c.r[29].w[0] + 260u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F441Cu) [[unlikely]] return; }
L_002F441C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F4478; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4448u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F4448u) [[unlikely]] return; }
L_002F4448:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4458u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F4458u) [[unlikely]] return; }
L_002F4458:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F4478; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4478u); set32(c.r[5], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F4478u) [[unlikely]] return; }
L_002F4478:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F44D4; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F44A4u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F44A4u) [[unlikely]] return; }
L_002F44A4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F44B4u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F44B4u) [[unlikely]] return; }
L_002F44B4:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F44D4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F44D4u); set32(c.r[5], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F44D4u) [[unlikely]] return; }
L_002F44D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F44F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F44F8; } }
L_002F44F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F44F8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F44F8u) [[unlikely]] return; }
L_002F44F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25972u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_002F4514; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F451C; } }
L_002F4514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F451Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F451Cu) [[unlikely]] return; }
L_002F451C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26154u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 248u), c.r[2].w[0]);  if (t) { goto L_002F4538; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F4540; } }
L_002F4538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4540u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F4540u) [[unlikely]] return; }
L_002F4540:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25972u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 244u), c.r[2].w[0]);  if (t) { goto L_002F455C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F4564; } }
L_002F455C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4564u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F4564u) [[unlikely]] return; }
L_002F4564:
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 252u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 248u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 244u);
    set32(c.r[8], c.r[29].w[0] + 240u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4590u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F4590u) [[unlikely]] return; }
L_002F4590:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F45F0; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F45C0u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F45C0u) [[unlikely]] return; }
L_002F45C0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F45D0u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F45D0u) [[unlikely]] return; }
L_002F45D0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F45F0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F45F0u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F45F0u) [[unlikely]] return; }
L_002F45F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F464C; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F461Cu); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F461Cu) [[unlikely]] return; }
L_002F461C:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F462Cu); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F462Cu) [[unlikely]] return; }
L_002F462C:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F464C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F464Cu); set32(c.r[5], c.r[29].w[0] + 244u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F464Cu) [[unlikely]] return; }
L_002F464C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F46A8; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4678u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F4678u) [[unlikely]] return; }
L_002F4678:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4688u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F4688u) [[unlikely]] return; }
L_002F4688:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F46A8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F46A8u); set32(c.r[5], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F46A8u) [[unlikely]] return; }
L_002F46A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F4704; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F46D4u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F46D4u) [[unlikely]] return; }
L_002F46D4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F46E4u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F46E4u) [[unlikely]] return; }
L_002F46E4:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F4704; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4704u); set32(c.r[5], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F4704u) [[unlikely]] return; }
L_002F4704:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F4720; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F4728; } }
L_002F4720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4728u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F4728u) [[unlikely]] return; }
L_002F4728:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25963u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 236u), c.r[2].w[0]);  if (t) { goto L_002F4744; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F474C; } }
L_002F4744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F474Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F474Cu) [[unlikely]] return; }
L_002F474C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26154u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 232u), c.r[2].w[0]);  if (t) { goto L_002F4768; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F4770; } }
L_002F4768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4770u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F4770u) [[unlikely]] return; }
L_002F4770:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25963u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 228u), c.r[2].w[0]);  if (t) { goto L_002F478C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F4794; } }
L_002F478C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4794u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F4794u) [[unlikely]] return; }
L_002F4794:
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 236u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 232u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 228u);
    set32(c.r[8], c.r[29].w[0] + 224u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F47C0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F47C0u) [[unlikely]] return; }
L_002F47C0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F4820; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F47F0u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F47F0u) [[unlikely]] return; }
L_002F47F0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4800u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F4800u) [[unlikely]] return; }
L_002F4800:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F4820; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4820u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F4820u) [[unlikely]] return; }
L_002F4820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F487C; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F484Cu); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F484Cu) [[unlikely]] return; }
L_002F484C:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F485Cu); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F485Cu) [[unlikely]] return; }
L_002F485C:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F487C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F487Cu); set32(c.r[5], c.r[29].w[0] + 228u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F487Cu) [[unlikely]] return; }
L_002F487C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F48D8; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F48A8u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F48A8u) [[unlikely]] return; }
L_002F48A8:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F48B8u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F48B8u) [[unlikely]] return; }
L_002F48B8:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F48D8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F48D8u); set32(c.r[5], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F48D8u) [[unlikely]] return; }
L_002F48D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F4934; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4904u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F4904u) [[unlikely]] return; }
L_002F4904:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4914u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F4914u) [[unlikely]] return; }
L_002F4914:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F4934; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4934u); set32(c.r[5], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F4934u) [[unlikely]] return; }
L_002F4934:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25955u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F4950; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F4958; } }
L_002F4950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4958u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F4958u) [[unlikely]] return; }
L_002F4958:
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4970u); set32(c.r[5], c.r[29].w[0] + 220u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F4970u) [[unlikely]] return; }
L_002F4970:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_002F49D4; }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F49A0u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F49A0u) [[unlikely]] return; }
L_002F49A0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F49B0u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F49B0u) [[unlikely]] return; }
L_002F49B0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F49D0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F49D0u); set32(c.r[5], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F49D0u) [[unlikely]] return; }
L_002F49D0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002F49D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F49DCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F49DCu) [[unlikely]] return; }
L_002F49DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25995u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F49F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F4A00; } }
L_002F49F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A00u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F4A00u) [[unlikely]] return; }
L_002F4A00:
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A14u); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F4A14u) [[unlikely]] return; }
L_002F4A14:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A24u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F4A24u) [[unlikely]] return; }
L_002F4A24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F4A80; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A50u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F4A50u) [[unlikely]] return; }
L_002F4A50:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A60u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F4A60u) [[unlikely]] return; }
L_002F4A60:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F4A80; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A80u); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F4A80u) [[unlikely]] return; }
L_002F4A80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25972u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F4A9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F4AA4; } }
L_002F4A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4AA4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F4AA4u) [[unlikely]] return; }
L_002F4AA4:
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4AB8u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F4AB8u) [[unlikely]] return; }
L_002F4AB8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4AC8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F4AC8u) [[unlikely]] return; }
L_002F4AC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F4B24; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4AF4u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F4AF4u) [[unlikely]] return; }
L_002F4AF4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4B04u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F4B04u) [[unlikely]] return; }
L_002F4B04:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F4B24; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4B24u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F4B24u) [[unlikely]] return; }
L_002F4B24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25963u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F4B40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F4B48; } }
L_002F4B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4B48u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F4B48u) [[unlikely]] return; }
L_002F4B48:
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4B5Cu); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F4B5Cu) [[unlikely]] return; }
L_002F4B5C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4B6Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F4B6Cu) [[unlikely]] return; }
L_002F4B6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F4BC8; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4B98u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F4B98u) [[unlikely]] return; }
L_002F4B98:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4BA8u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F4BA8u) [[unlikely]] return; }
L_002F4BA8:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F4BC8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4BC8u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F4BC8u) [[unlikely]] return; }
L_002F4BC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26148u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F4BE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F4BEC; } }
L_002F4BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4BECu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F4BECu) [[unlikely]] return; }
L_002F4BEC:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C00u); set32(c.r[5], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002F4C00u) [[unlikely]] return; }
L_002F4C00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C10u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F4C10u) [[unlikely]] return; }
L_002F4C10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F4C6C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C3Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F4C3Cu) [[unlikely]] return; }
L_002F4C3C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C4Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F4C4Cu) [[unlikely]] return; }
L_002F4C4C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F4C6C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C6Cu); set32(c.r[5], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F4C6Cu) [[unlikely]] return; }
L_002F4C6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27482u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F4C88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F4C90; } }
L_002F4C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C90u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F4C90u) [[unlikely]] return; }
L_002F4C90:
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4CA0u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002F4CA0u) [[unlikely]] return; }
L_002F4CA0:
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F4D00; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4CD0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F4CD0u) [[unlikely]] return; }
L_002F4CD0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4CE0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F4CE0u) [[unlikely]] return; }
L_002F4CE0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F4D00; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4D00u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F4D00u) [[unlikely]] return; }
L_002F4D00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25942u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F4D1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F4D24; } }
L_002F4D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4D24u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F4D24u) [[unlikely]] return; }
L_002F4D24:
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4D34u); set32(c.r[5], c.r[29].w[0] + 196u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002F4D34u) [[unlikely]] return; }
L_002F4D34:
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F4D98; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4D68u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F4D68u) [[unlikely]] return; }
L_002F4D68:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4D78u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F4D78u) [[unlikely]] return; }
L_002F4D78:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F4D98; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4D98u); set32(c.r[5], c.r[29].w[0] + 196u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F4D98u) [[unlikely]] return; }
L_002F4D98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25928u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F4DB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F4DBC; } }
L_002F4DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4DBCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F4DBCu) [[unlikely]] return; }
L_002F4DBC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4DCCu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002F4DCCu) [[unlikely]] return; }
L_002F4DCC:
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002F4E40; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E00u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F4E00u) [[unlikely]] return; }
L_002F4E00:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E10u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F4E10u) [[unlikely]] return; }
L_002F4E10:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F4E30; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E30u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F4E30u) [[unlikely]] return; }
L_002F4E30:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4E40; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F4E40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_002F4E44:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_002F4E70:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[30], ld32((c.r[29].w[0] + 368u)));
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[10].w[0]), 0u);
    st8((c.r[29].w[0] + 187u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[30].w[0]), 0u);
    set32(c.r[8], c.r[29].w[0] + 364u);
    set32(c.r[2], ld32((c.r[29].w[0] + 376u)));
    st32((c.r[2].w[0]), 0u);
    st32((c.r[29].w[0] + 364u), 0u);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 32;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4EF0u); c.r[7].d[0] = c.r[23].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F4EF0u) [[unlikely]] return; }
L_002F4EF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 360u), 0u);  goto L_002F4F00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F66DC; } }
L_002F4F00:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 356u), 0u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[8].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[9], c.r[29].w[0] + 360u);
    set32(c.r[7], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[10], c.r[29].w[0] + 356u);
    c.r[2].d[0] = c.r[2].d[0] & 192ull;
    set32(c.r[22], c.r[2].w[0] >> 6);
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4F38u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F4F38u) [[unlikely]] return; }
L_002F4F38:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002F4F48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F66DC; } }
L_002F4F48:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4F64u); c.r[8].d[0] = c.r[30].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F4F64u) [[unlikely]] return; }
L_002F4F64:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 352u), 0u);  goto L_002F4F74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F66DC; } }
L_002F4F74:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[23].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4F98u); set32(c.r[8], c.r[29].w[0] + 352u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F4F98u) [[unlikely]] return; }
L_002F4F98:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 352u)));  goto L_002F4FA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F66DC; } }
L_002F4FA8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002F66DC; }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002F4FC4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F66DC; } }
L_002F4FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4FCCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F4FCCu) [[unlikely]] return; }
L_002F4FCC:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    set32(c.r[3], c.r[3].w[0] >> 2);
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_002F5454; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28421u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F5000; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5008; } }
L_002F5000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5008u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5008u) [[unlikely]] return; }
L_002F5008:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 344u), c.r[2].w[0]);  if (t) { goto L_002F5024; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F502C; } }
L_002F5024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F502Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F502Cu) [[unlikely]] return; }
L_002F502C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 340u), c.r[2].w[0]);  if (t) { goto L_002F5048; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5050; } }
L_002F5048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5050u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5050u) [[unlikely]] return; }
L_002F5050:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27491u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 336u), c.r[2].w[0]);  if (t) { goto L_002F506C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5074; } }
L_002F506C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5074u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5074u) [[unlikely]] return; }
L_002F5074:
    st32((c.r[29].w[0] + 332u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 344u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 340u);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[7], c.r[29].w[0] + 336u);
    set32(c.r[8], c.r[29].w[0] + 332u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F50A0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 20u, depth + 1u); else { c.pc = 0x002B4140u; return; } if (c.pc != 0x002F50A0u) [[unlikely]] return; }
L_002F50A0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 332u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F5100; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F50D0u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F50D0u) [[unlikely]] return; }
L_002F50D0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F50E0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F50E0u) [[unlikely]] return; }
L_002F50E0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F5100; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5100u); set32(c.r[5], c.r[29].w[0] + 332u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F5100u) [[unlikely]] return; }
L_002F5100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F515C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F512Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F512Cu) [[unlikely]] return; }
L_002F512C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F513Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F513Cu) [[unlikely]] return; }
L_002F513C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F515C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F515Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F515Cu) [[unlikely]] return; }
L_002F515C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 340u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F51B8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5188u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F5188u) [[unlikely]] return; }
L_002F5188:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5198u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F5198u) [[unlikely]] return; }
L_002F5198:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F51B8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F51B8u); set32(c.r[5], c.r[29].w[0] + 340u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F51B8u) [[unlikely]] return; }
L_002F51B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 344u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F5214; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F51E4u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F51E4u) [[unlikely]] return; }
L_002F51E4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F51F4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F51F4u) [[unlikely]] return; }
L_002F51F4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F5214; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5214u); set32(c.r[5], c.r[29].w[0] + 344u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F5214u) [[unlikely]] return; }
L_002F5214:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28421u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F5230; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5238; } }
L_002F5230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5238u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5238u) [[unlikely]] return; }
L_002F5238:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 328u), c.r[2].w[0]);  if (t) { goto L_002F5254; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F525C; } }
L_002F5254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F525Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F525Cu) [[unlikely]] return; }
L_002F525C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 324u), c.r[2].w[0]);  if (t) { goto L_002F5278; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5280; } }
L_002F5278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5280u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5280u) [[unlikely]] return; }
L_002F5280:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27491u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 320u), c.r[2].w[0]);  if (t) { goto L_002F529C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F52A4; } }
L_002F529C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F52A4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F52A4u) [[unlikely]] return; }
L_002F52A4:
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 328u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 324u);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[7], c.r[29].w[0] + 320u);
    set32(c.r[8], c.r[29].w[0] + 316u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F52D0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F52D0u) [[unlikely]] return; }
L_002F52D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F532C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F52FCu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F52FCu) [[unlikely]] return; }
L_002F52FC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F530Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F530Cu) [[unlikely]] return; }
L_002F530C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F532C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F532Cu); set32(c.r[5], c.r[29].w[0] + 316u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F532Cu) [[unlikely]] return; }
L_002F532C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F5388; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5358u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F5358u) [[unlikely]] return; }
L_002F5358:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5368u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F5368u) [[unlikely]] return; }
L_002F5368:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F5388; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5388u); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F5388u) [[unlikely]] return; }
L_002F5388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F53E4; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F53B4u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F53B4u) [[unlikely]] return; }
L_002F53B4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F53C4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F53C4u) [[unlikely]] return; }
L_002F53C4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F53E4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F53E4u); set32(c.r[5], c.r[29].w[0] + 324u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F53E4u) [[unlikely]] return; }
L_002F53E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002F5444; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5410u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F5410u) [[unlikely]] return; }
L_002F5410:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5420u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F5420u) [[unlikely]] return; }
L_002F5420:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F5440; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5440u); set32(c.r[5], c.r[29].w[0] + 328u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F5440u) [[unlikely]] return; }
L_002F5440:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002F5444:
    set32(c.r[5], ld32((c.r[23].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5450u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F5450u) [[unlikely]] return; }
L_002F5450:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002F5454:
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    set32(c.r[3], c.r[3].w[0] >> 3);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_002F61C4; }
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_002F58E0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F548C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5494; } }
L_002F548C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5494u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5494u) [[unlikely]] return; }
L_002F5494:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 312u), c.r[2].w[0]);  if (t) { goto L_002F54B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F54B8; } }
L_002F54B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F54B8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F54B8u) [[unlikely]] return; }
L_002F54B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 308u), c.r[2].w[0]);  if (t) { goto L_002F54D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F54DC; } }
L_002F54D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F54DCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F54DCu) [[unlikely]] return; }
L_002F54DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25915u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 304u), c.r[2].w[0]);  if (t) { goto L_002F54F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5500; } }
L_002F54F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5500u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5500u) [[unlikely]] return; }
L_002F5500:
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 312u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 308u);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[7], c.r[29].w[0] + 304u);
    set32(c.r[8], c.r[29].w[0] + 300u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F552Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 20u, depth + 1u); else { c.pc = 0x002B4140u; return; } if (c.pc != 0x002F552Cu) [[unlikely]] return; }
L_002F552C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F558C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F555Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F555Cu) [[unlikely]] return; }
L_002F555C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F556Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F556Cu) [[unlikely]] return; }
L_002F556C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F558C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F558Cu); set32(c.r[5], c.r[29].w[0] + 300u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F558Cu) [[unlikely]] return; }
L_002F558C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F55E8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F55B8u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F55B8u) [[unlikely]] return; }
L_002F55B8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F55C8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F55C8u) [[unlikely]] return; }
L_002F55C8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F55E8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F55E8u); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F55E8u) [[unlikely]] return; }
L_002F55E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F5644; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5614u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F5614u) [[unlikely]] return; }
L_002F5614:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5624u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F5624u) [[unlikely]] return; }
L_002F5624:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F5644; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5644u); set32(c.r[5], c.r[29].w[0] + 308u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F5644u) [[unlikely]] return; }
L_002F5644:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 312u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F56A0; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5670u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F5670u) [[unlikely]] return; }
L_002F5670:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5680u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F5680u) [[unlikely]] return; }
L_002F5680:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F56A0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F56A0u); set32(c.r[5], c.r[29].w[0] + 312u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F56A0u) [[unlikely]] return; }
L_002F56A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F56BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F56C4; } }
L_002F56BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F56C4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F56C4u) [[unlikely]] return; }
L_002F56C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 296u), c.r[2].w[0]);  if (t) { goto L_002F56E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F56E8; } }
L_002F56E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F56E8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F56E8u) [[unlikely]] return; }
L_002F56E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 292u), c.r[2].w[0]);  if (t) { goto L_002F5704; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F570C; } }
L_002F5704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F570Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F570Cu) [[unlikely]] return; }
L_002F570C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25915u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 288u), c.r[2].w[0]);  if (t) { goto L_002F5728; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5730; } }
L_002F5728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5730u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5730u) [[unlikely]] return; }
L_002F5730:
    st32((c.r[29].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 296u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 292u);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[7], c.r[29].w[0] + 288u);
    set32(c.r[8], c.r[29].w[0] + 284u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F575Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F575Cu) [[unlikely]] return; }
L_002F575C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F57B8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5788u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F5788u) [[unlikely]] return; }
L_002F5788:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5798u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F5798u) [[unlikely]] return; }
L_002F5798:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F57B8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F57B8u); set32(c.r[5], c.r[29].w[0] + 284u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F57B8u) [[unlikely]] return; }
L_002F57B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F5814; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F57E4u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F57E4u) [[unlikely]] return; }
L_002F57E4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F57F4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F57F4u) [[unlikely]] return; }
L_002F57F4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F5814; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5814u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F5814u) [[unlikely]] return; }
L_002F5814:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F5870; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5840u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F5840u) [[unlikely]] return; }
L_002F5840:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5850u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F5850u) [[unlikely]] return; }
L_002F5850:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F5870; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5870u); set32(c.r[5], c.r[29].w[0] + 292u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F5870u) [[unlikely]] return; }
L_002F5870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002F58D0; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F589Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F589Cu) [[unlikely]] return; }
L_002F589C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F58ACu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F58ACu) [[unlikely]] return; }
L_002F58AC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F58CC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F58CCu); set32(c.r[5], c.r[29].w[0] + 296u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F58CCu) [[unlikely]] return; }
L_002F58CC:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002F58D0:
    set32(c.r[5], ld32((c.r[30].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F58DCu); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F58DCu) [[unlikely]] return; }
L_002F58DC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002F58E0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_002F61C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F5904; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F590C; } }
L_002F5904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F590Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F590Cu) [[unlikely]] return; }
L_002F590C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 280u), c.r[2].w[0]);  if (t) { goto L_002F5928; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5930; } }
L_002F5928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5930u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5930u) [[unlikely]] return; }
L_002F5930:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 276u), c.r[2].w[0]);  if (t) { goto L_002F594C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5954; } }
L_002F594C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5954u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5954u) [[unlikely]] return; }
L_002F5954:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25942u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_002F5970; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5978; } }
L_002F5970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5978u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5978u) [[unlikely]] return; }
L_002F5978:
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 280u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 276u);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[7], c.r[29].w[0] + 272u);
    set32(c.r[8], c.r[29].w[0] + 268u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F59A4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 20u, depth + 1u); else { c.pc = 0x002B4140u; return; } if (c.pc != 0x002F59A4u) [[unlikely]] return; }
L_002F59A4:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 268u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F5A04; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F59D4u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F59D4u) [[unlikely]] return; }
L_002F59D4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F59E4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F59E4u) [[unlikely]] return; }
L_002F59E4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F5A04; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5A04u); set32(c.r[5], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F5A04u) [[unlikely]] return; }
L_002F5A04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F5A60; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5A30u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F5A30u) [[unlikely]] return; }
L_002F5A30:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5A40u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F5A40u) [[unlikely]] return; }
L_002F5A40:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F5A60; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5A60u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F5A60u) [[unlikely]] return; }
L_002F5A60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F5ABC; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5A8Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F5A8Cu) [[unlikely]] return; }
L_002F5A8C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5A9Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F5A9Cu) [[unlikely]] return; }
L_002F5A9C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F5ABC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5ABCu); set32(c.r[5], c.r[29].w[0] + 276u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F5ABCu) [[unlikely]] return; }
L_002F5ABC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F5B18; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5AE8u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F5AE8u) [[unlikely]] return; }
L_002F5AE8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5AF8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F5AF8u) [[unlikely]] return; }
L_002F5AF8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F5B18; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5B18u); set32(c.r[5], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F5B18u) [[unlikely]] return; }
L_002F5B18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F5B34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5B3C; } }
L_002F5B34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5B3Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5B3Cu) [[unlikely]] return; }
L_002F5B3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 264u), c.r[2].w[0]);  if (t) { goto L_002F5B58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5B60; } }
L_002F5B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5B60u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5B60u) [[unlikely]] return; }
L_002F5B60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 260u), c.r[2].w[0]);  if (t) { goto L_002F5B7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5B84; } }
L_002F5B7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5B84u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5B84u) [[unlikely]] return; }
L_002F5B84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25942u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 256u), c.r[2].w[0]);  if (t) { goto L_002F5BA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5BA8; } }
L_002F5BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5BA8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5BA8u) [[unlikely]] return; }
L_002F5BA8:
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 264u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 260u);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[7], c.r[29].w[0] + 256u);
    set32(c.r[8], c.r[29].w[0] + 252u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5BD4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F5BD4u) [[unlikely]] return; }
L_002F5BD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F5C30; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C00u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F5C00u) [[unlikely]] return; }
L_002F5C00:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C10u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F5C10u) [[unlikely]] return; }
L_002F5C10:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F5C30; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C30u); set32(c.r[5], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F5C30u) [[unlikely]] return; }
L_002F5C30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F5C8C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C5Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F5C5Cu) [[unlikely]] return; }
L_002F5C5C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C6Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F5C6Cu) [[unlikely]] return; }
L_002F5C6C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F5C8C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C8Cu); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F5C8Cu) [[unlikely]] return; }
L_002F5C8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F5CE8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5CB8u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F5CB8u) [[unlikely]] return; }
L_002F5CB8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5CC8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F5CC8u) [[unlikely]] return; }
L_002F5CC8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F5CE8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5CE8u); set32(c.r[5], c.r[29].w[0] + 260u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F5CE8u) [[unlikely]] return; }
L_002F5CE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002F5D48; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5D14u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F5D14u) [[unlikely]] return; }
L_002F5D14:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5D24u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F5D24u) [[unlikely]] return; }
L_002F5D24:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F5D44; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5D44u); set32(c.r[5], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F5D44u) [[unlikely]] return; }
L_002F5D44:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002F5D48:
    set32(c.r[5], ld32((c.r[29].w[0] + 360u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5D54u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F5D54u) [[unlikely]] return; }
L_002F5D54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F5D70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5D78; } }
L_002F5D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5D78u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5D78u) [[unlikely]] return; }
L_002F5D78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 248u), c.r[2].w[0]);  if (t) { goto L_002F5D94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5D9C; } }
L_002F5D94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5D9Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5D9Cu) [[unlikely]] return; }
L_002F5D9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 244u), c.r[2].w[0]);  if (t) { goto L_002F5DB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5DC0; } }
L_002F5DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5DC0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5DC0u) [[unlikely]] return; }
L_002F5DC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25928u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_002F5DDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5DE4; } }
L_002F5DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5DE4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5DE4u) [[unlikely]] return; }
L_002F5DE4:
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 248u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 244u);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[7], c.r[29].w[0] + 240u);
    set32(c.r[8], c.r[29].w[0] + 236u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5E10u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 20u, depth + 1u); else { c.pc = 0x002B4140u; return; } if (c.pc != 0x002F5E10u) [[unlikely]] return; }
L_002F5E10:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F5E70; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5E40u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F5E40u) [[unlikely]] return; }
L_002F5E40:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5E50u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F5E50u) [[unlikely]] return; }
L_002F5E50:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F5E70; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5E70u); set32(c.r[5], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F5E70u) [[unlikely]] return; }
L_002F5E70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F5ECC; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5E9Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F5E9Cu) [[unlikely]] return; }
L_002F5E9C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5EACu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F5EACu) [[unlikely]] return; }
L_002F5EAC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F5ECC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5ECCu); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F5ECCu) [[unlikely]] return; }
L_002F5ECC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F5F28; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5EF8u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F5EF8u) [[unlikely]] return; }
L_002F5EF8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F08u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F5F08u) [[unlikely]] return; }
L_002F5F08:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F5F28; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F28u); set32(c.r[5], c.r[29].w[0] + 244u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F5F28u) [[unlikely]] return; }
L_002F5F28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F5F84; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F54u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F5F54u) [[unlikely]] return; }
L_002F5F54:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F64u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F5F64u) [[unlikely]] return; }
L_002F5F64:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F5F84; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F84u); set32(c.r[5], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F5F84u) [[unlikely]] return; }
L_002F5F84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F5FA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5FA8; } }
L_002F5FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5FA8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5FA8u) [[unlikely]] return; }
L_002F5FA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 232u), c.r[2].w[0]);  if (t) { goto L_002F5FC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5FCC; } }
L_002F5FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5FCCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5FCCu) [[unlikely]] return; }
L_002F5FCC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 228u), c.r[2].w[0]);  if (t) { goto L_002F5FE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F5FF0; } }
L_002F5FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5FF0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F5FF0u) [[unlikely]] return; }
L_002F5FF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25928u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 224u), c.r[2].w[0]);  if (t) { goto L_002F600C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F6014; } }
L_002F600C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6014u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6014u) [[unlikely]] return; }
L_002F6014:
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 232u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 228u);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[7], c.r[29].w[0] + 224u);
    set32(c.r[8], c.r[29].w[0] + 220u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6040u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F6040u) [[unlikely]] return; }
L_002F6040:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F609C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F606Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F606Cu) [[unlikely]] return; }
L_002F606C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F607Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F607Cu) [[unlikely]] return; }
L_002F607C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F609C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F609Cu); set32(c.r[5], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F609Cu) [[unlikely]] return; }
L_002F609C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F60F8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F60C8u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F60C8u) [[unlikely]] return; }
L_002F60C8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F60D8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F60D8u) [[unlikely]] return; }
L_002F60D8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F60F8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F60F8u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F60F8u) [[unlikely]] return; }
L_002F60F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F6154; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6124u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F6124u) [[unlikely]] return; }
L_002F6124:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6134u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F6134u) [[unlikely]] return; }
L_002F6134:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F6154; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6154u); set32(c.r[5], c.r[29].w[0] + 228u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F6154u) [[unlikely]] return; }
L_002F6154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002F61B4; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6180u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F6180u) [[unlikely]] return; }
L_002F6180:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6190u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F6190u) [[unlikely]] return; }
L_002F6190:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F61B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F61B0u); set32(c.r[5], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F61B0u) [[unlikely]] return; }
L_002F61B0:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002F61B4:
    set32(c.r[5], ld32((c.r[29].w[0] + 356u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F61C0u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F61C0u) [[unlikely]] return; }
L_002F61C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002F61C4:
    c.r[3].d[0] = c.r[2].d[0] & 16ull;
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    set32(c.r[3], c.r[3].w[0] >> 4);
    set32(c.r[2], c.r[2].w[0] >> 5);
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[16].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_002F61FC; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { st32((c.r[29].w[0] + 348u), 0u);  goto L_002F6200; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 187u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002F66DC; }
L_002F61FC:
    st32((c.r[29].w[0] + 348u), 0u);
    c.budget -= 1;
L_002F6200:
    set32(c.r[2], c.r[29].w[0] + 348u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[23].w[0])));
    set32(c.r[7], ld32((c.r[30].w[0])));
    set32(c.r[11], ld32((c.r[29].w[0] + 376u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 360u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 356u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6234u); c.r[10].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F6234u) [[unlikely]] return; }
L_002F6234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F6244; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F66DC; } }
L_002F6244:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F6490; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F6268; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F6270; } }
L_002F6268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6270u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6270u) [[unlikely]] return; }
L_002F6270:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 216u), c.r[2].w[0]);  if (t) { goto L_002F628C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F6294; } }
L_002F628C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6294u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6294u) [[unlikely]] return; }
L_002F6294:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25903u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 212u), c.r[2].w[0]);  if (t) { goto L_002F62B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F62B8; } }
L_002F62B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F62B8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F62B8u) [[unlikely]] return; }
L_002F62B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25903u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (t) { goto L_002F62D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F62DC; } }
L_002F62D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F62DCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F62DCu) [[unlikely]] return; }
L_002F62DC:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 216u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 212u);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[7], c.r[29].w[0] + 208u);
    set32(c.r[8], c.r[29].w[0] + 204u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6308u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 20u, depth + 1u); else { c.pc = 0x002B4140u; return; } if (c.pc != 0x002F6308u) [[unlikely]] return; }
L_002F6308:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F6368; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6338u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F6338u) [[unlikely]] return; }
L_002F6338:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6348u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F6348u) [[unlikely]] return; }
L_002F6348:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F6368; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6368u); set32(c.r[5], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F6368u) [[unlikely]] return; }
L_002F6368:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F63C4; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6394u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F6394u) [[unlikely]] return; }
L_002F6394:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F63A4u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F63A4u) [[unlikely]] return; }
L_002F63A4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F63C4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F63C4u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F63C4u) [[unlikely]] return; }
L_002F63C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F6420; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F63F0u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F63F0u) [[unlikely]] return; }
L_002F63F0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6400u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F6400u) [[unlikely]] return; }
L_002F6400:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F6420; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6420u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F6420u) [[unlikely]] return; }
L_002F6420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 376u)));  goto L_002F6480; }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F644Cu); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F644Cu) [[unlikely]] return; }
L_002F644C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F645Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F645Cu) [[unlikely]] return; }
L_002F645C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F647C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F647Cu); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F647Cu) [[unlikely]] return; }
L_002F647C:
    set32(c.r[2], ld32((c.r[29].w[0] + 376u)));
    c.budget -= 1;
L_002F6480:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6490u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F6490u) [[unlikely]] return; }
L_002F6490:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F66D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F64B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F64BC; } }
L_002F64B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F64BCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F64BCu) [[unlikely]] return; }
L_002F64BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 200u), c.r[2].w[0]);  if (t) { goto L_002F64D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F64E0; } }
L_002F64D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F64E0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F64E0u) [[unlikely]] return; }
L_002F64E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25893u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 196u), c.r[2].w[0]);  if (t) { goto L_002F64FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F6504; } }
L_002F64FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6504u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6504u) [[unlikely]] return; }
L_002F6504:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25893u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_002F6520; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F6528; } }
L_002F6520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6528u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6528u) [[unlikely]] return; }
L_002F6528:
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 200u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 196u);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[7], c.r[29].w[0] + 192u);
    set32(c.r[8], c.r[29].w[0] + 188u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6554u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 20u, depth + 1u); else { c.pc = 0x002B4140u; return; } if (c.pc != 0x002F6554u) [[unlikely]] return; }
L_002F6554:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F65B4; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6584u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F6584u) [[unlikely]] return; }
L_002F6584:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6594u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F6594u) [[unlikely]] return; }
L_002F6594:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F65B4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F65B4u); set32(c.r[5], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F65B4u) [[unlikely]] return; }
L_002F65B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F6610; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F65E0u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F65E0u) [[unlikely]] return; }
L_002F65E0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F65F0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F65F0u) [[unlikely]] return; }
L_002F65F0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F6610; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6610u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F6610u) [[unlikely]] return; }
L_002F6610:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F666C; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F663Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F663Cu) [[unlikely]] return; }
L_002F663C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F664Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F664Cu) [[unlikely]] return; }
L_002F664C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F666C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F666Cu); set32(c.r[5], c.r[29].w[0] + 196u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F666Cu) [[unlikely]] return; }
L_002F666C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002F66CC; }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6698u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F6698u) [[unlikely]] return; }
L_002F6698:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F66A8u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F66A8u) [[unlikely]] return; }
L_002F66A8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F66C8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F66C8u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F66C8u) [[unlikely]] return; }
L_002F66C8:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002F66CC:
    set32(c.r[5], ld32((c.r[29].w[0] + 348u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F66D8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F66D8u) [[unlikely]] return; }
L_002F66D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002F66DC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_002F6710:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F671C; } }
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 1;
L_002F671C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002F6728; } }
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 1;
L_002F6728:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F6730:
    set32(c.r[29], c.r[29].w[0] - 1104u);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[22]);
    set32(c.r[6], 0u + 48u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[29].w[0] + 464u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6778u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 87u, depth + 1u); else { c.pc = 0x002A8D00u; return; } if (c.pc != 0x002F6778u) [[unlikely]] return; }
L_002F6778:
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st8((c.r[29].w[0] + 1103u), static_cast<std::uint8_t>(0u));  goto L_002F678C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 88u, depth); } }
L_002F678C:
    set32(c.r[5], c.r[29].w[0] + 464u);
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F67A8u); set32(c.r[7], c.r[29].w[0] + 1103u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F67A8u) [[unlikely]] return; }
L_002F67A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 1103u));  goto L_002F67B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));  if (t) { [[clang::musttail]] return unit_007E(c, 89u, depth); } }
L_002F67B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[29].w[0] + 432u);  goto L_002F67C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 88u, depth); } }
L_002F67C8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F67D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 103u, depth + 1u); else { c.pc = 0x002F8880u; return; } if (c.pc != 0x002F67D4u) [[unlikely]] return; }
L_002F67D4:
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F67E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007E(c, 100u, depth + 1u); else { c.pc = 0x002F8830u; return; } if (c.pc != 0x002F67E0u) [[unlikely]] return; }
L_002F67E0:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F67ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007E(c, 100u, depth + 1u); else { c.pc = 0x002F8830u; return; } if (c.pc != 0x002F67ECu) [[unlikely]] return; }
L_002F67EC:
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F67F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007E(c, 100u, depth + 1u); else { c.pc = 0x002F8830u; return; } if (c.pc != 0x002F67F8u) [[unlikely]] return; }
L_002F67F8:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6804u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007E(c, 97u, depth + 1u); else { c.pc = 0x002F87E0u; return; } if (c.pc != 0x002F6804u) [[unlikely]] return; }
L_002F6804:
    set32(c.r[4], 0u + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6810u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002F6810u) [[unlikely]] return; }
L_002F6810:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 432u)));  goto L_002F6830; }
    set32(c.r[5], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6828u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 328u, depth + 1u); else { c.pc = 0x002B2550u; return; } if (c.pc != 0x002F6828u) [[unlikely]] return; }
L_002F6828:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 432u)));
    c.budget -= 2;
L_002F6830:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[16].d[0]) { set32(c.r[4], c.r[29].w[0] + 1000u);  goto L_002F6860; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[29].w[0] + 432u), c.r[16].w[0]);  goto L_002F684C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6848u);  if (depth < kMaxDepth) unit_007E(c, 93u, depth + 1u); else { c.pc = 0x002F8790u; return; } if (c.pc != 0x002F6848u) [[unlikely]] return; }
L_002F6848:
    st32((c.r[29].w[0] + 432u), c.r[16].w[0]);
    c.budget -= 1;
L_002F684C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F685C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F685Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 90u, depth + 1u); else { c.pc = 0x002F8750u; return; } if (c.pc != 0x002F685Cu) [[unlikely]] return; }
L_002F685C:
    set32(c.r[4], c.r[29].w[0] + 1000u);
    c.budget -= 1;
L_002F6860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6868u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 256u, depth + 1u); else { c.pc = 0x00302220u; return; } if (c.pc != 0x002F6868u) [[unlikely]] return; }
L_002F6868:
    set32(c.r[16], ld32((c.r[29].w[0] + 432u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6874u); set32(c.r[4], c.r[29].w[0] + 1000u);  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x003105F0u; return; } if (c.pc != 0x002F6874u) [[unlikely]] return; }
L_002F6874:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6880u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 246u, depth + 1u); else { c.pc = 0x002AD860u; return; } if (c.pc != 0x002F6880u) [[unlikely]] return; }
L_002F6880:
    set32(c.r[4], c.r[29].w[0] + 1000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F688Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002F688Cu) [[unlikely]] return; }
L_002F688C:
    set32(c.r[4], 0u + 52u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F68A0u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002F68A0u) [[unlikely]] return; }
L_002F68A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F6918; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25876u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F68C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 992u), c.r[2].w[0]);  if (t) { goto L_002F68D4; } }
L_002F68C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F68D0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F68D0u) [[unlikely]] return; }
L_002F68D0:
    st32((c.r[29].w[0] + 992u), c.r[2].w[0]);
    c.budget -= 1;
L_002F68D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25867u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_002F68F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 996u), c.r[2].w[0]);  if (t) { goto L_002F6900; } }
L_002F68F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F68FCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F68FCu) [[unlikely]] return; }
L_002F68FC:
    st32((c.r[29].w[0] + 996u), c.r[2].w[0]);
    c.budget -= 1;
L_002F6900:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 992u);
    set32(c.r[6], c.r[29].w[0] + 996u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6914u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 347u, depth + 1u); else { c.pc = 0x002B6960u; return; } if (c.pc != 0x002F6914u) [[unlikely]] return; }
L_002F6914:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F6918:
    set32(c.r[4], ld32((c.r[29].w[0] + 440u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[16].d[0];  if (t) { goto L_002F6948; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[29].w[0] + 440u), c.r[16].w[0]);  goto L_002F6938; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6934u);  if (depth < kMaxDepth) unit_007E(c, 93u, depth + 1u); else { c.pc = 0x002F8790u; return; } if (c.pc != 0x002F6934u) [[unlikely]] return; }
L_002F6934:
    st32((c.r[29].w[0] + 440u), c.r[16].w[0]);
    c.budget -= 1;
L_002F6938:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F6948; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6948u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 90u, depth + 1u); else { c.pc = 0x002F8750u; return; } if (c.pc != 0x002F6948u) [[unlikely]] return; }
L_002F6948:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F6958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6958u); set32(c.r[4], c.r[29].w[0] + 992u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F6958u) [[unlikely]] return; }
L_002F6958:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 432u)));  goto L_002F696C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6968u); set32(c.r[4], c.r[29].w[0] + 996u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F6968u) [[unlikely]] return; }
L_002F6968:
    set32(c.r[4], ld32((c.r[29].w[0] + 432u)));
    c.budget -= 1;
L_002F696C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6974u); set32(c.r[5], ld32((c.r[29].w[0] + 440u)));  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F6974u) [[unlikely]] return; }
L_002F6974:
    set32(c.r[4], 0u + 52u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6988u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002F6988u) [[unlikely]] return; }
L_002F6988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F6A00; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25859u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F69B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 984u), c.r[2].w[0]);  if (t) { goto L_002F69BC; } }
L_002F69B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F69B8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F69B8u) [[unlikely]] return; }
L_002F69B8:
    st32((c.r[29].w[0] + 984u), c.r[2].w[0]);
    c.budget -= 1;
L_002F69BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25851u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_002F69DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 988u), c.r[2].w[0]);  if (t) { goto L_002F69E8; } }
L_002F69DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F69E4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F69E4u) [[unlikely]] return; }
L_002F69E4:
    st32((c.r[29].w[0] + 988u), c.r[2].w[0]);
    c.budget -= 1;
L_002F69E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 984u);
    set32(c.r[6], c.r[29].w[0] + 988u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F69FCu); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 347u, depth + 1u); else { c.pc = 0x002B6960u; return; } if (c.pc != 0x002F69FCu) [[unlikely]] return; }
L_002F69FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F6A00:
    set32(c.r[4], ld32((c.r[29].w[0] + 436u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[16].d[0];  if (t) { goto L_002F6A30; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[29].w[0] + 436u), c.r[16].w[0]);  goto L_002F6A20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6A1Cu);  if (depth < kMaxDepth) unit_007E(c, 93u, depth + 1u); else { c.pc = 0x002F8790u; return; } if (c.pc != 0x002F6A1Cu) [[unlikely]] return; }
L_002F6A1C:
    st32((c.r[29].w[0] + 436u), c.r[16].w[0]);
    c.budget -= 1;
L_002F6A20:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F6A30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6A30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 90u, depth + 1u); else { c.pc = 0x002F8750u; return; } if (c.pc != 0x002F6A30u) [[unlikely]] return; }
L_002F6A30:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F6A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6A40u); set32(c.r[4], c.r[29].w[0] + 984u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F6A40u) [[unlikely]] return; }
L_002F6A40:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 432u)));  goto L_002F6A54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6A50u); set32(c.r[4], c.r[29].w[0] + 988u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F6A50u) [[unlikely]] return; }
L_002F6A50:
    set32(c.r[4], ld32((c.r[29].w[0] + 432u)));
    c.budget -= 1;
L_002F6A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6A5Cu); set32(c.r[5], ld32((c.r[29].w[0] + 436u)));  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F6A5Cu) [[unlikely]] return; }
L_002F6A5C:
    set32(c.r[4], 0u + 52u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6A70u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002F6A70u) [[unlikely]] return; }
L_002F6A70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F6AE8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25844u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F6A98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 976u), c.r[2].w[0]);  if (t) { goto L_002F6AA4; } }
L_002F6A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6AA0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6AA0u) [[unlikely]] return; }
L_002F6AA0:
    st32((c.r[29].w[0] + 976u), c.r[2].w[0]);
    c.budget -= 1;
L_002F6AA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25834u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_002F6AC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 980u), c.r[2].w[0]);  if (t) { goto L_002F6AD0; } }
L_002F6AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6ACCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6ACCu) [[unlikely]] return; }
L_002F6ACC:
    st32((c.r[29].w[0] + 980u), c.r[2].w[0]);
    c.budget -= 1;
L_002F6AD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 976u);
    set32(c.r[6], c.r[29].w[0] + 980u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6AE4u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 347u, depth + 1u); else { c.pc = 0x002B6960u; return; } if (c.pc != 0x002F6AE4u) [[unlikely]] return; }
L_002F6AE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F6AE8:
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[16].d[0];  if (t) { goto L_002F6B18; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[29].w[0] + 444u), c.r[16].w[0]);  goto L_002F6B08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B04u);  if (depth < kMaxDepth) unit_007E(c, 93u, depth + 1u); else { c.pc = 0x002F8790u; return; } if (c.pc != 0x002F6B04u) [[unlikely]] return; }
L_002F6B04:
    st32((c.r[29].w[0] + 444u), c.r[16].w[0]);
    c.budget -= 1;
L_002F6B08:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F6B18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 90u, depth + 1u); else { c.pc = 0x002F8750u; return; } if (c.pc != 0x002F6B18u) [[unlikely]] return; }
L_002F6B18:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F6B28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B28u); set32(c.r[4], c.r[29].w[0] + 976u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F6B28u) [[unlikely]] return; }
L_002F6B28:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002F6B38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B38u); set32(c.r[4], c.r[29].w[0] + 980u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F6B38u) [[unlikely]] return; }
L_002F6B38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28421u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F6B58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 972u), c.r[2].w[0]);  if (t) { goto L_002F6B64; } }
L_002F6B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B60u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6B60u) [[unlikely]] return; }
L_002F6B60:
    st32((c.r[29].w[0] + 972u), c.r[2].w[0]);
    c.budget -= 1;
L_002F6B64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26163u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F6B84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 968u), c.r[2].w[0]);  if (t) { goto L_002F6B90; } }
L_002F6B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B8Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6B8Cu) [[unlikely]] return; }
L_002F6B8C:
    st32((c.r[29].w[0] + 968u), c.r[2].w[0]);
    c.budget -= 1;
L_002F6B90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26148u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F6BB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 964u), c.r[2].w[0]);  if (t) { goto L_002F6BBC; } }
L_002F6BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6BB8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6BB8u) [[unlikely]] return; }
L_002F6BB8:
    st32((c.r[29].w[0] + 964u), c.r[2].w[0]);
    c.budget -= 1;
L_002F6BBC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25827u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F6BDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 960u), c.r[2].w[0]);  if (t) { goto L_002F6BE8; } }
L_002F6BDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6BE4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6BE4u) [[unlikely]] return; }
L_002F6BE4:
    st32((c.r[29].w[0] + 960u), c.r[2].w[0]);
    c.budget -= 1;
L_002F6BE8:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[5], c.r[29].w[0] + 972u);
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[6], c.r[29].w[0] + 968u);
    set32(c.r[7], c.r[29].w[0] + 964u);
    set32(c.r[8], c.r[29].w[0] + 960u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6C10u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F6C10u) [[unlikely]] return; }
L_002F6C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6C18u); set32(c.r[4], c.r[29].w[0] + 960u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F6C18u) [[unlikely]] return; }
L_002F6C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6C20u); set32(c.r[4], c.r[29].w[0] + 964u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F6C20u) [[unlikely]] return; }
L_002F6C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6C28u); set32(c.r[4], c.r[29].w[0] + 968u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F6C28u) [[unlikely]] return; }
L_002F6C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6C30u); set32(c.r[4], c.r[29].w[0] + 972u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F6C30u) [[unlikely]] return; }
L_002F6C30:
    set32(c.r[5], ld32((c.r[29].w[0] + 444u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6C3Cu); set32(c.r[4], ld32((c.r[29].w[0] + 432u)));  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F6C3Cu) [[unlikely]] return; }
L_002F6C3C:
    set32(c.r[4], 0u + 52u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6C50u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002F6C50u) [[unlikely]] return; }
L_002F6C50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F6CC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25814u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F6C78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 952u), c.r[2].w[0]);  if (t) { goto L_002F6C84; } }
L_002F6C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6C80u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6C80u) [[unlikely]] return; }
L_002F6C80:
    st32((c.r[29].w[0] + 952u), c.r[2].w[0]);
    c.budget -= 1;
L_002F6C84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25805u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_002F6CA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 956u), c.r[2].w[0]);  if (t) { goto L_002F6CB0; } }
L_002F6CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6CACu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6CACu) [[unlikely]] return; }
L_002F6CAC:
    st32((c.r[29].w[0] + 956u), c.r[2].w[0]);
    c.budget -= 1;
L_002F6CB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 952u);
    set32(c.r[6], c.r[29].w[0] + 956u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6CC4u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 331u, depth + 1u); else { c.pc = 0x002B6760u; return; } if (c.pc != 0x002F6CC4u) [[unlikely]] return; }
L_002F6CC4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F6CC8:
    set32(c.r[4], ld32((c.r[29].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[16].d[0];  if (t) { goto L_002F6CF8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[29].w[0] + 448u), c.r[16].w[0]);  goto L_002F6CE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6CE4u);  if (depth < kMaxDepth) unit_007E(c, 93u, depth + 1u); else { c.pc = 0x002F8790u; return; } if (c.pc != 0x002F6CE4u) [[unlikely]] return; }
L_002F6CE4:
    st32((c.r[29].w[0] + 448u), c.r[16].w[0]);
    c.budget -= 1;
L_002F6CE8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F6CF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6CF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 90u, depth + 1u); else { c.pc = 0x002F8750u; return; } if (c.pc != 0x002F6CF8u) [[unlikely]] return; }
L_002F6CF8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F6D08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6D08u); set32(c.r[4], c.r[29].w[0] + 952u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F6D08u) [[unlikely]] return; }
L_002F6D08:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002F6D18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6D18u); set32(c.r[4], c.r[29].w[0] + 956u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F6D18u) [[unlikely]] return; }
L_002F6D18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28421u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F6D38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 948u), c.r[2].w[0]);  if (t) { goto L_002F6D44; } }
L_002F6D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6D40u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6D40u) [[unlikely]] return; }
L_002F6D40:
    st32((c.r[29].w[0] + 948u), c.r[2].w[0]);
    c.budget -= 1;
L_002F6D44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28291u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F6D64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 944u), c.r[2].w[0]);  if (t) { goto L_002F6D70; } }
L_002F6D64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6D6Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6D6Cu) [[unlikely]] return; }
L_002F6D6C:
    st32((c.r[29].w[0] + 944u), c.r[2].w[0]);
    c.budget -= 1;
L_002F6D70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F6D90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 940u), c.r[2].w[0]);  if (t) { goto L_002F6D9C; } }
L_002F6D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6D98u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6D98u) [[unlikely]] return; }
L_002F6D98:
    st32((c.r[29].w[0] + 940u), c.r[2].w[0]);
    c.budget -= 1;
L_002F6D9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25799u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F6DBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 936u), c.r[2].w[0]);  if (t) { goto L_002F6DC8; } }
L_002F6DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6DC4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6DC4u) [[unlikely]] return; }
L_002F6DC4:
    st32((c.r[29].w[0] + 936u), c.r[2].w[0]);
    c.budget -= 1;
L_002F6DC8:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[5], c.r[29].w[0] + 948u);
    set32(c.r[4], ld32((c.r[29].w[0] + 448u)));
    set32(c.r[6], c.r[29].w[0] + 944u);
    set32(c.r[7], c.r[29].w[0] + 940u);
    set32(c.r[8], c.r[29].w[0] + 936u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6DF0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 20u, depth + 1u); else { c.pc = 0x002B4140u; return; } if (c.pc != 0x002F6DF0u) [[unlikely]] return; }
L_002F6DF0:
    st32((c.r[29].w[0] + 380u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6DFCu); set32(c.r[4], c.r[29].w[0] + 936u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F6DFCu) [[unlikely]] return; }
L_002F6DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6E04u); set32(c.r[4], c.r[29].w[0] + 940u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F6E04u) [[unlikely]] return; }
L_002F6E04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6E0Cu); set32(c.r[4], c.r[29].w[0] + 944u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F6E0Cu) [[unlikely]] return; }
L_002F6E0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6E14u); set32(c.r[4], c.r[29].w[0] + 948u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F6E14u) [[unlikely]] return; }
L_002F6E14:
    set32(c.r[5], ld32((c.r[29].w[0] + 448u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6E20u); set32(c.r[4], ld32((c.r[29].w[0] + 432u)));  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F6E20u) [[unlikely]] return; }
L_002F6E20:
    st32((c.r[29].w[0] + 1096u), 0u);
    st32((c.r[29].w[0] + 1092u), 0u);
    st32((c.r[29].w[0] + 1088u), 0u);
    st32((c.r[29].w[0] + 1084u), 0u);
    st32((c.r[29].w[0] + 1080u), 0u);
    st32((c.r[29].w[0] + 1076u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  goto L_002F6F4C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28421u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F6E6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 932u), c.r[2].w[0]);  if (t) { goto L_002F6E78; } }
L_002F6E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6E74u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6E74u) [[unlikely]] return; }
L_002F6E74:
    st32((c.r[29].w[0] + 932u), c.r[2].w[0]);
    c.budget -= 1;
L_002F6E78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F6E98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 928u), c.r[2].w[0]);  if (t) { goto L_002F6EA4; } }
L_002F6E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6EA0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6EA0u) [[unlikely]] return; }
L_002F6EA0:
    st32((c.r[29].w[0] + 928u), c.r[2].w[0]);
    c.budget -= 1;
L_002F6EA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F6EC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 924u), c.r[2].w[0]);  if (t) { goto L_002F6ED0; } }
L_002F6EC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6ECCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6ECCu) [[unlikely]] return; }
L_002F6ECC:
    st32((c.r[29].w[0] + 924u), c.r[2].w[0]);
    c.budget -= 1;
L_002F6ED0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27491u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F6EF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 920u), c.r[2].w[0]);  if (t) { goto L_002F6EFC; } }
L_002F6EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6EF8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6EF8u) [[unlikely]] return; }
L_002F6EF8:
    st32((c.r[29].w[0] + 920u), c.r[2].w[0]);
    c.budget -= 1;
L_002F6EFC:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[5], c.r[29].w[0] + 932u);
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[6], c.r[29].w[0] + 928u);
    set32(c.r[7], c.r[29].w[0] + 924u);
    set32(c.r[8], c.r[29].w[0] + 920u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6F24u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F6F24u) [[unlikely]] return; }
L_002F6F24:
    st32((c.r[29].w[0] + 1096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6F30u); set32(c.r[4], c.r[29].w[0] + 920u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F6F30u) [[unlikely]] return; }
L_002F6F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6F38u); set32(c.r[4], c.r[29].w[0] + 924u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F6F38u) [[unlikely]] return; }
L_002F6F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6F40u); set32(c.r[4], c.r[29].w[0] + 928u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F6F40u) [[unlikely]] return; }
L_002F6F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6F48u); set32(c.r[4], c.r[29].w[0] + 932u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F6F48u) [[unlikely]] return; }
L_002F6F48:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_002F6F4C:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F6F6C; } }
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    set32(c.r[2], c.r[2].w[0] >> 3);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_002F70E0; }
L_002F6F6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F6F8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 916u), c.r[2].w[0]);  if (t) { goto L_002F6F98; } }
L_002F6F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6F94u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6F94u) [[unlikely]] return; }
L_002F6F94:
    st32((c.r[29].w[0] + 916u), c.r[2].w[0]);
    c.budget -= 1;
L_002F6F98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F6FB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 912u), c.r[2].w[0]);  if (t) { goto L_002F6FC4; } }
L_002F6FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6FC0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6FC0u) [[unlikely]] return; }
L_002F6FC0:
    st32((c.r[29].w[0] + 912u), c.r[2].w[0]);
    c.budget -= 1;
L_002F6FC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F6FE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 908u), c.r[2].w[0]);  if (t) { goto L_002F6FF0; } }
L_002F6FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6FECu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F6FECu) [[unlikely]] return; }
L_002F6FEC:
    st32((c.r[29].w[0] + 908u), c.r[2].w[0]);
    c.budget -= 1;
L_002F6FF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25915u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7010; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 904u), c.r[2].w[0]);  if (t) { goto L_002F701C; } }
L_002F7010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7018u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7018u) [[unlikely]] return; }
L_002F7018:
    st32((c.r[29].w[0] + 904u), c.r[2].w[0]);
    c.budget -= 1;
L_002F701C:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[5], c.r[29].w[0] + 916u);
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[6], c.r[29].w[0] + 912u);
    set32(c.r[7], c.r[29].w[0] + 908u);
    set32(c.r[8], c.r[29].w[0] + 904u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7044u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F7044u) [[unlikely]] return; }
L_002F7044:
    st32((c.r[29].w[0] + 1092u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7050u); set32(c.r[4], c.r[29].w[0] + 904u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7050u) [[unlikely]] return; }
L_002F7050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7058u); set32(c.r[4], c.r[29].w[0] + 908u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7058u) [[unlikely]] return; }
L_002F7058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7060u); set32(c.r[4], c.r[29].w[0] + 912u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7060u) [[unlikely]] return; }
L_002F7060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7068u); set32(c.r[4], c.r[29].w[0] + 916u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7068u) [[unlikely]] return; }
L_002F7068:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 432u);
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7080u); set32(c.r[6], c.r[29].w[0] + 1092u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F7080u) [[unlikely]] return; }
L_002F7080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F70DC; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7098u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F7098u) [[unlikely]] return; }
L_002F7098:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F70A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F70A4u) [[unlikely]] return; }
L_002F70A4:
    set32(c.r[4], c.r[29].w[0] + 444u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F70B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F70B0u) [[unlikely]] return; }
L_002F70B0:
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F70BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F70BCu) [[unlikely]] return; }
L_002F70BC:
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F70C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F70C8u) [[unlikely]] return; }
L_002F70C8:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F70D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F70D4u) [[unlikely]] return; }
L_002F70D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 88u, depth); } }
L_002F70DC:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_002F70E0:
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    set32(c.r[2], c.r[2].w[0] >> 3);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_002F73D0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7110; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 900u), c.r[2].w[0]);  if (t) { goto L_002F711C; } }
L_002F7110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7118u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7118u) [[unlikely]] return; }
L_002F7118:
    st32((c.r[29].w[0] + 900u), c.r[2].w[0]);
    c.budget -= 1;
L_002F711C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F713C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 896u), c.r[2].w[0]);  if (t) { goto L_002F7148; } }
L_002F713C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7144u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7144u) [[unlikely]] return; }
L_002F7144:
    st32((c.r[29].w[0] + 896u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7148:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7168; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 892u), c.r[2].w[0]);  if (t) { goto L_002F7174; } }
L_002F7168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7170u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7170u) [[unlikely]] return; }
L_002F7170:
    st32((c.r[29].w[0] + 892u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7174:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25942u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7194; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 888u), c.r[2].w[0]);  if (t) { goto L_002F71A0; } }
L_002F7194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F719Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F719Cu) [[unlikely]] return; }
L_002F719C:
    st32((c.r[29].w[0] + 888u), c.r[2].w[0]);
    c.budget -= 1;
L_002F71A0:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[5], c.r[29].w[0] + 900u);
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[6], c.r[29].w[0] + 896u);
    set32(c.r[7], c.r[29].w[0] + 892u);
    set32(c.r[8], c.r[29].w[0] + 888u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F71C8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F71C8u) [[unlikely]] return; }
L_002F71C8:
    st32((c.r[29].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F71D4u); set32(c.r[4], c.r[29].w[0] + 888u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F71D4u) [[unlikely]] return; }
L_002F71D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F71DCu); set32(c.r[4], c.r[29].w[0] + 892u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F71DCu) [[unlikely]] return; }
L_002F71DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F71E4u); set32(c.r[4], c.r[29].w[0] + 896u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F71E4u) [[unlikely]] return; }
L_002F71E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F71ECu); set32(c.r[4], c.r[29].w[0] + 900u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F71ECu) [[unlikely]] return; }
L_002F71EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F720C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 884u), c.r[2].w[0]);  if (t) { goto L_002F7218; } }
L_002F720C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7214u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7214u) [[unlikely]] return; }
L_002F7214:
    st32((c.r[29].w[0] + 884u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7218:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7238; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 880u), c.r[2].w[0]);  if (t) { goto L_002F7244; } }
L_002F7238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7240u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7240u) [[unlikely]] return; }
L_002F7240:
    st32((c.r[29].w[0] + 880u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7244:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7264; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 876u), c.r[2].w[0]);  if (t) { goto L_002F7270; } }
L_002F7264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F726Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F726Cu) [[unlikely]] return; }
L_002F726C:
    st32((c.r[29].w[0] + 876u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7270:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25928u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7290; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 872u), c.r[2].w[0]);  if (t) { goto L_002F729C; } }
L_002F7290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7298u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7298u) [[unlikely]] return; }
L_002F7298:
    st32((c.r[29].w[0] + 872u), c.r[2].w[0]);
    c.budget -= 1;
L_002F729C:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[5], c.r[29].w[0] + 884u);
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[6], c.r[29].w[0] + 880u);
    set32(c.r[7], c.r[29].w[0] + 876u);
    set32(c.r[8], c.r[29].w[0] + 872u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F72C4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F72C4u) [[unlikely]] return; }
L_002F72C4:
    st32((c.r[29].w[0] + 1084u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F72D0u); set32(c.r[4], c.r[29].w[0] + 872u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F72D0u) [[unlikely]] return; }
L_002F72D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F72D8u); set32(c.r[4], c.r[29].w[0] + 876u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F72D8u) [[unlikely]] return; }
L_002F72D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F72E0u); set32(c.r[4], c.r[29].w[0] + 880u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F72E0u) [[unlikely]] return; }
L_002F72E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F72E8u); set32(c.r[4], c.r[29].w[0] + 884u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F72E8u) [[unlikely]] return; }
L_002F72E8:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 432u);
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7300u); set32(c.r[6], c.r[29].w[0] + 1088u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F7300u) [[unlikely]] return; }
L_002F7300:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[21].w[0])));  goto L_002F735C; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7318u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F7318u) [[unlikely]] return; }
L_002F7318:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7324u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F7324u) [[unlikely]] return; }
L_002F7324:
    set32(c.r[4], c.r[29].w[0] + 444u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7330u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F7330u) [[unlikely]] return; }
L_002F7330:
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F733Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F733Cu) [[unlikely]] return; }
L_002F733C:
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7348u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F7348u) [[unlikely]] return; }
L_002F7348:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7354u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F7354u) [[unlikely]] return; }
L_002F7354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 88u, depth); } }
L_002F735C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 432u);
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7370u); set32(c.r[6], c.r[29].w[0] + 1084u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F7370u) [[unlikely]] return; }
L_002F7370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F73CC; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7388u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F7388u) [[unlikely]] return; }
L_002F7388:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7394u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F7394u) [[unlikely]] return; }
L_002F7394:
    set32(c.r[4], c.r[29].w[0] + 444u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F73A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F73A0u) [[unlikely]] return; }
L_002F73A0:
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F73ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F73ACu) [[unlikely]] return; }
L_002F73AC:
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F73B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F73B8u) [[unlikely]] return; }
L_002F73B8:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F73C4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F73C4u) [[unlikely]] return; }
L_002F73C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 88u, depth); } }
L_002F73CC:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_002F73D0:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    set32(c.r[2], c.r[2].w[0] >> 4);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_002F7554; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7400; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 868u), c.r[2].w[0]);  if (t) { goto L_002F740C; } }
L_002F7400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7408u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7408u) [[unlikely]] return; }
L_002F7408:
    st32((c.r[29].w[0] + 868u), c.r[2].w[0]);
    c.budget -= 1;
L_002F740C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F742C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 864u), c.r[2].w[0]);  if (t) { goto L_002F7438; } }
L_002F742C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7434u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7434u) [[unlikely]] return; }
L_002F7434:
    st32((c.r[29].w[0] + 864u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7438:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7458; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 860u), c.r[2].w[0]);  if (t) { goto L_002F7464; } }
L_002F7458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7460u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7460u) [[unlikely]] return; }
L_002F7460:
    st32((c.r[29].w[0] + 860u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7464:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25903u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7484; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 856u), c.r[2].w[0]);  if (t) { goto L_002F7490; } }
L_002F7484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F748Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F748Cu) [[unlikely]] return; }
L_002F748C:
    st32((c.r[29].w[0] + 856u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7490:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[5], c.r[29].w[0] + 868u);
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[6], c.r[29].w[0] + 864u);
    set32(c.r[7], c.r[29].w[0] + 860u);
    set32(c.r[8], c.r[29].w[0] + 856u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74B8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F74B8u) [[unlikely]] return; }
L_002F74B8:
    st32((c.r[29].w[0] + 1080u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74C4u); set32(c.r[4], c.r[29].w[0] + 856u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F74C4u) [[unlikely]] return; }
L_002F74C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74CCu); set32(c.r[4], c.r[29].w[0] + 860u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F74CCu) [[unlikely]] return; }
L_002F74CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74D4u); set32(c.r[4], c.r[29].w[0] + 864u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F74D4u) [[unlikely]] return; }
L_002F74D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74DCu); set32(c.r[4], c.r[29].w[0] + 868u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F74DCu) [[unlikely]] return; }
L_002F74DC:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 432u);
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74F4u); set32(c.r[6], c.r[29].w[0] + 1080u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F74F4u) [[unlikely]] return; }
L_002F74F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F7550; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F750Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F750Cu) [[unlikely]] return; }
L_002F750C:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7518u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F7518u) [[unlikely]] return; }
L_002F7518:
    set32(c.r[4], c.r[29].w[0] + 444u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7524u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F7524u) [[unlikely]] return; }
L_002F7524:
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7530u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F7530u) [[unlikely]] return; }
L_002F7530:
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F753Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F753Cu) [[unlikely]] return; }
L_002F753C:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7548u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F7548u) [[unlikely]] return; }
L_002F7548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 88u, depth); } }
L_002F7550:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_002F7554:
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    set32(c.r[2], c.r[2].w[0] >> 7);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 1072u), 0u);  goto L_002F76D8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7584; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 852u), c.r[2].w[0]);  if (t) { goto L_002F7590; } }
L_002F7584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F758Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F758Cu) [[unlikely]] return; }
L_002F758C:
    st32((c.r[29].w[0] + 852u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7590:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F75B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 848u), c.r[2].w[0]);  if (t) { goto L_002F75BC; } }
L_002F75B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F75B8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F75B8u) [[unlikely]] return; }
L_002F75B8:
    st32((c.r[29].w[0] + 848u), c.r[2].w[0]);
    c.budget -= 1;
L_002F75BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F75DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_002F75E8; } }
L_002F75DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F75E4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F75E4u) [[unlikely]] return; }
L_002F75E4:
    st32((c.r[29].w[0] + 844u), c.r[2].w[0]);
    c.budget -= 1;
L_002F75E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25893u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7608; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 840u), c.r[2].w[0]);  if (t) { goto L_002F7614; } }
L_002F7608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7610u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7610u) [[unlikely]] return; }
L_002F7610:
    st32((c.r[29].w[0] + 840u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7614:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[5], c.r[29].w[0] + 852u);
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[6], c.r[29].w[0] + 848u);
    set32(c.r[7], c.r[29].w[0] + 844u);
    set32(c.r[8], c.r[29].w[0] + 840u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F763Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F763Cu) [[unlikely]] return; }
L_002F763C:
    st32((c.r[29].w[0] + 1076u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7648u); set32(c.r[4], c.r[29].w[0] + 840u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7648u) [[unlikely]] return; }
L_002F7648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7650u); set32(c.r[4], c.r[29].w[0] + 844u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7650u) [[unlikely]] return; }
L_002F7650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7658u); set32(c.r[4], c.r[29].w[0] + 848u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7658u) [[unlikely]] return; }
L_002F7658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7660u); set32(c.r[4], c.r[29].w[0] + 852u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7660u) [[unlikely]] return; }
L_002F7660:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 432u);
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7678u); set32(c.r[6], c.r[29].w[0] + 1076u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F7678u) [[unlikely]] return; }
L_002F7678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F76D4; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7690u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F7690u) [[unlikely]] return; }
L_002F7690:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F769Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F769Cu) [[unlikely]] return; }
L_002F769C:
    set32(c.r[4], c.r[29].w[0] + 444u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F76A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F76A8u) [[unlikely]] return; }
L_002F76A8:
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F76B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F76B4u) [[unlikely]] return; }
L_002F76B4:
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F76C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F76C0u) [[unlikely]] return; }
L_002F76C0:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F76CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F76CCu) [[unlikely]] return; }
L_002F76CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 88u, depth); } }
L_002F76D4:
    st32((c.r[29].w[0] + 1072u), 0u);
    c.budget -= 1;
L_002F76D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    st32((c.r[29].w[0] + 1068u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[29].w[0] + 1064u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    st32((c.r[29].w[0] + 1060u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00060000u);
    st32((c.r[29].w[0] + 1056u), 0u);
    st32((c.r[29].w[0] + 1052u), 0u);
    set32(c.r[7], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 28);
    st32((c.r[29].w[0] + 1048u), 0u);
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[29].w[0] + 1044u), 0u);
    set32(c.r[2], c.r[2].w[0] >> 16);
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    c.r[22].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 1040u), 0u);
    c.r[2].d[0] = c.r[4].d[0] & 240ull;
    st32((c.r[29].w[0] + 1036u), 0u);
    set32(c.r[2], c.r[2].w[0] >> 4);
    st32((c.r[29].w[0] + 1032u), 0u);
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] & 15ull;
    st32((c.r[29].w[0] + 1028u), 0u);
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    st32((c.r[29].w[0] + 1024u), 0u);
    st32((c.r[29].w[0] + 1020u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[6].w[0] >> 17);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[7].d[0] & c.r[5].d[0];
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] >> 19);
    st32((c.r[29].w[0] + 352u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] & 2048ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[2], c.r[2].w[0] >> 11);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 51;
    { const bool t = c.r[3].d[0] == 0ull; st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);  if (t) { goto L_002F7C24; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);  goto L_002F7B34; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28421u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F77CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 836u), c.r[2].w[0]);  if (t) { goto L_002F77D8; } }
L_002F77CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F77D4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F77D4u) [[unlikely]] return; }
L_002F77D4:
    st32((c.r[29].w[0] + 836u), c.r[2].w[0]);
    c.budget -= 1;
L_002F77D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F77F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 832u), c.r[2].w[0]);  if (t) { goto L_002F7804; } }
L_002F77F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7800u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7800u) [[unlikely]] return; }
L_002F7800:
    st32((c.r[29].w[0] + 832u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7804:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7824; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 828u), c.r[2].w[0]);  if (t) { goto L_002F7830; } }
L_002F7824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F782Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F782Cu) [[unlikely]] return; }
L_002F782C:
    st32((c.r[29].w[0] + 828u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7830:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27460u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7850; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 824u), c.r[2].w[0]);  if (t) { goto L_002F785C; } }
L_002F7850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7858u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7858u) [[unlikely]] return; }
L_002F7858:
    st32((c.r[29].w[0] + 824u), c.r[2].w[0]);
    c.budget -= 1;
L_002F785C:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[5], c.r[29].w[0] + 836u);
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[6], c.r[29].w[0] + 832u);
    set32(c.r[7], c.r[29].w[0] + 828u);
    set32(c.r[8], c.r[29].w[0] + 824u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7884u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F7884u) [[unlikely]] return; }
L_002F7884:
    st32((c.r[29].w[0] + 1060u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7890u); set32(c.r[4], c.r[29].w[0] + 824u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7890u) [[unlikely]] return; }
L_002F7890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7898u); set32(c.r[4], c.r[29].w[0] + 828u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7898u) [[unlikely]] return; }
L_002F7898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F78A0u); set32(c.r[4], c.r[29].w[0] + 832u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F78A0u) [[unlikely]] return; }
L_002F78A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F78A8u); set32(c.r[4], c.r[29].w[0] + 836u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F78A8u) [[unlikely]] return; }
L_002F78A8:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 1060u)));
    set32(c.r[5], c.r[29].w[0] + 432u);
    set32(c.r[7], c.r[29].w[0] + 1060u);
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F78C8u); set32(c.r[8], c.r[29].w[0] + 1064u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F78C8u) [[unlikely]] return; }
L_002F78C8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);  goto L_002F7924; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F78E0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F78E0u) [[unlikely]] return; }
L_002F78E0:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F78ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F78ECu) [[unlikely]] return; }
L_002F78EC:
    set32(c.r[4], c.r[29].w[0] + 444u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F78F8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F78F8u) [[unlikely]] return; }
L_002F78F8:
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7904u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F7904u) [[unlikely]] return; }
L_002F7904:
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7910u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F7910u) [[unlikely]] return; }
L_002F7910:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F791Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F791Cu) [[unlikely]] return; }
L_002F791C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 88u, depth); } }
L_002F7924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F7A28; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28421u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F794C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 820u), c.r[2].w[0]);  if (t) { goto L_002F7958; } }
L_002F794C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7954u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7954u) [[unlikely]] return; }
L_002F7954:
    st32((c.r[29].w[0] + 820u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7958:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7978; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 816u), c.r[2].w[0]);  if (t) { goto L_002F7984; } }
L_002F7978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7980u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7980u) [[unlikely]] return; }
L_002F7980:
    st32((c.r[29].w[0] + 816u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7984:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F79A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 812u), c.r[2].w[0]);  if (t) { goto L_002F79B0; } }
L_002F79A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F79ACu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F79ACu) [[unlikely]] return; }
L_002F79AC:
    st32((c.r[29].w[0] + 812u), c.r[2].w[0]);
    c.budget -= 1;
L_002F79B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27473u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F79D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 808u), c.r[2].w[0]);  if (t) { goto L_002F79DC; } }
L_002F79D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F79D8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F79D8u) [[unlikely]] return; }
L_002F79D8:
    st32((c.r[29].w[0] + 808u), c.r[2].w[0]);
    c.budget -= 1;
L_002F79DC:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[5], c.r[29].w[0] + 820u);
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[6], c.r[29].w[0] + 816u);
    set32(c.r[7], c.r[29].w[0] + 812u);
    set32(c.r[8], c.r[29].w[0] + 808u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7A04u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F7A04u) [[unlikely]] return; }
L_002F7A04:
    st32((c.r[29].w[0] + 1052u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7A10u); set32(c.r[4], c.r[29].w[0] + 808u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7A10u) [[unlikely]] return; }
L_002F7A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7A18u); set32(c.r[4], c.r[29].w[0] + 812u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7A18u) [[unlikely]] return; }
L_002F7A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7A20u); set32(c.r[4], c.r[29].w[0] + 816u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7A20u) [[unlikely]] return; }
L_002F7A20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7A28u); set32(c.r[4], c.r[29].w[0] + 820u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7A28u) [[unlikely]] return; }
L_002F7A28:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002F7C24; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7A50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 804u), c.r[2].w[0]);  if (t) { goto L_002F7A5C; } }
L_002F7A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7A58u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7A58u) [[unlikely]] return; }
L_002F7A58:
    st32((c.r[29].w[0] + 804u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7A5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7A7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 800u), c.r[2].w[0]);  if (t) { goto L_002F7A88; } }
L_002F7A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7A84u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7A84u) [[unlikely]] return; }
L_002F7A84:
    st32((c.r[29].w[0] + 800u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7A88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7AA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 796u), c.r[2].w[0]);  if (t) { goto L_002F7AB4; } }
L_002F7AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7AB0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7AB0u) [[unlikely]] return; }
L_002F7AB0:
    st32((c.r[29].w[0] + 796u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7AB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27447u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7AD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 792u), c.r[2].w[0]);  if (t) { goto L_002F7AE0; } }
L_002F7AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7ADCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7ADCu) [[unlikely]] return; }
L_002F7ADC:
    st32((c.r[29].w[0] + 792u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7AE0:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[5], c.r[29].w[0] + 804u);
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[6], c.r[29].w[0] + 800u);
    set32(c.r[7], c.r[29].w[0] + 796u);
    set32(c.r[8], c.r[29].w[0] + 792u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7B08u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F7B08u) [[unlikely]] return; }
L_002F7B08:
    st32((c.r[29].w[0] + 1056u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7B14u); set32(c.r[4], c.r[29].w[0] + 792u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7B14u) [[unlikely]] return; }
L_002F7B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7B1Cu); set32(c.r[4], c.r[29].w[0] + 796u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7B1Cu) [[unlikely]] return; }
L_002F7B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7B24u); set32(c.r[4], c.r[29].w[0] + 800u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7B24u) [[unlikely]] return; }
L_002F7B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7B2Cu); set32(c.r[4], c.r[29].w[0] + 804u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7B2Cu) [[unlikely]] return; }
L_002F7B2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F7C24; } }
L_002F7B34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] >> 23);
    set32(c.r[2], c.r[2].w[0] >> 21);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_002F7B78; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 440u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 87u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7B74u); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F7B74u) [[unlikely]] return; }
L_002F7B74:
    st32((c.r[29].w[0] + 1052u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7B78:
    set32(c.r[2], c.r[29].w[0] + 1032u);
    set32(c.r[8], ld32((c.r[29].w[0] + 352u)));
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 1028u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[5], c.r[29].w[0] + 432u);
    set32(c.r[2], c.r[29].w[0] + 1064u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[9], c.r[29].w[0] + 1048u);
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[10], c.r[29].w[0] + 1044u);
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7BBCu); set32(c.r[11], c.r[29].w[0] + 1040u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F7BBCu) [[unlikely]] return; }
L_002F7BBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F7C18; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7BD4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F7BD4u) [[unlikely]] return; }
L_002F7BD4:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7BE0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F7BE0u) [[unlikely]] return; }
L_002F7BE0:
    set32(c.r[4], c.r[29].w[0] + 444u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7BECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F7BECu) [[unlikely]] return; }
L_002F7BEC:
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7BF8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F7BF8u) [[unlikely]] return; }
L_002F7BF8:
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F7C04u) [[unlikely]] return; }
L_002F7C04:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F7C10u) [[unlikely]] return; }
L_002F7C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 88u, depth); } }
L_002F7C18:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002F7C24; } }
    st32((c.r[29].w[0] + 1028u), 0u);
    c.budget -= 1;
L_002F7C24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002F7D14; } }
L_002F7C38:
    set32(c.r[4], c.r[4].w[0] - 28207u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7C4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 788u), c.r[16].w[0]);  if (t) { goto L_002F7C58; } }
L_002F7C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C54u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7C54u) [[unlikely]] return; }
L_002F7C54:
    st32((c.r[29].w[0] + 788u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7C58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7C70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 784u), c.r[16].w[0]);  if (t) { goto L_002F7C7C; } }
L_002F7C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C78u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7C78u) [[unlikely]] return; }
L_002F7C78:
    st32((c.r[29].w[0] + 784u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7C7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7C94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 780u), c.r[16].w[0]);  if (t) { goto L_002F7CA0; } }
L_002F7C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C9Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7C9Cu) [[unlikely]] return; }
L_002F7C9C:
    st32((c.r[29].w[0] + 780u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7CA0:
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[4], c.r[29].w[0] + 776u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7CB8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F7CB8u) [[unlikely]] return; }
L_002F7CB8:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[5], c.r[29].w[0] + 788u);
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[6], c.r[29].w[0] + 784u);
    set32(c.r[7], c.r[29].w[0] + 780u);
    set32(c.r[8], c.r[29].w[0] + 776u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7CE0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F7CE0u) [[unlikely]] return; }
L_002F7CE0:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 776u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7CF4u); st32((c.r[3].w[0] + 384u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7CF4u) [[unlikely]] return; }
L_002F7CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7CFCu); set32(c.r[4], c.r[29].w[0] + 780u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7CFCu) [[unlikely]] return; }
L_002F7CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7D04u); set32(c.r[4], c.r[29].w[0] + 784u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7D04u) [[unlikely]] return; }
L_002F7D04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7D0Cu); set32(c.r[4], c.r[29].w[0] + 788u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7D0Cu) [[unlikely]] return; }
L_002F7D0C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002F7D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7D1Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 87u, depth + 1u); else { c.pc = 0x00304740u; return; } if (c.pc != 0x002F7D1Cu) [[unlikely]] return; }
L_002F7D1C:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7C38u | kUnwind; return; } goto L_002F7C38; }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x18000000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07000000u);
    c.r[23].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] & 24ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] >> 27);
    set32(c.r[4], c.r[4].w[0] >> 3);
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002F7D70; } }
    c.r[2].d[0] = c.r[5].d[0] & 512ull;
    set32(c.r[2], c.r[2].w[0] >> 9);
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002F7E58; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002F7D70:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F7E58; } }
L_002F7D7C:
    set32(c.r[4], c.r[4].w[0] - 28421u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7D90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 772u), c.r[16].w[0]);  if (t) { goto L_002F7D9C; } }
L_002F7D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7D98u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7D98u) [[unlikely]] return; }
L_002F7D98:
    st32((c.r[29].w[0] + 772u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7D9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7DB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 768u), c.r[16].w[0]);  if (t) { goto L_002F7DC0; } }
L_002F7DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7DBCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7DBCu) [[unlikely]] return; }
L_002F7DBC:
    st32((c.r[29].w[0] + 768u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7DC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7DD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 764u), c.r[16].w[0]);  if (t) { goto L_002F7DE4; } }
L_002F7DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7DE0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F7DE0u) [[unlikely]] return; }
L_002F7DE0:
    st32((c.r[29].w[0] + 764u), c.r[2].w[0]);
    c.budget -= 1;
L_002F7DE4:
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[4], c.r[29].w[0] + 760u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7DFCu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F7DFCu) [[unlikely]] return; }
L_002F7DFC:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[5], c.r[29].w[0] + 772u);
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[6], c.r[29].w[0] + 768u);
    set32(c.r[7], c.r[29].w[0] + 764u);
    set32(c.r[8], c.r[29].w[0] + 760u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7E24u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002F7E24u) [[unlikely]] return; }
L_002F7E24:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 760u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7E38u); st32((c.r[3].w[0] + 384u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7E38u) [[unlikely]] return; }
L_002F7E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7E40u); set32(c.r[4], c.r[29].w[0] + 764u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7E40u) [[unlikely]] return; }
L_002F7E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7E48u); set32(c.r[4], c.r[29].w[0] + 768u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7E48u) [[unlikely]] return; }
L_002F7E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7E50u); set32(c.r[4], c.r[29].w[0] + 772u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F7E50u) [[unlikely]] return; }
L_002F7E50:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002F7E58:
    c.r[2].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7D7Cu | kUnwind; return; } goto L_002F7D7C; }
    st32((c.r[29].w[0] + 1016u), 0u);
    set32(c.r[2], c.r[29].w[0] + 1076u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 1048u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 1044u);
    set32(c.r[7], c.r[29].w[0] + 1096u);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[8], c.r[29].w[0] + 1092u);
    set32(c.r[2], c.r[29].w[0] + 1040u);
    set32(c.r[9], c.r[29].w[0] + 1088u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[10], c.r[29].w[0] + 1084u);
    set32(c.r[2], c.r[29].w[0] + 1036u);
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[2], c.r[29].w[0] + 1032u);
    st64((c.r[29].w[0] + 40u), c.r[2].d[0]);
    set32(c.r[2], c.r[29].w[0] + 1028u);
    st64((c.r[29].w[0] + 48u), c.r[2].d[0]);
    set32(c.r[2], c.r[29].w[0] + 1064u);
    st64((c.r[29].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], c.r[29].w[0] + 1024u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[2], c.r[29].w[0] + 1020u);
    st64((c.r[29].w[0] + 72u), c.r[2].d[0]);
    set32(c.r[2], c.r[29].w[0] + 1016u);
    st64((c.r[29].w[0] + 80u), c.r[2].d[0]);
    set32(c.r[2], c.r[29].w[0] + 384u);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[18].d[0]);
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 200u)));
    c.budget -= 38;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7EFCu); set32(c.r[11], c.r[29].w[0] + 1080u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F7EFCu) [[unlikely]] return; }
L_002F7EFC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 16u)));  goto L_002F7F58; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F14u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F7F14u) [[unlikely]] return; }
L_002F7F14:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F7F20u) [[unlikely]] return; }
L_002F7F20:
    set32(c.r[4], c.r[29].w[0] + 444u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F2Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F7F2Cu) [[unlikely]] return; }
L_002F7F2C:
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F38u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F7F38u) [[unlikely]] return; }
L_002F7F38:
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F44u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F7F44u) [[unlikely]] return; }
L_002F7F44:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F7F50u) [[unlikely]] return; }
L_002F7F50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 88u, depth); } }
L_002F7F58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0F000000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 1096u)));
    set32(c.r[14], c.r[29].w[0] + 1052u);
    set32(c.r[13], c.r[29].w[0] + 1060u);
    set32(c.r[12], c.r[29].w[0] + 1056u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[7], ld32((c.r[29].w[0] + 336u)));
    st64((c.r[29].w[0]), c.r[4].d[0]);
    set32(c.r[11], c.r[2].w[0] >> 24);
    set32(c.r[2], ld32((c.r[29].w[0] + 1092u)));
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 320u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[10], c.r[3].w[0] >> 8);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 1080u)));
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1040u)));
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[14].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[13].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[12].d[0]);
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 268u)));
    c.budget -= 28;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FC8u); set32(c.r[5], c.r[29].w[0] + 432u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F7FC8u) [[unlikely]] return; }
L_002F7FC8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 1012u), 0u);  [[clang::musttail]] return unit_007E(c, 5u, depth); }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FE0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F7FE0u) [[unlikely]] return; }
L_002F7FE0:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F7FECu) [[unlikely]] return; }
L_002F7FEC:
    set32(c.r[4], c.r[29].w[0] + 444u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FF8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F7FF8u) [[unlikely]] return; }
L_002F7FF8:
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8004u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F8004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_007E(c, 2u, depth);
}

}
