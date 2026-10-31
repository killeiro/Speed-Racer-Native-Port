#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0103[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0,
    0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 51, 0,
    0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 83, 0, 84, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89,
    0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 130, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140,
    0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    159, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0,
    165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0,
    0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0,
    0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195,
    0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0,
    0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0,
    0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0,
    0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0,
    0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0,
    0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0,
    0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0,
    0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0,
    0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317,
    0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328,
    0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0,
    0, 348, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0,
    0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0,
    360, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370,
    0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0,
    0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0,
    0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0,
    0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402,
    0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0,
    408, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0,
    414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    418, 0, 0, 419, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 436, 0, 437, 0, 0,
    0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0,
    0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0,
    447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0,
    452, 0, 0, 0, 453, 0, 454, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0,
    0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466,
    0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471,
    0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0,
    0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 501, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0,
    507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0,
    0, 0, 511, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 528, 0, 0, 0, 529, 0,
    0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532,
    0, 0, 0, 0, 533, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0,
    0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0103(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0050C000;
    case 2u: goto L_0050C018;
    case 3u: goto L_0050C03C;
    case 4u: goto L_0050C060;
    case 5u: goto L_0050C06C;
    case 6u: goto L_0050C078;
    case 7u: goto L_0050C09C;
    case 8u: goto L_0050C0A8;
    case 9u: goto L_0050C0B4;
    case 10u: goto L_0050C0D0;
    case 11u: goto L_0050C0F0;
    case 12u: goto L_0050C100;
    case 13u: goto L_0050C11C;
    case 14u: goto L_0050C130;
    case 15u: goto L_0050C140;
    case 16u: goto L_0050C158;
    case 17u: goto L_0050C174;
    case 18u: goto L_0050C194;
    case 19u: goto L_0050C1A4;
    case 20u: goto L_0050C1C0;
    case 21u: goto L_0050C1D4;
    case 22u: goto L_0050C1E4;
    case 23u: goto L_0050C210;
    case 24u: goto L_0050C248;
    case 25u: goto L_0050C258;
    case 26u: goto L_0050C270;
    case 27u: goto L_0050C2A0;
    case 28u: goto L_0050C2BC;
    case 29u: goto L_0050C2E0;
    case 30u: goto L_0050C2F0;
    case 31u: goto L_0050C300;
    case 32u: goto L_0050C320;
    case 33u: goto L_0050C33C;
    case 34u: goto L_0050C348;
    case 35u: goto L_0050C354;
    case 36u: goto L_0050C370;
    case 37u: goto L_0050C380;
    case 38u: goto L_0050C390;
    case 39u: goto L_0050C3AC;
    case 40u: goto L_0050C3B8;
    case 41u: goto L_0050C3C4;
    case 42u: goto L_0050C3E0;
    case 43u: goto L_0050C3FC;
    case 44u: goto L_0050C460;
    case 45u: goto L_0050C478;
    case 46u: goto L_0050C488;
    case 47u: goto L_0050C4B0;
    case 48u: goto L_0050C4C4;
    case 49u: goto L_0050C4DC;
    case 50u: goto L_0050C4E4;
    case 51u: goto L_0050C4F8;
    case 52u: goto L_0050C514;
    case 53u: goto L_0050C51C;
    case 54u: goto L_0050C530;
    case 55u: goto L_0050C548;
    case 56u: goto L_0050C560;
    case 57u: goto L_0050C57C;
    case 58u: goto L_0050C590;
    case 59u: goto L_0050C5A8;
    case 60u: goto L_0050C5C0;
    case 61u: goto L_0050C5E0;
    case 62u: goto L_0050C608;
    case 63u: goto L_0050C614;
    case 64u: goto L_0050C62C;
    case 65u: goto L_0050C650;
    case 66u: goto L_0050C678;
    case 67u: goto L_0050C690;
    case 68u: goto L_0050C6A4;
    case 69u: goto L_0050C6C0;
    case 70u: goto L_0050C6D0;
    case 71u: goto L_0050C6F0;
    case 72u: goto L_0050C710;
    case 73u: goto L_0050C71C;
    case 74u: goto L_0050C730;
    case 75u: goto L_0050C750;
    case 76u: goto L_0050C770;
    case 77u: goto L_0050C77C;
    case 78u: goto L_0050C790;
    case 79u: goto L_0050C7B0;
    case 80u: goto L_0050C7B8;
    case 81u: goto L_0050C7E0;
    case 82u: goto L_0050C800;
    case 83u: goto L_0050C80C;
    case 84u: goto L_0050C814;
    case 85u: goto L_0050C81C;
    case 86u: goto L_0050C834;
    case 87u: goto L_0050C844;
    case 88u: goto L_0050C870;
    case 89u: goto L_0050C87C;
    case 90u: goto L_0050C884;
    case 91u: goto L_0050C8C0;
    case 92u: goto L_0050C8CC;
    case 93u: goto L_0050C8F0;
    case 94u: goto L_0050C928;
    case 95u: goto L_0050C9B0;
    case 96u: goto L_0050CA30;
    case 97u: goto L_0050CA40;
    case 98u: goto L_0050CA60;
    case 99u: goto L_0050CA78;
    case 100u: goto L_0050CAAC;
    case 101u: goto L_0050CAB8;
    case 102u: goto L_0050CAC0;
    case 103u: goto L_0050CB3C;
    case 104u: goto L_0050CB64;
    case 105u: goto L_0050CB70;
    case 106u: goto L_0050CB98;
    case 107u: goto L_0050CBD0;
    case 108u: goto L_0050CC00;
    case 109u: goto L_0050CC38;
    case 110u: goto L_0050CCC0;
    case 111u: goto L_0050CD3C;
    case 112u: goto L_0050CD4C;
    case 113u: goto L_0050CD6C;
    case 114u: goto L_0050CD84;
    case 115u: goto L_0050CDB8;
    case 116u: goto L_0050CDC4;
    case 117u: goto L_0050CE40;
    case 118u: goto L_0050CE68;
    case 119u: goto L_0050CE74;
    case 120u: goto L_0050CE9C;
    case 121u: goto L_0050CED4;
    case 122u: goto L_0050CF10;
    case 123u: goto L_0050CF30;
    case 124u: goto L_0050CF40;
    case 125u: goto L_0050CF54;
    case 126u: goto L_0050CF60;
    case 127u: goto L_0050CF74;
    case 128u: goto L_0050CF90;
    case 129u: goto L_0050CFB0;
    case 130u: goto L_0050D004;
    case 131u: goto L_0050D014;
    case 132u: goto L_0050D01C;
    case 133u: goto L_0050D030;
    case 134u: goto L_0050D040;
    case 135u: goto L_0050D068;
    case 136u: goto L_0050D074;
    case 137u: goto L_0050D0BC;
    case 138u: goto L_0050D0CC;
    case 139u: goto L_0050D0E8;
    case 140u: goto L_0050D0FC;
    case 141u: goto L_0050D10C;
    case 142u: goto L_0050D128;
    case 143u: goto L_0050D188;
    case 144u: goto L_0050D1E8;
    case 145u: goto L_0050D230;
    case 146u: goto L_0050D278;
    case 147u: goto L_0050D28C;
    case 148u: goto L_0050D29C;
    case 149u: goto L_0050D2A8;
    case 150u: goto L_0050D2D0;
    case 151u: goto L_0050D2E0;
    case 152u: goto L_0050D36C;
    case 153u: goto L_0050D37C;
    case 154u: goto L_0050D398;
    case 155u: goto L_0050D3AC;
    case 156u: goto L_0050D3BC;
    case 157u: goto L_0050D44C;
    case 158u: goto L_0050D468;
    case 159u: goto L_0050D480;
    case 160u: goto L_0050D48C;
    case 161u: goto L_0050D4A0;
    case 162u: goto L_0050D4B0;
    case 163u: goto L_0050D4CC;
    case 164u: goto L_0050D4EC;
    case 165u: goto L_0050D500;
    case 166u: goto L_0050D510;
    case 167u: goto L_0050D52C;
    case 168u: goto L_0050D560;
    case 169u: goto L_0050D59C;
    case 170u: goto L_0050D5AC;
    case 171u: goto L_0050D5E8;
    case 172u: goto L_0050D5F8;
    case 173u: goto L_0050D610;
    case 174u: goto L_0050D628;
    case 175u: goto L_0050D648;
    case 176u: goto L_0050D650;
    case 177u: goto L_0050D674;
    case 178u: goto L_0050D680;
    case 179u: goto L_0050D694;
    case 180u: goto L_0050D6C4;
    case 181u: goto L_0050D6D4;
    case 182u: goto L_0050D774;
    case 183u: goto L_0050D784;
    case 184u: goto L_0050D810;
    case 185u: goto L_0050D81C;
    case 186u: goto L_0050D828;
    case 187u: goto L_0050D834;
    case 188u: goto L_0050D844;
    case 189u: goto L_0050D860;
    case 190u: goto L_0050D86C;
    case 191u: goto L_0050D878;
    case 192u: goto L_0050D884;
    case 193u: goto L_0050D890;
    case 194u: goto L_0050D89C;
    case 195u: goto L_0050D8FC;
    case 196u: goto L_0050D908;
    case 197u: goto L_0050D914;
    case 198u: goto L_0050D920;
    case 199u: goto L_0050D930;
    case 200u: goto L_0050D99C;
    case 201u: goto L_0050D9A8;
    case 202u: goto L_0050D9B4;
    case 203u: goto L_0050D9BC;
    case 204u: goto L_0050D9CC;
    case 205u: goto L_0050D9D4;
    case 206u: goto L_0050DA00;
    case 207u: goto L_0050DA44;
    case 208u: goto L_0050DA54;
    case 209u: goto L_0050DA70;
    case 210u: goto L_0050DA84;
    case 211u: goto L_0050DA94;
    case 212u: goto L_0050DAB0;
    case 213u: goto L_0050DAC0;
    case 214u: goto L_0050DADC;
    case 215u: goto L_0050DAF0;
    case 216u: goto L_0050DB00;
    case 217u: goto L_0050DB1C;
    case 218u: goto L_0050DB2C;
    case 219u: goto L_0050DB48;
    case 220u: goto L_0050DB5C;
    case 221u: goto L_0050DB6C;
    case 222u: goto L_0050DB88;
    case 223u: goto L_0050DB98;
    case 224u: goto L_0050DBB4;
    case 225u: goto L_0050DBC8;
    case 226u: goto L_0050DBD8;
    case 227u: goto L_0050DBF4;
    case 228u: goto L_0050DC04;
    case 229u: goto L_0050DC20;
    case 230u: goto L_0050DC34;
    case 231u: goto L_0050DC44;
    case 232u: goto L_0050DC60;
    case 233u: goto L_0050DC70;
    case 234u: goto L_0050DC8C;
    case 235u: goto L_0050DCA0;
    case 236u: goto L_0050DCB0;
    case 237u: goto L_0050DCCC;
    case 238u: goto L_0050DCDC;
    case 239u: goto L_0050DCF8;
    case 240u: goto L_0050DD0C;
    case 241u: goto L_0050DD1C;
    case 242u: goto L_0050DD54;
    case 243u: goto L_0050DD64;
    case 244u: goto L_0050DD80;
    case 245u: goto L_0050DD94;
    case 246u: goto L_0050DDA4;
    case 247u: goto L_0050DDC4;
    case 248u: goto L_0050DDD4;
    case 249u: goto L_0050DDF0;
    case 250u: goto L_0050DE10;
    case 251u: goto L_0050DE20;
    case 252u: goto L_0050DE3C;
    case 253u: goto L_0050DE5C;
    case 254u: goto L_0050DE6C;
    case 255u: goto L_0050DE88;
    case 256u: goto L_0050DEA8;
    case 257u: goto L_0050DEB8;
    case 258u: goto L_0050DED4;
    case 259u: goto L_0050DEF4;
    case 260u: goto L_0050DF04;
    case 261u: goto L_0050DF20;
    case 262u: goto L_0050DF40;
    case 263u: goto L_0050DF50;
    case 264u: goto L_0050DF6C;
    case 265u: goto L_0050DF8C;
    case 266u: goto L_0050DF9C;
    case 267u: goto L_0050DFB8;
    case 268u: goto L_0050DFD8;
    case 269u: goto L_0050DFE8;
    case 270u: goto L_0050E004;
    case 271u: goto L_0050E01C;
    case 272u: goto L_0050E040;
    case 273u: goto L_0050E078;
    case 274u: goto L_0050E088;
    case 275u: goto L_0050E09C;
    case 276u: goto L_0050E0AC;
    case 277u: goto L_0050E0C0;
    case 278u: goto L_0050E0D0;
    case 279u: goto L_0050E0E4;
    case 280u: goto L_0050E0F4;
    case 281u: goto L_0050E108;
    case 282u: goto L_0050E118;
    case 283u: goto L_0050E12C;
    case 284u: goto L_0050E13C;
    case 285u: goto L_0050E150;
    case 286u: goto L_0050E160;
    case 287u: goto L_0050E174;
    case 288u: goto L_0050E184;
    case 289u: goto L_0050E1C0;
    case 290u: goto L_0050E238;
    case 291u: goto L_0050E250;
    case 292u: goto L_0050E270;
    case 293u: goto L_0050E2B0;
    case 294u: goto L_0050E2C0;
    case 295u: goto L_0050E2FC;
    case 296u: goto L_0050E310;
    case 297u: goto L_0050E354;
    case 298u: goto L_0050E374;
    case 299u: goto L_0050E3A0;
    case 300u: goto L_0050E430;
    case 301u: goto L_0050E454;
    case 302u: goto L_0050E470;
    case 303u: goto L_0050E494;
    case 304u: goto L_0050E4AC;
    case 305u: goto L_0050E4D0;
    case 306u: goto L_0050E4E0;
    case 307u: goto L_0050E504;
    case 308u: goto L_0050E510;
    case 309u: goto L_0050E520;
    case 310u: goto L_0050E55C;
    case 311u: goto L_0050E574;
    case 312u: goto L_0050E590;
    case 313u: goto L_0050E5A0;
    case 314u: goto L_0050E5B0;
    case 315u: goto L_0050E5C0;
    case 316u: goto L_0050E5E8;
    case 317u: goto L_0050E5FC;
    case 318u: goto L_0050E61C;
    case 319u: goto L_0050E640;
    case 320u: goto L_0050E660;
    case 321u: goto L_0050E678;
    case 322u: goto L_0050E6AC;
    case 323u: goto L_0050E6C4;
    case 324u: goto L_0050E6E0;
    case 325u: goto L_0050E714;
    case 326u: goto L_0050E72C;
    case 327u: goto L_0050E760;
    case 328u: goto L_0050E77C;
    case 329u: goto L_0050E798;
    case 330u: goto L_0050E7B0;
    case 331u: goto L_0050E7D0;
    case 332u: goto L_0050E7E0;
    case 333u: goto L_0050E7F0;
    case 334u: goto L_0050E800;
    case 335u: goto L_0050E830;
    case 336u: goto L_0050E84C;
    case 337u: goto L_0050E870;
    case 338u: goto L_0050E884;
    case 339u: goto L_0050E8B0;
    case 340u: goto L_0050E908;
    case 341u: goto L_0050E920;
    case 342u: goto L_0050E940;
    case 343u: goto L_0050E980;
    case 344u: goto L_0050E990;
    case 345u: goto L_0050E9C8;
    case 346u: goto L_0050E9D8;
    case 347u: goto L_0050E9F0;
    case 348u: goto L_0050EA04;
    case 349u: goto L_0050EA18;
    case 350u: goto L_0050EA24;
    case 351u: goto L_0050EA34;
    case 352u: goto L_0050EA40;
    case 353u: goto L_0050EA50;
    case 354u: goto L_0050EA68;
    case 355u: goto L_0050EA8C;
    case 356u: goto L_0050EAA0;
    case 357u: goto L_0050EAC8;
    case 358u: goto L_0050EAE0;
    case 359u: goto L_0050EAF4;
    case 360u: goto L_0050EB00;
    case 361u: goto L_0050EB14;
    case 362u: goto L_0050EB20;
    case 363u: goto L_0050EB2C;
    case 364u: goto L_0050EB38;
    case 365u: goto L_0050EB60;
    case 366u: goto L_0050EB90;
    case 367u: goto L_0050EBA0;
    case 368u: goto L_0050EBC4;
    case 369u: goto L_0050EBDC;
    case 370u: goto L_0050EBFC;
    case 371u: goto L_0050EC08;
    case 372u: goto L_0050EC44;
    case 373u: goto L_0050EC54;
    case 374u: goto L_0050EC80;
    case 375u: goto L_0050EC90;
    case 376u: goto L_0050ECB0;
    case 377u: goto L_0050ECCC;
    case 378u: goto L_0050ECDC;
    case 379u: goto L_0050ECF8;
    case 380u: goto L_0050ED0C;
    case 381u: goto L_0050ED1C;
    case 382u: goto L_0050ED38;
    case 383u: goto L_0050ED4C;
    case 384u: goto L_0050ED5C;
    case 385u: goto L_0050ED74;
    case 386u: goto L_0050ED8C;
    case 387u: goto L_0050ED9C;
    case 388u: goto L_0050EDA8;
    case 389u: goto L_0050EDCC;
    case 390u: goto L_0050EDDC;
    case 391u: goto L_0050EE08;
    case 392u: goto L_0050EE18;
    case 393u: goto L_0050EE38;
    case 394u: goto L_0050EE44;
    case 395u: goto L_0050EE58;
    case 396u: goto L_0050EE70;
    case 397u: goto L_0050EE84;
    case 398u: goto L_0050EE94;
    case 399u: goto L_0050EEB0;
    case 400u: goto L_0050EED4;
    case 401u: goto L_0050EEE8;
    case 402u: goto L_0050EEFC;
    case 403u: goto L_0050EF1C;
    case 404u: goto L_0050EF28;
    case 405u: goto L_0050EF40;
    case 406u: goto L_0050EF54;
    case 407u: goto L_0050EF64;
    case 408u: goto L_0050EF80;
    case 409u: goto L_0050EF94;
    case 410u: goto L_0050EFA4;
    case 411u: goto L_0050EFC0;
    case 412u: goto L_0050EFD4;
    case 413u: goto L_0050EFE4;
    case 414u: goto L_0050F000;
    case 415u: goto L_0050F020;
    case 416u: goto L_0050F048;
    case 417u: goto L_0050F058;
    case 418u: goto L_0050F080;
    case 419u: goto L_0050F08C;
    case 420u: goto L_0050F094;
    case 421u: goto L_0050F0A0;
    case 422u: goto L_0050F0BC;
    case 423u: goto L_0050F0CC;
    case 424u: goto L_0050F0E0;
    case 425u: goto L_0050F10C;
    case 426u: goto L_0050F118;
    case 427u: goto L_0050F124;
    case 428u: goto L_0050F12C;
    case 429u: goto L_0050F154;
    case 430u: goto L_0050F160;
    case 431u: goto L_0050F1A0;
    case 432u: goto L_0050F1A8;
    case 433u: goto L_0050F1B8;
    case 434u: goto L_0050F1CC;
    case 435u: goto L_0050F1DC;
    case 436u: goto L_0050F1EC;
    case 437u: goto L_0050F1F4;
    case 438u: goto L_0050F210;
    case 439u: goto L_0050F234;
    case 440u: goto L_0050F250;
    case 441u: goto L_0050F274;
    case 442u: goto L_0050F28C;
    case 443u: goto L_0050F2B0;
    case 444u: goto L_0050F2C0;
    case 445u: goto L_0050F2E4;
    case 446u: goto L_0050F2F0;
    case 447u: goto L_0050F300;
    case 448u: goto L_0050F334;
    case 449u: goto L_0050F340;
    case 450u: goto L_0050F358;
    case 451u: goto L_0050F370;
    case 452u: goto L_0050F380;
    case 453u: goto L_0050F390;
    case 454u: goto L_0050F398;
    case 455u: goto L_0050F3A0;
    case 456u: goto L_0050F3B0;
    case 457u: goto L_0050F3DC;
    case 458u: goto L_0050F3F8;
    case 459u: goto L_0050F414;
    case 460u: goto L_0050F420;
    case 461u: goto L_0050F430;
    case 462u: goto L_0050F440;
    case 463u: goto L_0050F450;
    case 464u: goto L_0050F490;
    case 465u: goto L_0050F4A8;
    case 466u: goto L_0050F4FC;
    case 467u: goto L_0050F508;
    case 468u: goto L_0050F510;
    case 469u: goto L_0050F544;
    case 470u: goto L_0050F560;
    case 471u: goto L_0050F57C;
    case 472u: goto L_0050F598;
    case 473u: goto L_0050F5A8;
    case 474u: goto L_0050F5B0;
    case 475u: goto L_0050F5E4;
    case 476u: goto L_0050F610;
    case 477u: goto L_0050F620;
    case 478u: goto L_0050F628;
    case 479u: goto L_0050F654;
    case 480u: goto L_0050F6A0;
    case 481u: goto L_0050F6B8;
    case 482u: goto L_0050F6D0;
    case 483u: goto L_0050F704;
    case 484u: goto L_0050F70C;
    case 485u: goto L_0050F748;
    case 486u: goto L_0050F780;
    case 487u: goto L_0050F790;
    case 488u: goto L_0050F7D4;
    case 489u: goto L_0050F7F0;
    case 490u: goto L_0050F834;
    case 491u: goto L_0050F848;
    case 492u: goto L_0050F860;
    case 493u: goto L_0050F8A8;
    case 494u: goto L_0050F8F0;
    case 495u: goto L_0050F940;
    case 496u: goto L_0050F954;
    case 497u: goto L_0050F95C;
    case 498u: goto L_0050F96C;
    case 499u: goto L_0050F990;
    case 500u: goto L_0050F9C8;
    case 501u: goto L_0050FA04;
    case 502u: goto L_0050FA18;
    case 503u: goto L_0050FA20;
    case 504u: goto L_0050FA30;
    case 505u: goto L_0050FA50;
    case 506u: goto L_0050FA78;
    case 507u: goto L_0050FA80;
    case 508u: goto L_0050FB14;
    case 509u: goto L_0050FB38;
    case 510u: goto L_0050FB74;
    case 511u: goto L_0050FB88;
    case 512u: goto L_0050FB90;
    case 513u: goto L_0050FBA0;
    case 514u: goto L_0050FBC0;
    case 515u: goto L_0050FBE8;
    case 516u: goto L_0050FBF0;
    case 517u: goto L_0050FC84;
    case 518u: goto L_0050FCB8;
    case 519u: goto L_0050FCE0;
    case 520u: goto L_0050FD1C;
    case 521u: goto L_0050FD30;
    case 522u: goto L_0050FD38;
    case 523u: goto L_0050FD48;
    case 524u: goto L_0050FD68;
    case 525u: goto L_0050FD90;
    case 526u: goto L_0050FDCC;
    case 527u: goto L_0050FDE0;
    case 528u: goto L_0050FDE8;
    case 529u: goto L_0050FDF8;
    case 530u: goto L_0050FE18;
    case 531u: goto L_0050FE40;
    case 532u: goto L_0050FE7C;
    case 533u: goto L_0050FE90;
    case 534u: goto L_0050FE98;
    case 535u: goto L_0050FEA8;
    case 536u: goto L_0050FEC8;
    case 537u: goto L_0050FEF0;
    case 538u: goto L_0050FF40;
    case 539u: goto L_0050FF54;
    case 540u: goto L_0050FF5C;
    case 541u: goto L_0050FF6C;
    case 542u: goto L_0050FF88;
    case 543u: goto L_0050FFD4;
    default: bad_entry(c, 0x0050C000u); return;
    }
