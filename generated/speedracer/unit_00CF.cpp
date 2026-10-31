#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00CF[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0,
    0, 53, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60,
    0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0,
    0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0,
    0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0,
    90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95,
    0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0,
    0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145,
    0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0,
    0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0,
    0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0,
    179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0,
    0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0,
    0, 208, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0,
    0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0,
    0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238,
    0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0,
    0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268,
    0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 274, 0, 0,
    0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286,
    0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0,
    0, 292, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298,
    0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 304, 0, 0,
    0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0,
    0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322,
    0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0,
    0, 331, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    338, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351,
    0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0,
    0, 0, 0, 0, 0, 0, 380, 381, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 385, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0,
    0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 397,
    0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0,
    0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408,
    0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0,
    432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0,
    0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0,
    441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0,
    0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 0, 452,
    0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 459, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0,
    464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0,
    0, 0, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0,
    0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0,
    482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488,
};

void unit_00CF(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0043C000;
    case 2u: goto L_0043C014;
    case 3u: goto L_0043C02C;
    case 4u: goto L_0043C050;
    case 5u: goto L_0043C060;
    case 6u: goto L_0043C084;
    case 7u: goto L_0043C090;
    case 8u: goto L_0043C0A0;
    case 9u: goto L_0043C0B0;
    case 10u: goto L_0043C0FC;
    case 11u: goto L_0043C110;
    case 12u: goto L_0043C15C;
    case 13u: goto L_0043C170;
    case 14u: goto L_0043C1BC;
    case 15u: goto L_0043C1D0;
    case 16u: goto L_0043C1F0;
    case 17u: goto L_0043C210;
    case 18u: goto L_0043C22C;
    case 19u: goto L_0043C240;
    case 20u: goto L_0043C250;
    case 21u: goto L_0043C260;
    case 22u: goto L_0043C2A4;
    case 23u: goto L_0043C2D0;
    case 24u: goto L_0043C2F0;
    case 25u: goto L_0043C300;
    case 26u: goto L_0043C330;
    case 27u: goto L_0043C34C;
    case 28u: goto L_0043C370;
    case 29u: goto L_0043C3AC;
    case 30u: goto L_0043C3B4;
    case 31u: goto L_0043C3E0;
    case 32u: goto L_0043C41C;
    case 33u: goto L_0043C430;
    case 34u: goto L_0043C488;
    case 35u: goto L_0043C4A0;
    case 36u: goto L_0043C4D0;
    case 37u: goto L_0043C4FC;
    case 38u: goto L_0043C530;
    case 39u: goto L_0043C540;
    case 40u: goto L_0043C57C;
    case 41u: goto L_0043C590;
    case 42u: goto L_0043C5B0;
    case 43u: goto L_0043C5D4;
    case 44u: goto L_0043C5F0;
    case 45u: goto L_0043C600;
    case 46u: goto L_0043C648;
    case 47u: goto L_0043C650;
    case 48u: goto L_0043C67C;
    case 49u: goto L_0043C6A0;
    case 50u: goto L_0043C6D0;
    case 51u: goto L_0043C6E0;
    case 52u: goto L_0043C6F4;
    case 53u: goto L_0043C704;
    case 54u: goto L_0043C70C;
    case 55u: goto L_0043C720;
    case 56u: goto L_0043C730;
    case 57u: goto L_0043C740;
    case 58u: goto L_0043C75C;
    case 59u: goto L_0043C76C;
    case 60u: goto L_0043C77C;
    case 61u: goto L_0043C788;
    case 62u: goto L_0043C798;
    case 63u: goto L_0043C7B0;
    case 64u: goto L_0043C7D4;
    case 65u: goto L_0043C7F8;
    case 66u: goto L_0043C81C;
    case 67u: goto L_0043C828;
    case 68u: goto L_0043C850;
    case 69u: goto L_0043C890;
    case 70u: goto L_0043C8C0;
    case 71u: goto L_0043C8EC;
    case 72u: goto L_0043C914;
    case 73u: goto L_0043C920;
    case 74u: goto L_0043C970;
    case 75u: goto L_0043C9A0;
    case 76u: goto L_0043CA08;
    case 77u: goto L_0043CA10;
    case 78u: goto L_0043CA70;
    case 79u: goto L_0043CA80;
    case 80u: goto L_0043CAB4;
    case 81u: goto L_0043CAE0;
    case 82u: goto L_0043CAF4;
    case 83u: goto L_0043CB0C;
    case 84u: goto L_0043CB2C;
    case 85u: goto L_0043CB3C;
    case 86u: goto L_0043CB70;
    case 87u: goto L_0043CED0;
    case 88u: goto L_0043CEE0;
    case 89u: goto L_0043CEF0;
    case 90u: goto L_0043CF00;
    case 91u: goto L_0043CF10;
    case 92u: goto L_0043CF44;
    case 93u: goto L_0043CF60;
    case 94u: goto L_0043CF70;
    case 95u: goto L_0043CF7C;
    case 96u: goto L_0043CF9C;
    case 97u: goto L_0043CFC0;
    case 98u: goto L_0043D000;
    case 99u: goto L_0043D00C;
    case 100u: goto L_0043D030;
    case 101u: goto L_0043D03C;
    case 102u: goto L_0043D074;
    case 103u: goto L_0043D080;
    case 104u: goto L_0043D0A4;
    case 105u: goto L_0043D0B0;
    case 106u: goto L_0043D0E8;
    case 107u: goto L_0043D0F4;
    case 108u: goto L_0043D118;
    case 109u: goto L_0043D124;
    case 110u: goto L_0043D178;
    case 111u: goto L_0043D19C;
    case 112u: goto L_0043D1D8;
    case 113u: goto L_0043D1FC;
    case 114u: goto L_0043D220;
    case 115u: goto L_0043D244;
    case 116u: goto L_0043D268;
    case 117u: goto L_0043D28C;
    case 118u: goto L_0043D2B0;
    case 119u: goto L_0043D2D4;
    case 120u: goto L_0043D318;
    case 121u: goto L_0043D33C;
    case 122u: goto L_0043D360;
    case 123u: goto L_0043D384;
    case 124u: goto L_0043D3A8;
    case 125u: goto L_0043D3CC;
    case 126u: goto L_0043D410;
    case 127u: goto L_0043D434;
    case 128u: goto L_0043D458;
    case 129u: goto L_0043D47C;
    case 130u: goto L_0043D4A0;
    case 131u: goto L_0043D4C4;
    case 132u: goto L_0043D4E8;
    case 133u: goto L_0043D50C;
    case 134u: goto L_0043D530;
    case 135u: goto L_0043D554;
    case 136u: goto L_0043D598;
    case 137u: goto L_0043D5BC;
    case 138u: goto L_0043D5E0;
    case 139u: goto L_0043D604;
    case 140u: goto L_0043D628;
    case 141u: goto L_0043D64C;
    case 142u: goto L_0043D670;
    case 143u: goto L_0043D694;
    case 144u: goto L_0043D6D8;
    case 145u: goto L_0043D6FC;
    case 146u: goto L_0043D720;
    case 147u: goto L_0043D744;
    case 148u: goto L_0043D768;
    case 149u: goto L_0043D78C;
    case 150u: goto L_0043D7B0;
    case 151u: goto L_0043D7D4;
    case 152u: goto L_0043D818;
    case 153u: goto L_0043D83C;
    case 154u: goto L_0043D880;
    case 155u: goto L_0043D8A4;
    case 156u: goto L_0043D8F0;
    case 157u: goto L_0043D91C;
    case 158u: goto L_0043D92C;
    case 159u: goto L_0043D95C;
    case 160u: goto L_0043D984;
    case 161u: goto L_0043D990;
    case 162u: goto L_0043D9B0;
    case 163u: goto L_0043D9D4;
    case 164u: goto L_0043DA04;
    case 165u: goto L_0043DA28;
    case 166u: goto L_0043DA50;
    case 167u: goto L_0043DA84;
    case 168u: goto L_0043DA90;
    case 169u: goto L_0043DAA8;
    case 170u: goto L_0043DAC0;
    case 171u: goto L_0043DAE4;
    case 172u: goto L_0043DAF8;
    case 173u: goto L_0043DB08;
    case 174u: goto L_0043DB18;
    case 175u: goto L_0043DB28;
    case 176u: goto L_0043DB48;
    case 177u: goto L_0043DB64;
    case 178u: goto L_0043DB74;
    case 179u: goto L_0043DB80;
    case 180u: goto L_0043DB90;
    case 181u: goto L_0043DBB0;
    case 182u: goto L_0043DBCC;
    case 183u: goto L_0043DBDC;
    case 184u: goto L_0043DBE8;
    case 185u: goto L_0043DBF8;
    case 186u: goto L_0043DC18;
    case 187u: goto L_0043DC38;
    case 188u: goto L_0043DC48;
    case 189u: goto L_0043DC54;
    case 190u: goto L_0043DC64;
    case 191u: goto L_0043DC84;
    case 192u: goto L_0043DCA4;
    case 193u: goto L_0043DCB4;
    case 194u: goto L_0043DCC0;
    case 195u: goto L_0043DCD0;
    case 196u: goto L_0043DCF0;
    case 197u: goto L_0043DD38;
    case 198u: goto L_0043DD48;
    case 199u: goto L_0043DD54;
    case 200u: goto L_0043DD64;
    case 201u: goto L_0043DD84;
    case 202u: goto L_0043DDCC;
    case 203u: goto L_0043DDDC;
    case 204u: goto L_0043DDE8;
    case 205u: goto L_0043DDF8;
    case 206u: goto L_0043DE4C;
    case 207u: goto L_0043DE74;
    case 208u: goto L_0043DE84;
    case 209u: goto L_0043DE90;
    case 210u: goto L_0043DEA0;
    case 211u: goto L_0043DEC0;
    case 212u: goto L_0043DEDC;
    case 213u: goto L_0043DEEC;
    case 214u: goto L_0043DEF8;
    case 215u: goto L_0043DF08;
    case 216u: goto L_0043DF28;
    case 217u: goto L_0043DF44;
    case 218u: goto L_0043DF54;
    case 219u: goto L_0043DF60;
    case 220u: goto L_0043DF70;
    case 221u: goto L_0043DF90;
    case 222u: goto L_0043DFAC;
    case 223u: goto L_0043DFBC;
    case 224u: goto L_0043DFC8;
    case 225u: goto L_0043DFD8;
    case 226u: goto L_0043DFF8;
    case 227u: goto L_0043E014;
    case 228u: goto L_0043E024;
    case 229u: goto L_0043E030;
    case 230u: goto L_0043E040;
    case 231u: goto L_0043E060;
    case 232u: goto L_0043E080;
    case 233u: goto L_0043E090;
    case 234u: goto L_0043E09C;
    case 235u: goto L_0043E0AC;
    case 236u: goto L_0043E0CC;
    case 237u: goto L_0043E0EC;
    case 238u: goto L_0043E0FC;
    case 239u: goto L_0043E108;
    case 240u: goto L_0043E118;
    case 241u: goto L_0043E138;
    case 242u: goto L_0043E154;
    case 243u: goto L_0043E164;
    case 244u: goto L_0043E170;
    case 245u: goto L_0043E180;
    case 246u: goto L_0043E1A0;
    case 247u: goto L_0043E1C0;
    case 248u: goto L_0043E1D0;
    case 249u: goto L_0043E1DC;
    case 250u: goto L_0043E1EC;
    case 251u: goto L_0043E20C;
    case 252u: goto L_0043E22C;
    case 253u: goto L_0043E23C;
    case 254u: goto L_0043E248;
    case 255u: goto L_0043E258;
    case 256u: goto L_0043E278;
    case 257u: goto L_0043E294;
    case 258u: goto L_0043E2A4;
    case 259u: goto L_0043E2B0;
    case 260u: goto L_0043E2C0;
    case 261u: goto L_0043E2E0;
    case 262u: goto L_0043E300;
    case 263u: goto L_0043E310;
    case 264u: goto L_0043E31C;
    case 265u: goto L_0043E32C;
    case 266u: goto L_0043E34C;
    case 267u: goto L_0043E36C;
    case 268u: goto L_0043E37C;
    case 269u: goto L_0043E388;
    case 270u: goto L_0043E398;
    case 271u: goto L_0043E3B8;
    case 272u: goto L_0043E3D8;
    case 273u: goto L_0043E3E8;
    case 274u: goto L_0043E3F4;
    case 275u: goto L_0043E404;
    case 276u: goto L_0043E424;
    case 277u: goto L_0043E444;
    case 278u: goto L_0043E454;
    case 279u: goto L_0043E460;
    case 280u: goto L_0043E470;
    case 281u: goto L_0043E490;
    case 282u: goto L_0043E4B0;
    case 283u: goto L_0043E4C0;
    case 284u: goto L_0043E4CC;
    case 285u: goto L_0043E4DC;
    case 286u: goto L_0043E4FC;
    case 287u: goto L_0043E518;
    case 288u: goto L_0043E528;
    case 289u: goto L_0043E534;
    case 290u: goto L_0043E544;
    case 291u: goto L_0043E564;
    case 292u: goto L_0043E584;
    case 293u: goto L_0043E594;
    case 294u: goto L_0043E5A0;
    case 295u: goto L_0043E5B0;
    case 296u: goto L_0043E5D0;
    case 297u: goto L_0043E5EC;
    case 298u: goto L_0043E5FC;
    case 299u: goto L_0043E608;
    case 300u: goto L_0043E618;
    case 301u: goto L_0043E638;
    case 302u: goto L_0043E658;
    case 303u: goto L_0043E668;
    case 304u: goto L_0043E674;
    case 305u: goto L_0043E684;
    case 306u: goto L_0043E6A4;
    case 307u: goto L_0043E6C4;
    case 308u: goto L_0043E6D4;
    case 309u: goto L_0043E6E0;
    case 310u: goto L_0043E6F0;
    case 311u: goto L_0043E710;
    case 312u: goto L_0043E72C;
    case 313u: goto L_0043E73C;
    case 314u: goto L_0043E748;
    case 315u: goto L_0043E758;
    case 316u: goto L_0043E778;
    case 317u: goto L_0043E794;
    case 318u: goto L_0043E7A4;
    case 319u: goto L_0043E7B0;
    case 320u: goto L_0043E7C0;
    case 321u: goto L_0043E7E0;
    case 322u: goto L_0043E7FC;
    case 323u: goto L_0043E80C;
    case 324u: goto L_0043E830;
    case 325u: goto L_0043E854;
    case 326u: goto L_0043E870;
    case 327u: goto L_0043E894;
    case 328u: goto L_0043E8AC;
    case 329u: goto L_0043E8D0;
    case 330u: goto L_0043E8E0;
    case 331u: goto L_0043E904;
    case 332u: goto L_0043E910;
    case 333u: goto L_0043E920;
    case 334u: goto L_0043E978;
    case 335u: goto L_0043E990;
    case 336u: goto L_0043E9B0;
    case 337u: goto L_0043E9F0;
    case 338u: goto L_0043EA00;
    case 339u: goto L_0043EA10;
    case 340u: goto L_0043EA20;
    case 341u: goto L_0043EA30;
    case 342u: goto L_0043EA48;
    case 343u: goto L_0043EA5C;
    case 344u: goto L_0043EA70;
    case 345u: goto L_0043EA80;
    case 346u: goto L_0043EAD4;
    case 347u: goto L_0043EB20;
    case 348u: goto L_0043EB74;
    case 349u: goto L_0043EBC0;
    case 350u: goto L_0043EBF0;
    case 351u: goto L_0043EBFC;
    case 352u: goto L_0043EC10;
    case 353u: goto L_0043EC24;
    case 354u: goto L_0043EC40;
    case 355u: goto L_0043EC4C;
    case 356u: goto L_0043EC58;
    case 357u: goto L_0043EC6C;
    case 358u: goto L_0043EC80;
    case 359u: goto L_0043ECC0;
    case 360u: goto L_0043ECF0;
    case 361u: goto L_0043ED18;
    case 362u: goto L_0043ED50;
    case 363u: goto L_0043ED84;
    case 364u: goto L_0043EDA0;
    case 365u: goto L_0043EDC8;
    case 366u: goto L_0043EDE0;
    case 367u: goto L_0043EE4C;
    case 368u: goto L_0043EE58;
    case 369u: goto L_0043EE80;
    case 370u: goto L_0043EEB8;
    case 371u: goto L_0043EECC;
    case 372u: goto L_0043EF10;
    case 373u: goto L_0043EF44;
    case 374u: goto L_0043EF5C;
    case 375u: goto L_0043EF94;
    case 376u: goto L_0043EFAC;
    case 377u: goto L_0043EFC0;
    case 378u: goto L_0043EFE8;
    case 379u: goto L_0043EFF4;
    case 380u: goto L_0043F018;
    case 381u: goto L_0043F01C;
    case 382u: goto L_0043F028;
    case 383u: goto L_0043F03C;
    case 384u: goto L_0043F04C;
    case 385u: goto L_0043F054;
    case 386u: goto L_0043F064;
    case 387u: goto L_0043F070;
    case 388u: goto L_0043F084;
    case 389u: goto L_0043F094;
    case 390u: goto L_0043F0AC;
    case 391u: goto L_0043F0B8;
    case 392u: goto L_0043F0C4;
    case 393u: goto L_0043F0FC;
    case 394u: goto L_0043F134;
    case 395u: goto L_0043F148;
    case 396u: goto L_0043F158;
    case 397u: goto L_0043F17C;
    case 398u: goto L_0043F19C;
    case 399u: goto L_0043F1B0;
    case 400u: goto L_0043F1C0;
    case 401u: goto L_0043F1E4;
    case 402u: goto L_0043F1F8;
    case 403u: goto L_0043F208;
    case 404u: goto L_0043F228;
    case 405u: goto L_0043F23C;
    case 406u: goto L_0043F24C;
    case 407u: goto L_0043F270;
    case 408u: goto L_0043F27C;
    case 409u: goto L_0043F29C;
    case 410u: goto L_0043F2B0;
    case 411u: goto L_0043F2C0;
    case 412u: goto L_0043F2E4;
    case 413u: goto L_0043F2F0;
    case 414u: goto L_0043F320;
    case 415u: goto L_0043F370;
    case 416u: goto L_0043F440;
    case 417u: goto L_0043F46C;
    case 418u: goto L_0043F4E0;
    case 419u: goto L_0043F518;
    case 420u: goto L_0043F544;
    case 421u: goto L_0043F550;
    case 422u: goto L_0043F560;
    case 423u: goto L_0043F5E0;
    case 424u: goto L_0043F660;
    case 425u: goto L_0043F70C;
    case 426u: goto L_0043F724;
    case 427u: goto L_0043F75C;
    case 428u: goto L_0043F770;
    case 429u: goto L_0043F7A0;
    case 430u: goto L_0043F818;
    case 431u: goto L_0043F860;
    case 432u: goto L_0043F880;
    case 433u: goto L_0043F8B8;
    case 434u: goto L_0043F8D0;
    case 435u: goto L_0043F91C;
    case 436u: goto L_0043F978;
    case 437u: goto L_0043F990;
    case 438u: goto L_0043F9B0;
    case 439u: goto L_0043F9C4;
    case 440u: goto L_0043F9EC;
    case 441u: goto L_0043FA00;
    case 442u: goto L_0043FA30;
    case 443u: goto L_0043FA70;
    case 444u: goto L_0043FA88;
    case 445u: goto L_0043FA98;
    case 446u: goto L_0043FAAC;
    case 447u: goto L_0043FAB8;
    case 448u: goto L_0043FACC;
    case 449u: goto L_0043FAD8;
    case 450u: goto L_0043FAE4;
    case 451u: goto L_0043FAF0;
    case 452u: goto L_0043FAFC;
    case 453u: goto L_0043FB08;
    case 454u: goto L_0043FB14;
    case 455u: goto L_0043FB20;
    case 456u: goto L_0043FB3C;
    case 457u: goto L_0043FB48;
    case 458u: goto L_0043FB6C;
    case 459u: goto L_0043FB78;
    case 460u: goto L_0043FBA0;
    case 461u: goto L_0043FBAC;
    case 462u: goto L_0043FBD0;
    case 463u: goto L_0043FBE4;
    case 464u: goto L_0043FC00;
    case 465u: goto L_0043FC14;
    case 466u: goto L_0043FC30;
    case 467u: goto L_0043FC44;
    case 468u: goto L_0043FC60;
    case 469u: goto L_0043FC70;
    case 470u: goto L_0043FCDC;
    case 471u: goto L_0043FCF8;
    case 472u: goto L_0043FD2C;
    case 473u: goto L_0043FD48;
    case 474u: goto L_0043FD5C;
    case 475u: goto L_0043FD70;
    case 476u: goto L_0043FD94;
    case 477u: goto L_0043FDA0;
    case 478u: goto L_0043FDE0;
    case 479u: goto L_0043FDF4;
    case 480u: goto L_0043FE08;
    case 481u: goto L_0043FE64;
    case 482u: goto L_0043FE80;
    case 483u: goto L_0043FF98;
    case 484u: goto L_0043FFA0;
    case 485u: goto L_0043FFB8;
    case 486u: goto L_0043FFCC;
    case 487u: goto L_0043FFE0;
    case 488u: goto L_0043FFFC;
    default: bad_entry(c, 0x0043C000u); return;
    }
L_0043C000:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C014u); set32(c.r[4], c.r[4].w[0] - 22336u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0043C014u) [[unlikely]] return; }
L_0043C014:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0043C024; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0043C034; } }
L_0043C024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C02Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 145u, depth + 1u); else { c.pc = 0x001355F0u; return; } if (c.pc != 0x0043C02Cu) [[unlikely]] return; }
L_0043C02C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0043C034:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043C050:
    set32(c.r[2], ld32((c.r[28].w[0] - 31220u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0043C060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30084u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0043C07C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0043C084; } }
L_0043C07C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C084u);  if (depth < kMaxDepth) unit_000D(c, 148u, depth + 1u); else { c.pc = 0x00135640u; return; } if (c.pc != 0x0043C084u) [[unlikely]] return; }
L_0043C084:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043C090:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30084u)));  c.pc = t; return; }
L_0043C0A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 22896u);  c.pc = t; return; }
L_0043C0B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0043C100; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28096u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0043C0E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27504u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0043C0E4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0043C0FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C0FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0043C0FCu) [[unlikely]] return; }
L_0043C0FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0043C100:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043C110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0043C160; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28192u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0043C144; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27504u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0043C144:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0043C15C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C15Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0043C15Cu) [[unlikely]] return; }
L_0043C15C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0043C160:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043C170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0043C1C0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28160u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0043C1A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27056u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0043C1A4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0043C1BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C1BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0043C1BCu) [[unlikely]] return; }
L_0043C1BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0043C1C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043C1D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C1F0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043C1F0u) [[unlikely]] return; }
L_0043C1F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043C210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C22Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043C22Cu) [[unlikely]] return; }
L_0043C22C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043C240:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0043C250:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0043C260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0043C2D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28128u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043C2A4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C2A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043C2A4u) [[unlikely]] return; }
L_0043C2A4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0043C2BC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27504u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_0043C2BC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0043C2D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C2D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0043C2D0u) [[unlikely]] return; }
L_0043C2D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0043C2D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043C2F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[6].w[0] + 8u)));  c.pc = t; return; }
L_0043C300:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0043C34C; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C330u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0043C330u) [[unlikely]] return; }
L_0043C330:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C34Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0043C34Cu) [[unlikely]] return; }
L_0043C34C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0043C370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0043C3B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C3ACu); set32(c.r[5], c.r[5].w[0] + 23317u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0043C3ACu) [[unlikely]] return; }
L_0043C3AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C3B4u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0043C3B4u) [[unlikely]] return; }
L_0043C3B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[17].w[0] << 4);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043C3E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.r[2].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0043C400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043C420; } }
L_0043C400:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C41Cu); set32(c.r[5], ld32((c.r[29].w[0] + 24u)));  if (depth < kMaxDepth) unit_00CF(c, 68u, depth + 1u); else { c.pc = 0x0043C850u; return; } if (c.pc != 0x0043C41Cu) [[unlikely]] return; }
L_0043C41C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0043C420:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043C430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.r[2].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0043C450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043C488; } }
L_0043C450:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0043C464; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 22800u);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0043C464:
    c.budget -= 2;
    if (c.r[9].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0043C488; }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C488u); c.r[6].d[0] = c.r[9].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043C488u) [[unlikely]] return; }
L_0043C488:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043C4A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C4D0u); set32(c.r[6], c.r[29].w[0] + 63u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043C4D0u) [[unlikely]] return; }
L_0043C4D0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_0043C4E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043C510; } }
L_0043C4E0:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  goto L_0043C500; }
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C4FCu); set32(c.r[6], c.r[28].w[0] - 30080u);  if (depth < kMaxDepth) unit_00CF(c, 70u, depth + 1u); else { c.pc = 0x0043C8C0u; return; } if (c.pc != 0x0043C4FCu) [[unlikely]] return; }
L_0043C4FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_0043C500:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 63u));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0043C510:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0043C530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[6].w[0] + 8u)));  c.pc = t; return; }
L_0043C540:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.r[2].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 12u)));  goto L_0043C560; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043C57C; } }
L_0043C560:
    set32(c.r[3], c.r[7].w[0] << 2);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C57Cu); c.r[5].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 394u, depth + 1u); else { c.pc = 0x0011FE90u; return; } if (c.pc != 0x0043C57Cu) [[unlikely]] return; }
L_0043C57C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043C590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C5B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 403u, depth + 1u); else { c.pc = 0x0011FFB0u; return; } if (c.pc != 0x0043C5B0u) [[unlikely]] return; }
L_0043C5B0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 44u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C5D4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0043C5D4u) [[unlikely]] return; }
L_0043C5D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043C5F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[6].w[0] + 4u)));  c.pc = t; return; }
L_0043C600:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 20u)));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_0043C640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043C67C; } }
L_0043C640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0043C654; } }
L_0043C648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C650u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x0043C650u) [[unlikely]] return; }
L_0043C650:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0043C654:
    c.r[2].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043C648u | kUnwind; return; } goto L_0043C648; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C67Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 394u, depth + 1u); else { c.pc = 0x0011FE90u; return; } if (c.pc != 0x0043C67Cu) [[unlikely]] return; }
L_0043C67C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0043C6A0:
    set32(c.r[29], c.r[29].w[0] - 2240u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C6D0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 133u, depth + 1u); else { c.pc = 0x0013DA70u; return; } if (c.pc != 0x0043C6D0u) [[unlikely]] return; }