L_0050C000:
    st32((c.r[29].w[0] + 124u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 136u), c.r[9].w[0]);
    st8((c.r[29].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C018u); st8((c.r[29].w[0] + 145u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 64u, depth + 1u); else { c.pc = 0x001BA330u; return; } if (c.pc != 0x0050C018u) [[unlikely]] return; }
L_0050C018:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], c.r[16].w[0] + 956u);
    c.r[2].d[0] = c.r[2].d[0] | 255ull;
    set32(c.r[5], c.r[16].w[0] + 424u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[6], c.r[16].w[0] + 216u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C03Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 64u, depth + 1u); else { c.pc = 0x001BA330u; return; } if (c.pc != 0x0050C03Cu) [[unlikely]] return; }
L_0050C03C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[4], c.r[16].w[0] + 956u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], c.r[16].w[0] + 528u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[6], c.r[16].w[0] + 216u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C060u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 64u, depth + 1u); else { c.pc = 0x001BA330u; return; } if (c.pc != 0x0050C060u) [[unlikely]] return; }
L_0050C060:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C06Cu); set32(c.r[4], c.r[16].w[0] + 956u);  if (depth < kMaxDepth) unit_002D(c, 107u, depth + 1u); else { c.pc = 0x001B5080u; return; } if (c.pc != 0x0050C06Cu) [[unlikely]] return; }
L_0050C06C:
    set32(c.r[4], c.r[16].w[0] + 968u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C078u); set32(c.r[5], 0u + 114u);  if (depth < kMaxDepth) unit_002D(c, 108u, depth + 1u); else { c.pc = 0x001B5110u; return; } if (c.pc != 0x0050C078u) [[unlikely]] return; }
L_0050C078:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 968u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[16].w[0] + 216u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], c.r[16].w[0] + 320u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C09Cu); c.r[8].sd[0] = static_cast<std::int32_t>(0xFF000000u);  if (depth < kMaxDepth) unit_002D(c, 191u, depth + 1u); else { c.pc = 0x001B6860u; return; } if (c.pc != 0x0050C09Cu) [[unlikely]] return; }
L_0050C09C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C0A8u); set32(c.r[4], c.r[16].w[0] + 968u);  if (depth < kMaxDepth) unit_002D(c, 107u, depth + 1u); else { c.pc = 0x001B5080u; return; } if (c.pc != 0x0050C0A8u) [[unlikely]] return; }
L_0050C0A8:
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C0B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0050C0B4u) [[unlikely]] return; }
L_0050C0B4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 992u)));  goto L_0050C0D8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C0D0u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0070(c, 348u, depth + 1u); else { c.pc = 0x002C2EF0u; return; } if (c.pc != 0x0050C0D0u) [[unlikely]] return; }
L_0050C0D0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 992u)));
    c.budget -= 2;
L_0050C0D8:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[18].d[0]) { c.r[1].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;  goto L_0050C144; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 992u), c.r[18].w[0]);  goto L_0050C120; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C0F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050C0F0u) [[unlikely]] return; }
L_0050C0F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C100u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050C100u) [[unlikely]] return; }
L_0050C100:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050C11C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C11Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050C11Cu) [[unlikely]] return; }
L_0050C11C:
    st32((c.r[16].w[0] + 992u), c.r[18].w[0]);
    c.budget -= 1;
L_0050C120:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0050C140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C130u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050C130u) [[unlikely]] return; }
L_0050C130:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C140u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050C140u) [[unlikely]] return; }
L_0050C140:
    c.r[1].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_0050C144:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0050C1E8; }
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C158u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0050C158u) [[unlikely]] return; }
L_0050C158:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 996u)));  goto L_0050C17C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C174u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0070(c, 348u, depth + 1u); else { c.pc = 0x002C2EF0u; return; } if (c.pc != 0x0050C174u) [[unlikely]] return; }
L_0050C174:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 996u)));
    c.budget -= 2;
L_0050C17C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_0050C1E4; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 996u), c.r[17].w[0]);  goto L_0050C1C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C194u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050C194u) [[unlikely]] return; }
L_0050C194:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C1A4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050C1A4u) [[unlikely]] return; }
L_0050C1A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050C1C0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C1C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050C1C0u) [[unlikely]] return; }
L_0050C1C0:
    st32((c.r[16].w[0] + 996u), c.r[17].w[0]);
    c.budget -= 1;
L_0050C1C4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0050C1E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C1D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050C1D4u) [[unlikely]] return; }
L_0050C1D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C1E4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050C1E4u) [[unlikely]] return; }
L_0050C1E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0050C1E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0050C210:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  goto L_0050C220; }
L_0050C220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_0050C258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C248u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050C248u) [[unlikely]] return; }
L_0050C248:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C258u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050C258u) [[unlikely]] return; }
L_0050C258:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050C270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0050C2BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 22096u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C2A0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x0050C2A0u) [[unlikely]] return; }
L_0050C2A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0050C2C0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C2BCu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0050C2BCu) [[unlikely]] return; }
L_0050C2BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0050C2C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050C2E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 26616u);  c.pc = t; return; }
L_0050C2F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] + 26624u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A390u | kUnwind; return; } [[clang::musttail]] return unit_0082(c, 252u, depth); }
L_0050C300:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 26624u);
    c.budget -= 5;
    { set32(c.r[5], c.r[5].w[0] - 15264u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A520u | kUnwind; return; } [[clang::musttail]] return unit_0082(c, 262u, depth); }
L_0050C320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C33Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x0050C33Cu) [[unlikely]] return; }
L_0050C33C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C348u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x0050C348u) [[unlikely]] return; }
L_0050C348:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C354u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x0050C354u) [[unlikely]] return; }
L_0050C354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050C370:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB2E0u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 425u, depth); }
L_0050C380:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB310u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 427u, depth); }
L_0050C390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C3ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x0050C3ACu) [[unlikely]] return; }
L_0050C3AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C3B8u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0050C3B8u) [[unlikely]] return; }
L_0050C3B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C3C4u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0050C3C4u) [[unlikely]] return; }
L_0050C3C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050C3E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C3FCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x0050C3FCu) [[unlikely]] return; }
L_0050C3FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 8u));  goto L_0050C40C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0050C440; } }
L_0050C40C:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0050C420; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050C420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0050C440; } }
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0050C440; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050C440:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050C460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 16u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C478u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0050C478u) [[unlikely]] return; }
L_0050C478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0050C49C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C488u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x0050C488u) [[unlikely]] return; }
L_0050C488:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22096u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_0050C49C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0050C4B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    c.budget -= 5;
L_0050C4C4:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0050C524; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C4DCu); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0012(c, 464u, depth + 1u); else { c.pc = 0x0014B860u; return; } if (c.pc != 0x0050C4DCu) [[unlikely]] return; }
L_0050C4DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C4E4u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_009E(c, 214u, depth + 1u); else { c.pc = 0x0037B388u; return; } if (c.pc != 0x0050C4E4u) [[unlikely]] return; }
L_0050C4E4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 4u);  goto L_0050C50C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C4F8u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_009E(c, 129u, depth + 1u); else { c.pc = 0x00379A10u; return; } if (c.pc != 0x0050C4F8u) [[unlikely]] return; }
L_0050C4F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050C508; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0050C508:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0050C50C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C514u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0012(c, 465u, depth + 1u); else { c.pc = 0x0014B870u; return; } if (c.pc != 0x0050C514u) [[unlikely]] return; }
L_0050C514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C51Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 144u, depth + 1u); else { c.pc = 0x001292E0u; return; } if (c.pc != 0x0050C51Cu) [[unlikely]] return; }
L_0050C51C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0050C4C4u | kUnwind; return; } goto L_0050C4C4; } }
L_0050C524:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0050C530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C548u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0012(c, 394u, depth + 1u); else { c.pc = 0x0014B1B0u; return; } if (c.pc != 0x0050C548u) [[unlikely]] return; }
L_0050C548:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_0050C568; }
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C560u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0012(c, 395u, depth + 1u); else { c.pc = 0x0014B1C0u; return; } if (c.pc != 0x0050C560u) [[unlikely]] return; }
L_0050C560:
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_0050C568:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 15184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C57Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0012(c, 398u, depth + 1u); else { c.pc = 0x0014B200u; return; } if (c.pc != 0x0050C57Cu) [[unlikely]] return; }
L_0050C57C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0050C590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C5A8u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0012(c, 394u, depth + 1u); else { c.pc = 0x0014B1B0u; return; } if (c.pc != 0x0050C5A8u) [[unlikely]] return; }
L_0050C5A8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0050C5C8; }
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C5C0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0012(c, 395u, depth + 1u); else { c.pc = 0x0014B1C0u; return; } if (c.pc != 0x0050C5C0u) [[unlikely]] return; }
L_0050C5C0:
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0050C5C8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0050C5E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0050C62C; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C608u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0012(c, 404u, depth + 1u); else { c.pc = 0x0014B2F0u; return; } if (c.pc != 0x0050C608u) [[unlikely]] return; }
L_0050C608:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C614u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0012(c, 468u, depth + 1u); else { c.pc = 0x0014B8D0u; return; } if (c.pc != 0x0050C614u) [[unlikely]] return; }
L_0050C614:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0050C630; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C62Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0050C62Cu) [[unlikely]] return; }
L_0050C62C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0050C630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050C650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C678u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 471u, depth + 1u); else { c.pc = 0x0014B930u; return; } if (c.pc != 0x0050C678u) [[unlikely]] return; }
L_0050C678:
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 4u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C690u); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0050C690u) [[unlikely]] return; }
L_0050C690:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_0050C6A8; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C6A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 408u, depth + 1u); else { c.pc = 0x0014B350u; return; } if (c.pc != 0x0050C6A4u) [[unlikely]] return; }
L_0050C6A4:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0050C6A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050C6C0:
    c.budget -= 2;
    {  goto L_0050C790; }
L_0050C6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22052u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0050C71C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C6F0u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0012(c, 464u, depth + 1u); else { c.pc = 0x0014B860u; return; } if (c.pc != 0x0050C6F0u) [[unlikely]] return; }
L_0050C6F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 4u);  goto L_0050C708; }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
L_0050C708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C710u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0012(c, 465u, depth + 1u); else { c.pc = 0x0014B870u; return; } if (c.pc != 0x0050C710u) [[unlikely]] return; }
L_0050C710:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C71Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0012(c, 465u, depth + 1u); else { c.pc = 0x0014B870u; return; } if (c.pc != 0x0050C71Cu) [[unlikely]] return; }
L_0050C71C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0050C730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22052u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0050C77C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C750u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0012(c, 464u, depth + 1u); else { c.pc = 0x0014B860u; return; } if (c.pc != 0x0050C750u) [[unlikely]] return; }
L_0050C750:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 4u);  goto L_0050C768; }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
L_0050C768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C770u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0012(c, 465u, depth + 1u); else { c.pc = 0x0014B870u; return; } if (c.pc != 0x0050C770u) [[unlikely]] return; }
L_0050C770:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C77Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0012(c, 465u, depth + 1u); else { c.pc = 0x0014B870u; return; } if (c.pc != 0x0050C77Cu) [[unlikely]] return; }
L_0050C77C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0050C790:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0050C8CC; } }
L_0050C7B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C7B8u); set32(c.r[4], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0012(c, 464u, depth + 1u); else { c.pc = 0x0014B860u; return; } if (c.pc != 0x0050C7B8u) [[unlikely]] return; }
L_0050C7B8:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 16u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 12u)));  goto L_0050C7CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0050C8CC; } }
L_0050C7CC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0050C8CC; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C7E0u); set32(c.r[4], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x0050C7E0u) [[unlikely]] return; }
L_0050C7E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0050C804; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 324u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C800u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050C800u) [[unlikely]] return; }
L_0050C800:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0050C804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C80Cu);  if (depth < kMaxDepth) unit_0103(c, 93u, depth + 1u); else { c.pc = 0x0050C8F0u; return; } if (c.pc != 0x0050C80Cu) [[unlikely]] return; }
L_0050C80C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C814u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0103(c, 93u, depth + 1u); else { c.pc = 0x0050C8F0u; return; } if (c.pc != 0x0050C814u) [[unlikely]] return; }
L_0050C814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0050C870; } }
L_0050C81C:
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[18].w[0] + 4u);  goto L_0050C83C; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C834u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 372u, depth + 1u); else { c.pc = 0x003D3C40u; return; } if (c.pc != 0x0050C834u) [[unlikely]] return; }
L_0050C834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0050C870; } }
L_0050C83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C844u);  if (depth < kMaxDepth) unit_0012(c, 464u, depth + 1u); else { c.pc = 0x0014B860u; return; } if (c.pc != 0x0050C844u) [[unlikely]] return; }
L_0050C844:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0050C858; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0050C878; } }
L_0050C858:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 1u);  goto L_0050C868; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0050C870; } }
L_0050C868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C870u);  if (depth < kMaxDepth) unit_000A(c, 144u, depth + 1u); else { c.pc = 0x001292E0u; return; } if (c.pc != 0x0050C870u) [[unlikely]] return; }
L_0050C870:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0050C81Cu | kUnwind; return; } goto L_0050C81C; }
L_0050C878:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050C87C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C884u);  if (depth < kMaxDepth) unit_0103(c, 108u, depth + 1u); else { c.pc = 0x0050CC00u; return; } if (c.pc != 0x0050C884u) [[unlikely]] return; }
L_0050C884:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0050C87Cu | kUnwind; return; } goto L_0050C87C; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 27612u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 48u);  goto L_0050C8C4; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C8C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050C8C0u) [[unlikely]] return; }
L_0050C8C0:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_0050C8C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C8CCu);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0050C8CCu) [[unlikely]] return; }
L_0050C8CC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0050C7B0u | kUnwind; return; } goto L_0050C7B0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0050C8F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27612u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 100u)));  goto L_0050C93C; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 332u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C928u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050C928u) [[unlikely]] return; }
L_0050C928:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0050C938; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 2;
L_0050C938:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 1;
L_0050C93C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050C958; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0050C958:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050C96C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0050C96C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 96u));  goto L_0050C97C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0050C998; } }
L_0050C97C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0050C998; }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0050C998; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0050C998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0050CAB8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050C9B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050C9B0u) [[unlikely]] return; }
L_0050C9B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050C9D4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0050C9D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050C9E8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0050C9E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 96u));  goto L_0050C9F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0050CA14; } }
L_0050C9F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0050CA14; }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0050CA14; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0050CA14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0050CAB8; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 48u);  goto L_0050CA38; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CA30u); set32(c.r[4], c.r[4].w[0] + 31376u);  if (depth < kMaxDepth) unit_0072(c, 353u, depth + 1u); else { c.pc = 0x002CB050u; return; } if (c.pc != 0x0050CA30u) [[unlikely]] return; }
L_0050CA30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0050CAB8; } }
L_0050CA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CA40u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x0050CA40u) [[unlikely]] return; }
L_0050CA40:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_0050CA64; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 324u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CA60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050CA60u) [[unlikely]] return; }
L_0050CA60:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0050CA64:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 360u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CA78u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050CA78u) [[unlikely]] return; }
L_0050CA78:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 60u)));  goto L_0050CA90; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0050CAB8; } }
L_0050CA90:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 48u);  goto L_0050CAB0; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CAACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050CAACu) [[unlikely]] return; }
L_0050CAAC:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_0050CAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CAB8u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0050CAB8u) [[unlikely]] return; }
L_0050CAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CAC0u);  if (depth < kMaxDepth) unit_0103(c, 129u, depth + 1u); else { c.pc = 0x0050CFB0u; return; } if (c.pc != 0x0050CAC0u) [[unlikely]] return; }
L_0050CAC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0050CAE0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0050CAE0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0050CAF4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 4ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0050CAF4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[16].w[0] + 96u));  goto L_0050CB04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0050CB24; } }
L_0050CB04:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0050CB24; }
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_0050CB24; }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0050CB24:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 100u)));  goto L_0050CB78; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 364u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CB3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050CB3Cu) [[unlikely]] return; }
L_0050CB3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0050CB74; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 48u);  goto L_0050CB68; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CB64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050CB64u) [[unlikely]] return; }
L_0050CB64:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_0050CB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CB70u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0050CB70u) [[unlikely]] return; }
L_0050CB70:
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0050CB74:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 1;
L_0050CB78:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 100u)));  goto L_0050CBB0; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 336u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CB98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050CB98u) [[unlikely]] return; }
L_0050CB98:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 3u);  goto L_0050CBA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), 0u);  if (t) { goto L_0050CBAC; } }
L_0050CBA8:
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 1;
L_0050CBAC:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 1;
L_0050CBB0:
    c.r[3].d[0] = c.r[3].d[0] ^ 3ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0050CBF0; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 340u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CBD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050CBD0u) [[unlikely]] return; }