L_0043C6D0:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C6E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043C6E0u) [[unlikely]] return; }
L_0043C6E0:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C6F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043C6F4u) [[unlikely]] return; }
L_0043C6F4:
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C704u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_000F(c, 87u, depth + 1u); else { c.pc = 0x0013CF20u; return; } if (c.pc != 0x0043C704u) [[unlikely]] return; }
L_0043C704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[18].w[0])));  if (t) { goto L_0043C734; } }
L_0043C70C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C720u); set32(c.r[6], 0u + 2048u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043C720u) [[unlikely]] return; }
L_0043C720:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C730u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0013D500u; return; } if (c.pc != 0x0043C730u) [[unlikely]] return; }
L_0043C730:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0043C734:
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C740u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043C740u) [[unlikely]] return; }
L_0043C740:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043C70Cu | kUnwind; return; } goto L_0043C70C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[5].w[0] + 22808u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C75Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 80u, depth + 1u); else { c.pc = 0x0013CD70u; return; } if (c.pc != 0x0043C75Cu) [[unlikely]] return; }
L_0043C75C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C76Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 403u, depth + 1u); else { c.pc = 0x0011FFB0u; return; } if (c.pc != 0x0043C76Cu) [[unlikely]] return; }
L_0043C76C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C77Cu); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0043C77Cu) [[unlikely]] return; }
L_0043C77C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C788u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0043C788u) [[unlikely]] return; }
L_0043C788:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C798u); st32((c.r[29].w[0] + 128u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0043C798u) [[unlikely]] return; }
L_0043C798:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 2232u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C7B0u); st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 552u, depth + 1u); else { c.pc = 0x003FFFB0u; return; } if (c.pc != 0x0043C7B0u) [[unlikely]] return; }
L_0043C7B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 112u)));  goto L_0043C7D8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043C7D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C7D4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0043C7D4u) [[unlikely]] return; }
L_0043C7D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 1;
L_0043C7D8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 144u)));  goto L_0043C7FC; }
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043C7F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C7F8u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0043C7F8u) [[unlikely]] return; }
L_0043C7F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_0043C7FC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_0043C820; }
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043C81C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C81Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0043C81Cu) [[unlikely]] return; }
L_0043C81C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_0043C820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C828u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 121u, depth + 1u); else { c.pc = 0x0013D730u; return; } if (c.pc != 0x0043C828u) [[unlikely]] return; }
L_0043C828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2240u);  c.pc = t; return; }
L_0043C850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0043C890; } }
    set32(c.r[5], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C890u); set32(c.r[6], c.r[3].w[0] - c.r[5].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0043C890u) [[unlikely]] return; }
L_0043C890:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043C8C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0043C8F4; } }
    set32(c.r[6], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C8ECu); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CF(c, 75u, depth + 1u); else { c.pc = 0x0043C9A0u; return; } if (c.pc != 0x0043C8ECu) [[unlikely]] return; }
L_0043C8EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0043C918; } }
L_0043C8F4:
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0043C914; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C914u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CF(c, 73u, depth + 1u); else { c.pc = 0x0043C920u; return; } if (c.pc != 0x0043C914u) [[unlikely]] return; }
L_0043C914:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0043C918:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043C920:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] != c.r[17].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0043C94C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0043C984; } }
L_0043C94C:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] - c.r[17].w[0]);
    c.budget -= 6;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  goto L_0043C974; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C970u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0043C970u) [[unlikely]] return; }
L_0043C970:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0043C974:
    set32(c.r[4], c.r[17].w[0] - c.r[18].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0043C984:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0043C9A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const bool t = c.r[21].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0043CB44; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[21].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  goto L_0043CA14; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CA08u); set32(c.r[5], c.r[5].w[0] + 23347u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0043CA08u) [[unlikely]] return; }
L_0043CA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CA10u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0043CA10u) [[unlikely]] return; }
L_0043CA10:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0043CA14:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[22], c.r[3].w[0] + c.r[21].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 12u)));  goto L_0043CA90; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[2], c.r[6].w[0] - c.r[21].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0043CA58; } }
    c.r[1].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0043CA58; } }
    set32(c.r[20], c.r[20].w[0] + c.r[21].w[0]);
    c.budget -= 1;
L_0043CA58:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[5].d[0] = ld8((c.r[20].w[0]));  goto L_0043CA74; }
    set32(c.r[2], c.r[3].w[0] + c.r[21].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CA70u); set32(c.r[4], c.r[2].w[0] - c.r[6].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 9u, depth + 1u); else { c.pc = 0x003B8148u; return; } if (c.pc != 0x0043CA70u) [[unlikely]] return; }
L_0043CA70:
    c.r[5].d[0] = ld8((c.r[20].w[0]));
    c.budget -= 1;
L_0043CA74:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CA80u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0043CA80u) [[unlikely]] return; }
L_0043CA80:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0043CB44; } }
L_0043CA90:
    set32(c.r[18], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - c.r[17].w[0]);  if (t) { goto L_0043CAA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0043CAAC; } }
L_0043CAA4:
    set32(c.r[18], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0043CAAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[18].d[0] < c.r[22].d[0] ? 1ull : 0ull;  if (t) { goto L_0043CACC; } }
L_0043CAB4:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[18].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[18].d[0] = c.r[2].d[0] + 0ull;  goto L_0043CAC8; }
    set32(c.r[18], c.r[18].w[0] << 1);
    c.budget -= 1;
L_0043CAC8:
    c.r[1].d[0] = c.r[18].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0043CACC:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043CAB4u | kUnwind; return; } goto L_0043CAB4; }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CAE0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0043CAE0u) [[unlikely]] return; }
L_0043CAE0:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = ld8((c.r[20].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CAF4u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0043CAF4u) [[unlikely]] return; }
L_0043CAF4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), c.r[22].w[0]);  goto L_0043CB40; }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CB0Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0043CB0Cu) [[unlikely]] return; }
L_0043CB0C:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[21].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CB2Cu); set32(c.r[6], c.r[2].w[0] - c.r[5].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0043CB2Cu) [[unlikely]] return; }
L_0043CB2C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0043CB3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CB3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0043CB3Cu) [[unlikely]] return; }
L_0043CB3C:
    st32((c.r[16].w[0] + 8u), c.r[22].w[0]);
    c.budget -= 1;
L_0043CB40:
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_0043CB44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0043CB70:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_0043CCAC; }
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.f[3] = 0u;
    c.f[0] = fp::max(c.f[0], c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::min(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 84u));
    c.f[0] = fp::max(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = fp::max(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = fp::max(c.f[0], c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    c.f[0] = fp::max(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 28u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::max(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = fp::max(c.f[0], c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.f[0] = fp::max(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = fp::max(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = fp::max(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    c.f[0] = fp::max(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::max(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 75;
L_0043CCAC:
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_0043CD18; }
    c.f[0] = ld32((c.r[4].w[0] + 92u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::max(c.f[0], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[4].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 92u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 96u));
    c.f[1] = 0u;
    c.f[0] = fp::max(c.f[0], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 96u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 96u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 24;
L_0043CD18:
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_0043CD9C; }
    c.f[0] = ld32((c.r[4].w[0] + 100u));
    c.f[2] = 0u;
    c.f[0] = fp::max(c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[4].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 100u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::max(c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = fp::max(c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 108u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 30;
L_0043CD9C:
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_0043CE1C; }
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[2] = 0u;
    c.f[0] = fp::max(c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::max(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    c.f[0] = fp::max(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 120u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[1]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 120u), c.f[0]);
    set32(c.r[3], 0u + 5u);
    set32(c.r[5], ld32((c.r[4].w[0] + 124u)));
    mmi::pmaxw(c.r[5], c.r[5], c.r[6]);
    mmi::pminw(c.r[3], c.r[5], c.r[3]);
    st32((c.r[4].w[0] + 124u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 124u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 29;
L_0043CE1C:
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_0043CE80; }
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    c.f[2] = 0u;
    c.f[0] = fp::max(c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 132u));
    c.f[0] = fp::max(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 132u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = fp::max(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 136u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 22;
L_0043CE80:
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043CEBC; } }
    c.f[0] = ld32((c.r[4].w[0] + 148u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::max(c.f[0], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[4].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 148u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 148u), c.f[0]);
    c.budget -= 12;
L_0043CEBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043CED0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { set32(c.r[6], 0u + 160u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8250u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 14u, depth); }
L_0043CEE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 23472u);  c.pc = t; return; }
L_0043CEF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043CF00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043CF10:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 23549u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[28].w[0] - 27036u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CF44u); st32((c.r[29].w[0] + 260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x0043CF44u) [[unlikely]] return; }
L_0043CF44:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 256u);  goto L_0043CF58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043CF7C; } }
L_0043CF58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CF60u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x0043CF60u) [[unlikely]] return; }
L_0043CF60:
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 252u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CF70u); set32(c.r[6], c.r[29].w[0] + 260u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x0043CF70u) [[unlikely]] return; }
L_0043CF70:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CF7Cu); set32(c.r[5], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x0043CF7Cu) [[unlikely]] return; }
L_0043CF7C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[5], c.r[29].w[0] + 271u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CF9Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x0043CF9Cu) [[unlikely]] return; }
L_0043CF9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 271u));  goto L_0043CFC4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043CFC0; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 271u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CFC0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0043CFC0u) [[unlikely]] return; }
L_0043CFC0:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 271u));
    c.budget -= 1;
L_0043CFC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_0043CFDC; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0043CFE8; } }
L_0043CFDC:
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0043CFE8:
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D000u); set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x0043D000u) [[unlikely]] return; }
L_0043D000:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D00Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x0043D00Cu) [[unlikely]] return; }
L_0043D00C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_0043D034; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D030; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D030u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x0043D030u) [[unlikely]] return; }
L_0043D030:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_0043D034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D03Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x0043D03Cu) [[unlikely]] return; }
L_0043D03C:
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D074u); set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x0043D074u) [[unlikely]] return; }
L_0043D074:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D080u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x0043D080u) [[unlikely]] return; }
L_0043D080:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_0043D0A8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D0A4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D0A4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x0043D0A4u) [[unlikely]] return; }
L_0043D0A4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_0043D0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D0B0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x0043D0B0u) [[unlikely]] return; }
L_0043D0B0:
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[17].w[0] + 52u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D0E8u); set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x0043D0E8u) [[unlikely]] return; }
L_0043D0E8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D0F4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x0043D0F4u) [[unlikely]] return; }
L_0043D0F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_0043D11C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D118; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D118u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x0043D118u) [[unlikely]] return; }
L_0043D118:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_0043D11C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D124u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x0043D124u) [[unlikely]] return; }
L_0043D124:
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[17].w[0] + 68u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043D1A8; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 96u)));  goto L_0043D160; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 21u);  if (t) { goto L_0043D1A0; } }
L_0043D160:
    set32(c.r[5], c.r[29].w[0] + 248u);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D178u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x0043D178u) [[unlikely]] return; }
L_0043D178:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 248u)));  goto L_0043D1A0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D19C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D19Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x0043D19Cu) [[unlikely]] return; }
L_0043D19C:
    set32(c.r[3], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_0043D1A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0043D1A8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 100u)));  goto L_0043D1C0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.f[0]);  if (t) { goto L_0043D204; } }
L_0043D1C0:
    set32(c.r[5], c.r[29].w[0] + 244u);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D1D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043D1D8u) [[unlikely]] return; }
L_0043D1D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 244u));  goto L_0043D200; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D1FC; } }
    c.f[12] = ld32((c.r[29].w[0] + 244u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D1FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0043D1FCu) [[unlikely]] return; }
L_0043D1FC:
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    c.budget -= 1;
L_0043D200:
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 1;
L_0043D204:
    set32(c.r[5], c.r[29].w[0] + 240u);
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D220u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043D220u) [[unlikely]] return; }
L_0043D220:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 240u));  goto L_0043D248; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D244; } }
    c.f[12] = ld32((c.r[29].w[0] + 240u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D244u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0043D244u) [[unlikely]] return; }
L_0043D244:
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    c.budget -= 1;
L_0043D248:
    set32(c.r[5], c.r[29].w[0] + 236u);
    st32((c.r[17].w[0] + 84u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D268u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043D268u) [[unlikely]] return; }
L_0043D268:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 236u));  goto L_0043D290; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D28C; } }
    c.f[12] = ld32((c.r[29].w[0] + 236u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D28Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0043D28Cu) [[unlikely]] return; }
L_0043D28C:
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    c.budget -= 1;
L_0043D290:
    set32(c.r[5], c.r[29].w[0] + 270u);
    st32((c.r[17].w[0] + 88u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D2B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x0043D2B0u) [[unlikely]] return; }
L_0043D2B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 270u));  goto L_0043D2D8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D2D4; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 270u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D2D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0043D2D4u) [[unlikely]] return; }
L_0043D2D4:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 270u));
    c.budget -= 1;
L_0043D2D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_0043D2F0; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0043D2FC; } }
L_0043D2F0:
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0043D2FC:
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[5], c.r[29].w[0] + 232u);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D318u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043D318u) [[unlikely]] return; }
L_0043D318:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 232u));  goto L_0043D340; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D33C; } }
    c.f[12] = ld32((c.r[29].w[0] + 232u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D33Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0043D33Cu) [[unlikely]] return; }
L_0043D33C:
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    c.budget -= 1;
L_0043D340:
    set32(c.r[5], c.r[29].w[0] + 228u);
    st32((c.r[17].w[0] + 92u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D360u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043D360u) [[unlikely]] return; }
L_0043D360:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 228u));  goto L_0043D388; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D384; } }
    c.f[12] = ld32((c.r[29].w[0] + 228u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D384u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0043D384u) [[unlikely]] return; }
L_0043D384:
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    c.budget -= 1;
L_0043D388:
    set32(c.r[5], c.r[29].w[0] + 269u);
    st32((c.r[17].w[0] + 96u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D3A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x0043D3A8u) [[unlikely]] return; }
L_0043D3A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 269u));  goto L_0043D3D0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D3CC; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 269u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D3CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0043D3CCu) [[unlikely]] return; }
L_0043D3CC:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 269u));
    c.budget -= 1;
L_0043D3D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_0043D3E8; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0043D3F4; } }
L_0043D3E8:
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0043D3F4:
    set32(c.r[3], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D410u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043D410u) [[unlikely]] return; }
L_0043D410:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 224u));  goto L_0043D438; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D434; } }
    c.f[12] = ld32((c.r[29].w[0] + 224u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D434u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0043D434u) [[unlikely]] return; }
L_0043D434:
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.budget -= 1;
L_0043D438:
    set32(c.r[5], c.r[29].w[0] + 220u);
    st32((c.r[17].w[0] + 112u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D458u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043D458u) [[unlikely]] return; }
L_0043D458:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 220u));  goto L_0043D480; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D47C; } }
    c.f[12] = ld32((c.r[29].w[0] + 220u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D47Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0043D47Cu) [[unlikely]] return; }
L_0043D47C:
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    c.budget -= 1;
L_0043D480:
    set32(c.r[5], c.r[29].w[0] + 216u);
    st32((c.r[17].w[0] + 116u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D4A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043D4A0u) [[unlikely]] return; }
L_0043D4A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 216u));  goto L_0043D4C8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D4C4; } }
    c.f[12] = ld32((c.r[29].w[0] + 216u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D4C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0043D4C4u) [[unlikely]] return; }
L_0043D4C4:
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.budget -= 1;
L_0043D4C8:
    set32(c.r[5], c.r[29].w[0] + 212u);
    st32((c.r[17].w[0] + 120u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D4E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x0043D4E8u) [[unlikely]] return; }
L_0043D4E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 212u)));  goto L_0043D510; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D50C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D50Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x0043D50Cu) [[unlikely]] return; }
L_0043D50C:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 1;
L_0043D510:
    set32(c.r[5], c.r[29].w[0] + 268u);
    st32((c.r[17].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D530u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x0043D530u) [[unlikely]] return; }
L_0043D530:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 268u));  goto L_0043D558; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D554; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 268u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D554u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0043D554u) [[unlikely]] return; }
L_0043D554:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 268u));
    c.budget -= 1;
L_0043D558:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_0043D570; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0043D57C; } }
L_0043D570:
    set32(c.r[2], 0u - 65u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0043D57C:
    set32(c.r[3], ld32((c.r[18].w[0] + 148u)));
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D598u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043D598u) [[unlikely]] return; }
L_0043D598:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 208u));  goto L_0043D5C0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D5BC; } }
    c.f[12] = ld32((c.r[29].w[0] + 208u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D5BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0043D5BCu) [[unlikely]] return; }
L_0043D5BC:
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.budget -= 1;
L_0043D5C0:
    set32(c.r[5], c.r[29].w[0] + 204u);
    st32((c.r[17].w[0] + 128u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D5E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043D5E0u) [[unlikely]] return; }
L_0043D5E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 204u));  goto L_0043D608; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D604; } }
    c.f[12] = ld32((c.r[29].w[0] + 204u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D604u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0043D604u) [[unlikely]] return; }
L_0043D604:
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    c.budget -= 1;
L_0043D608:
    set32(c.r[5], c.r[29].w[0] + 200u);
    st32((c.r[17].w[0] + 132u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D628u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043D628u) [[unlikely]] return; }
L_0043D628:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 200u));  goto L_0043D650; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D64C; } }
    c.f[12] = ld32((c.r[29].w[0] + 200u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D64Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0043D64Cu) [[unlikely]] return; }
L_0043D64C:
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    c.budget -= 1;
L_0043D650:
    set32(c.r[5], c.r[29].w[0] + 267u);
    st32((c.r[17].w[0] + 136u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D670u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x0043D670u) [[unlikely]] return; }
L_0043D670:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 267u));  goto L_0043D698; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D694; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 267u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D694u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0043D694u) [[unlikely]] return; }
L_0043D694:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 267u));
    c.budget -= 1;
L_0043D698:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_0043D6B0; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0043D6BC; } }
L_0043D6B0:
    set32(c.r[2], 0u - 33u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0043D6BC:
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[5], c.r[29].w[0] + 196u);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D6D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043D6D8u) [[unlikely]] return; }
L_0043D6D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 196u));  goto L_0043D700; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D6FC; } }
    c.f[12] = ld32((c.r[29].w[0] + 196u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D6FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0043D6FCu) [[unlikely]] return; }
L_0043D6FC:
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    c.budget -= 1;
L_0043D700:
    set32(c.r[5], c.r[29].w[0] + 192u);
    st32((c.r[17].w[0] + 100u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D720u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043D720u) [[unlikely]] return; }
L_0043D720:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 192u));  goto L_0043D748; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D744; } }
    c.f[12] = ld32((c.r[29].w[0] + 192u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D744u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0043D744u) [[unlikely]] return; }
L_0043D744:
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.budget -= 1;
L_0043D748:
    set32(c.r[5], c.r[29].w[0] + 188u);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D768u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043D768u) [[unlikely]] return; }
L_0043D768:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 188u));  goto L_0043D790; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D78C; } }
    c.f[12] = ld32((c.r[29].w[0] + 188u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D78Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0043D78Cu) [[unlikely]] return; }
L_0043D78C:
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    c.budget -= 1;
L_0043D790:
    set32(c.r[5], c.r[29].w[0] + 266u);
    st32((c.r[17].w[0] + 108u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D7B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x0043D7B0u) [[unlikely]] return; }
L_0043D7B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 266u));  goto L_0043D7D8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D7D4; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 266u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D7D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0043D7D4u) [[unlikely]] return; }
L_0043D7D4:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 266u));
    c.budget -= 1;
L_0043D7D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_0043D7F0; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0043D7FC; } }
L_0043D7F0:
    set32(c.r[2], 0u - 129u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0043D7FC:
    set32(c.r[3], ld32((c.r[18].w[0] + 180u)));
    set32(c.r[5], c.r[29].w[0] + 265u);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D818u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x0043D818u) [[unlikely]] return; }
L_0043D818:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 265u));  goto L_0043D840; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D83C; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 265u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D83Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0043D83Cu) [[unlikely]] return; }
L_0043D83C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 265u));
    c.budget -= 1;
L_0043D840:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_0043D858; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0043D864; } }
L_0043D858:
    set32(c.r[2], 0u - 257u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0043D864:
    set32(c.r[3], ld32((c.r[18].w[0] + 184u)));
    set32(c.r[5], c.r[29].w[0] + 264u);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D880u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x0043D880u) [[unlikely]] return; }
L_0043D880:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[29].w[0] + 264u));  goto L_0043D8A8; }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0043D8A4; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 264u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D8A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0043D8A4u) [[unlikely]] return; }
L_0043D8A4:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 264u));
    c.budget -= 1;
L_0043D8A8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_0043D8C0; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0043D8CC; } }
L_0043D8C0:
    set32(c.r[3], 0u - 513u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0043D8CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_0043D8F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] + 23440u);
    set32(c.r[5], c.r[5].w[0] + 23567u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D91Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x0043D91Cu) [[unlikely]] return; }
L_0043D91C:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D92Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0043D92Cu) [[unlikely]] return; }
L_0043D92C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043D94C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27504u);
    set32(c.r[3], c.r[3].w[0] - 26656u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0043D94C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D95Cu); set32(c.r[4], c.r[4].w[0] + 23600u);  if (depth < kMaxDepth) unit_0007(c, 64u, depth + 1u); else { c.pc = 0x0011C670u; return; } if (c.pc != 0x0043D95Cu) [[unlikely]] return; }
L_0043D95C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23623u);
    set32(c.r[6], c.r[6].w[0] + 23600u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D984u); set32(c.r[9], c.r[9].w[0] + 23630u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x0043D984u) [[unlikely]] return; }
L_0043D984:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D990u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0043D990u) [[unlikely]] return; }
L_0043D990:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0043D9CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D9B0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0043D9B0u) [[unlikely]] return; }
L_0043D9B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 21584u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
L_0043D9CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D9D4u);  if (depth < kMaxDepth) unit_00B5(c, 164u, depth + 1u); else { c.pc = 0x003D5AE0u; return; } if (c.pc != 0x0043D9D4u) [[unlikely]] return; }
L_0043D9D4:
    set32(c.r[4], ld32((c.r[2].w[0] + 808u)));
    set32(c.r[3], 0u + 39u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[2].w[0] + 4u);  if (t) { goto L_0043DA34; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 23440u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DA04u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x0043DA04u) [[unlikely]] return; }
L_0043DA04:
    set32(c.r[3], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 804u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DA28u); set32(c.r[4], c.r[16].w[0] + 808u);  if (depth < kMaxDepth) unit_00B5(c, 153u, depth + 1u); else { c.pc = 0x003D56C0u; return; } if (c.pc != 0x0043DA28u) [[unlikely]] return; }
L_0043DA28:
    set32(c.r[3], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 804u), c.r[3].w[0]);
    c.budget -= 3;
L_0043DA34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043DA50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0043DAA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 28288u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DA84u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0043DA84u) [[unlikely]] return; }
L_0043DA84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DA90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x0043DA90u) [[unlikely]] return; }
L_0043DA90:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0043DAAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DAA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0043DAA8u) [[unlikely]] return; }
L_0043DAA8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0043DAAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043DAC0:
    set32(c.r[29], c.r[29].w[0] - 1008u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DAE4u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000D(c, 142u, depth + 1u); else { c.pc = 0x00135570u; return; } if (c.pc != 0x0043DAE4u) [[unlikely]] return; }
L_0043DAE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 28288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DAF8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x0043DAF8u) [[unlikely]] return; }
L_0043DAF8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DB08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 9u, depth + 1u); else { c.pc = 0x00134090u; return; } if (c.pc != 0x0043DB08u) [[unlikely]] return; }
L_0043DB08:
    set32(c.r[4], c.r[29].w[0] + 976u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DB18u); st32((c.r[16].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043DB18u) [[unlikely]] return; }
L_0043DB18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 976u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DB28u); set32(c.r[5], c.r[5].w[0] + 23631u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043DB28u) [[unlikely]] return; }
L_0043DB28:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[29].w[0] + 996u)));
    st16((c.r[29].w[0] + 1002u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 980u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 996u)));  goto L_0043DB54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DB48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043DB48u) [[unlikely]] return; }
L_0043DB48:
    set32(c.r[2], c.r[29].w[0] + 980u);
    st32((c.r[29].w[0] + 996u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 996u)));
    c.budget -= 3;
L_0043DB54:
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 976u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DB64u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043DB64u) [[unlikely]] return; }
L_0043DB64:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 976u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DB74u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043DB74u) [[unlikely]] return; }
L_0043DB74:
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DB80u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043DB80u) [[unlikely]] return; }
L_0043DB80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DB90u); set32(c.r[5], c.r[5].w[0] + 23639u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043DB90u) [[unlikely]] return; }
L_0043DB90:
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], ld32((c.r[29].w[0] + 964u)));
    st16((c.r[29].w[0] + 970u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 948u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 964u)));  goto L_0043DBBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DBB0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043DBB0u) [[unlikely]] return; }
L_0043DBB0:
    set32(c.r[2], c.r[29].w[0] + 948u);
    st32((c.r[29].w[0] + 964u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 964u)));
    c.budget -= 3;
L_0043DBBC:
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 944u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DBCCu); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043DBCCu) [[unlikely]] return; }
L_0043DBCC:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DBDCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043DBDCu) [[unlikely]] return; }
L_0043DBDC:
    set32(c.r[4], c.r[29].w[0] + 912u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DBE8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043DBE8u) [[unlikely]] return; }
L_0043DBE8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 912u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DBF8u); set32(c.r[5], c.r[5].w[0] + 23646u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043DBF8u) [[unlikely]] return; }
L_0043DBF8:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[29].w[0] + 932u)));
    st16((c.r[29].w[0] + 938u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 916u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 932u)));  goto L_0043DC24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DC18u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043DC18u) [[unlikely]] return; }
L_0043DC18:
    set32(c.r[2], c.r[29].w[0] + 916u);
    st32((c.r[29].w[0] + 932u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 932u)));
    c.budget -= 3;
L_0043DC24:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DC38u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043DC38u) [[unlikely]] return; }
L_0043DC38:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 912u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DC48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043DC48u) [[unlikely]] return; }
L_0043DC48:
    set32(c.r[4], c.r[29].w[0] + 880u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DC54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043DC54u) [[unlikely]] return; }
L_0043DC54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 880u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DC64u); set32(c.r[5], c.r[5].w[0] + 23654u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043DC64u) [[unlikely]] return; }
L_0043DC64:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[29].w[0] + 900u)));
    st16((c.r[29].w[0] + 906u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 884u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 900u)));  goto L_0043DC90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DC84u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043DC84u) [[unlikely]] return; }