L_0050CBD0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 100u), 0u);  goto L_0050CBE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), 0u);  if (t) { goto L_0050CBEC; } }
L_0050CBE0:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 3;
L_0050CBEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0050CBF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050CC00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27612u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 100u)));  goto L_0050CC4C; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 332u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CC38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050CC38u) [[unlikely]] return; }
L_0050CC38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0050CC48; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_0050CC48:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 1;
L_0050CC4C:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0050CC68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0050CC68:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0050CC7C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 4ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0050CC7C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));  goto L_0050CC8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0050CCA8; } }
L_0050CC8C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0050CCA8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_0050CCA8; }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0050CCA8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 100u)));  goto L_0050CDC8; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CCC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050CCC0u) [[unlikely]] return; }
L_0050CCC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0050CCE0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0050CCE0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0050CCF4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 4ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0050CCF4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));  goto L_0050CD04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0050CD20; } }
L_0050CD04:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0050CD20; }
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_0050CD20; }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0050CD20:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0050CDC4; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 48u);  goto L_0050CD44; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CD3Cu); set32(c.r[4], c.r[4].w[0] + 31376u);  if (depth < kMaxDepth) unit_0072(c, 353u, depth + 1u); else { c.pc = 0x002CB050u; return; } if (c.pc != 0x0050CD3Cu) [[unlikely]] return; }
L_0050CD3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0050CDC4; } }
L_0050CD44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CD4Cu);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x0050CD4Cu) [[unlikely]] return; }
L_0050CD4C:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_0050CD70; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 324u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CD6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050CD6Cu) [[unlikely]] return; }
L_0050CD6C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0050CD70:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 360u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CD84u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050CD84u) [[unlikely]] return; }
L_0050CD84:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 60u)));  goto L_0050CD9C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0050CDC4; } }
L_0050CD9C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 48u);  goto L_0050CDBC; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CDB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050CDB8u) [[unlikely]] return; }
L_0050CDB8:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_0050CDBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CDC4u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0050CDC4u) [[unlikely]] return; }
L_0050CDC4:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 1;
L_0050CDC8:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0050CDE4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0050CDE4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0050CDF8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 4ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0050CDF8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[16].w[0] + 96u));  goto L_0050CE08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0050CE28; } }
L_0050CE08:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0050CE28; }
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_0050CE28; }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0050CE28:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 100u)));  goto L_0050CE7C; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 364u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CE40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050CE40u) [[unlikely]] return; }
L_0050CE40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0050CE78; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 48u);  goto L_0050CE6C; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CE68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050CE68u) [[unlikely]] return; }
L_0050CE68:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_0050CE6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CE74u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0050CE74u) [[unlikely]] return; }
L_0050CE74:
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0050CE78:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 1;
L_0050CE7C:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 100u)));  goto L_0050CEB4; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 336u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CE9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050CE9Cu) [[unlikely]] return; }
L_0050CE9C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 3u);  goto L_0050CEAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), 0u);  if (t) { goto L_0050CEB0; } }
L_0050CEAC:
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 1;
L_0050CEB0:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 1;
L_0050CEB4:
    c.r[3].d[0] = c.r[3].d[0] ^ 3ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0050CEF4; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 340u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CED4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050CED4u) [[unlikely]] return; }
L_0050CED4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 100u), 0u);  goto L_0050CEE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), 0u);  if (t) { goto L_0050CEF0; } }
L_0050CEE4:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 3;
L_0050CEF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0050CEF4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050CF10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CF30u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0012(c, 471u, depth + 1u); else { c.pc = 0x0014B930u; return; } if (c.pc != 0x0050CF30u) [[unlikely]] return; }
L_0050CF30:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CF40u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 471u, depth + 1u); else { c.pc = 0x0014B930u; return; } if (c.pc != 0x0050CF40u) [[unlikely]] return; }
L_0050CF40:
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CF54u); st32((c.r[28].w[0] - 22052u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0050CF54u) [[unlikely]] return; }
L_0050CF54:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CF60u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0050CF60u) [[unlikely]] return; }
L_0050CF60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0050CF74; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CF74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 408u, depth + 1u); else { c.pc = 0x0014B350u; return; } if (c.pc != 0x0050CF74u) [[unlikely]] return; }
L_0050CF74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14656u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050CF90u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0012(c, 398u, depth + 1u); else { c.pc = 0x0014B200u; return; } if (c.pc != 0x0050CF90u) [[unlikely]] return; }
L_0050CF90:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0050CFB0:
    set32(c.r[29], c.r[29].w[0] - 1168u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 1164u), 0u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    c.f[1] = ld32((c.r[2].w[0] + 180u));
    c.f[0] = ld32((c.r[2].w[0] + 176u));
    c.f[22] = fp::cvt_s_w(c.f[1]);
    c.budget -= 19;
    { const bool t = c.r[16].d[0] == 0ull; c.f[21] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0050D014; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D004u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050D004u) [[unlikely]] return; }
L_0050D004:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D014u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050D014u) [[unlikely]] return; }
L_0050D014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D01Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0083(c, 257u, depth + 1u); else { c.pc = 0x0030DD30u; return; } if (c.pc != 0x0050D01Cu) [[unlikely]] return; }
L_0050D01C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] + 26656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D030u); set32(c.r[6], 0u + 11311u);  if (depth < kMaxDepth) unit_0082(c, 273u, depth + 1u); else { c.pc = 0x0030A6D0u; return; } if (c.pc != 0x0050D030u) [[unlikely]] return; }
L_0050D030:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_0050D4E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0050D4D0; } }
L_0050D040:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_0050D05C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0050D0A0; } }
L_0050D05C:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D068u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050D068u) [[unlikely]] return; }
L_0050D068:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 28864u);  if (t) { goto L_0050D084; } }
L_0050D074:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0050D084; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0050D090; } }
L_0050D084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0050D074u | kUnwind; return; } goto L_0050D074; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050D090:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0050D0A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0050D0A0; } }
L_0050D0A0:
    set32(c.r[17], ld32((c.r[29].w[0] + 1164u)));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[18].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 1164u)));  goto L_0050D110; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[29].w[0] + 1164u), c.r[18].w[0]);  goto L_0050D0EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D0BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050D0BCu) [[unlikely]] return; }
L_0050D0BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D0CCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050D0CCu) [[unlikely]] return; }
L_0050D0CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050D0E8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D0E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050D0E8u) [[unlikely]] return; }
L_0050D0E8:
    st32((c.r[29].w[0] + 1164u), c.r[18].w[0]);
    c.budget -= 1;
L_0050D0EC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0050D10C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D0FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050D0FCu) [[unlikely]] return; }
L_0050D0FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D10Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050D10Cu) [[unlikely]] return; }
L_0050D10C:
    set32(c.r[17], ld32((c.r[29].w[0] + 1164u)));
    c.budget -= 1;
L_0050D110:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0050D4D0; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D128u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050D128u) [[unlikely]] return; }
L_0050D128:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0050D13C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0050D154; } }
L_0050D13C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0050D154:
    fpu_div(c, 2u, c.f[0], c.f[22]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D188u); c.f[20] = fp::sub(c.facc, fp::mul(c.f[1], c.f[2]));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050D188u) [[unlikely]] return; }
L_0050D188:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0050D19C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0050D1B4; } }
L_0050D19C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0050D1B4:
    fpu_div(c, 2u, c.f[0], c.f[21]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D1E8u); c.f[24] = fp::sub(c.facc, fp::mul(c.f[1], c.f[2]));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050D1E8u) [[unlikely]] return; }
L_0050D1E8:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0050D1FC; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0050D214; } }
L_0050D1FC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0050D214:
    fpu_div(c, 23u, c.f[0], c.f[22]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D230u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050D230u) [[unlikely]] return; }
L_0050D230:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0050D244; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0050D25C; } }
L_0050D244:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0050D25C:
    fpu_div(c, 15u, c.f[0], c.f[21]);
    c.f[12] = c.f[20];
    c.f[13] = c.f[24];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D278u); c.f[14] = c.f[23];  if (depth < kMaxDepth) unit_0103(c, 168u, depth + 1u); else { c.pc = 0x0050D560u; return; } if (c.pc != 0x0050D278u) [[unlikely]] return; }
L_0050D278:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 1160u), c.r[2].w[0]);  if (t) { goto L_0050D29C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D28Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050D28Cu) [[unlikely]] return; }
L_0050D28C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D29Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050D29Cu) [[unlikely]] return; }
L_0050D29C:
    set32(c.r[4], ld32((c.r[29].w[0] + 1160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D2A8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0061(c, 38u, depth + 1u); else { c.pc = 0x00284390u; return; } if (c.pc != 0x0050D2A8u) [[unlikely]] return; }
L_0050D2A8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 1160u)));  goto L_0050D490; }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 1164u)));  if (t) { goto L_0050D350; } }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D2D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0050D2D0u) [[unlikely]] return; }
L_0050D2D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[18].w[0] + 42u));  goto L_0050D2E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D2E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x0050D2E0u) [[unlikely]] return; }
L_0050D2E0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 42u));
    c.budget -= 1;
L_0050D2E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0050D308; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[18].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0050D348; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0050D348; } }
L_0050D308:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_0050D330; }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_0050D34C; }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0050D348; } }
L_0050D330:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0050D348; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0050D348:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_0050D34C:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0050D350:
    set32(c.r[18], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[17], ld32((c.r[28].w[0] - 27612u)));  goto L_0050D3C0; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[19].w[0] + 8u), c.r[17].w[0]);  goto L_0050D39C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D36Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050D36Cu) [[unlikely]] return; }
L_0050D36C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D37Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050D37Cu) [[unlikely]] return; }
L_0050D37C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050D398; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D398u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050D398u) [[unlikely]] return; }
L_0050D398:
    st32((c.r[19].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_0050D39C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0050D3BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D3ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050D3ACu) [[unlikely]] return; }
L_0050D3AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D3BCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050D3BCu) [[unlikely]] return; }
L_0050D3BC:
    set32(c.r[17], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 1;
L_0050D3C0:
    st32((c.r[29].w[0] + 1156u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050D3E4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0050D3E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050D3F8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0050D3F8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 96u));  goto L_0050D408; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0050D428; } }
L_0050D408:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0050D428; }
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0050D428; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0050D428:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 1160u)));  goto L_0050D484; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 132u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_0050D458; }
    set32(c.r[4], c.r[29].w[0] + 1156u);
    set32(c.r[5], c.r[17].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D44Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x0050D44Cu) [[unlikely]] return; }
L_0050D44C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0050D480; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0050D458:
    set32(c.r[5], ld32((c.r[29].w[0] + 1156u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 352u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D468u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050D468u) [[unlikely]] return; }
L_0050D468:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 136u);
    st8((c.r[17].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 1156u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D480u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0050D480u) [[unlikely]] return; }
L_0050D480:
    set32(c.r[4], ld32((c.r[29].w[0] + 1160u)));
    c.budget -= 1;
L_0050D484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D48Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 61u, depth + 1u); else { c.pc = 0x002CC700u; return; } if (c.pc != 0x0050D48Cu) [[unlikely]] return; }
L_0050D48C:
    set32(c.r[17], ld32((c.r[29].w[0] + 1160u)));
    c.budget -= 1;
L_0050D490:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0050D4CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D4A0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050D4A0u) [[unlikely]] return; }
L_0050D4A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D4B0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050D4B0u) [[unlikely]] return; }
L_0050D4B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050D4CC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D4CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050D4CCu) [[unlikely]] return; }
L_0050D4CC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0050D4D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 468u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 460u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0050D040u | kUnwind; return; } goto L_0050D040; }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_0050D4E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D4ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0083(c, 220u, depth + 1u); else { c.pc = 0x0030D840u; return; } if (c.pc != 0x0050D4ECu) [[unlikely]] return; }
L_0050D4EC:
    set32(c.r[16], ld32((c.r[29].w[0] + 1164u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0050D530; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D500u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050D500u) [[unlikely]] return; }
L_0050D500:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D510u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050D510u) [[unlikely]] return; }
L_0050D510:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0050D52C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D52Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050D52Cu) [[unlikely]] return; }
L_0050D52C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0050D530:
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1168u);  c.pc = t; return; }
L_0050D560:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[4], 0u + 6u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 28u), c.f[23]);
    st32((c.r[29].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 24u), c.f[22]);
    st32((c.r[29].w[0] + 20u), c.f[21]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.f[23] = c.f[12];
    c.f[22] = c.f[13];
    c.f[21] = c.f[14];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D59Cu); c.f[20] = c.f[15];  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0050D59Cu) [[unlikely]] return; }
L_0050D59C:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], 0u + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D5ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0050D5ACu) [[unlikely]] return; }
L_0050D5AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], 0u + 256u);  goto L_0050D5F0; }
    set32(c.r[2], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[7].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D5E8u); c.r[11].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 178u, depth + 1u); else { c.pc = 0x002CDAE0u; return; } if (c.pc != 0x0050D5E8u) [[unlikely]] return; }
L_0050D5E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 256u);
    c.budget -= 2;
L_0050D5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D5F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0050D5F8u) [[unlikely]] return; }
L_0050D5F8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 220u)));  goto L_0050D618; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D610u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 65u, depth + 1u); else { c.pc = 0x002CC790u; return; } if (c.pc != 0x0050D610u) [[unlikely]] return; }
L_0050D610:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 220u)));
    c.budget -= 2;
L_0050D618:
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D628u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 138u, depth + 1u); else { c.pc = 0x002CD2F0u; return; } if (c.pc != 0x0050D628u) [[unlikely]] return; }
L_0050D628:
    set32(c.r[4], ld32((c.r[17].w[0] + 220u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.f[23];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[22];
    c.f[14] = c.f[21];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D648u); c.f[15] = c.f[20];  if (depth < kMaxDepth) unit_0073(c, 132u, depth + 1u); else { c.pc = 0x002CD020u; return; } if (c.pc != 0x0050D648u) [[unlikely]] return; }
L_0050D648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D650u); set32(c.r[4], ld32((c.r[17].w[0] + 220u)));  if (depth < kMaxDepth) unit_0073(c, 124u, depth + 1u); else { c.pc = 0x002CCCA0u; return; } if (c.pc != 0x0050D650u) [[unlikely]] return; }
L_0050D650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 220u)));
    c.f[14] = c.r[2].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D674u); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_0073(c, 126u, depth + 1u); else { c.pc = 0x002CCCD0u; return; } if (c.pc != 0x0050D674u) [[unlikely]] return; }
L_0050D674:
    set32(c.r[4], 0u + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D680u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0050D680u) [[unlikely]] return; }
L_0050D680:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));  goto L_0050D69C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D694u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x0050D694u) [[unlikely]] return; }
L_0050D694:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.budget -= 2;
L_0050D69C:
    set32(c.r[2], 0u - 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[2].w[0]));  goto L_0050D748; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D6C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0050D6C4u) [[unlikely]] return; }
L_0050D6C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_0050D6D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D6D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x0050D6D4u) [[unlikely]] return; }
L_0050D6D4:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_0050D6D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0050D6FC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0050D73C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0050D73C; } }
L_0050D6FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0050D724; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0050D740; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0050D73C; } }
L_0050D724:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0050D73C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0050D73C:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_0050D740:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_0050D748:
    set32(c.r[3], 0u - 3841u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[6].d[0] = ld16((c.r[2].w[0]));  goto L_0050D7F8; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D774u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0050D774u) [[unlikely]] return; }