L_0043DC84:
    set32(c.r[2], c.r[29].w[0] + 884u);
    st32((c.r[29].w[0] + 900u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 900u)));
    c.budget -= 3;
L_0043DC90:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 880u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DCA4u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043DCA4u) [[unlikely]] return; }
L_0043DCA4:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 880u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DCB4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043DCB4u) [[unlikely]] return; }
L_0043DCB4:
    set32(c.r[4], c.r[29].w[0] + 848u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DCC0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043DCC0u) [[unlikely]] return; }
L_0043DCC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DCD0u); set32(c.r[5], c.r[5].w[0] + 23662u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043DCD0u) [[unlikely]] return; }
L_0043DCD0:
    set32(c.r[2], 0u + 64u);
    set32(c.r[4], ld32((c.r[29].w[0] + 868u)));
    st16((c.r[29].w[0] + 874u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 852u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0043DCF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DCF0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043DCF0u) [[unlikely]] return; }
L_0043DCF0:
    set32(c.r[2], c.r[29].w[0] + 852u);
    st32((c.r[29].w[0] + 868u), c.r[2].w[0]);
    c.budget -= 2;
L_0043DCF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 868u)));
    c.f[0] = ld32((c.r[2].w[0] - 8816u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 848u);
    st32((c.r[7].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[6].w[0] - 8812u));
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 8808u));
    st32((c.r[7].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 8804u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DD38u); st32((c.r[7].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043DD38u) [[unlikely]] return; }
L_0043DD38:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DD48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043DD48u) [[unlikely]] return; }
L_0043DD48:
    set32(c.r[4], c.r[29].w[0] + 816u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DD54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043DD54u) [[unlikely]] return; }
L_0043DD54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 816u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DD64u); set32(c.r[5], c.r[5].w[0] + 23673u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043DD64u) [[unlikely]] return; }
L_0043DD64:
    set32(c.r[2], 0u + 64u);
    set32(c.r[4], ld32((c.r[29].w[0] + 836u)));
    st16((c.r[29].w[0] + 842u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 820u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0043DD8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DD84u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043DD84u) [[unlikely]] return; }
L_0043DD84:
    set32(c.r[2], c.r[29].w[0] + 820u);
    st32((c.r[29].w[0] + 836u), c.r[2].w[0]);
    c.budget -= 2;
L_0043DD8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 836u)));
    c.f[0] = ld32((c.r[2].w[0] - 8816u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 816u);
    st32((c.r[7].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[6].w[0] - 8812u));
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 8808u));
    st32((c.r[7].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 8804u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DDCCu); st32((c.r[7].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043DDCCu) [[unlikely]] return; }
L_0043DDCC:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 816u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DDDCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043DDDCu) [[unlikely]] return; }
L_0043DDDC:
    set32(c.r[4], c.r[29].w[0] + 784u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DDE8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043DDE8u) [[unlikely]] return; }
L_0043DDE8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 784u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DDF8u); set32(c.r[5], c.r[5].w[0] + 23682u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043DDF8u) [[unlikely]] return; }
L_0043DDF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[3].w[0] - 8804u));
    set32(c.r[4], ld32((c.r[29].w[0] + 804u)));
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[3].w[0] - 8812u));
    c.f[1] = ld32((c.r[2].w[0] - 8808u));
    c.f[21] = fp::mul(c.f[2], c.f[3]);
    set32(c.r[3], 0u + 64u);
    st16((c.r[29].w[0] + 810u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[29].w[0] + 788u);
    c.f[23] = fp::mul(c.f[0], c.f[3]);
    c.f[0] = ld32((c.r[2].w[0] - 8816u));
    c.f[22] = fp::mul(c.f[1], c.f[3]);
    c.budget -= 19;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.f[20] = fp::mul(c.f[0], c.f[3]);  if (t) { goto L_0043DE54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DE4Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043DE4Cu) [[unlikely]] return; }
L_0043DE4C:
    set32(c.r[2], c.r[29].w[0] + 788u);
    st32((c.r[29].w[0] + 804u), c.r[2].w[0]);
    c.budget -= 2;
L_0043DE54:
    set32(c.r[2], ld32((c.r[29].w[0] + 804u)));
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 784u);
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[23]);
    st32((c.r[2].w[0] + 8u), c.f[22]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DE74u); st32((c.r[2].w[0] + 12u), c.f[21]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043DE74u) [[unlikely]] return; }
L_0043DE74:
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 784u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DE84u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043DE84u) [[unlikely]] return; }
L_0043DE84:
    set32(c.r[4], c.r[29].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DE90u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043DE90u) [[unlikely]] return; }
L_0043DE90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 752u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DEA0u); set32(c.r[5], c.r[5].w[0] + 23691u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043DEA0u) [[unlikely]] return; }
L_0043DEA0:
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], ld32((c.r[29].w[0] + 772u)));
    st16((c.r[29].w[0] + 778u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 756u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 772u)));  goto L_0043DECC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DEC0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043DEC0u) [[unlikely]] return; }
L_0043DEC0:
    set32(c.r[2], c.r[29].w[0] + 756u);
    st32((c.r[29].w[0] + 772u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 772u)));
    c.budget -= 3;
L_0043DECC:
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 752u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DEDCu); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043DEDCu) [[unlikely]] return; }
L_0043DEDC:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 752u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DEECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043DEECu) [[unlikely]] return; }
L_0043DEEC:
    set32(c.r[4], c.r[29].w[0] + 720u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DEF8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043DEF8u) [[unlikely]] return; }
L_0043DEF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DF08u); set32(c.r[5], c.r[5].w[0] + 23704u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043DF08u) [[unlikely]] return; }
L_0043DF08:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 740u)));
    st16((c.r[29].w[0] + 746u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 724u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 740u)));  goto L_0043DF34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DF28u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043DF28u) [[unlikely]] return; }
L_0043DF28:
    set32(c.r[2], c.r[29].w[0] + 724u);
    st32((c.r[29].w[0] + 740u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 740u)));
    c.budget -= 3;
L_0043DF34:
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DF44u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043DF44u) [[unlikely]] return; }
L_0043DF44:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DF54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043DF54u) [[unlikely]] return; }
L_0043DF54:
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DF60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043DF60u) [[unlikely]] return; }
L_0043DF60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DF70u); set32(c.r[5], c.r[5].w[0] + 23719u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043DF70u) [[unlikely]] return; }
L_0043DF70:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 708u)));
    st16((c.r[29].w[0] + 714u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 692u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 708u)));  goto L_0043DF9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DF90u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043DF90u) [[unlikely]] return; }
L_0043DF90:
    set32(c.r[2], c.r[29].w[0] + 692u);
    st32((c.r[29].w[0] + 708u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 708u)));
    c.budget -= 3;
L_0043DF9C:
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DFACu); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043DFACu) [[unlikely]] return; }
L_0043DFAC:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DFBCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043DFBCu) [[unlikely]] return; }
L_0043DFBC:
    set32(c.r[4], c.r[29].w[0] + 656u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DFC8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043DFC8u) [[unlikely]] return; }
L_0043DFC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 656u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DFD8u); set32(c.r[5], c.r[5].w[0] + 23735u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043DFD8u) [[unlikely]] return; }
L_0043DFD8:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 676u)));
    st16((c.r[29].w[0] + 682u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 660u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 676u)));  goto L_0043E004; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DFF8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043DFF8u) [[unlikely]] return; }
L_0043DFF8:
    set32(c.r[2], c.r[29].w[0] + 660u);
    st32((c.r[29].w[0] + 676u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 676u)));
    c.budget -= 3;
L_0043E004:
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 656u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E014u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043E014u) [[unlikely]] return; }
L_0043E014:
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 656u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E024u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043E024u) [[unlikely]] return; }
L_0043E024:
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E030u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043E030u) [[unlikely]] return; }
L_0043E030:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E040u); set32(c.r[5], c.r[5].w[0] + 23753u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043E040u) [[unlikely]] return; }
L_0043E040:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[29].w[0] + 644u)));
    st16((c.r[29].w[0] + 650u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 628u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 644u)));  goto L_0043E06C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E060u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043E060u) [[unlikely]] return; }
L_0043E060:
    set32(c.r[2], c.r[29].w[0] + 628u);
    st32((c.r[29].w[0] + 644u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 644u)));
    c.budget -= 3;
L_0043E06C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E080u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043E080u) [[unlikely]] return; }
L_0043E080:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E090u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043E090u) [[unlikely]] return; }
L_0043E090:
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E09Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043E09Cu) [[unlikely]] return; }
L_0043E09C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E0ACu); set32(c.r[5], c.r[5].w[0] + 23758u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043E0ACu) [[unlikely]] return; }
L_0043E0AC:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 612u)));
    st16((c.r[29].w[0] + 618u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 596u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 612u)));  goto L_0043E0D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E0CCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043E0CCu) [[unlikely]] return; }
L_0043E0CC:
    set32(c.r[2], c.r[29].w[0] + 596u);
    st32((c.r[29].w[0] + 612u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 612u)));
    c.budget -= 3;
L_0043E0D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E0ECu); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043E0ECu) [[unlikely]] return; }
L_0043E0EC:
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E0FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043E0FCu) [[unlikely]] return; }
L_0043E0FC:
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E108u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043E108u) [[unlikely]] return; }
L_0043E108:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E118u); set32(c.r[5], c.r[5].w[0] + 23768u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043E118u) [[unlikely]] return; }
L_0043E118:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 580u)));
    st16((c.r[29].w[0] + 586u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 564u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 580u)));  goto L_0043E144; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E138u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043E138u) [[unlikely]] return; }
L_0043E138:
    set32(c.r[2], c.r[29].w[0] + 564u);
    st32((c.r[29].w[0] + 580u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 580u)));
    c.budget -= 3;
L_0043E144:
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 560u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E154u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043E154u) [[unlikely]] return; }
L_0043E154:
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E164u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043E164u) [[unlikely]] return; }
L_0043E164:
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E170u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043E170u) [[unlikely]] return; }
L_0043E170:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E180u); set32(c.r[5], c.r[5].w[0] + 23779u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043E180u) [[unlikely]] return; }
L_0043E180:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[29].w[0] + 548u)));
    st16((c.r[29].w[0] + 554u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 532u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 548u)));  goto L_0043E1AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E1A0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043E1A0u) [[unlikely]] return; }
L_0043E1A0:
    set32(c.r[2], c.r[29].w[0] + 532u);
    st32((c.r[29].w[0] + 548u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 548u)));
    c.budget -= 3;
L_0043E1AC:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 528u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E1C0u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043E1C0u) [[unlikely]] return; }
L_0043E1C0:
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E1D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043E1D0u) [[unlikely]] return; }
L_0043E1D0:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E1DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043E1DCu) [[unlikely]] return; }
L_0043E1DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E1ECu); set32(c.r[5], c.r[5].w[0] + 23785u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043E1ECu) [[unlikely]] return; }
L_0043E1EC:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 516u)));
    st16((c.r[29].w[0] + 522u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 500u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 516u)));  goto L_0043E218; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E20Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043E20Cu) [[unlikely]] return; }
L_0043E20C:
    set32(c.r[2], c.r[29].w[0] + 500u);
    st32((c.r[29].w[0] + 516u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 516u)));
    c.budget -= 3;
L_0043E218:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E22Cu); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043E22Cu) [[unlikely]] return; }
L_0043E22C:
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E23Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043E23Cu) [[unlikely]] return; }
L_0043E23C:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E248u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043E248u) [[unlikely]] return; }
L_0043E248:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E258u); set32(c.r[5], c.r[5].w[0] + 23803u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043E258u) [[unlikely]] return; }
L_0043E258:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 484u)));
    st16((c.r[29].w[0] + 490u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 468u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 484u)));  goto L_0043E284; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E278u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043E278u) [[unlikely]] return; }
L_0043E278:
    set32(c.r[2], c.r[29].w[0] + 468u);
    st32((c.r[29].w[0] + 484u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 484u)));
    c.budget -= 3;
L_0043E284:
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E294u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043E294u) [[unlikely]] return; }
L_0043E294:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E2A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043E2A4u) [[unlikely]] return; }
L_0043E2A4:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E2B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043E2B0u) [[unlikely]] return; }
L_0043E2B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E2C0u); set32(c.r[5], c.r[5].w[0] + 23815u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043E2C0u) [[unlikely]] return; }
L_0043E2C0:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 452u)));
    st16((c.r[29].w[0] + 458u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 436u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 452u)));  goto L_0043E2EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E2E0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043E2E0u) [[unlikely]] return; }
L_0043E2E0:
    set32(c.r[2], c.r[29].w[0] + 436u);
    st32((c.r[29].w[0] + 452u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 452u)));
    c.budget -= 3;
L_0043E2EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E300u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043E300u) [[unlikely]] return; }
L_0043E300:
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E310u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043E310u) [[unlikely]] return; }
L_0043E310:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E31Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043E31Cu) [[unlikely]] return; }
L_0043E31C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E32Cu); set32(c.r[5], c.r[5].w[0] + 23839u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043E32Cu) [[unlikely]] return; }
L_0043E32C:
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], ld32((c.r[29].w[0] + 420u)));
    st16((c.r[29].w[0] + 426u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 404u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 420u)));  goto L_0043E358; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E34Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043E34Cu) [[unlikely]] return; }
L_0043E34C:
    set32(c.r[2], c.r[29].w[0] + 404u);
    st32((c.r[29].w[0] + 420u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 420u)));
    c.budget -= 3;