L_0050D774:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_0050D788; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D784u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x0050D784u) [[unlikely]] return; }
L_0050D784:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_0050D788:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0050D7AC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0050D7EC; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0050D7EC; } }
L_0050D7AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0050D7D4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0050D7F0; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0050D7EC; } }
L_0050D7D4:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0050D7EC; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0050D7EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_0050D7F0:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_0050D7F8:
    set32(c.r[3], 0u - 12289u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D810u); st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x0050D810u) [[unlikely]] return; }
L_0050D810:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D81Cu); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x0050D81Cu) [[unlikely]] return; }
L_0050D81C:
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D828u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x0050D828u) [[unlikely]] return; }
L_0050D828:
    set32(c.r[4], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D834u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0050D834u) [[unlikely]] return; }
L_0050D834:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0050D8A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D844u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x0050D844u) [[unlikely]] return; }
L_0050D844:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D860u); st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x0050D860u) [[unlikely]] return; }
L_0050D860:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D86Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x0050D86Cu) [[unlikely]] return; }
L_0050D86C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D878u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x0050D878u) [[unlikely]] return; }
L_0050D878:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D884u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x0050D884u) [[unlikely]] return; }
L_0050D884:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D890u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x0050D890u) [[unlikely]] return; }
L_0050D890:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D89Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x0050D89Cu) [[unlikely]] return; }
L_0050D89C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0050D8A4:
    c.r[7].d[0] = ld16((c.r[16].w[0] + 28u));
    set32(c.r[3], 0u - 31u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u - 481u);
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 1ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[7].d[0] = c.r[7].d[0] | 512ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 12ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 224ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D8FCu); st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x0050D8FCu) [[unlikely]] return; }
L_0050D8FC:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D908u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x0050D908u) [[unlikely]] return; }
L_0050D908:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D914u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x0050D914u) [[unlikely]] return; }
L_0050D914:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D920u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0050D920u) [[unlikely]] return; }
L_0050D920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0050D978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D930u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x0050D930u) [[unlikely]] return; }
L_0050D930:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] + 19920u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 61u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_0050D978:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D99Cu); st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x0050D99Cu) [[unlikely]] return; }
L_0050D99C:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D9A8u); set32(c.r[5], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x0050D9A8u) [[unlikely]] return; }
L_0050D9A8:
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D9B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x0050D9B4u) [[unlikely]] return; }
L_0050D9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D9BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x0050D9BCu) [[unlikely]] return; }
L_0050D9BC:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D9CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x0050D9CCu) [[unlikely]] return; }
L_0050D9CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050D9D4u); set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0050D9D4u) [[unlikely]] return; }
L_0050D9D4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 24u));
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0050DA00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0050E01C; } }
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 12u)));  goto L_0050DA98; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0050DA74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DA44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DA44u) [[unlikely]] return; }
L_0050DA44:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DA54u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DA54u) [[unlikely]] return; }
L_0050DA54:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050DA70; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DA70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050DA70u) [[unlikely]] return; }
L_0050DA70:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050DA74:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_0050DA94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DA84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DA84u) [[unlikely]] return; }
L_0050DA84:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DA94u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DA94u) [[unlikely]] return; }
L_0050DA94:
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_0050DA98:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 16u)));  goto L_0050DB04; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0050DAE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DAB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DAB0u) [[unlikely]] return; }
L_0050DAB0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DAC0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DAC0u) [[unlikely]] return; }
L_0050DAC0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050DADC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DADCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050DADCu) [[unlikely]] return; }
L_0050DADC:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050DAE0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_0050DB00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DAF0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DAF0u) [[unlikely]] return; }
L_0050DAF0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DB00u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DB00u) [[unlikely]] return; }
L_0050DB00:
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_0050DB04:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 20u)));  goto L_0050DB70; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0050DB4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DB1Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DB1Cu) [[unlikely]] return; }
L_0050DB1C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DB2Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DB2Cu) [[unlikely]] return; }
L_0050DB2C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050DB48; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DB48u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050DB48u) [[unlikely]] return; }
L_0050DB48:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050DB4C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 16u), 0u);  if (t) { goto L_0050DB6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DB5Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DB5Cu) [[unlikely]] return; }
L_0050DB5C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DB6Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DB6Cu) [[unlikely]] return; }
L_0050DB6C:
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_0050DB70:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 24u)));  goto L_0050DBDC; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0050DBB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DB88u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DB88u) [[unlikely]] return; }
L_0050DB88:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DB98u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DB98u) [[unlikely]] return; }
L_0050DB98:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050DBB4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DBB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050DBB4u) [[unlikely]] return; }
L_0050DBB4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050DBB8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_0050DBD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DBC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DBC8u) [[unlikely]] return; }
L_0050DBC8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DBD8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DBD8u) [[unlikely]] return; }
L_0050DBD8:
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0050DBDC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 28u)));  goto L_0050DC48; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0050DC24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DBF4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DBF4u) [[unlikely]] return; }
L_0050DBF4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DC04u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DC04u) [[unlikely]] return; }
L_0050DC04:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050DC20; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DC20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050DC20u) [[unlikely]] return; }
L_0050DC20:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050DC24:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_0050DC44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DC34u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DC34u) [[unlikely]] return; }
L_0050DC34:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DC44u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DC44u) [[unlikely]] return; }
L_0050DC44:
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_0050DC48:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 32u)));  goto L_0050DCB4; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0050DC90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DC60u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DC60u) [[unlikely]] return; }
L_0050DC60:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DC70u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DC70u) [[unlikely]] return; }
L_0050DC70:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050DC8C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DC8Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050DC8Cu) [[unlikely]] return; }
L_0050DC8C:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050DC90:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 28u), 0u);  if (t) { goto L_0050DCB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DCA0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DCA0u) [[unlikely]] return; }
L_0050DCA0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DCB0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DCB0u) [[unlikely]] return; }
L_0050DCB0:
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_0050DCB4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 40u), 0u);  goto L_0050DD20; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0050DCFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DCCCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DCCCu) [[unlikely]] return; }
L_0050DCCC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DCDCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DCDCu) [[unlikely]] return; }
L_0050DCDC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050DCF8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DCF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050DCF8u) [[unlikely]] return; }
L_0050DCF8:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050DCFC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_0050DD1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DD0Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DD0Cu) [[unlikely]] return; }
L_0050DD0C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DD1Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DD1Cu) [[unlikely]] return; }
L_0050DD1C:
    st32((c.r[17].w[0] + 40u), 0u);
    c.budget -= 1;
L_0050DD20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 9;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 36u);  goto L_0050DDA8; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0050DD84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DD54u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DD54u) [[unlikely]] return; }
L_0050DD54:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DD64u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DD64u) [[unlikely]] return; }
L_0050DD64:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050DD80; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DD80u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050DD80u) [[unlikely]] return; }
L_0050DD80:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050DD84:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 36u), 0u);  if (t) { goto L_0050DDA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DD94u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DD94u) [[unlikely]] return; }
L_0050DD94:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DDA4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DDA4u) [[unlikely]] return; }
L_0050DDA4:
    set32(c.r[2], c.r[17].w[0] + 36u);
    c.budget -= 1;
L_0050DDA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 32u);  goto L_0050DDF4; }
    set32(c.r[18], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0050DDF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DDC4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DDC4u) [[unlikely]] return; }
L_0050DDC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DDD4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DDD4u) [[unlikely]] return; }
L_0050DDD4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050DDF0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DDF0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050DDF0u) [[unlikely]] return; }
L_0050DDF0:
    set32(c.r[2], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_0050DDF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 28u);  goto L_0050DE40; }
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0050DE3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DE10u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DE10u) [[unlikely]] return; }
L_0050DE10:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DE20u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DE20u) [[unlikely]] return; }
L_0050DE20:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050DE3C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DE3Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050DE3Cu) [[unlikely]] return; }
L_0050DE3C:
    set32(c.r[2], c.r[17].w[0] + 28u);
    c.budget -= 1;
L_0050DE40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 24u);  goto L_0050DE8C; }
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0050DE88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DE5Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DE5Cu) [[unlikely]] return; }
L_0050DE5C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DE6Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DE6Cu) [[unlikely]] return; }
L_0050DE6C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050DE88; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DE88u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050DE88u) [[unlikely]] return; }
L_0050DE88:
    set32(c.r[2], c.r[17].w[0] + 24u);
    c.budget -= 1;
L_0050DE8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 20u);  goto L_0050DED8; }
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0050DED4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DEA8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DEA8u) [[unlikely]] return; }
L_0050DEA8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DEB8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DEB8u) [[unlikely]] return; }
L_0050DEB8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050DED4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DED4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050DED4u) [[unlikely]] return; }
L_0050DED4:
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_0050DED8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 16u);  goto L_0050DF24; }
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0050DF20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DEF4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DEF4u) [[unlikely]] return; }
L_0050DEF4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DF04u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DF04u) [[unlikely]] return; }
L_0050DF04:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050DF20; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DF20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050DF20u) [[unlikely]] return; }
L_0050DF20:
    set32(c.r[2], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_0050DF24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 12u);  goto L_0050DF70; }
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0050DF6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DF40u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DF40u) [[unlikely]] return; }
L_0050DF40:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DF50u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DF50u) [[unlikely]] return; }
L_0050DF50:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050DF6C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DF6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050DF6Cu) [[unlikely]] return; }
L_0050DF6C:
    set32(c.r[2], c.r[17].w[0] + 12u);
    c.budget -= 1;
L_0050DF70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_0050DFBC; }
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0050DFB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DF8Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DF8Cu) [[unlikely]] return; }
L_0050DF8C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DF9Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DF9Cu) [[unlikely]] return; }
L_0050DF9C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050DFB8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DFB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050DFB8u) [[unlikely]] return; }
L_0050DFB8:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_0050DFBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0050E008; }
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0050E004; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DFD8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050DFD8u) [[unlikely]] return; }
L_0050DFD8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050DFE8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050DFE8u) [[unlikely]] return; }
L_0050DFE8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050E004; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E004u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050E004u) [[unlikely]] return; }
L_0050E004:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0050E008:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0050E020; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E01Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0050E01Cu) [[unlikely]] return; }
L_0050E01C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0050E020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0050E040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0050E088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E078u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050E078u) [[unlikely]] return; }
L_0050E078:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E088u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050E088u) [[unlikely]] return; }
L_0050E088:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_0050E0AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E09Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050E09Cu) [[unlikely]] return; }
L_0050E09C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E0ACu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050E0ACu) [[unlikely]] return; }
L_0050E0AC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 16u), 0u);  if (t) { goto L_0050E0D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E0C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050E0C0u) [[unlikely]] return; }
L_0050E0C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E0D0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050E0D0u) [[unlikely]] return; }
L_0050E0D0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 20u), 0u);  if (t) { goto L_0050E0F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E0E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050E0E4u) [[unlikely]] return; }
L_0050E0E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E0F4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050E0F4u) [[unlikely]] return; }
L_0050E0F4:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 24u), 0u);  if (t) { goto L_0050E118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E108u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050E108u) [[unlikely]] return; }
L_0050E108:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E118u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050E118u) [[unlikely]] return; }
L_0050E118:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 28u), 0u);  if (t) { goto L_0050E13C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E12Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050E12Cu) [[unlikely]] return; }
L_0050E12C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E13Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050E13Cu) [[unlikely]] return; }
L_0050E13C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 32u), 0u);  if (t) { goto L_0050E160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E150u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050E150u) [[unlikely]] return; }
L_0050E150:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E160u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050E160u) [[unlikely]] return; }
L_0050E160:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { goto L_0050E184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E174u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050E174u) [[unlikely]] return; }
L_0050E174:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E184u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050E184u) [[unlikely]] return; }
L_0050E184:
    st32((c.r[16].w[0] + 40u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050E1C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0050E250; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22016u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0050E238; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15616u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0050E238; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17776u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0050E238; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 18208u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0050E238; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0050E238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E238u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0050E238u) [[unlikely]] return; }
L_0050E238:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0050E254; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E250u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0050E250u) [[unlikely]] return; }
L_0050E250:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0050E254:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050E270:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);  goto L_0050E298; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_0050E290; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0050E290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0050E29C; } }
L_0050E298:
    set32(c.r[2], c.r[2].w[0] - 27512u);
    c.budget -= 1;
L_0050E29C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0050E2B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 27504u);  c.pc = t; return; }
L_0050E2C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0050E35C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E2FCu); set32(c.r[4], 0u + 336u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0050E2FCu) [[unlikely]] return; }
L_0050E2FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0050E35C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E310u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 319u, depth + 1u); else { c.pc = 0x001C3370u; return; } if (c.pc != 0x0050E310u) [[unlikely]] return; }
L_0050E310:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 21984u);
    set32(c.r[2], c.r[2].w[0] - 21960u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[2], 0u + 64u);
    st32((c.r[16].w[0] + 320u), c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[16].w[0] + 324u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0050E344; } }
    set32(c.r[5], c.r[16].w[0] + 60u);
    c.budget -= 1;
L_0050E344:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E354u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050E354u) [[unlikely]] return; }
L_0050E354:
    st32((c.r[16].w[0] + 216u), 0u);
    st32((c.r[16].w[0] + 220u), 0u);
    c.budget -= 2;
L_0050E35C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E374u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 180u, depth + 1u); else { c.pc = 0x001C1DB0u; return; } if (c.pc != 0x0050E374u) [[unlikely]] return; }
L_0050E374:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0050E3A0:
    c.f[0] = 0u;
    c.f[12] = fp::max(c.f[12], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::min(c.f[12], c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 320u), c.f[2]);  if (t) { goto L_0050E3F8; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_0050E414; } }
L_0050E3F8:
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 7;
L_0050E414:
    st8((c.r[4].w[0] + 324u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 6u);
    st32((c.r[4].w[0] + 208u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 324u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 212u), c.r[3].w[0]);  c.pc = t; return; }
L_0050E430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29368u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0050E44C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0050E45C; } }
L_0050E44C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E454u);  if (depth < kMaxDepth) unit_0030(c, 336u, depth + 1u); else { c.pc = 0x001C36F0u; return; } if (c.pc != 0x0050E454u) [[unlikely]] return; }
L_0050E454:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0050E45C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0050E470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E494u); set32(c.r[4], c.r[4].w[0] - 27568u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0050E494u) [[unlikely]] return; }
L_0050E494:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0050E4A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0050E4B4; } }
L_0050E4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E4ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 338u, depth + 1u); else { c.pc = 0x001C3730u; return; } if (c.pc != 0x0050E4ACu) [[unlikely]] return; }
L_0050E4AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0050E4B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050E4D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30812u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0050E4E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29368u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0050E4FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0050E504; } }
L_0050E4FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E504u);  if (depth < kMaxDepth) unit_0030(c, 342u, depth + 1u); else { c.pc = 0x001C37A0u; return; } if (c.pc != 0x0050E504u) [[unlikely]] return; }
L_0050E504:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0050E510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29368u)));  c.pc = t; return; }
L_0050E520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0050E574; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 21984u);
    set32(c.r[2], c.r[2].w[0] - 21960u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E55Cu); st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0030(c, 315u, depth + 1u); else { c.pc = 0x001C32D0u; return; } if (c.pc != 0x0050E55Cu) [[unlikely]] return; }
L_0050E55C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0050E578; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E574u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0050E574u) [[unlikely]] return; }
L_0050E574:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0050E578:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050E590:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 27536u);  c.pc = t; return; }
L_0050E5A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0050E520u | kUnwind; return; } goto L_0050E520; }
L_0050E5B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 27464u);  c.pc = t; return; }
L_0050E5C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 272u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E5E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0050E5E8u) [[unlikely]] return; }
L_0050E5E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0050E60C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E5FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x0050E5FCu) [[unlikely]] return; }
L_0050E5FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 21856u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st8((c.r[16].w[0] + 256u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0050E60C:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E61Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 24u, depth + 1u); else { c.pc = 0x002B83D0u; return; } if (c.pc != 0x0050E61Cu) [[unlikely]] return; }
L_0050E61C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 256u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 256u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0050E640:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E660u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0060(c, 465u, depth + 1u); else { c.pc = 0x00282F50u; return; } if (c.pc != 0x0050E660u) [[unlikely]] return; }
L_0050E660:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E678u); st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0050E678u) [[unlikely]] return; }
L_0050E678:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], 0u + 16u);  goto L_0050E6D4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 37u);
    set32(c.r[3], c.r[3].w[0] - 4800u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E6ACu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0050E6ACu) [[unlikely]] return; }
L_0050E6AC:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E6C4u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0050E6C4u) [[unlikely]] return; }
L_0050E6C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 4832u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
L_0050E6D4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E6E0u); st32((c.r[29].w[0] + 64u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0050E6E0u) [[unlikely]] return; }
L_0050E6E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 27644u)));  goto L_0050E73C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 37u);
    set32(c.r[3], c.r[3].w[0] - 4864u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E714u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0050E714u) [[unlikely]] return; }
L_0050E714:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E72Cu); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0050E72Cu) [[unlikely]] return; }
L_0050E72C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 4896u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 27644u)));
    c.budget -= 4;
L_0050E73C:
    set32(c.r[6], c.r[17].w[0] + 176u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 30632u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    st8((c.r[29].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E760u); st32((c.r[29].w[0] + 68u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0060(c, 455u, depth + 1u); else { c.pc = 0x00282E40u; return; } if (c.pc != 0x0050E760u) [[unlikely]] return; }
L_0050E760:
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 68u)));  goto L_0050E780; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E77Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050E77Cu) [[unlikely]] return; }
L_0050E77C:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 1;
L_0050E780:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0050E79C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E798u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050E798u) [[unlikely]] return; }
L_0050E798:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0050E79C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0050E7B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 256u));
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0050E7D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E7D0u); st8((c.r[4].w[0] + 256u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_006E(c, 238u, depth + 1u); else { c.pc = 0x002B9D40u; return; } if (c.pc != 0x0050E7D0u) [[unlikely]] return; }
L_0050E7D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0050E7D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0050E7E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { st8((c.r[4].w[0] + 256u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9ED0u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 248u, depth); }
L_0050E7F0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { st8((c.r[4].w[0] + 256u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8AD0u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 72u, depth); }
L_0050E800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0050E84C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 21856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E830u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006E(c, 393u, depth + 1u); else { c.pc = 0x002BAEB0u; return; } if (c.pc != 0x0050E830u) [[unlikely]] return; }
L_0050E830:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0050E850; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E84Cu); set32(c.r[5], 0u + 272u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0050E84Cu) [[unlikely]] return; }
L_0050E84C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0050E850:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050E870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E884u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x0050E884u) [[unlikely]] return; }
L_0050E884:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 21856u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st8((c.r[16].w[0] + 256u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0050E8B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0050E920; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 21680u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0050E908; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27696u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0050E908; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0050E908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E908u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0050E908u) [[unlikely]] return; }
L_0050E908:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0050E924; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E920u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0050E920u) [[unlikely]] return; }
L_0050E920:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0050E924:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050E940:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);  goto L_0050E968; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_0050E960; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0050E960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0050E96C; } }
L_0050E968:
    set32(c.r[2], c.r[2].w[0] - 27424u);
    c.budget -= 1;
L_0050E96C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0050E980:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 27248u);  c.pc = t; return; }
L_0050E990:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], c.r[6].w[0] - 27184u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E9C8u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x0050E9C8u) [[unlikely]] return; }
L_0050E9C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E9D8u); set32(c.r[5], c.r[5].w[0] - 27182u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0050E9D8u) [[unlikely]] return; }
L_0050E9D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_0050E9FC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050E9F0u); set32(c.r[5], c.r[5].w[0] - 27177u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0050E9F0u) [[unlikely]] return; }
L_0050E9F0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);  goto L_0050EA0C; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_0050E9FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EA04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0050EA04u) [[unlikely]] return; }
L_0050EA04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0050EB3C; } }
L_0050EA0C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EA18u); set32(c.r[5], c.r[5].w[0] - 27182u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0050EA18u) [[unlikely]] return; }
L_0050EA18:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EA24u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x0050EA24u) [[unlikely]] return; }
L_0050EA24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EA34u); set32(c.r[5], c.r[5].w[0] - 27177u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0050EA34u) [[unlikely]] return; }
L_0050EA34:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EA40u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x0050EA40u) [[unlikely]] return; }
L_0050EA40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EA50u); set32(c.r[5], c.r[5].w[0] - 27172u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0050EA50u) [[unlikely]] return; }
L_0050EA50:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0050EA90; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EA68u); set32(c.r[5], c.r[29].w[0] + 207u);  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x0050EA68u) [[unlikely]] return; }
L_0050EA68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = ld8((c.r[29].w[0] + 207u));  goto L_0050EA90; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0050EA8C; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 207u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EA8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0050EA8Cu) [[unlikely]] return; }
L_0050EA8C:
    c.r[19].d[0] = ld8((c.r[29].w[0] + 207u));
    c.budget -= 1;
L_0050EA90:
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EAA0u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0050EAA0u) [[unlikely]] return; }
L_0050EAA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0050EB00; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[29].w[0] + 129u);  goto L_0050EABC; }
    set32(c.r[18], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0050EABC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EAC8u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x0050EAC8u) [[unlikely]] return; }
L_0050EAC8:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EAE0u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_00C6(c, 345u, depth + 1u); else { c.pc = 0x0041A660u; return; } if (c.pc != 0x0050EAE0u) [[unlikely]] return; }
L_0050EAE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] - 21648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EAF4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 395u, depth + 1u); else { c.pc = 0x0012B2D0u; return; } if (c.pc != 0x0050EAF4u) [[unlikely]] return; }
L_0050EAF4:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EB00u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000A(c, 320u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x0050EB00u) [[unlikely]] return; }
L_0050EB00:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_0050EB18; }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EB14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0050EB14u) [[unlikely]] return; }
L_0050EB14:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_0050EB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EB20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0050EB20u) [[unlikely]] return; }
L_0050EB20:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EB2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0050EB2Cu) [[unlikely]] return; }
L_0050EB2C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EB38u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0050EB38u) [[unlikely]] return; }
L_0050EB38:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0050EB3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0050EB60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 108u), c.r[16].w[0]);  if (t) { goto L_0050EBA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EB90u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050EB90u) [[unlikely]] return; }
L_0050EB90:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EBA0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050EBA0u) [[unlikely]] return; }
L_0050EBA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 27160u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0050EBBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_0050EBC4; } }
L_0050EBBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EBC4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x0050EBC4u) [[unlikely]] return; }
L_0050EBC4:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EBDCu); set32(c.r[5], c.r[29].w[0] + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050EBDCu) [[unlikely]] return; }
L_0050EBDC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_0050EBF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0050EC34; } }
L_0050EBF0:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EBFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050EBFCu) [[unlikely]] return; }
L_0050EBFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23832u);  if (t) { goto L_0050EC18; } }
L_0050EC08:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0050EC18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0050EC24; } }
L_0050EC18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0050EC08u | kUnwind; return; } goto L_0050EC08; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050EC24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0050EC34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0050EC34; } }
L_0050EC34:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 104u), c.r[16].w[0]);  if (t) { goto L_0050EC54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EC44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050EC44u) [[unlikely]] return; }
L_0050EC44:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EC54u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050EC54u) [[unlikely]] return; }
L_0050EC54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], ld32((c.r[29].w[0] + 104u)));  goto L_0050ECB4; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EC80u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050EC80u) [[unlikely]] return; }
L_0050EC80:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EC90u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050EC90u) [[unlikely]] return; }
L_0050EC90:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0050ECB0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050ECB0u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0050ECB0u) [[unlikely]] return; }
L_0050ECB0:
    set32(c.r[16], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0050ECB4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0050ED44; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 108u)));  goto L_0050ECFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050ECCCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050ECCCu) [[unlikely]] return; }
L_0050ECCC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050ECDCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050ECDCu) [[unlikely]] return; }
L_0050ECDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050ECF8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050ECF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050ECF8u) [[unlikely]] return; }
L_0050ECF8:
    set32(c.r[16], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_0050ECFC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0050F004; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050ED0Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050ED0Cu) [[unlikely]] return; }
L_0050ED0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050ED1Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050ED1Cu) [[unlikely]] return; }
L_0050ED1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050ED38; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050ED38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050ED38u) [[unlikely]] return; }
L_0050ED38:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0050F004; } }
L_0050ED44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050ED4Cu); st32((c.r[29].w[0] + 76u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0050ED4Cu) [[unlikely]] return; }
L_0050ED4C:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], 0u + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050ED5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0050ED5Cu) [[unlikely]] return; }
L_0050ED5C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 100u), c.r[16].w[0]);  goto L_0050ED7C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050ED74u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0103(c, 337u, depth + 1u); else { c.pc = 0x0050E870u; return; } if (c.pc != 0x0050ED74u) [[unlikely]] return; }
L_0050ED74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    c.budget -= 2;
L_0050ED7C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  goto L_0050EDA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050ED8Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050ED8Cu) [[unlikely]] return; }
L_0050ED8C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050ED9Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050ED9Cu) [[unlikely]] return; }
L_0050ED9C:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0050EDA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EDA8u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0050EDA8u) [[unlikely]] return; }
L_0050EDA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 27160u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0050EDC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_0050EDCC; } }
L_0050EDC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EDCCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x0050EDCCu) [[unlikely]] return; }
L_0050EDCC:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], c.r[29].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EDDCu); st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x0050EDDCu) [[unlikely]] return; }
L_0050EDDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 104u)));  goto L_0050EE3C; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EE08u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050EE08u) [[unlikely]] return; }
L_0050EE08:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EE18u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050EE18u) [[unlikely]] return; }
L_0050EE18:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0050EE38; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EE38u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0050EE38u) [[unlikely]] return; }
L_0050EE38:
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0050EE3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 28u)));  if (t) { goto L_0050EEB0; } }
L_0050EE44:
    set32(c.r[6], c.r[2].w[0] - 1u);
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EE58u); set32(c.r[4], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050EE58u) [[unlikely]] return; }
L_0050EE58:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EE70u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050EE70u) [[unlikely]] return; }
L_0050EE70:
    set32(c.r[17], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 104u)));  goto L_0050EEB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EE84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050EE84u) [[unlikely]] return; }
L_0050EE84:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EE94u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050EE94u) [[unlikely]] return; }
L_0050EE94:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050EEB0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EEB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050EEB0u) [[unlikely]] return; }
L_0050EEB0:
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0050EEB4:
    c.r[2].d[0] = ld16((c.r[6].w[0] + 220u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0050EE44u | kUnwind; return; } goto L_0050EE44; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 84u);
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EED4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050EED4u) [[unlikely]] return; }
L_0050EED4:
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 100u)));  goto L_0050EF20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EEE8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050EEE8u) [[unlikely]] return; }
L_0050EEE8:
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EEFCu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050EEFCu) [[unlikely]] return; }
L_0050EEFC:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050EF1C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EF1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050EF1Cu) [[unlikely]] return; }
L_0050EF1C:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_0050EF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EF28u); set32(c.r[5], ld32((c.r[29].w[0] + 104u)));  if (depth < kMaxDepth) unit_0103(c, 319u, depth + 1u); else { c.pc = 0x0050E640u; return; } if (c.pc != 0x0050EF28u) [[unlikely]] return; }
L_0050EF28:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EF40u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050EF40u) [[unlikely]] return; }
L_0050EF40:
    set32(c.r[16], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 104u)));  goto L_0050EF84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EF54u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050EF54u) [[unlikely]] return; }
L_0050EF54:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EF64u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050EF64u) [[unlikely]] return; }
L_0050EF64:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050EF80; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EF80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050EF80u) [[unlikely]] return; }
L_0050EF80:
    set32(c.r[16], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0050EF84:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 108u)));  goto L_0050EFC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EF94u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050EF94u) [[unlikely]] return; }