L_0043E358:
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E36Cu); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043E36Cu) [[unlikely]] return; }
L_0043E36C:
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E37Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043E37Cu) [[unlikely]] return; }
L_0043E37C:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E388u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043E388u) [[unlikely]] return; }
L_0043E388:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E398u); set32(c.r[5], c.r[5].w[0] + 23853u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043E398u) [[unlikely]] return; }
L_0043E398:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[29].w[0] + 388u)));
    st16((c.r[29].w[0] + 394u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 372u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 388u)));  goto L_0043E3C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E3B8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043E3B8u) [[unlikely]] return; }
L_0043E3B8:
    set32(c.r[2], c.r[29].w[0] + 372u);
    st32((c.r[29].w[0] + 388u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 388u)));
    c.budget -= 3;
L_0043E3C4:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E3D8u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043E3D8u) [[unlikely]] return; }
L_0043E3D8:
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E3E8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043E3E8u) [[unlikely]] return; }
L_0043E3E8:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E3F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043E3F4u) [[unlikely]] return; }
L_0043E3F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E404u); set32(c.r[5], c.r[5].w[0] + 23865u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043E404u) [[unlikely]] return; }
L_0043E404:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 356u)));
    st16((c.r[29].w[0] + 362u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 340u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 356u)));  goto L_0043E430; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E424u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043E424u) [[unlikely]] return; }
L_0043E424:
    set32(c.r[2], c.r[29].w[0] + 340u);
    st32((c.r[29].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 356u)));
    c.budget -= 3;
L_0043E430:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E444u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043E444u) [[unlikely]] return; }
L_0043E444:
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E454u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043E454u) [[unlikely]] return; }
L_0043E454:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E460u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043E460u) [[unlikely]] return; }
L_0043E460:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E470u); set32(c.r[5], c.r[5].w[0] + 23889u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043E470u) [[unlikely]] return; }
L_0043E470:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 324u)));
    st16((c.r[29].w[0] + 330u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 308u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 324u)));  goto L_0043E49C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E490u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043E490u) [[unlikely]] return; }
L_0043E490:
    set32(c.r[2], c.r[29].w[0] + 308u);
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 3;
L_0043E49C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E4B0u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043E4B0u) [[unlikely]] return; }
L_0043E4B0:
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E4C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043E4C0u) [[unlikely]] return; }
L_0043E4C0:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E4CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043E4CCu) [[unlikely]] return; }
L_0043E4CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E4DCu); set32(c.r[5], c.r[5].w[0] + 23912u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043E4DCu) [[unlikely]] return; }
L_0043E4DC:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    st16((c.r[29].w[0] + 298u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 276u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 292u)));  goto L_0043E508; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E4FCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043E4FCu) [[unlikely]] return; }
L_0043E4FC:
    set32(c.r[2], c.r[29].w[0] + 276u);
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 3;
L_0043E508:
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E518u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043E518u) [[unlikely]] return; }
L_0043E518:
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E528u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043E528u) [[unlikely]] return; }
L_0043E528:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E534u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043E534u) [[unlikely]] return; }
L_0043E534:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E544u); set32(c.r[5], c.r[5].w[0] + 23930u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043E544u) [[unlikely]] return; }
L_0043E544:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[29].w[0] + 260u)));
    st16((c.r[29].w[0] + 266u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 260u)));  goto L_0043E570; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E564u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043E564u) [[unlikely]] return; }
L_0043E564:
    set32(c.r[2], c.r[29].w[0] + 244u);
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 3;
L_0043E570:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E584u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043E584u) [[unlikely]] return; }
L_0043E584:
    st32((c.r[16].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E594u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043E594u) [[unlikely]] return; }
L_0043E594:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E5A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043E5A0u) [[unlikely]] return; }
L_0043E5A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E5B0u); set32(c.r[5], c.r[5].w[0] + 23943u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043E5B0u) [[unlikely]] return; }
L_0043E5B0:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    st16((c.r[29].w[0] + 234u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 228u)));  goto L_0043E5DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E5D0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043E5D0u) [[unlikely]] return; }
L_0043E5D0:
    set32(c.r[2], c.r[29].w[0] + 212u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 3;
L_0043E5DC:
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E5ECu); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043E5ECu) [[unlikely]] return; }
L_0043E5EC:
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E5FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043E5FCu) [[unlikely]] return; }
L_0043E5FC:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E608u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043E608u) [[unlikely]] return; }
L_0043E608:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E618u); set32(c.r[5], c.r[5].w[0] + 23958u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043E618u) [[unlikely]] return; }
L_0043E618:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    st16((c.r[29].w[0] + 202u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 180u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 196u)));  goto L_0043E644; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E638u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043E638u) [[unlikely]] return; }
L_0043E638:
    set32(c.r[2], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 3;
L_0043E644:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E658u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043E658u) [[unlikely]] return; }
L_0043E658:
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E668u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043E668u) [[unlikely]] return; }
L_0043E668:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E674u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043E674u) [[unlikely]] return; }
L_0043E674:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E684u); set32(c.r[5], c.r[5].w[0] + 23971u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043E684u) [[unlikely]] return; }
L_0043E684:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 148u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 164u)));  goto L_0043E6B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E6A4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043E6A4u) [[unlikely]] return; }
L_0043E6A4:
    set32(c.r[2], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 3;
L_0043E6B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E6C4u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043E6C4u) [[unlikely]] return; }
L_0043E6C4:
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E6D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043E6D4u) [[unlikely]] return; }
L_0043E6D4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E6E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043E6E0u) [[unlikely]] return; }
L_0043E6E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E6F0u); set32(c.r[5], c.r[5].w[0] + 23984u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043E6F0u) [[unlikely]] return; }
L_0043E6F0:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 132u)));  goto L_0043E71C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E710u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043E710u) [[unlikely]] return; }
L_0043E710:
    set32(c.r[2], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
L_0043E71C:
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E72Cu); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043E72Cu) [[unlikely]] return; }
L_0043E72C:
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E73Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043E73Cu) [[unlikely]] return; }
L_0043E73C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E748u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043E748u) [[unlikely]] return; }
L_0043E748:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E758u); set32(c.r[5], c.r[5].w[0] + 23999u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043E758u) [[unlikely]] return; }
L_0043E758:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 84u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 100u)));  goto L_0043E784; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E778u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043E778u) [[unlikely]] return; }
L_0043E778:
    set32(c.r[2], c.r[29].w[0] + 84u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
L_0043E784:
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E794u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043E794u) [[unlikely]] return; }
L_0043E794:
    st32((c.r[16].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E7A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043E7A4u) [[unlikely]] return; }
L_0043E7A4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E7B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0043E7B0u) [[unlikely]] return; }
L_0043E7B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E7C0u); set32(c.r[5], c.r[5].w[0] + 24010u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x0043E7C0u) [[unlikely]] return; }
L_0043E7C0:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    st16((c.r[29].w[0] + 74u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 52u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 68u)));  goto L_0043E7EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E7E0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043E7E0u) [[unlikely]] return; }
L_0043E7E0:
    set32(c.r[2], c.r[29].w[0] + 52u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
L_0043E7EC:
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E7FCu); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043E7FCu) [[unlikely]] return; }
L_0043E7FC:
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E80Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043E80Cu) [[unlikely]] return; }
L_0043E80C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1008u);  c.pc = t; return; }
L_0043E830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30076u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0043E84C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0043E85C; } }
L_0043E84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E854u);  if (depth < kMaxDepth) unit_000D(c, 144u, depth + 1u); else { c.pc = 0x001355D0u; return; } if (c.pc != 0x0043E854u) [[unlikely]] return; }
L_0043E854:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0043E85C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043E870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E894u); set32(c.r[4], c.r[4].w[0] + 23440u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0043E894u) [[unlikely]] return; }
L_0043E894:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0043E8A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0043E8B4; } }
L_0043E8A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E8ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 145u, depth + 1u); else { c.pc = 0x001355F0u; return; } if (c.pc != 0x0043E8ACu) [[unlikely]] return; }
L_0043E8AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0043E8B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043E8D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31220u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0043E8E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30076u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0043E8FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0043E904; } }
L_0043E8FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E904u);  if (depth < kMaxDepth) unit_000D(c, 148u, depth + 1u); else { c.pc = 0x00135640u; return; } if (c.pc != 0x0043E904u) [[unlikely]] return; }
L_0043E904:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043E910:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30076u)));  c.pc = t; return; }
L_0043E920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0043E990; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0043E978; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21584u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0043E978; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0043E978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E978u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0043E978u) [[unlikely]] return; }
L_0043E978:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0043E994; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E990u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0043E990u) [[unlikely]] return; }
L_0043E990:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0043E994:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043E9B0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_0043E9D8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_0043E9D0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0043E9D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043E9DC; } }
L_0043E9D8:
    set32(c.r[2], c.r[2].w[0] + 23496u);
    c.budget -= 1;
L_0043E9DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043E9F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 23504u);  c.pc = t; return; }
L_0043EA00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EA10u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0043EA10u) [[unlikely]] return; }
L_0043EA10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0043EA24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EA20u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 170u, depth + 1u); else { c.pc = 0x0043DAC0u; return; } if (c.pc != 0x0043EA20u) [[unlikely]] return; }
L_0043EA20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0043EA24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043EA30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22304u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EA48u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 40u, depth + 1u); else { c.pc = 0x00504430u; return; } if (c.pc != 0x0043EA48u) [[unlikely]] return; }
L_0043EA48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EA5Cu); set32(c.r[5], c.r[5].w[0] + 24128u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0043EA5Cu) [[unlikely]] return; }
L_0043EA5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043EA70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043EA80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 508u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 11;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 512u)));  goto L_0043EAB8; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 508u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 3;
L_0043EAB8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0043EB14; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 516u)));  goto L_0043EACC; }
    set32(c.r[5], c.r[16].w[0] + 509u);
    c.budget -= 1;
L_0043EACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EAD4u); set32(c.r[4], ld32((c.r[28].w[0] - 25180u)));  if (depth < kMaxDepth) unit_00CD(c, 136u, depth + 1u); else { c.pc = 0x00434E20u; return; } if (c.pc != 0x0043EAD4u) [[unlikely]] return; }
L_0043EAD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 508u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 516u)));  goto L_0043EB08; }
    st8((c.r[16].w[0] + 509u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = 0ull & 127ull;
    c.r[5].d[0] = ld8((c.r[16].w[0] + 508u));
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 255u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 508u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0043EB10; } }
L_0043EB08:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 512u), 0u);
    c.budget -= 2;
L_0043EB10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0043EB14:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043EB20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 492u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 11;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 496u)));  goto L_0043EB58; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 492u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 3;
L_0043EB58:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0043EBB4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 500u)));  goto L_0043EB6C; }
    set32(c.r[5], c.r[16].w[0] + 493u);
    c.budget -= 1;
L_0043EB6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EB74u); set32(c.r[4], ld32((c.r[28].w[0] - 25180u)));  if (depth < kMaxDepth) unit_00CD(c, 136u, depth + 1u); else { c.pc = 0x00434E20u; return; } if (c.pc != 0x0043EB74u) [[unlikely]] return; }
L_0043EB74:
    set32(c.r[3], ld32((c.r[16].w[0] + 492u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 500u)));  goto L_0043EBA8; }
    st8((c.r[16].w[0] + 493u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = 0ull & 127ull;
    c.r[5].d[0] = ld8((c.r[16].w[0] + 492u));
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 255u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 492u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0043EBB0; } }
L_0043EBA8:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 496u), 0u);
    c.budget -= 2;
L_0043EBB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0043EBB4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043EBC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0043EBE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0043EBF4; } }
L_0043EBE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EBF0u); set32(c.r[4], c.r[4].w[0] + 72u);  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x0043EBF0u) [[unlikely]] return; }
L_0043EBF0:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0043EBF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EBFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 253u, depth + 1u); else { c.pc = 0x0012A120u; return; } if (c.pc != 0x0043EBFCu) [[unlikely]] return; }
L_0043EBFC:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EC10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043EC10u) [[unlikely]] return; }
L_0043EC10:
    set32(c.r[16], c.r[16].w[0] + 212u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EC24u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x0043EC24u) [[unlikely]] return; }
L_0043EC24:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0043EC60; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 92u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EC40u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00CF(c, 360u, depth + 1u); else { c.pc = 0x0043ECF0u; return; } if (c.pc != 0x0043EC40u) [[unlikely]] return; }
L_0043EC40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EC4Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043EC4Cu) [[unlikely]] return; }
L_0043EC4C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EC58u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043EC58u) [[unlikely]] return; }
L_0043EC58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0043EC70; } }
L_0043EC60:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EC6Cu); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_00CF(c, 358u, depth + 1u); else { c.pc = 0x0043EC80u; return; } if (c.pc != 0x0043EC6Cu) [[unlikely]] return; }
L_0043EC6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0043EC70:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0043EC80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], c.r[5].w[0] << 5);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[16], ld32((c.r[6].w[0])));
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[17].w[0] + 4u);
    c.budget -= 14;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_0043ECCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ECC0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043ECC0u) [[unlikely]] return; }
L_0043ECC0:
    set32(c.r[3], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_0043ECCC:
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043ECF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ED18u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x0043ED18u) [[unlikely]] return; }
L_0043ED18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[18].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st16((c.r[18].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 4u);
    st32((c.r[18].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0])));
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 12;
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_0043ED5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ED50u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0043ED50u) [[unlikely]] return; }
L_0043ED50:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
L_0043ED5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[16].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ED84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043ED84u) [[unlikely]] return; }
L_0043ED84:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0043EDA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 72u);  goto L_0043EDC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043EDCC; } }
L_0043EDC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EDC8u);  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x0043EDC8u) [[unlikely]] return; }
L_0043EDC8:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0043EDCC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043EDE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 484u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0043EEF0; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 484u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 488u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] - 12u);  if (t) { goto L_0043EE4C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26056u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[18].w[0] + 24u)));  goto L_0043EE50; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EE4Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00CE(c, 358u, depth + 1u); else { c.pc = 0x0043B890u; return; } if (c.pc != 0x0043EE4Cu) [[unlikely]] return; }
L_0043EE4C:
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_0043EE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EE58u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0043EE58u) [[unlikely]] return; }
L_0043EE58:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0043EE88; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EE80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 360u, depth + 1u); else { c.pc = 0x005067E0u; return; } if (c.pc != 0x0043EE80u) [[unlikely]] return; }
L_0043EE80:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0043EE88:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  goto L_0043EE98; }
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 2;
L_0043EE98:
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[7], c.r[29].w[0] + 76u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EEB8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0043EEB8u) [[unlikely]] return; }
L_0043EEB8:
    st32((c.r[18].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EECCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043EECCu) [[unlikely]] return; }
L_0043EECC:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 12u));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 484u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[18].w[0] + 484u), c.r[3].w[0]);
    c.budget -= 9;
L_0043EEF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0043EF10:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EF44u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0043EF44u) [[unlikely]] return; }
L_0043EF44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = ld8((c.r[17].w[0] + 12u));  goto L_0043EF60; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EF5Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0008(c, 433u, depth + 1u); else { c.pc = 0x00123580u; return; } if (c.pc != 0x0043EF5Cu) [[unlikely]] return; }
L_0043EF5C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 12u));
    c.budget -= 1;
L_0043EF60:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 72u);  goto L_0043EF8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0043EF98; } }
L_0043EF8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EF94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x0043EF94u) [[unlikely]] return; }
L_0043EF94:
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0043EF98:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[7], ld32((c.r[17].w[0] + 24u)));  goto L_0043F02C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EFACu); set32(c.r[4], 0u + 388u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0043EFACu) [[unlikely]] return; }
L_0043EFAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 152u), c.r[2].w[0]);  goto L_0043EFC4; }
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EFC0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CE(c, 363u, depth + 1u); else { c.pc = 0x0043B920u; return; } if (c.pc != 0x0043EFC0u) [[unlikely]] return; }
L_0043EFC0:
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 1;
L_0043EFC4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], c.r[17].w[0] + 72u);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 152u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EFE8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0043EFE8u) [[unlikely]] return; }
L_0043EFE8:
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EFF4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00CE(c, 362u, depth + 1u); else { c.pc = 0x0043B910u; return; } if (c.pc != 0x0043EFF4u) [[unlikely]] return; }
L_0043EFF4:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 113u);  goto L_0043F008; }
    set32(c.r[7], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_0043F008:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 24299u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F01Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0043F01Cu) [[unlikely]] return; }
    goto L_0043F01C;
L_0043F018:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0043F01C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F028u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0043F028u) [[unlikely]] return; }
L_0043F028:
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0043F02C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F03Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 13u, depth + 1u); else { c.pc = 0x001200F0u; return; } if (c.pc != 0x0043F03Cu) [[unlikely]] return; }
L_0043F03C:
    set32(c.r[20], c.r[18].w[0] + 28u);
    set32(c.r[19], c.r[17].w[0] + 116u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0043F0C8; } }
L_0043F04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F054u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 372u, depth + 1u); else { c.pc = 0x00133830u; return; } if (c.pc != 0x0043F054u) [[unlikely]] return; }
L_0043F054:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F064u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043F064u) [[unlikely]] return; }
L_0043F064:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F070u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0043F070u) [[unlikely]] return; }
L_0043F070:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0043F0C8; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F084u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 372u, depth + 1u); else { c.pc = 0x00133830u; return; } if (c.pc != 0x0043F084u) [[unlikely]] return; }
L_0043F084:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F094u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043F094u) [[unlikely]] return; }
L_0043F094:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F0ACu); set32(c.r[6], c.r[6].w[0] + 24366u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0043F0ACu) [[unlikely]] return; }
L_0043F0AC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F0B8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 372u, depth + 1u); else { c.pc = 0x00133830u; return; } if (c.pc != 0x0043F0B8u) [[unlikely]] return; }
L_0043F0B8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F0C4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0043F0C4u) [[unlikely]] return; }
L_0043F0C4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0043F0C8:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043F04Cu | kUnwind; return; } goto L_0043F04C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull & 1ull;  goto L_0043F100; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F0FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043F0FCu) [[unlikely]] return; }
L_0043F0FC:
    c.r[2].d[0] = 0ull & 1ull;
    c.budget -= 1;
L_0043F100:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 12u));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 72u);  goto L_0043F12C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043F138; } }
L_0043F12C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F134u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x0043F134u) [[unlikely]] return; }
L_0043F134:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0043F138:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F148u); set32(c.r[5], c.r[5].w[0] + 24433u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0043F148u) [[unlikely]] return; }
L_0043F148:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F158u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043F158u) [[unlikely]] return; }
L_0043F158:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 80u)));  goto L_0043F180; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043F17C; } }
    c.f[12] = ld32((c.r[29].w[0] + 148u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F17Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0043F17Cu) [[unlikely]] return; }
L_0043F17C:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 1;
L_0043F180:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = ld32((c.r[29].w[0] + 148u));  if (t) { goto L_0043F190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043F1A0; } }
L_0043F190:
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F19Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x0043F19Cu) [[unlikely]] return; }
L_0043F19C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0043F1A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F1B0u); set32(c.r[5], c.r[5].w[0] + 24447u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0043F1B0u) [[unlikely]] return; }
L_0043F1B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F1C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043F1C0u) [[unlikely]] return; }
L_0043F1C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = c.f[20];  goto L_0043F1E8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043F1E4; } }
    c.f[12] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F1E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0043F1E4u) [[unlikely]] return; }
L_0043F1E4:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_0043F1E8:
    set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F1F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D5(c, 48u, depth + 1u); else { c.pc = 0x004544C0u; return; } if (c.pc != 0x0043F1F8u) [[unlikely]] return; }
L_0043F1F8:
    set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F208u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CD(c, 375u, depth + 1u); else { c.pc = 0x00436FC0u; return; } if (c.pc != 0x0043F208u) [[unlikely]] return; }
L_0043F208:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[28].w[0] - 24680u)));  if (t) { goto L_0043F21C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043F22C; } }
L_0043F21C:
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F228u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x0043F228u) [[unlikely]] return; }
L_0043F228:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0043F22C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F23Cu); set32(c.r[5], c.r[5].w[0] + 24460u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0043F23Cu) [[unlikely]] return; }
L_0043F23C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F24Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043F24Cu) [[unlikely]] return; }
L_0043F24C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[29].w[0] + 140u));  goto L_0043F274; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043F270; } }
    c.f[12] = ld32((c.r[29].w[0] + 140u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F270u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0043F270u) [[unlikely]] return; }
L_0043F270:
    c.f[12] = ld32((c.r[29].w[0] + 140u));
    c.budget -= 1;
L_0043F274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F27Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 64u, depth + 1u); else { c.pc = 0x004546F0u; return; } if (c.pc != 0x0043F27Cu) [[unlikely]] return; }
L_0043F27C:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[28].w[0] - 24752u)));  if (t) { goto L_0043F290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043F2A0; } }
L_0043F290:
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F29Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x0043F29Cu) [[unlikely]] return; }
L_0043F29C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0043F2A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F2B0u); set32(c.r[5], c.r[5].w[0] + 24473u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0043F2B0u) [[unlikely]] return; }
L_0043F2B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 159u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F2C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x0043F2C0u) [[unlikely]] return; }
L_0043F2C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = ld8((c.r[29].w[0] + 159u));  goto L_0043F2E8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043F2E4; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 159u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F2E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0043F2E4u) [[unlikely]] return; }
L_0043F2E4:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 159u));
    c.budget -= 1;
L_0043F2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F2F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 301u, depth + 1u); else { c.pc = 0x0044A7C0u; return; } if (c.pc != 0x0043F2F0u) [[unlikely]] return; }
L_0043F2F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0043F320:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[5], 0u - 33u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[6], 0u - 17u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[8].d[0] = c.r[5].d[0] | c.r[8].d[0];
    set32(c.r[7], c.r[3].w[0] << 4);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[5], c.r[3].w[0] << 6);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[3], 0u - 65u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0043F370:
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 484u)));  goto L_0043F3A0; }
    c.r[3].d[0] = 0ull & 1ull;
    c.r[7].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 484u)));
    c.budget -= 8;
L_0043F3A0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = 0ull & 1ull;  goto L_0043F3C8; }
    c.r[3].d[0] = 0ull & 1ull;
    c.r[7].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = 0ull & 1ull;
    c.budget -= 8;
L_0043F3C8:
    c.r[8].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[7], c.r[3].w[0] << 5);
    set32(c.r[5], c.r[3].w[0] << 6);
    set32(c.r[3], 0u - 33u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    set32(c.r[8], 0u - 17u);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], 0u - 9u);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[3], 0u - 65u);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[8].d[0] = c.r[8].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];
    set32(c.r[7], c.r[8].w[0] << 3);
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0043F440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0043F46C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F46Cu); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00CF(c, 372u, depth + 1u); else { c.pc = 0x0043EF10u; return; } if (c.pc != 0x0043F46Cu) [[unlikely]] return; }
L_0043F46C:
    c.r[8].d[0] = ld8((c.r[17].w[0] + 12u));
    set32(c.r[6], 0u - 17u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[5], 0u - 9u);
    set32(c.r[3], 0u - 65u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    set32(c.r[4], c.r[4].w[0] << 6);
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0]));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    set32(c.r[6], c.r[7].w[0] << 3);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043F4E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0043F520; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F518u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043F518u) [[unlikely]] return; }
L_0043F518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0043F864; } }
L_0043F520:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043F548; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 16u), 0u);  goto L_0043F548; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F544u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043F544u) [[unlikely]] return; }
L_0043F544:
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 1;
L_0043F548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F550u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x0043F550u) [[unlikely]] return; }
L_0043F550:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F560u); set32(c.r[5], c.r[5].w[0] + 24490u);  if (depth < kMaxDepth) unit_0029(c, 79u, depth + 1u); else { c.pc = 0x001A51D0u; return; } if (c.pc != 0x0043F560u) [[unlikely]] return; }
L_0043F560:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));  goto L_0043F6BC; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));  goto L_0043F58C; }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 83u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043F6B8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_0043F58C:
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 508u)));  goto L_0043F620; }
    set32(c.r[3], ld32((c.r[16].w[0] + 492u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 496u)));  goto L_0043F5C4; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 492u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 3;
L_0043F5C4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull & 1ull;  goto L_0043F6A0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 500u)));  goto L_0043F5D8; }
    set32(c.r[5], c.r[16].w[0] + 493u);
    c.budget -= 1;
L_0043F5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F5E0u); set32(c.r[4], ld32((c.r[28].w[0] - 25180u)));  if (depth < kMaxDepth) unit_00CD(c, 136u, depth + 1u); else { c.pc = 0x00434E20u; return; } if (c.pc != 0x0043F5E0u) [[unlikely]] return; }
L_0043F5E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 492u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 500u)));  goto L_0043F614; }
    st8((c.r[16].w[0] + 493u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = 0ull & 127ull;
    c.r[5].d[0] = ld8((c.r[16].w[0] + 492u));
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 255u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 492u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0043F69C; } }
L_0043F614:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 496u), 0u);  if (t) { goto L_0043F69C; } }
L_0043F620:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 512u)));  goto L_0043F644; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 508u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 3;
L_0043F644:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043F69C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 516u)));  goto L_0043F658; }
    set32(c.r[5], c.r[16].w[0] + 509u);
    c.budget -= 1;
L_0043F658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F660u); set32(c.r[4], ld32((c.r[28].w[0] - 25180u)));  if (depth < kMaxDepth) unit_00CD(c, 136u, depth + 1u); else { c.pc = 0x00434E20u; return; } if (c.pc != 0x0043F660u) [[unlikely]] return; }
L_0043F660:
    set32(c.r[3], ld32((c.r[16].w[0] + 508u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 516u)));  goto L_0043F694; }
    st8((c.r[16].w[0] + 509u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = 0ull & 127ull;
    c.r[5].d[0] = ld8((c.r[16].w[0] + 508u));
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 255u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 508u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0043F69C; } }
L_0043F694:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 512u), 0u);
    c.budget -= 2;
L_0043F69C:
    c.r[3].d[0] = 0ull & 1ull;
    c.budget -= 1;
L_0043F6A0:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 12u));
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0043F6B8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_0043F6BC:
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0043F6E4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043F6E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0043F6E4; } }
L_0043F6E0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043F6E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043F860; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));  goto L_0043F78C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F70Cu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0043F70Cu) [[unlikely]] return; }
L_0043F70C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0043F72C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F724u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0101(c, 266u, depth + 1u); else { c.pc = 0x00505EB0u; return; } if (c.pc != 0x0043F724u) [[unlikely]] return; }
L_0043F724:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0043F72C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  goto L_0043F73C; }
    set32(c.r[2], c.r[16].w[0] + 8u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_0043F73C:
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[7], c.r[29].w[0] + 60u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F75Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0043F75Cu) [[unlikely]] return; }
L_0043F75C:
    st32((c.r[16].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F770u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043F770u) [[unlikely]] return; }