L_0050EF94:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EFA4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050EFA4u) [[unlikely]] return; }
L_0050EFA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050EFC0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EFC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050EFC0u) [[unlikely]] return; }
L_0050EFC0:
    set32(c.r[16], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_0050EFC4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0050F004; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EFD4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050EFD4u) [[unlikely]] return; }
L_0050EFD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050EFE4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050EFE4u) [[unlikely]] return; }
L_0050EFE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050F000; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F000u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050F000u) [[unlikely]] return; }
L_0050F000:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0050F004:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0050F020:
    set32(c.r[29], c.r[29].w[0] - 1168u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F048u); st32((c.r[29].w[0] + 1164u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0050F048u) [[unlikely]] return; }
L_0050F048:
    st32((c.r[29].w[0] + 1160u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F058u); set32(c.r[5], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0050F058u) [[unlikely]] return; }
L_0050F058:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 97u);  goto L_0050F06C; }
    set32(c.r[7], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0050F06C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F080u); set32(c.r[6], c.r[6].w[0] - 27153u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0050F080u) [[unlikely]] return; }
L_0050F080:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F08Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0050F08Cu) [[unlikely]] return; }
L_0050F08C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F094u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0083(c, 257u, depth + 1u); else { c.pc = 0x0030DD30u; return; } if (c.pc != 0x0050F094u) [[unlikely]] return; }
L_0050F094:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F0A0u); set32(c.r[5], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0050F0A0u) [[unlikely]] return; }
L_0050F0A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_0050F0B4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0050F0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F0BCu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0082(c, 277u, depth + 1u); else { c.pc = 0x0030A720u; return; } if (c.pc != 0x0050F0BCu) [[unlikely]] return; }
L_0050F0BC:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F0CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0050F0CCu) [[unlikely]] return; }
L_0050F0CC:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 460u)));  goto L_0050F134; }
    set32(c.r[5], c.r[17].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F0E0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0004(c, 343u, depth + 1u); else { c.pc = 0x00113B00u; return; } if (c.pc != 0x0050F0E0u) [[unlikely]] return; }
L_0050F0E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 65u);  goto L_0050F0F4; }
    set32(c.r[7], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0050F0F4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] - 27136u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F10Cu); set32(c.r[8], c.r[29].w[0] + 888u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0050F10Cu) [[unlikely]] return; }
L_0050F10C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F118u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0050F118u) [[unlikely]] return; }
L_0050F118:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F124u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0083(c, 220u, depth + 1u); else { c.pc = 0x0030D840u; return; } if (c.pc != 0x0050F124u) [[unlikely]] return; }
L_0050F124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F12Cu); set32(c.r[4], ld32((c.r[29].w[0] + 1160u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0050F12Cu) [[unlikely]] return; }
L_0050F12C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0050F1F8; } }
L_0050F134:
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_0050F148; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0050F18C; } }
L_0050F148:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F154u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050F154u) [[unlikely]] return; }
L_0050F154:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23832u);  if (t) { goto L_0050F170; } }
L_0050F160:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0050F170; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0050F17C; } }
L_0050F170:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0050F160u | kUnwind; return; } goto L_0050F160; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050F17C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0050F18C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0050F18C; } }
L_0050F18C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], 0u + 4u);  goto L_0050F1B0; }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F1A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0083(c, 220u, depth + 1u); else { c.pc = 0x0030D840u; return; } if (c.pc != 0x0050F1A0u) [[unlikely]] return; }
L_0050F1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F1A8u); set32(c.r[4], ld32((c.r[29].w[0] + 1160u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0050F1A8u) [[unlikely]] return; }
L_0050F1A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0050F1F8; } }
L_0050F1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F1B8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0050F1B8u) [[unlikely]] return; }
L_0050F1B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_0050F1D0; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F1CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 218u, depth + 1u); else { c.pc = 0x00419980u; return; } if (c.pc != 0x0050F1CCu) [[unlikely]] return; }
L_0050F1CC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0050F1D0:
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F1DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0103(c, 365u, depth + 1u); else { c.pc = 0x0050EB60u; return; } if (c.pc != 0x0050F1DCu) [[unlikely]] return; }
L_0050F1DC:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F1ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0083(c, 220u, depth + 1u); else { c.pc = 0x0030D840u; return; } if (c.pc != 0x0050F1ECu) [[unlikely]] return; }
L_0050F1EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F1F4u); set32(c.r[4], ld32((c.r[29].w[0] + 1160u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0050F1F4u) [[unlikely]] return; }
L_0050F1F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0050F1F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1168u);  c.pc = t; return; }
L_0050F210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29364u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0050F22C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0050F23C; } }
L_0050F22C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F234u);  if (depth < kMaxDepth) unit_00C6(c, 347u, depth + 1u); else { c.pc = 0x0041A6A0u; return; } if (c.pc != 0x0050F234u) [[unlikely]] return; }
L_0050F234:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0050F23C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0050F250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F274u); set32(c.r[4], c.r[4].w[0] - 22272u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0050F274u) [[unlikely]] return; }
L_0050F274:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0050F284; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0050F294; } }
L_0050F284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F28Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 349u, depth + 1u); else { c.pc = 0x0041A6E0u; return; } if (c.pc != 0x0050F28Cu) [[unlikely]] return; }
L_0050F28C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0050F294:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050F2B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30244u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0050F2C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29364u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0050F2DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0050F2E4; } }
L_0050F2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F2E4u);  if (depth < kMaxDepth) unit_00C6(c, 353u, depth + 1u); else { c.pc = 0x0041A750u; return; } if (c.pc != 0x0050F2E4u) [[unlikely]] return; }
L_0050F2E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0050F2F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29364u)));  c.pc = t; return; }
L_0050F300:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0050F358; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[17].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] - 21648u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F334u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0050F334u) [[unlikely]] return; }
L_0050F334:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F340u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 341u, depth + 1u); else { c.pc = 0x0041A5E0u; return; } if (c.pc != 0x0050F340u) [[unlikely]] return; }
L_0050F340:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0050F35C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F358u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0050F358u) [[unlikely]] return; }
L_0050F358:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0050F35C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050F370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 27216u);  c.pc = t; return; }
L_0050F380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F390u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x0050F390u) [[unlikely]] return; }
L_0050F390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F398u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 317u, depth + 1u); else { c.pc = 0x003BE990u; return; } if (c.pc != 0x0050F398u) [[unlikely]] return; }
L_0050F398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F3A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 398u, depth + 1u); else { c.pc = 0x003BF2A0u; return; } if (c.pc != 0x0050F3A0u) [[unlikely]] return; }
L_0050F3A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F3B0u); set32(c.r[5], c.r[5].w[0] - 27056u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0050F3B0u) [[unlikely]] return; }
L_0050F3B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050F428; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 27043u);
    set32(c.r[7], c.r[7].w[0] - 27037u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F3DCu); set32(c.r[8], c.r[8].w[0] - 27010u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x0050F3DCu) [[unlikely]] return; }
L_0050F3DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[29].w[0] + 33u);  goto L_0050F3F0; }
    set32(c.r[16], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_0050F3F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F3F8u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x0050F3F8u) [[unlikely]] return; }
L_0050F3F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26981u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F414u); set32(c.r[7], c.r[7].w[0] - 26959u);  if (depth < kMaxDepth) unit_00E8(c, 548u, depth + 1u); else { c.pc = 0x004A3F50u; return; } if (c.pc != 0x0050F414u) [[unlikely]] return; }
L_0050F414:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F420u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0050F420u) [[unlikely]] return; }
L_0050F420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0050F444; } }
L_0050F428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F430u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x0050F430u) [[unlikely]] return; }
L_0050F430:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F440u); set32(c.r[5], c.r[5].w[0] - 26981u);  if (depth < kMaxDepth) unit_00E8(c, 553u, depth + 1u); else { c.pc = 0x004A3FC0u; return; } if (c.pc != 0x0050F440u) [[unlikely]] return; }
L_0050F440:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0050F444:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050F450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[16].w[0] - 448u);
    set32(c.r[4], c.r[4].w[0] - 704u);
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = c.r[5].d[0] | 4963ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 144u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 144u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F490u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x0050F490u) [[unlikely]] return; }
L_0050F490:
    set32(c.r[2], ld32((c.r[16].w[0] - 448u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050F4A8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 160u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 144u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[30].w[0] - 32752u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[23].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0050F4F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0050F718; } }
L_0050F4F0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F4FCu); st32((c.r[23].w[0] + 8704u), 0u);  if (depth < kMaxDepth) unit_00A7(c, 19u, depth + 1u); else { c.pc = 0x0039C3E0u; return; } if (c.pc != 0x0050F4FCu) [[unlikely]] return; }
L_0050F4FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0050F52C; } }
    c.budget -= 1;
L_0050F508:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0050F510:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0050F510u | kUnwind; return; } goto L_0050F510; } }
L_0050F52C:
    set32(c.r[16], c.r[17].w[0] - 704u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 4864ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F544u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 76u, depth + 1u); else { c.pc = 0x0039CB88u; return; } if (c.pc != 0x0050F544u) [[unlikely]] return; }
L_0050F544:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);  if (t) { goto L_0050F6B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0050F508u | kUnwind; return; } goto L_0050F508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F560u);  if (depth < kMaxDepth) unit_0103(c, 463u, depth + 1u); else { c.pc = 0x0050F450u; return; } if (c.pc != 0x0050F560u) [[unlikely]] return; }
L_0050F560:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 49u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 4));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);  if (t) { goto L_0050F5A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F57Cu); set32(c.r[4], c.r[4].w[0] - 26904u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x0050F57Cu) [[unlikely]] return; }
L_0050F57C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[8].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] - 26864u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F598u); set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 8));  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x0050F598u) [[unlikely]] return; }
L_0050F598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0050F718; } }
L_0050F5A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0050F5CC; } }
L_0050F5A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0050F5B0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0050F5B0u | kUnwind; return; } goto L_0050F5B0; } }
L_0050F5CC:
    set32(c.r[16], c.r[17].w[0] - 624u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 4892ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F5E4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 76u, depth + 1u); else { c.pc = 0x0039CB88u; return; } if (c.pc != 0x0050F5E4u) [[unlikely]] return; }
L_0050F5E4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);  if (t) { goto L_0050F6B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0050F5A8u | kUnwind; return; } goto L_0050F5A8; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[22], c.r[2].w[0] - 584u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[19].d[0] = c.r[19].d[0] | 4894ull;
    set32(c.r[21], c.r[22].w[0] + 36u);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_0050F610:
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0050F644; } }
    c.budget -= 1;
L_0050F620:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0050F628:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0050F628u | kUnwind; return; } goto L_0050F628; } }
L_0050F644:
    set32(c.r[4], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[5], c.r[18].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F654u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 76u, depth + 1u); else { c.pc = 0x0039CB88u; return; } if (c.pc != 0x0050F654u) [[unlikely]] return; }
L_0050F654:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);  if (t) { goto L_0050F6B0; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0050F620u | kUnwind; return; } goto L_0050F620; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 40u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 40u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0050F610u | kUnwind; return; } goto L_0050F610; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 26816u);
    set32(c.r[5], 0u + 127u);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F6A0u); st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0050F6A0u) [[unlikely]] return; }
L_0050F6A0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[23].w[0] + 8704u), c.r[2].w[0]);  if (t) { goto L_0050F6C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0050F718; } }
L_0050F6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F6B8u); set32(c.r[4], c.r[4].w[0] - 26928u);  if (depth < kMaxDepth) unit_0104(c, 42u, depth + 1u); else { c.pc = 0x00510678u; return; } if (c.pc != 0x0050F6B8u) [[unlikely]] return; }
L_0050F6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0050F718; } }
L_0050F6C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], 0u + 15u);
    set32(c.r[2], c.r[2].w[0] + 8640u);
    set32(c.r[2], c.r[2].w[0] + 60u);
    c.budget -= 4;
L_0050F6D0:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0050F6D0u | kUnwind; return; } goto L_0050F6D0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] + 8512u);
    set32(c.r[4], c.r[4].w[0] - 26800u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F704u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0104(c, 42u, depth + 1u); else { c.pc = 0x00510678u; return; } if (c.pc != 0x0050F704u) [[unlikely]] return; }
L_0050F704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F70Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0103(c, 489u, depth + 1u); else { c.pc = 0x0050F7F0u; return; } if (c.pc != 0x0050F70Cu) [[unlikely]] return; }
L_0050F70C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[30].w[0] - 32752u), c.r[3].w[0]);
    c.budget -= 3;
L_0050F718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0050F748:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[3].w[0] - 32752u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0050F764; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0050F784; } }
L_0050F764:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[3].w[0] - 32752u), 0u);
    set32(c.r[4], ld32((c.r[2].w[0] + 8704u)));
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0050F784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F780u);  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0050F780u) [[unlikely]] return; }
L_0050F780:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0050F784:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0050F790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[16], c.r[2].w[0] - 448u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 704u);
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = c.r[5].d[0] | 4869ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 144u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 144u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F7D4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x0050F7D4u) [[unlikely]] return; }
L_0050F7D4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_0050F7E0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050F7E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050F7F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[16].w[0] - 448u);
    c.r[5].d[0] = c.r[5].d[0] | 4868ull;
    st32((c.r[7].w[0] + 4u), c.r[4].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] - 704u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[8], 0u + 144u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 144u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F834u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x0050F834u) [[unlikely]] return; }
L_0050F834:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], ld32((c.r[16].w[0] - 448u)));  if (t) { goto L_0050F84C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F848u); set32(c.r[4], c.r[4].w[0] - 26768u);  if (depth < kMaxDepth) unit_0104(c, 42u, depth + 1u); else { c.pc = 0x00510678u; return; } if (c.pc != 0x0050F848u) [[unlikely]] return; }
L_0050F848:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050F84C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050F860:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 32752u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[17].d[0]);  if (t) { goto L_0050F89C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0050F970; } }
L_0050F89C:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F8A8u); set32(c.r[4], ld32((c.r[20].w[0] + 8704u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0050F8A8u) [[unlikely]] return; }
L_0050F8A8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[17], c.r[7].w[0] - 448u);
    set32(c.r[6], c.r[16].w[0] + 20u);
    st32((c.r[7].w[0] - 448u), c.r[2].w[0]);
    set32(c.r[8], c.r[17].w[0] + 20u);
    st32((c.r[17].w[0] + 40u), c.r[18].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[17].w[0] + 44u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 18;
L_0050F8F0:
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[8].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0050F8F0u | kUnwind; return; } goto L_0050F8F0; } }
    set32(c.r[7], c.r[7].w[0] - 448u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] - 704u);
    c.r[5].d[0] = c.r[5].d[0] | 4865ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 144u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 144u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F940u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x0050F940u) [[unlikely]] return; }
L_0050F940:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], ld32((c.r[20].w[0] + 8704u)));  if (t) { goto L_0050F964; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F954u); set32(c.r[4], c.r[4].w[0] - 26736u);  if (depth < kMaxDepth) unit_0104(c, 42u, depth + 1u); else { c.pc = 0x00510678u; return; } if (c.pc != 0x0050F954u) [[unlikely]] return; }
L_0050F954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F95Cu); set32(c.r[4], ld32((c.r[20].w[0] + 8704u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0050F95Cu) [[unlikely]] return; }
L_0050F95C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0050F970; } }
L_0050F964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F96Cu); set32(c.r[16], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0050F96Cu) [[unlikely]] return; }
L_0050F96C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0050F970:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0050F990:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] - 32752u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_0050F9BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0050FA34; } }
L_0050F9BC:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050F9C8u); set32(c.r[4], ld32((c.r[18].w[0] + 8704u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0050F9C8u) [[unlikely]] return; }
L_0050F9C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[16], c.r[3].w[0] - 448u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[3].w[0] - 448u), c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] - 704u);
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = c.r[5].d[0] | 4866ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 144u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 144u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FA04u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x0050FA04u) [[unlikely]] return; }
L_0050FA04:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], ld32((c.r[18].w[0] + 8704u)));  if (t) { goto L_0050FA28; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FA18u); set32(c.r[4], c.r[4].w[0] - 26704u);  if (depth < kMaxDepth) unit_0104(c, 42u, depth + 1u); else { c.pc = 0x00510678u; return; } if (c.pc != 0x0050FA18u) [[unlikely]] return; }
L_0050FA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FA20u); set32(c.r[4], ld32((c.r[18].w[0] + 8704u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0050FA20u) [[unlikely]] return; }
L_0050FA20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0050FA34; } }
L_0050FA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FA30u); set32(c.r[16], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0050FA30u) [[unlikely]] return; }
L_0050FA30:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0050FA34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0050FA50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[4], c.r[17].w[0] + 8512u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FA78u); set32(c.r[5], c.r[4].w[0] + 128u);  if (depth < kMaxDepth) unit_00A6(c, 236u, depth + 1u); else { c.pc = 0x00399718u; return; } if (c.pc != 0x0050FA78u) [[unlikely]] return; }
L_0050FA78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FA80u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050FA80u) [[unlikely]] return; }
L_0050FA80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[17].w[0] + 8512u);
    set32(c.r[5], c.r[3].w[0] + 8640u);
    ldl(c.r[2], (c.r[6].w[0] + 7u));
    ldr(c.r[2], (c.r[6].w[0]));
    ldl(c.r[4], (c.r[6].w[0] + 15u));
    ldr(c.r[4], (c.r[6].w[0] + 8u));
    sdl(c.r[2], (c.r[5].w[0] + 7u));
    sdr(c.r[2], (c.r[5].w[0]));
    sdl(c.r[4], (c.r[5].w[0] + 15u));
    sdr(c.r[4], (c.r[5].w[0] + 8u));
    ldl(c.r[2], (c.r[6].w[0] + 23u));
    ldr(c.r[2], (c.r[6].w[0] + 16u));
    ldl(c.r[4], (c.r[6].w[0] + 31u));
    ldr(c.r[4], (c.r[6].w[0] + 24u));
    sdl(c.r[2], (c.r[5].w[0] + 23u));
    sdr(c.r[2], (c.r[5].w[0] + 16u));
    sdl(c.r[4], (c.r[5].w[0] + 31u));
    sdr(c.r[4], (c.r[5].w[0] + 24u));
    ldl(c.r[2], (c.r[6].w[0] + 39u));
    ldr(c.r[2], (c.r[6].w[0] + 32u));
    ldl(c.r[4], (c.r[6].w[0] + 47u));
    ldr(c.r[4], (c.r[6].w[0] + 40u));
    sdl(c.r[2], (c.r[5].w[0] + 39u));
    sdr(c.r[2], (c.r[5].w[0] + 32u));
    sdl(c.r[4], (c.r[5].w[0] + 47u));
    sdr(c.r[4], (c.r[5].w[0] + 40u));
    ldl(c.r[2], (c.r[6].w[0] + 55u));
    ldr(c.r[2], (c.r[6].w[0] + 48u));
    ldl(c.r[4], (c.r[6].w[0] + 63u));
    ldr(c.r[4], (c.r[6].w[0] + 56u));
    sdl(c.r[2], (c.r[5].w[0] + 55u));
    sdr(c.r[2], (c.r[5].w[0] + 48u));
    sdl(c.r[4], (c.r[5].w[0] + 63u));
    sdr(c.r[4], (c.r[5].w[0] + 56u));
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FB14u); set32(c.r[16], c.r[3].w[0] + 8640u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050FB14u) [[unlikely]] return; }
L_0050FB14:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[2], 0u - 12u);  if (t) { goto L_0050FBA4; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FB38u); set32(c.r[4], ld32((c.r[17].w[0] + 8704u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0050FB38u) [[unlikely]] return; }
L_0050FB38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[16], c.r[3].w[0] - 448u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[3].w[0] - 448u), c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] - 704u);
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = c.r[5].d[0] | 4867ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 144u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 144u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FB74u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x0050FB74u) [[unlikely]] return; }
L_0050FB74:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], ld32((c.r[17].w[0] + 8704u)));  if (t) { goto L_0050FB98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FB88u); set32(c.r[4], c.r[4].w[0] - 26672u);  if (depth < kMaxDepth) unit_0104(c, 42u, depth + 1u); else { c.pc = 0x00510678u; return; } if (c.pc != 0x0050FB88u) [[unlikely]] return; }
L_0050FB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FB90u); set32(c.r[4], ld32((c.r[17].w[0] + 8704u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0050FB90u) [[unlikely]] return; }
L_0050FB90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0050FBA4; } }
L_0050FB98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FBA0u); set32(c.r[16], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0050FBA0u) [[unlikely]] return; }
L_0050FBA0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0050FBA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0050FBC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[4], c.r[18].w[0] + 8512u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FBE8u); set32(c.r[5], c.r[4].w[0] + 128u);  if (depth < kMaxDepth) unit_00A6(c, 236u, depth + 1u); else { c.pc = 0x00399718u; return; } if (c.pc != 0x0050FBE8u) [[unlikely]] return; }
L_0050FBE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FBF0u); set32(c.r[16], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050FBF0u) [[unlikely]] return; }
L_0050FBF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[18].w[0] + 8512u);
    set32(c.r[5], c.r[3].w[0] + 8640u);
    ldl(c.r[2], (c.r[6].w[0] + 7u));
    ldr(c.r[2], (c.r[6].w[0]));
    ldl(c.r[4], (c.r[6].w[0] + 15u));
    ldr(c.r[4], (c.r[6].w[0] + 8u));
    sdl(c.r[2], (c.r[5].w[0] + 7u));
    sdr(c.r[2], (c.r[5].w[0]));
    sdl(c.r[4], (c.r[5].w[0] + 15u));
    sdr(c.r[4], (c.r[5].w[0] + 8u));
    ldl(c.r[2], (c.r[6].w[0] + 23u));
    ldr(c.r[2], (c.r[6].w[0] + 16u));
    ldl(c.r[4], (c.r[6].w[0] + 31u));
    ldr(c.r[4], (c.r[6].w[0] + 24u));
    sdl(c.r[2], (c.r[5].w[0] + 23u));
    sdr(c.r[2], (c.r[5].w[0] + 16u));
    sdl(c.r[4], (c.r[5].w[0] + 31u));
    sdr(c.r[4], (c.r[5].w[0] + 24u));
    ldl(c.r[2], (c.r[6].w[0] + 39u));
    ldr(c.r[2], (c.r[6].w[0] + 32u));
    ldl(c.r[4], (c.r[6].w[0] + 47u));
    ldr(c.r[4], (c.r[6].w[0] + 40u));
    sdl(c.r[2], (c.r[5].w[0] + 39u));
    sdr(c.r[2], (c.r[5].w[0] + 32u));
    sdl(c.r[4], (c.r[5].w[0] + 47u));
    sdr(c.r[4], (c.r[5].w[0] + 40u));
    ldl(c.r[2], (c.r[6].w[0] + 55u));
    ldr(c.r[2], (c.r[6].w[0] + 48u));
    ldl(c.r[4], (c.r[6].w[0] + 63u));
    ldr(c.r[4], (c.r[6].w[0] + 56u));
    sdl(c.r[2], (c.r[5].w[0] + 55u));
    sdr(c.r[2], (c.r[5].w[0] + 48u));
    sdl(c.r[4], (c.r[5].w[0] + 63u));
    sdr(c.r[4], (c.r[5].w[0] + 56u));
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FC84u); set32(c.r[17], c.r[3].w[0] + 8640u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050FC84u) [[unlikely]] return; }
L_0050FC84:
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0050FCB8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 8704u)));
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FCE0u);  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0050FCE0u) [[unlikely]] return; }
L_0050FCE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[17], c.r[3].w[0] - 448u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[3].w[0] - 448u), c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - 704u);
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = c.r[5].d[0] | 4885ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], 0u + 144u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 144u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FD1Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x0050FD1Cu) [[unlikely]] return; }
L_0050FD1C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], ld32((c.r[18].w[0] + 8704u)));  if (t) { goto L_0050FD40; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FD30u); set32(c.r[4], c.r[4].w[0] - 26640u);  if (depth < kMaxDepth) unit_0104(c, 42u, depth + 1u); else { c.pc = 0x00510678u; return; } if (c.pc != 0x0050FD30u) [[unlikely]] return; }
L_0050FD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FD38u); set32(c.r[4], ld32((c.r[18].w[0] + 8704u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0050FD38u) [[unlikely]] return; }
L_0050FD38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0050FD4C; } }
L_0050FD40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FD48u); set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0050FD48u) [[unlikely]] return; }
L_0050FD48:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0050FD4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0050FD68:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 8704u)));
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FD90u);  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0050FD90u) [[unlikely]] return; }
L_0050FD90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[17], c.r[3].w[0] - 448u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[3].w[0] - 448u), c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - 704u);
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = c.r[5].d[0] | 4886ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], 0u + 144u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 144u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FDCCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x0050FDCCu) [[unlikely]] return; }
L_0050FDCC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], ld32((c.r[18].w[0] + 8704u)));  if (t) { goto L_0050FDF0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FDE0u); set32(c.r[4], c.r[4].w[0] - 26608u);  if (depth < kMaxDepth) unit_0104(c, 42u, depth + 1u); else { c.pc = 0x00510678u; return; } if (c.pc != 0x0050FDE0u) [[unlikely]] return; }
L_0050FDE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FDE8u); set32(c.r[4], ld32((c.r[18].w[0] + 8704u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0050FDE8u) [[unlikely]] return; }
L_0050FDE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0050FDFC; } }
L_0050FDF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FDF8u); set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0050FDF8u) [[unlikely]] return; }
L_0050FDF8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0050FDFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0050FE18:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 8704u)));
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FE40u);  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0050FE40u) [[unlikely]] return; }
L_0050FE40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[17], c.r[3].w[0] - 448u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[3].w[0] - 448u), c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - 704u);
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = c.r[5].d[0] | 4887ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], 0u + 144u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 144u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FE7Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x0050FE7Cu) [[unlikely]] return; }
L_0050FE7C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], ld32((c.r[18].w[0] + 8704u)));  if (t) { goto L_0050FEA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FE90u); set32(c.r[4], c.r[4].w[0] - 26576u);  if (depth < kMaxDepth) unit_0104(c, 42u, depth + 1u); else { c.pc = 0x00510678u; return; } if (c.pc != 0x0050FE90u) [[unlikely]] return; }
L_0050FE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FE98u); set32(c.r[4], ld32((c.r[18].w[0] + 8704u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0050FE98u) [[unlikely]] return; }
L_0050FE98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0050FEAC; } }
L_0050FEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FEA8u); set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0050FEA8u) [[unlikely]] return; }
L_0050FEA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0050FEAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0050FEC8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 8704u)));
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FEF0u);  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0050FEF0u) [[unlikely]] return; }
L_0050FEF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[17], c.r[3].w[0] - 448u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] - 704u);
    c.r[5].d[0] = c.r[5].d[0] | 4893ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], 0u + 144u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[10], 0u + 144u);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FF40u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x0050FF40u) [[unlikely]] return; }
L_0050FF40:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], ld32((c.r[18].w[0] + 8704u)));  if (t) { goto L_0050FF64; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FF54u); set32(c.r[4], c.r[4].w[0] - 26576u);  if (depth < kMaxDepth) unit_0104(c, 42u, depth + 1u); else { c.pc = 0x00510678u; return; } if (c.pc != 0x0050FF54u) [[unlikely]] return; }
L_0050FF54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FF5Cu); set32(c.r[4], ld32((c.r[18].w[0] + 8704u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0050FF5Cu) [[unlikely]] return; }
L_0050FF5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0050FF70; } }
L_0050FF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FF6Cu); set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0050FF6Cu) [[unlikely]] return; }
L_0050FF6C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0050FF70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0050FF88:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[22].w[0] + 8704u)));
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050FFD4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0050FFD4u) [[unlikely]] return; }
L_0050FFD4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[7].w[0] - 448u), c.r[17].w[0]);
    set32(c.r[18], c.r[7].w[0] - 448u);
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0104(c, 4u, depth); } }
    [[clang::musttail]] return unit_0104(c, 1u, depth);
}

}