L_0043F770:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 12u));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0043F860; } }
L_0043F78C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0043F858; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F7A0u); set32(c.r[4], c.r[16].w[0] + 476u);  if (depth < kMaxDepth) unit_00D0(c, 332u, depth + 1u); else { c.pc = 0x00442090u; return; } if (c.pc != 0x0043F7A0u) [[unlikely]] return; }
L_0043F7A0:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 12u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 5u);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] << 5);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    set32(c.r[3], 0u - 33u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 12u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 492u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 20;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 496u)));  goto L_0043F7FC; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 492u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 3;
L_0043F7FC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043F860; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 500u)));  goto L_0043F810; }
    set32(c.r[5], c.r[16].w[0] + 493u);
    c.budget -= 1;
L_0043F810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F818u); set32(c.r[4], ld32((c.r[28].w[0] - 25180u)));  if (depth < kMaxDepth) unit_00CD(c, 136u, depth + 1u); else { c.pc = 0x00434E20u; return; } if (c.pc != 0x0043F818u) [[unlikely]] return; }
L_0043F818:
    set32(c.r[3], ld32((c.r[16].w[0] + 492u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 500u)));  goto L_0043F84C; }
    st8((c.r[16].w[0] + 493u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = 0ull & 127ull;
    c.r[5].d[0] = ld8((c.r[16].w[0] + 492u));
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 255u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 492u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0043F860; } }
L_0043F84C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 496u), 0u);  if (t) { goto L_0043F860; } }
L_0043F858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F860u);  if (depth < kMaxDepth) unit_00CF(c, 366u, depth + 1u); else { c.pc = 0x0043EDE0u; return; } if (c.pc != 0x0043F860u) [[unlikely]] return; }
L_0043F860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0043F864:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0043F880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0043F8BC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 28496u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0043F8B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F8B8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0043F8B8u) [[unlikely]] return; }
L_0043F8B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0043F8BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043F8D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[9], ld32((c.r[4].w[0] + 488u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 484u)));
    st32((c.r[29].w[0] + 40u), c.r[9].w[0]);
    set32(c.r[3], c.r[8].w[0] << 1);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    st32((c.r[29].w[0] + 36u), c.r[9].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[29].w[0] + 28u), c.f[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[29].w[0] + 28u)));  if (t) { goto L_0043F924; } }
L_0043F91C:
    set32(c.r[3], c.r[3].w[0] + 12u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 2;
L_0043F924:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[8].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 32u)));  goto L_0043F944; }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043F91Cu | kUnwind; return; } goto L_0043F91C; }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 1;
L_0043F944:
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_0043F964; } }
    st32((c.r[5].w[0] + 8u), c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_0043F978; } }
L_0043F964:
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 476u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F978u); set32(c.r[7], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00D0(c, 339u, depth + 1u); else { c.pc = 0x004421B0u; return; } if (c.pc != 0x0043F978u) [[unlikely]] return; }
L_0043F978:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043F990:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F9B0u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0043F9B0u) [[unlikely]] return; }
L_0043F9B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[29].w[0] + 60u), c.r[16].w[0]);  goto L_0043F9CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F9C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 295u, depth + 1u); else { c.pc = 0x00506190u; return; } if (c.pc != 0x0043F9C4u) [[unlikely]] return; }
L_0043F9C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 60u), c.r[16].w[0]);
    c.budget -= 2;
L_0043F9CC:
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[7], c.r[29].w[0] + 60u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F9ECu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0043F9ECu) [[unlikely]] return; }
L_0043F9EC:
    st32((c.r[16].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FA00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043FA00u) [[unlikely]] return; }
L_0043FA00:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 12u));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0043FA30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u - 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FA70u); set32(c.r[4], 0u + 388u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0043FA70u) [[unlikely]] return; }
L_0043FA70:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0043FA90; }
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FA88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CE(c, 363u, depth + 1u); else { c.pc = 0x0043B920u; return; } if (c.pc != 0x0043FA88u) [[unlikely]] return; }
L_0043FA88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0043FA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FA98u); set32(c.r[5], c.r[18].w[0] + 88u);  if (depth < kMaxDepth) unit_00CF(c, 468u, depth + 1u); else { c.pc = 0x0043FC60u; return; } if (c.pc != 0x0043FA98u) [[unlikely]] return; }
L_0043FA98:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[4], c.r[16].w[0] + 12u);
    set32(c.r[5], c.r[18].w[0] + 100u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FAACu); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x0043FAACu) [[unlikely]] return; }
L_0043FAAC:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FAB8u); set32(c.r[5], c.r[18].w[0] + 116u);  if (depth < kMaxDepth) unit_000C(c, 282u, depth + 1u); else { c.pc = 0x00132FD0u; return; } if (c.pc != 0x0043FAB8u) [[unlikely]] return; }
L_0043FAB8:
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[4], c.r[16].w[0] + 92u);
    set32(c.r[5], c.r[18].w[0] + 180u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FACCu); st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 282u, depth + 1u); else { c.pc = 0x00132FD0u; return; } if (c.pc != 0x0043FACCu) [[unlikely]] return; }
L_0043FACC:
    set32(c.r[4], c.r[16].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FAD8u); set32(c.r[5], c.r[18].w[0] + 240u);  if (depth < kMaxDepth) unit_000C(c, 282u, depth + 1u); else { c.pc = 0x00132FD0u; return; } if (c.pc != 0x0043FAD8u) [[unlikely]] return; }
L_0043FAD8:
    set32(c.r[4], c.r[16].w[0] + 212u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FAE4u); set32(c.r[5], c.r[18].w[0] + 300u);  if (depth < kMaxDepth) unit_000C(c, 282u, depth + 1u); else { c.pc = 0x00132FD0u; return; } if (c.pc != 0x0043FAE4u) [[unlikely]] return; }
L_0043FAE4:
    set32(c.r[4], c.r[16].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FAF0u); set32(c.r[5], c.r[18].w[0] + 360u);  if (depth < kMaxDepth) unit_000C(c, 282u, depth + 1u); else { c.pc = 0x00132FD0u; return; } if (c.pc != 0x0043FAF0u) [[unlikely]] return; }
L_0043FAF0:
    set32(c.r[4], c.r[16].w[0] + 332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FAFCu); set32(c.r[5], c.r[18].w[0] + 420u);  if (depth < kMaxDepth) unit_00CF(c, 466u, depth + 1u); else { c.pc = 0x0043FC30u; return; } if (c.pc != 0x0043FAFCu) [[unlikely]] return; }
L_0043FAFC:
    set32(c.r[4], c.r[16].w[0] + 348u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FB08u); set32(c.r[5], c.r[18].w[0] + 436u);  if (depth < kMaxDepth) unit_00CF(c, 464u, depth + 1u); else { c.pc = 0x0043FC00u; return; } if (c.pc != 0x0043FB08u) [[unlikely]] return; }
L_0043FB08:
    set32(c.r[4], c.r[16].w[0] + 364u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FB14u); set32(c.r[5], c.r[18].w[0] + 452u);  if (depth < kMaxDepth) unit_00CF(c, 462u, depth + 1u); else { c.pc = 0x0043FBD0u; return; } if (c.pc != 0x0043FB14u) [[unlikely]] return; }
L_0043FB14:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FB20u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0043FB20u) [[unlikely]] return; }
L_0043FB20:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_0043FB34; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0043FB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FB3Cu); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0043FB3Cu) [[unlikely]] return; }
L_0043FB3C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FB48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0043FB48u) [[unlikely]] return; }
L_0043FB48:
    st32((c.r[29].w[0] + 108u), c.r[16].w[0]);
    set32(c.r[4], c.r[18].w[0] + 72u);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[7], c.r[29].w[0] + 108u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FB6Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0043FB6Cu) [[unlikely]] return; }
L_0043FB6C:
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FB78u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00CE(c, 362u, depth + 1u); else { c.pc = 0x0043B910u; return; } if (c.pc != 0x0043FB78u) [[unlikely]] return; }
L_0043FB78:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 65u);  goto L_0043FB8C; }
    set32(c.r[7], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0043FB8C:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 24299u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FBA0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0043FBA0u) [[unlikely]] return; }
L_0043FBA0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FBACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0043FBACu) [[unlikely]] return; }
L_0043FBAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0043FBD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FBE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 333u, depth + 1u); else { c.pc = 0x004420A0u; return; } if (c.pc != 0x0043FBE4u) [[unlikely]] return; }
L_0043FBE4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043FC00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FC14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 337u, depth + 1u); else { c.pc = 0x00442160u; return; } if (c.pc != 0x0043FC14u) [[unlikely]] return; }
L_0043FC14:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043FC30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FC44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 62u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x0043FC44u) [[unlikely]] return; }
L_0043FC44:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043FC60:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_0043FC70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0043FE64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28384u);
    set32(c.r[3], c.r[3].w[0] + 28400u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 28416u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 48u), c.f[0]);  if (t) { goto L_0043FD04; } }
L_0043FCDC:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 52u)));  goto L_0043FCFC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FCF8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043FCF8u) [[unlikely]] return; }
L_0043FCF8:
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 1;
L_0043FCFC:
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_0043FD04:
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FCDCu | kUnwind; return; } goto L_0043FCDC; }
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FD2Cu); set32(c.r[4], ld32((c.r[28].w[0] - 29004u)));  if (depth < kMaxDepth) unit_0010(c, 440u, depth + 1u); else { c.pc = 0x00143460u; return; } if (c.pc != 0x0043FD2Cu) [[unlikely]] return; }
L_0043FD2C:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 508u);  goto L_0043FD4C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FD48u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043FD48u) [[unlikely]] return; }
L_0043FD48:
    set32(c.r[4], c.r[17].w[0] + 508u);
    c.budget -= 1;
L_0043FD4C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 36u), 0u);  if (t) { goto L_0043FD5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FD5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0043FD5Cu) [[unlikely]] return; }
L_0043FD5C:
    set32(c.r[4], c.r[17].w[0] + 492u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 476u);  goto L_0043FD74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FD70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0043FD70u) [[unlikely]] return; }
L_0043FD70:
    set32(c.r[4], c.r[17].w[0] + 476u);
    c.budget -= 1;
L_0043FD74:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 88u);  goto L_0043FD98; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043FD94; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043FD94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FD94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 358u, depth + 1u); else { c.pc = 0x00442700u; return; } if (c.pc != 0x0043FD94u) [[unlikely]] return; }
L_0043FD94:
    set32(c.r[4], c.r[17].w[0] + 88u);
    c.budget -= 1;
L_0043FD98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FDA0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00CE(c, 403u, depth + 1u); else { c.pc = 0x0043BDD0u; return; } if (c.pc != 0x0043FDA0u) [[unlikely]] return; }
L_0043FDA0:
    set32(c.r[2], c.r[17].w[0] + 72u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 56u);  goto L_0043FDE4; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043FDE0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043FDE0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043FDE0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043FDE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043FDE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FDE0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0043FDE0u) [[unlikely]] return; }
L_0043FDE0:
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 1;
L_0043FDE4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 40u);  goto L_0043FDF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FDF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0043FDF4u) [[unlikely]] return; }
L_0043FDF4:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 1;
L_0043FDF8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_0043FE0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FE08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0043FE08u) [[unlikely]] return; }
L_0043FE08:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_0043FE0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_0043FE24; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28480u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
L_0043FE24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043FE38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28464u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_0043FE38:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0043FE50; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28448u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_0043FE50:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0043FE68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FE64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0043FE64u) [[unlikely]] return; }
L_0043FE64:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0043FE68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0043FE80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 28448u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], 0u - 3u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[13], 0u - 5u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[11], 0u - 9u);
    set32(c.r[2], c.r[2].w[0] + 28464u);
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[9], 0u - 17u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[7], 0u - 33u);
    set32(c.r[2], c.r[2].w[0] + 28480u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28384u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28400u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28416u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[14], c.r[2].w[0] << 2);
    set32(c.r[10], c.r[2].w[0] << 4);
    set32(c.r[8], c.r[2].w[0] << 5);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[6], c.r[2].w[0] << 6);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u - 65u);
    c.r[15].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[3], 0u - 2u);
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 16u), 0u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 20u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 70;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FF98u); set32(c.r[4], c.r[18].w[0] + 40u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0043FF98u) [[unlikely]] return; }
L_0043FF98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FFA0u); set32(c.r[4], c.r[18].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0043FFA0u) [[unlikely]] return; }
L_0043FFA0:
    set32(c.r[3], 0u - 1u);
    set32(c.r[16], c.r[18].w[0] + 72u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0043FFE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FFB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0043FFB8u) [[unlikely]] return; }
L_0043FFB8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0043FFD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FFCCu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0043FFCCu) [[unlikely]] return; }
L_0043FFCC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0043FFD0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0043FFE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FFE0u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0043FFE0u) [[unlikely]] return; }
L_0043FFE0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0043FFE4:
    set32(c.r[4], c.r[18].w[0] + 88u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FFFCu); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00CE(c, 363u, depth + 1u); else { c.pc = 0x0043B920u; return; } if (c.pc != 0x0043FFFCu) [[unlikely]] return; }
L_0043FFFC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
    [[clang::musttail]] return unit_00D0(c, 1u, depth);
}

}
