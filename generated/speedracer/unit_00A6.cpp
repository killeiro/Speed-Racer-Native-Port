#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A6[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0,
    0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0,
    106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125, 0, 0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 149, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0,
    184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 219, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0,
    0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 227, 0, 228, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0,
    0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0,
    267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 276, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284,
    0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0,
    0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0,
    0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0,
    329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0,
    360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0,
    0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 380,
    0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0,
    0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 389, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 397, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0,
    410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 414, 0, 0, 0, 0, 415, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420,
    0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0,
    433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0,
    0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 453, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0,
    0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0,
    0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0,
    0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0,
    0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0,
    0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    486, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492,
    0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0,
    497, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    501, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00A6(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00398000;
    case 2u: goto L_00398004;
    case 3u: goto L_00398038;
    case 4u: goto L_00398050;
    case 5u: goto L_003980B0;
    case 6u: goto L_003980C8;
    case 7u: goto L_003980F0;
    case 8u: goto L_00398108;
    case 9u: goto L_00398120;
    case 10u: goto L_00398160;
    case 11u: goto L_00398188;
    case 12u: goto L_00398198;
    case 13u: goto L_003981B0;
    case 14u: goto L_00398210;
    case 15u: goto L_00398224;
    case 16u: goto L_00398244;
    case 17u: goto L_00398270;
    case 18u: goto L_00398290;
    case 19u: goto L_003982C0;
    case 20u: goto L_003982D0;
    case 21u: goto L_003982E0;
    case 22u: goto L_003982F0;
    case 23u: goto L_00398324;
    case 24u: goto L_0039833C;
    case 25u: goto L_00398344;
    case 26u: goto L_00398360;
    case 27u: goto L_00398384;
    case 28u: goto L_003983A0;
    case 29u: goto L_003983B0;
    case 30u: goto L_003983B8;
    case 31u: goto L_003983D0;
    case 32u: goto L_00398420;
    case 33u: goto L_00398430;
    case 34u: goto L_00398448;
    case 35u: goto L_00398460;
    case 36u: goto L_00398470;
    case 37u: goto L_00398488;
    case 38u: goto L_003984A0;
    case 39u: goto L_003984B0;
    case 40u: goto L_003984C8;
    case 41u: goto L_003984F0;
    case 42u: goto L_00398500;
    case 43u: goto L_00398518;
    case 44u: goto L_00398540;
    case 45u: goto L_00398558;
    case 46u: goto L_00398568;
    case 47u: goto L_00398580;
    case 48u: goto L_003985A8;
    case 49u: goto L_003985C0;
    case 50u: goto L_003985D0;
    case 51u: goto L_003985E8;
    case 52u: goto L_00398610;
    case 53u: goto L_00398628;
    case 54u: goto L_00398658;
    case 55u: goto L_00398678;
    case 56u: goto L_00398690;
    case 57u: goto L_0039869C;
    case 58u: goto L_003986A8;
    case 59u: goto L_003986B4;
    case 60u: goto L_003986C0;
    case 61u: goto L_003986CC;
    case 62u: goto L_003986E0;
    case 63u: goto L_003986F8;
    case 64u: goto L_00398704;
    case 65u: goto L_00398710;
    case 66u: goto L_0039871C;
    case 67u: goto L_00398728;
    case 68u: goto L_00398734;
    case 69u: goto L_00398748;
    case 70u: goto L_00398800;
    case 71u: goto L_003988A8;
    case 72u: goto L_003988D8;
    case 73u: goto L_00398900;
    case 74u: goto L_0039891C;
    case 75u: goto L_00398940;
    case 76u: goto L_00398948;
    case 77u: goto L_00398960;
    case 78u: goto L_00398968;
    case 79u: goto L_00398998;
    case 80u: goto L_003989B0;
    case 81u: goto L_003989B8;
    case 82u: goto L_00398A20;
    case 83u: goto L_00398A28;
    case 84u: goto L_00398A40;
    case 85u: goto L_00398A48;
    case 86u: goto L_00398A60;
    case 87u: goto L_00398A68;
    case 88u: goto L_00398AD0;
    case 89u: goto L_00398AD8;
    case 90u: goto L_00398B00;
    case 91u: goto L_00398B08;
    case 92u: goto L_00398B10;
    case 93u: goto L_00398B18;
    case 94u: goto L_00398B20;
    case 95u: goto L_00398B28;
    case 96u: goto L_00398B30;
    case 97u: goto L_00398B38;
    case 98u: goto L_00398B40;
    case 99u: goto L_00398B48;
    case 100u: goto L_00398B50;
    case 101u: goto L_00398B58;
    case 102u: goto L_00398B60;
    case 103u: goto L_00398B68;
    case 104u: goto L_00398B70;
    case 105u: goto L_00398B78;
    case 106u: goto L_00398B80;
    case 107u: goto L_00398B88;
    case 108u: goto L_00398B90;
    case 109u: goto L_00398B98;
    case 110u: goto L_00398BA0;
    case 111u: goto L_00398BA8;
    case 112u: goto L_00398BC0;
    case 113u: goto L_00398BC8;
    case 114u: goto L_00398BD0;
    case 115u: goto L_00398BD8;
    case 116u: goto L_00398BE0;
    case 117u: goto L_00398BE8;
    case 118u: goto L_00398BF0;
    case 119u: goto L_00398BF8;
    case 120u: goto L_00398C20;
    case 121u: goto L_00398C28;
    case 122u: goto L_00398C30;
    case 123u: goto L_00398C38;
    case 124u: goto L_00398C40;
    case 125u: goto L_00398C48;
    case 126u: goto L_00398C60;
    case 127u: goto L_00398C68;
    case 128u: goto L_00398C70;
    case 129u: goto L_00398C78;
    case 130u: goto L_00398CB0;
    case 131u: goto L_00398CB8;
    case 132u: goto L_00398CD0;
    case 133u: goto L_00398CD8;
    case 134u: goto L_00398D10;
    case 135u: goto L_00398D18;
    case 136u: goto L_00398D20;
    case 137u: goto L_00398D28;
    case 138u: goto L_00398D40;
    case 139u: goto L_00398D48;
    case 140u: goto L_00398D50;
    case 141u: goto L_00398D58;
    case 142u: goto L_00398D60;
    case 143u: goto L_00398D68;
    case 144u: goto L_00398D90;
    case 145u: goto L_00398D98;
    case 146u: goto L_00398DA0;
    case 147u: goto L_00398DA8;
    case 148u: goto L_00398E00;
    case 149u: goto L_00398E08;
    case 150u: goto L_00398E20;
    case 151u: goto L_00398E28;
    case 152u: goto L_00398E30;
    case 153u: goto L_00398E38;
    case 154u: goto L_00398E40;
    case 155u: goto L_00398E48;
    case 156u: goto L_00398E50;
    case 157u: goto L_00398E58;
    case 158u: goto L_00398E60;
    case 159u: goto L_00398E68;
    case 160u: goto L_00398E70;
    case 161u: goto L_00398E78;
    case 162u: goto L_00398EC0;
    case 163u: goto L_00398EC8;
    case 164u: goto L_00398ED0;
    case 165u: goto L_00398ED8;
    case 166u: goto L_003990A0;
    case 167u: goto L_003990A8;
    case 168u: goto L_003990F0;
    case 169u: goto L_003990F8;
    case 170u: goto L_00399130;
    case 171u: goto L_00399138;
    case 172u: goto L_00399140;
    case 173u: goto L_00399148;
    case 174u: goto L_00399160;
    case 175u: goto L_00399168;
    case 176u: goto L_00399190;
    case 177u: goto L_00399198;
    case 178u: goto L_003991C0;
    case 179u: goto L_003991C8;
    case 180u: goto L_003991E0;
    case 181u: goto L_003991E8;
    case 182u: goto L_003991F0;
    case 183u: goto L_003991F8;
    case 184u: goto L_00399200;
    case 185u: goto L_00399208;
    case 186u: goto L_00399210;
    case 187u: goto L_00399218;
    case 188u: goto L_00399220;
    case 189u: goto L_00399228;
    case 190u: goto L_00399230;
    case 191u: goto L_00399238;
    case 192u: goto L_00399250;
    case 193u: goto L_00399258;
    case 194u: goto L_00399280;
    case 195u: goto L_00399288;
    case 196u: goto L_00399290;
    case 197u: goto L_00399298;
    case 198u: goto L_003992A0;
    case 199u: goto L_003992B0;
    case 200u: goto L_003992C0;
    case 201u: goto L_003992E4;
    case 202u: goto L_003992F0;
    case 203u: goto L_00399314;
    case 204u: goto L_00399340;
    case 205u: goto L_00399358;
    case 206u: goto L_00399360;
    case 207u: goto L_00399384;
    case 208u: goto L_00399390;
    case 209u: goto L_003993B4;
    case 210u: goto L_003993D4;
    case 211u: goto L_003993E8;
    case 212u: goto L_00399428;
    case 213u: goto L_00399440;
    case 214u: goto L_00399468;
    case 215u: goto L_003994A0;
    case 216u: goto L_003994B8;
    case 217u: goto L_003994E0;
    case 218u: goto L_003994F0;
    case 219u: goto L_00399508;
    case 220u: goto L_00399518;
    case 221u: goto L_00399520;
    case 222u: goto L_00399548;
    case 223u: goto L_00399578;
    case 224u: goto L_0039958C;
    case 225u: goto L_003995D0;
    case 226u: goto L_003995D8;
    case 227u: goto L_003995F0;
    case 228u: goto L_003995F8;
    case 229u: goto L_00399610;
    case 230u: goto L_00399620;
    case 231u: goto L_00399630;
    case 232u: goto L_00399648;
    case 233u: goto L_00399658;
    case 234u: goto L_00399670;
    case 235u: goto L_00399680;
    case 236u: goto L_00399718;
    case 237u: goto L_00399750;
    case 238u: goto L_00399764;
    case 239u: goto L_003997B0;
    case 240u: goto L_003997C0;
    case 241u: goto L_00399858;
    case 242u: goto L_00399890;
    case 243u: goto L_003998A4;
    case 244u: goto L_003998F0;
    case 245u: goto L_00399900;
    case 246u: goto L_00399930;
    case 247u: goto L_00399938;
    case 248u: goto L_00399950;
    case 249u: goto L_00399968;
    case 250u: goto L_00399998;
    case 251u: goto L_003999A0;
    case 252u: goto L_003999B8;
    case 253u: goto L_003999D0;
    case 254u: goto L_00399A00;
    case 255u: goto L_00399A08;
    case 256u: goto L_00399A20;
    case 257u: goto L_00399A38;
    case 258u: goto L_00399A68;
    case 259u: goto L_00399A70;
    case 260u: goto L_00399A88;
    case 261u: goto L_00399AA0;
    case 262u: goto L_00399AB0;
    case 263u: goto L_00399AC0;
    case 264u: goto L_00399AD0;
    case 265u: goto L_00399AE0;
    case 266u: goto L_00399AF0;
    case 267u: goto L_00399B00;
    case 268u: goto L_00399B10;
    case 269u: goto L_00399B20;
    case 270u: goto L_00399B60;
    case 271u: goto L_00399B68;
    case 272u: goto L_00399BC0;
    case 273u: goto L_00399BD0;
    case 274u: goto L_00399BE0;
    case 275u: goto L_00399BF0;
    case 276u: goto L_00399BF8;
    case 277u: goto L_00399C3C;
    case 278u: goto L_00399C80;
    case 279u: goto L_00399C94;
    case 280u: goto L_00399CB4;
    case 281u: goto L_00399CBC;
    case 282u: goto L_00399CC8;
    case 283u: goto L_00399CE8;
    case 284u: goto L_00399CFC;
    case 285u: goto L_00399D10;
    case 286u: goto L_00399D68;
    case 287u: goto L_00399D80;
    case 288u: goto L_00399DE8;
    case 289u: goto L_00399E00;
    case 290u: goto L_00399E14;
    case 291u: goto L_00399E28;
    case 292u: goto L_00399E84;
    case 293u: goto L_00399E98;
    case 294u: goto L_00399EE8;
    case 295u: goto L_00399F08;
    case 296u: goto L_00399F1C;
    case 297u: goto L_00399F30;
    case 298u: goto L_00399F40;
    case 299u: goto L_00399F48;
    case 300u: goto L_00399F60;
    case 301u: goto L_00399F80;
    case 302u: goto L_00399F90;
    case 303u: goto L_00399FA0;
    case 304u: goto L_00399FB4;
    case 305u: goto L_00399FD0;
    case 306u: goto L_0039A0B4;
    case 307u: goto L_0039A0C0;
    case 308u: goto L_0039A0D8;
    case 309u: goto L_0039A0E8;
    case 310u: goto L_0039A100;
    case 311u: goto L_0039A138;
    case 312u: goto L_0039A148;
    case 313u: goto L_0039A160;
    case 314u: goto L_0039A170;
    case 315u: goto L_0039A194;
    case 316u: goto L_0039A1A0;
    case 317u: goto L_0039A1B8;
    case 318u: goto L_0039A1C8;
    case 319u: goto L_0039A1EC;
    case 320u: goto L_0039A1F8;
    case 321u: goto L_0039A210;
    case 322u: goto L_0039A220;
    case 323u: goto L_0039A248;
    case 324u: goto L_0039A258;
    case 325u: goto L_0039A280;
    case 326u: goto L_0039A2C0;
    case 327u: goto L_0039A2D8;
    case 328u: goto L_0039A2E8;
    case 329u: goto L_0039A300;
    case 330u: goto L_0039A310;
    case 331u: goto L_0039A328;
    case 332u: goto L_0039A338;
    case 333u: goto L_0039A360;
    case 334u: goto L_0039A3A0;
    case 335u: goto L_0039A3E0;
    case 336u: goto L_0039A44C;
    case 337u: goto L_0039A464;
    case 338u: goto L_0039A47C;
    case 339u: goto L_0039A4B0;
    case 340u: goto L_0039A4D0;
    case 341u: goto L_0039A500;
    case 342u: goto L_0039A518;
    case 343u: goto L_0039A558;
    case 344u: goto L_0039A578;
    case 345u: goto L_0039A5C8;
    case 346u: goto L_0039A5F8;
    case 347u: goto L_0039A664;
    case 348u: goto L_0039A680;
    case 349u: goto L_0039A698;
    case 350u: goto L_0039A6A4;
    case 351u: goto L_0039A6C0;
    case 352u: goto L_0039A6F0;
    case 353u: goto L_0039A728;
    case 354u: goto L_0039A738;
    case 355u: goto L_0039A770;
    case 356u: goto L_0039A7C0;
    case 357u: goto L_0039A7DC;
    case 358u: goto L_0039A7F4;
    case 359u: goto L_0039A860;
    case 360u: goto L_0039A880;
    case 361u: goto L_0039A888;
    case 362u: goto L_0039A8B8;
    case 363u: goto L_0039A8F8;
    case 364u: goto L_0039A968;
    case 365u: goto L_0039A980;
    case 366u: goto L_0039A9A0;
    case 367u: goto L_0039AA30;
    case 368u: goto L_0039AA8C;
    case 369u: goto L_0039AA9C;
    case 370u: goto L_0039AAB4;
    case 371u: goto L_0039AAD0;
    case 372u: goto L_0039AAE0;
    case 373u: goto L_0039AAF0;
    case 374u: goto L_0039AB04;
    case 375u: goto L_0039AB24;
    case 376u: goto L_0039AB38;
    case 377u: goto L_0039AB48;
    case 378u: goto L_0039AB5C;
    case 379u: goto L_0039AB74;
    case 380u: goto L_0039AB7C;
    case 381u: goto L_0039AB84;
    case 382u: goto L_0039AB9C;
    case 383u: goto L_0039ABD8;
    case 384u: goto L_0039AC08;
    case 385u: goto L_0039AC68;
    case 386u: goto L_0039AC88;
    case 387u: goto L_0039ACC4;
    case 388u: goto L_0039ACCC;
    case 389u: goto L_0039ACD4;
    case 390u: goto L_0039ACDC;
    case 391u: goto L_0039ACE8;
    case 392u: goto L_0039AD14;
    case 393u: goto L_0039AD24;
    case 394u: goto L_0039AD70;
    case 395u: goto L_0039ADAC;
    case 396u: goto L_0039ADB4;
    case 397u: goto L_0039ADBC;
    case 398u: goto L_0039ADC4;
    case 399u: goto L_0039ADCC;
    case 400u: goto L_0039AE38;
    case 401u: goto L_0039AE80;
    case 402u: goto L_0039AEAC;
    case 403u: goto L_0039AF40;
    case 404u: goto L_0039AF6C;
    case 405u: goto L_0039B030;
    case 406u: goto L_0039B040;
    case 407u: goto L_0039B058;
    case 408u: goto L_0039B084;
    case 409u: goto L_0039B0F0;
    case 410u: goto L_0039B100;
    case 411u: goto L_0039B118;
    case 412u: goto L_0039B148;
    case 413u: goto L_0039B154;
    case 414u: goto L_0039B184;
    case 415u: goto L_0039B198;
    case 416u: goto L_0039B1A4;
    case 417u: goto L_0039B1AC;
    case 418u: goto L_0039B1D4;
    case 419u: goto L_0039B1E8;
    case 420u: goto L_0039B1FC;
    case 421u: goto L_0039B210;
    case 422u: goto L_0039B224;
    case 423u: goto L_0039B238;
    case 424u: goto L_0039B268;
    case 425u: goto L_0039B2B8;
    case 426u: goto L_0039B2F0;
    case 427u: goto L_0039B328;
    case 428u: goto L_0039B378;
    case 429u: goto L_0039B3D4;
    case 430u: goto L_0039B490;
    case 431u: goto L_0039B4B0;
    case 432u: goto L_0039B4E8;
    case 433u: goto L_0039B500;
    case 434u: goto L_0039B518;
    case 435u: goto L_0039B530;
    case 436u: goto L_0039B550;
    case 437u: goto L_0039B568;
    case 438u: goto L_0039B5A8;
    case 439u: goto L_0039B5CC;
    case 440u: goto L_0039B608;
    case 441u: goto L_0039B628;
    case 442u: goto L_0039B658;
    case 443u: goto L_0039B678;
    case 444u: goto L_0039B6B8;
    case 445u: goto L_0039B6D8;
    case 446u: goto L_0039B700;
    case 447u: goto L_0039B718;
    case 448u: goto L_0039B730;
    case 449u: goto L_0039B748;
    case 450u: goto L_0039B778;
    case 451u: goto L_0039B798;
    case 452u: goto L_0039B7D8;
    case 453u: goto L_0039B7F8;
    case 454u: goto L_0039B820;
    case 455u: goto L_0039B838;
    case 456u: goto L_0039B850;
    case 457u: goto L_0039B868;
    case 458u: goto L_0039B8A0;
    case 459u: goto L_0039B8E8;
    case 460u: goto L_0039B920;
    case 461u: goto L_0039B978;
    case 462u: goto L_0039B990;
    case 463u: goto L_0039B9A0;
    case 464u: goto L_0039B9B8;
    case 465u: goto L_0039B9C8;
    case 466u: goto L_0039B9F4;
    case 467u: goto L_0039BA18;
    case 468u: goto L_0039BA44;
    case 469u: goto L_0039BA50;
    case 470u: goto L_0039BA8C;
    case 471u: goto L_0039BA98;
    case 472u: goto L_0039BABC;
    case 473u: goto L_0039BAE0;
    case 474u: goto L_0039BAF0;
    case 475u: goto L_0039BB08;
    case 476u: goto L_0039BB40;
    case 477u: goto L_0039BB64;
    case 478u: goto L_0039BB74;
    case 479u: goto L_0039BB88;
    case 480u: goto L_0039BBC0;
    case 481u: goto L_0039BBE4;
    case 482u: goto L_0039BBF4;
    case 483u: goto L_0039BC08;
    case 484u: goto L_0039BC28;
    case 485u: goto L_0039BC38;
    case 486u: goto L_0039BC80;
    case 487u: goto L_0039BCA0;
    case 488u: goto L_0039BD38;
    case 489u: goto L_0039BD68;
    case 490u: goto L_0039BDB4;
    case 491u: goto L_0039BDBC;
    case 492u: goto L_0039BDFC;
    case 493u: goto L_0039BE10;
    case 494u: goto L_0039BE20;
    case 495u: goto L_0039BE2C;
    case 496u: goto L_0039BE78;
    case 497u: goto L_0039BE80;
    case 498u: goto L_0039BE94;
    case 499u: goto L_0039BEA4;
    case 500u: goto L_0039BEB4;
    case 501u: goto L_0039BF00;
    case 502u: goto L_0039BF10;
    case 503u: goto L_0039BF20;
    case 504u: goto L_0039BF38;
    case 505u: goto L_0039BF68;
    case 506u: goto L_0039BFE0;
    default: bad_entry(c, 0x00398000u); return;
    }
L_00398000:
    c.budget -= 1;
L_00398004:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[18], ld32((c.r[3].w[0] - 16u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[19], ld32((c.r[3].w[0] - 12u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00398068; } }
    mmi::mult(c, 0, c.r[19].w[0], c.r[18].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00398058; } }
L_00398038:
    set32(c.r[16], c.r[16].w[0] - c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398050u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398050u) [[unlikely]] return; }
L_00398050:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_00398058:
    c.r[3].d[0] = c.r[17].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00398038u | kUnwind; return; } goto L_00398038; } }
    c.budget -= 1;
L_00398068:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003980C8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[16], c.r[2].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 128u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003980B8; } }
    mmi::mult(c, 0, c.r[19].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(16ll);
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003980B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003980B0u) [[unlikely]] return; }
L_003980B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003980C8; } }
L_003980B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003980C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003980C8u) [[unlikely]] return; }
L_003980C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003980F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00398130; } }
L_00398108:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398120u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398120u) [[unlikely]] return; }
L_00398120:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 4;
L_00398130:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00398108u | kUnwind; return; } goto L_00398108; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398160:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398188u);  if (depth < kMaxDepth) unit_00A6(c, 7u, depth + 1u); else { c.pc = 0x003980F0u; return; } if (c.pc != 0x00398188u) [[unlikely]] return; }
L_00398188:
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398198u);  if (depth < kMaxDepth) unit_00A6(c, 17u, depth + 1u); else { c.pc = 0x00398270u; return; } if (c.pc != 0x00398198u) [[unlikely]] return; }
L_00398198:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003981B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 25064u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 25064u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00398248; } }
L_00398224:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 25064u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398244u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398244u) [[unlikely]] return; }
L_00398244:
    c.budget -= 1;
L_00398248:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 25064u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00398224u | kUnwind; return; } goto L_00398224; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 30416u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[5].w[0] - 27908u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], c.r[6].w[0] - 17152u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[7], c.r[7].w[0] - 17152u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003982C0u);  if (depth < kMaxDepth) unit_00A6(c, 10u, depth + 1u); else { c.pc = 0x00398160u; return; } if (c.pc != 0x003982C0u) [[unlikely]] return; }
L_003982C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003982D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003982E0u);  if (depth < kMaxDepth) unit_00A6(c, 14u, depth + 1u); else { c.pc = 0x00398210u; return; } if (c.pc != 0x003982E0u) [[unlikely]] return; }
L_003982E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003982F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 17104u)));
    set32(c.r[18], c.r[17].w[0] + 17104u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00398344; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398324u); set32(c.r[4], c.r[4].w[0] + 24728u);  if (depth < kMaxDepth) unit_00A7(c, 215u, depth + 1u); else { c.pc = 0x0039E1A8u; return; } if (c.pc != 0x00398324u) [[unlikely]] return; }
L_00398324:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00398344; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039833Cu); set32(c.r[6], 0u + 14u);  if (depth < kMaxDepth) unit_00A7(c, 263u, depth + 1u); else { c.pc = 0x0039E7F0u; return; } if (c.pc != 0x0039833Cu) [[unlikely]] return; }
L_0039833C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398344u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 235u, depth + 1u); else { c.pc = 0x0039E438u; return; } if (c.pc != 0x00398344u) [[unlikely]] return; }
L_00398344:
    set32(c.r[2], c.r[17].w[0] + 17104u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00398360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 17104u)));
    set32(c.r[16], c.r[3].w[0] + 17104u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00398384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398384u);  if (depth < kMaxDepth) unit_00A6(c, 22u, depth + 1u); else { c.pc = 0x003982F0u; return; } if (c.pc != 0x00398384u) [[unlikely]] return; }
L_00398384:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] ^ 84ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003983A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003983B0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 164u, depth + 1u); else { c.pc = 0x00398ED0u; return; } if (c.pc != 0x003983B0u) [[unlikely]] return; }
L_003983B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003983B8u);  if (depth < kMaxDepth) unit_00A6(c, 26u, depth + 1u); else { c.pc = 0x00398360u; return; } if (c.pc != 0x003983B8u) [[unlikely]] return; }
L_003983B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003983C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 17100u));  if (t) { goto L_003983F4; } }
L_003983C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003983D0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 164u, depth + 1u); else { c.pc = 0x00398ED0u; return; } if (c.pc != 0x003983D0u) [[unlikely]] return; }
L_003983D0:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[3].w[0] >> 13);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] >> 16);  goto L_003983F0; }
    set32(c.r[2], c.r[3].w[0] >> 4);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_003983F4; } }
L_003983F0:
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.budget -= 1;
L_003983F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00398420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398430u);  if (depth < kMaxDepth) unit_00A6(c, 26u, depth + 1u); else { c.pc = 0x00398360u; return; } if (c.pc != 0x00398430u) [[unlikely]] return; }
L_00398430:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_00398440; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0] + 17098u));  if (t) { goto L_00398454; } }
L_00398440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398448u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 164u, depth + 1u); else { c.pc = 0x00398ED0u; return; } if (c.pc != 0x00398448u) [[unlikely]] return; }
L_00398448:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 3;
L_00398454:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00398460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398470u);  if (depth < kMaxDepth) unit_00A6(c, 26u, depth + 1u); else { c.pc = 0x00398360u; return; } if (c.pc != 0x00398470u) [[unlikely]] return; }
L_00398470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_00398480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0] + 17101u));  if (t) { goto L_00398490; } }
L_00398480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398488u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 164u, depth + 1u); else { c.pc = 0x00398ED0u; return; } if (c.pc != 0x00398488u) [[unlikely]] return; }
L_00398488:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 2;
L_00398490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003984A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003984B0u);  if (depth < kMaxDepth) unit_00A6(c, 26u, depth + 1u); else { c.pc = 0x00398360u; return; } if (c.pc != 0x003984B0u) [[unlikely]] return; }
L_003984B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003984C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 17096u)));  if (t) { goto L_003984E0; } }
L_003984C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003984C8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 164u, depth + 1u); else { c.pc = 0x00398ED0u; return; } if (c.pc != 0x003984C8u) [[unlikely]] return; }
L_003984C8:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[4], 0u + 540u);
    set32(c.r[3], c.r[2].w[0] >> 13);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 21));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 6;
L_003984E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003984F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398500u);  if (depth < kMaxDepth) unit_00A6(c, 26u, depth + 1u); else { c.pc = 0x00398360u; return; } if (c.pc != 0x00398500u) [[unlikely]] return; }
L_00398500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_00398510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 17099u));  if (t) { goto L_00398548; } }
L_00398510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398518u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 164u, depth + 1u); else { c.pc = 0x00398ED0u; return; } if (c.pc != 0x00398518u) [[unlikely]] return; }
L_00398518:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] >> 13);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[29].d[0] | 4ull;  if (t) { goto L_00398534; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00398548; } }
L_00398534:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398540u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A6(c, 170u, depth + 1u); else { c.pc = 0x00399130u; return; } if (c.pc != 0x00398540u) [[unlikely]] return; }
L_00398540:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 4u));
    set32(c.r[2], c.r[3].w[0] >> 6);
    c.budget -= 2;
L_00398548:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00398558:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398568u);  if (depth < kMaxDepth) unit_00A6(c, 26u, depth + 1u); else { c.pc = 0x00398360u; return; } if (c.pc != 0x00398568u) [[unlikely]] return; }
L_00398568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_00398578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 17102u));  if (t) { goto L_003985B4; } }
L_00398578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398580u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 164u, depth + 1u); else { c.pc = 0x00398ED0u; return; } if (c.pc != 0x00398580u) [[unlikely]] return; }
L_00398580:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] >> 13);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[29].d[0] | 4ull;  if (t) { goto L_0039859C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003985B4; } }
L_0039859C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003985A8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A6(c, 170u, depth + 1u); else { c.pc = 0x00399130u; return; } if (c.pc != 0x003985A8u) [[unlikely]] return; }
L_003985A8:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] >> 4);
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
L_003985B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003985C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003985D0u);  if (depth < kMaxDepth) unit_00A6(c, 26u, depth + 1u); else { c.pc = 0x00398360u; return; } if (c.pc != 0x003985D0u) [[unlikely]] return; }
L_003985D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003985E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 17103u));  if (t) { goto L_0039861C; } }
L_003985E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003985E8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 164u, depth + 1u); else { c.pc = 0x00398ED0u; return; } if (c.pc != 0x003985E8u) [[unlikely]] return; }
L_003985E8:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] >> 13);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[29].d[0] | 4ull;  if (t) { goto L_00398604; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039861C; } }
L_00398604:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398610u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A6(c, 170u, depth + 1u); else { c.pc = 0x00399130u; return; } if (c.pc != 0x00398610u) [[unlikely]] return; }
L_00398610:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] >> 5);
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
L_0039861C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00398628:
    set32(c.r[3], 0u + 10u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0039863Cu);  goto L_00398640; }
L_00398640:
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 255ull;  c.pc = t; return; }
L_00398658:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] >> 4);
    set32(c.r[4], 0u + 6u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 255ull;  c.pc = t; return; }
L_00398678:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398690u); c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));  if (depth < kMaxDepth) unit_00A6(c, 54u, depth + 1u); else { c.pc = 0x00398658u; return; } if (c.pc != 0x00398690u) [[unlikely]] return; }
L_00398690:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 6u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039869Cu); st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 54u, depth + 1u); else { c.pc = 0x00398658u; return; } if (c.pc != 0x0039869Cu) [[unlikely]] return; }
L_0039869C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 5u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003986A8u); st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 54u, depth + 1u); else { c.pc = 0x00398658u; return; } if (c.pc != 0x003986A8u) [[unlikely]] return; }
L_003986A8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003986B4u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 54u, depth + 1u); else { c.pc = 0x00398658u; return; } if (c.pc != 0x003986B4u) [[unlikely]] return; }
L_003986B4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003986C0u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 54u, depth + 1u); else { c.pc = 0x00398658u; return; } if (c.pc != 0x003986C0u) [[unlikely]] return; }
L_003986C0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003986CCu); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 54u, depth + 1u); else { c.pc = 0x00398658u; return; } if (c.pc != 0x003986CCu) [[unlikely]] return; }
L_003986CC:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003986E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003986F8u); c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));  if (depth < kMaxDepth) unit_00A6(c, 53u, depth + 1u); else { c.pc = 0x00398628u; return; } if (c.pc != 0x003986F8u) [[unlikely]] return; }
L_003986F8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 6u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398704u); st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 53u, depth + 1u); else { c.pc = 0x00398628u; return; } if (c.pc != 0x00398704u) [[unlikely]] return; }
L_00398704:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 5u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398710u); st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 53u, depth + 1u); else { c.pc = 0x00398628u; return; } if (c.pc != 0x00398710u) [[unlikely]] return; }
L_00398710:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039871Cu); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 53u, depth + 1u); else { c.pc = 0x00398628u; return; } if (c.pc != 0x0039871Cu) [[unlikely]] return; }
L_0039871C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398728u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 53u, depth + 1u); else { c.pc = 0x00398628u; return; } if (c.pc != 0x00398728u) [[unlikely]] return; }
L_00398728:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398734u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 53u, depth + 1u); else { c.pc = 0x00398628u; return; } if (c.pc != 0x00398734u) [[unlikely]] return; }
L_00398734:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00398748:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 7u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[9], c.r[2].w[0] + 24744u);
    ldl(c.r[6], (c.r[9].w[0] + 7u));
    ldr(c.r[6], (c.r[9].w[0]));
    lwl(c.r[7], (c.r[9].w[0] + 11u));
    lwr(c.r[7], (c.r[9].w[0] + 8u));
    sdl(c.r[6], (c.r[29].w[0] + 7u));
    sdr(c.r[6], (c.r[29].w[0]));
    swl(c.r[7], (c.r[29].w[0] + 11u));
    swr(c.r[7], (c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != 0ull; st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00398798; } }
    set32(c.r[2], 0u + 29u);
    st8((c.r[29].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00398798:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 6u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 5u));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 1u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003987F4; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 6u));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 13u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003987F4; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 7u));
    set32(c.r[2], 0u + 99u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_003987E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003987EC; } }
L_003987E8:
    st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003987EC:
    set32(c.r[2], 0u + 1u);
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003987F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00398800:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 7u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[9], c.r[2].w[0] + 24744u);
    ldl(c.r[6], (c.r[9].w[0] + 7u));
    ldr(c.r[6], (c.r[9].w[0]));
    lwl(c.r[7], (c.r[9].w[0] + 11u));
    lwr(c.r[7], (c.r[9].w[0] + 8u));
    sdl(c.r[6], (c.r[29].w[0] + 7u));
    sdr(c.r[6], (c.r[29].w[0]));
    swl(c.r[7], (c.r[29].w[0] + 11u));
    swr(c.r[7], (c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != 0ull; st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00398850; } }
    set32(c.r[2], 0u + 29u);
    st8((c.r[29].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00398850:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039889C; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 6u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039888C; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_00398880; } }
    set32(c.r[2], 0u + 99u);
    c.budget -= 1;
L_00398880:
    st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 12u);
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0039888C:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 6u));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] - 1u));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0039889C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003988A8:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 24u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003988D0; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00398748u | kUnwind; return; } goto L_00398748; }
L_003988D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003988D8:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_003988F4; } }
    set32(c.r[2], 0u + 23u);
    c.budget -= 3;
    { st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00398800u | kUnwind; return; } goto L_00398800; }
L_003988F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_00398900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039891Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 55u, depth + 1u); else { c.pc = 0x00398678u; return; } if (c.pc != 0x0039891Cu) [[unlikely]] return; }
L_0039891C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    if (c.r[16].sd[0] < 0) { set32(c.r[16], c.r[16].w[0] + 60u);  goto L_00398960; }
    c.r[2].d[0] = c.r[16].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[16].w[0]));  goto L_00398974; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00398940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398948u); set32(c.r[16], c.r[16].w[0] - 60u);  if (depth < kMaxDepth) unit_00A6(c, 71u, depth + 1u); else { c.pc = 0x003988A8u; return; } if (c.pc != 0x00398948u) [[unlikely]] return; }
L_00398948:
    c.r[2].d[0] = c.r[16].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00398940u | kUnwind; return; } goto L_00398940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_00398978; } }
    c.budget -= 1;
L_00398960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398968u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 72u, depth + 1u); else { c.pc = 0x003988D8u; return; } if (c.pc != 0x00398968u) [[unlikely]] return; }
L_00398968:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[16], c.r[16].w[0] + 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00398960u | kUnwind; return; } goto L_00398960; }
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 1;
L_00398974:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00398978:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003986E0u | kUnwind; return; } goto L_003986E0; }
L_00398998:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003989B0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 38u, depth + 1u); else { c.pc = 0x003984A0u; return; } if (c.pc != 0x003989B0u) [[unlikely]] return; }
L_003989B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003989B8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 45u, depth + 1u); else { c.pc = 0x00398558u; return; } if (c.pc != 0x003989B8u) [[unlikely]] return; }
L_003989B8:
    set32(c.r[3], 0u + 60u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] - 540u);
    set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00398900u | kUnwind; return; } goto L_00398900; }
L_00398A20:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
    c.pc = 0x00398A28u; syscall(c, 0x00398A24u); if (c.pc != 0x00398A28u) return;
    c.budget -= 1;
L_00398A28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398A40:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
    c.pc = 0x00398A48u; syscall(c, 0x00398A44u); if (c.pc != 0x00398A48u) return;
    c.budget -= 1;
L_00398A48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398A60:
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
    c.pc = 0x00398A68u; syscall(c, 0x00398A64u); if (c.pc != 0x00398A68u) return;
    c.budget -= 1;
L_00398A68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398AD0:
    set32(c.r[3], 0u + 13u);
    c.budget -= 1;
    c.pc = 0x00398AD8u; syscall(c, 0x00398AD4u); if (c.pc != 0x00398AD8u) return;
    c.budget -= 1;
L_00398AD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398B00:
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
    c.pc = 0x00398B08u; syscall(c, 0x00398B04u); if (c.pc != 0x00398B08u) return;
    c.budget -= 1;
L_00398B08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398B10:
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
    c.pc = 0x00398B18u; syscall(c, 0x00398B14u); if (c.pc != 0x00398B18u) return;
    c.budget -= 1;
L_00398B18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398B20:
    set32(c.r[3], 0u + 17u);
    c.budget -= 1;
    c.pc = 0x00398B28u; syscall(c, 0x00398B24u); if (c.pc != 0x00398B28u) return;
    c.budget -= 1;
L_00398B28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398B30:
    set32(c.r[3], 0u + 18u);
    c.budget -= 1;
    c.pc = 0x00398B38u; syscall(c, 0x00398B34u); if (c.pc != 0x00398B38u) return;
    c.budget -= 1;
L_00398B38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398B40:
    set32(c.r[3], 0u + 18u);
    c.budget -= 1;
    c.pc = 0x00398B48u; syscall(c, 0x00398B44u); if (c.pc != 0x00398B48u) return;
    c.budget -= 1;
L_00398B48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398B50:
    set32(c.r[3], 0u + 19u);
    c.budget -= 1;
    c.pc = 0x00398B58u; syscall(c, 0x00398B54u); if (c.pc != 0x00398B58u) return;
    c.budget -= 1;
L_00398B58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398B60:
    set32(c.r[3], 0u + 20u);
    c.budget -= 1;
    c.pc = 0x00398B68u; syscall(c, 0x00398B64u); if (c.pc != 0x00398B68u) return;
    c.budget -= 1;
L_00398B68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398B70:
    set32(c.r[3], 0u + 21u);
    c.budget -= 1;
    c.pc = 0x00398B78u; syscall(c, 0x00398B74u); if (c.pc != 0x00398B78u) return;
    c.budget -= 1;
L_00398B78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398B80:
    set32(c.r[3], 0u + 22u);
    c.budget -= 1;
    c.pc = 0x00398B88u; syscall(c, 0x00398B84u); if (c.pc != 0x00398B88u) return;
    c.budget -= 1;
L_00398B88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398B90:
    set32(c.r[3], 0u + 23u);
    c.budget -= 1;
    c.pc = 0x00398B98u; syscall(c, 0x00398B94u); if (c.pc != 0x00398B98u) return;
    c.budget -= 1;
L_00398B98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398BA0:
    set32(c.r[3], 0u + 252u);
    c.budget -= 1;
    c.pc = 0x00398BA8u; syscall(c, 0x00398BA4u); if (c.pc != 0x00398BA8u) return;
    c.budget -= 1;
L_00398BA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398BC0:
    set32(c.r[3], 0u - 26u);
    c.budget -= 1;
    c.pc = 0x00398BC8u; syscall(c, 0x00398BC4u); if (c.pc != 0x00398BC8u) return;
    c.budget -= 1;
L_00398BC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398BD0:
    set32(c.r[3], 0u - 27u);
    c.budget -= 1;
    c.pc = 0x00398BD8u; syscall(c, 0x00398BD4u); if (c.pc != 0x00398BD8u) return;
    c.budget -= 1;
L_00398BD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398BE0:
    set32(c.r[3], 0u - 28u);
    c.budget -= 1;
    c.pc = 0x00398BE8u; syscall(c, 0x00398BE4u); if (c.pc != 0x00398BE8u) return;
    c.budget -= 1;
L_00398BE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398BF0:
    set32(c.r[3], 0u - 29u);
    c.budget -= 1;
    c.pc = 0x00398BF8u; syscall(c, 0x00398BF4u); if (c.pc != 0x00398BF8u) return;
    c.budget -= 1;
L_00398BF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398C20:
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
    c.pc = 0x00398C28u; syscall(c, 0x00398C24u); if (c.pc != 0x00398C28u) return;
    c.budget -= 1;
L_00398C28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398C30:
    set32(c.r[3], 0u + 33u);
    c.budget -= 1;
    c.pc = 0x00398C38u; syscall(c, 0x00398C34u); if (c.pc != 0x00398C38u) return;
    c.budget -= 1;
L_00398C38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398C40:
    set32(c.r[3], 0u + 34u);
    c.budget -= 1;
    c.pc = 0x00398C48u; syscall(c, 0x00398C44u); if (c.pc != 0x00398C48u) return;
    c.budget -= 1;
L_00398C48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398C60:
    set32(c.r[3], 0u + 36u);
    c.budget -= 1;
    c.pc = 0x00398C68u; syscall(c, 0x00398C64u); if (c.pc != 0x00398C68u) return;
    c.budget -= 1;
L_00398C68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398C70:
    set32(c.r[3], 0u + 37u);
    c.budget -= 1;
    c.pc = 0x00398C78u; syscall(c, 0x00398C74u); if (c.pc != 0x00398C78u) return;
    c.budget -= 1;
L_00398C78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398CB0:
    set32(c.r[3], 0u + 41u);
    c.budget -= 1;
    c.pc = 0x00398CB8u; syscall(c, 0x00398CB4u); if (c.pc != 0x00398CB8u) return;
    c.budget -= 1;
L_00398CB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398CD0:
    set32(c.r[3], 0u + 43u);
    c.budget -= 1;
    c.pc = 0x00398CD8u; syscall(c, 0x00398CD4u); if (c.pc != 0x00398CD8u) return;
    c.budget -= 1;
L_00398CD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398D10:
    set32(c.r[3], 0u + 47u);
    c.budget -= 1;
    c.pc = 0x00398D18u; syscall(c, 0x00398D14u); if (c.pc != 0x00398D18u) return;
    c.budget -= 1;
L_00398D18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398D20:
    set32(c.r[3], 0u + 48u);
    c.budget -= 1;
    c.pc = 0x00398D28u; syscall(c, 0x00398D24u); if (c.pc != 0x00398D28u) return;
    c.budget -= 1;
L_00398D28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398D40:
    set32(c.r[3], 0u + 50u);
    c.budget -= 1;
    c.pc = 0x00398D48u; syscall(c, 0x00398D44u); if (c.pc != 0x00398D48u) return;
    c.budget -= 1;
L_00398D48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398D50:
    set32(c.r[3], 0u + 51u);
    c.budget -= 1;
    c.pc = 0x00398D58u; syscall(c, 0x00398D54u); if (c.pc != 0x00398D58u) return;
    c.budget -= 1;
L_00398D58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398D60:
    set32(c.r[3], 0u - 52u);
    c.budget -= 1;
    c.pc = 0x00398D68u; syscall(c, 0x00398D64u); if (c.pc != 0x00398D68u) return;
    c.budget -= 1;
L_00398D68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398D90:
    set32(c.r[3], 0u + 55u);
    c.budget -= 1;
    c.pc = 0x00398D98u; syscall(c, 0x00398D94u); if (c.pc != 0x00398D98u) return;
    c.budget -= 1;
L_00398D98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398DA0:
    set32(c.r[3], 0u - 56u);
    c.budget -= 1;
    c.pc = 0x00398DA8u; syscall(c, 0x00398DA4u); if (c.pc != 0x00398DA8u) return;
    c.budget -= 1;
L_00398DA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398E00:
    set32(c.r[3], 0u + 62u);
    c.budget -= 1;
    c.pc = 0x00398E08u; syscall(c, 0x00398E04u); if (c.pc != 0x00398E08u) return;
    c.budget -= 1;
L_00398E08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398E20:
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
    c.pc = 0x00398E28u; syscall(c, 0x00398E24u); if (c.pc != 0x00398E28u) return;
    c.budget -= 1;
L_00398E28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398E30:
    set32(c.r[3], 0u + 65u);
    c.budget -= 1;
    c.pc = 0x00398E38u; syscall(c, 0x00398E34u); if (c.pc != 0x00398E38u) return;
    c.budget -= 1;
L_00398E38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398E40:
    set32(c.r[3], 0u + 66u);
    c.budget -= 1;
    c.pc = 0x00398E48u; syscall(c, 0x00398E44u); if (c.pc != 0x00398E48u) return;
    c.budget -= 1;
L_00398E48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398E50:
    set32(c.r[3], 0u - 67u);
    c.budget -= 1;
    c.pc = 0x00398E58u; syscall(c, 0x00398E54u); if (c.pc != 0x00398E58u) return;
    c.budget -= 1;
L_00398E58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398E60:
    set32(c.r[3], 0u + 68u);
    c.budget -= 1;
    c.pc = 0x00398E68u; syscall(c, 0x00398E64u); if (c.pc != 0x00398E68u) return;
    c.budget -= 1;
L_00398E68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398E70:
    set32(c.r[3], 0u + 69u);
    c.budget -= 1;
    c.pc = 0x00398E78u; syscall(c, 0x00398E74u); if (c.pc != 0x00398E78u) return;
    c.budget -= 1;
L_00398E78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398EC0:
    set32(c.r[3], 0u + 74u);
    c.budget -= 1;
    c.pc = 0x00398EC8u; syscall(c, 0x00398EC4u); if (c.pc != 0x00398EC8u) return;
    c.budget -= 1;
L_00398EC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398ED0:
    set32(c.r[3], 0u + 75u);
    c.budget -= 1;
    c.pc = 0x00398ED8u; syscall(c, 0x00398ED4u); if (c.pc != 0x00398ED8u) return;
    c.budget -= 1;
L_00398ED8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003990A0:
    set32(c.r[3], 0u + 100u);
    c.budget -= 1;
    c.pc = 0x003990A8u; syscall(c, 0x003990A4u); if (c.pc != 0x003990A8u) return;
    c.budget -= 1;
L_003990A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003990F0:
    set32(c.r[3], 0u + 107u);
    c.budget -= 1;
    c.pc = 0x003990F8u; syscall(c, 0x003990F4u); if (c.pc != 0x003990F8u) return;
    c.budget -= 1;
L_003990F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00399130:
    set32(c.r[3], 0u + 111u);
    c.budget -= 1;
    c.pc = 0x00399138u; syscall(c, 0x00399134u); if (c.pc != 0x00399138u) return;
    c.budget -= 1;
L_00399138:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00399140:
    set32(c.r[3], 0u + 112u);
    c.budget -= 1;
    c.pc = 0x00399148u; syscall(c, 0x00399144u); if (c.pc != 0x00399148u) return;
    c.budget -= 1;
L_00399148:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00399160:
    set32(c.r[3], 0u + 113u);
    c.budget -= 1;
    c.pc = 0x00399168u; syscall(c, 0x00399164u); if (c.pc != 0x00399168u) return;
    c.budget -= 1;
L_00399168:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00399190:
    set32(c.r[3], 0u + 115u);
    c.budget -= 1;
    c.pc = 0x00399198u; syscall(c, 0x00399194u); if (c.pc != 0x00399198u) return;
    c.budget -= 1;
L_00399198:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003991C0:
    set32(c.r[3], 0u + 118u);
    c.budget -= 1;
    c.pc = 0x003991C8u; syscall(c, 0x003991C4u); if (c.pc != 0x003991C8u) return;
    c.budget -= 1;
L_003991C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003991E0:
    set32(c.r[3], 0u + 119u);
    c.budget -= 1;
    c.pc = 0x003991E8u; syscall(c, 0x003991E4u); if (c.pc != 0x003991E8u) return;
    c.budget -= 1;
L_003991E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003991F0:
    set32(c.r[3], 0u - 119u);
    c.budget -= 1;
    c.pc = 0x003991F8u; syscall(c, 0x003991F4u); if (c.pc != 0x003991F8u) return;
    c.budget -= 1;
L_003991F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00399200:
    set32(c.r[3], 0u + 120u);
    c.budget -= 1;
    c.pc = 0x00399208u; syscall(c, 0x00399204u); if (c.pc != 0x00399208u) return;
    c.budget -= 1;
L_00399208:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00399210:
    set32(c.r[3], 0u - 120u);
    c.budget -= 1;
    c.pc = 0x00399218u; syscall(c, 0x00399214u); if (c.pc != 0x00399218u) return;
    c.budget -= 1;
L_00399218:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00399220:
    set32(c.r[3], 0u + 121u);
    c.budget -= 1;
    c.pc = 0x00399228u; syscall(c, 0x00399224u); if (c.pc != 0x00399228u) return;
    c.budget -= 1;
L_00399228:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00399230:
    set32(c.r[3], 0u + 122u);
    c.budget -= 1;
    c.pc = 0x00399238u; syscall(c, 0x00399234u); if (c.pc != 0x00399238u) return;
    c.budget -= 1;
L_00399238:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00399250:
    set32(c.r[3], 0u + 124u);
    c.budget -= 1;
    c.pc = 0x00399258u; syscall(c, 0x00399254u); if (c.pc != 0x00399258u) return;
    c.budget -= 1;
L_00399258:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00399280:
    set32(c.r[3], 0u + 127u);
    c.budget -= 1;
    c.pc = 0x00399288u; syscall(c, 0x00399284u); if (c.pc != 0x00399288u) return;
    c.budget -= 1;
L_00399288:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00399290:
    set32(c.r[3], 0u + 130u);
    c.budget -= 1;
    c.pc = 0x00399298u; syscall(c, 0x00399294u); if (c.pc != 0x00399298u) return;
    c.budget -= 1;
L_00399298:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003992A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 17136u), 0u);  c.pc = t; return; }
L_003992B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003992C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003992C0u) [[unlikely]] return; }
L_003992C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_003992E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003992E4u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003992E4u) [[unlikely]] return; }
L_003992E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_003992E8:
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    c.budget -= 2;
L_003992F0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003992F0u | kUnwind; return; } goto L_003992F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399314u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00399314u) [[unlikely]] return; }
L_00399314:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00399338; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A8(c, 280u, depth); }
L_00399338:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00399340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399358u); c.r[5].d[0] = c.r[29].d[0] | 8ull;  if (depth < kMaxDepth) unit_00A6(c, 176u, depth + 1u); else { c.pc = 0x00399190u; return; } if (c.pc != 0x00399358u) [[unlikely]] return; }
L_00399358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399360u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00399360u) [[unlikely]] return; }
L_00399360:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00399388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399384u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00399384u) [[unlikely]] return; }
L_00399384:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_00399388:
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    c.budget -= 2;
L_00399390:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003993AC; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399390u | kUnwind; return; } goto L_00399390; } }
L_003993AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003993B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003993B4u) [[unlikely]] return; }
L_003993B4:
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 4096u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003993D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003993D4u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003993D4u) [[unlikely]] return; }
L_003993D4:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003993E8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00399448; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 17136u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00399438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399428u);  if (depth < kMaxDepth) unit_00A6(c, 356u, depth + 1u); else { c.pc = 0x0039A7C0u; return; } if (c.pc != 0x00399428u) [[unlikely]] return; }
L_00399428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00399448; } }
    st32((c.r[16].w[0] + 17136u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00399438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399440u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 344u, depth + 1u); else { c.pc = 0x0039A578u; return; } if (c.pc != 0x00399440u) [[unlikely]] return; }
L_00399440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00399450; } }
L_00399448:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_00399450:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00399468:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_003994C0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 17136u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003994B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003994A0u);  if (depth < kMaxDepth) unit_00A6(c, 356u, depth + 1u); else { c.pc = 0x0039A7C0u; return; } if (c.pc != 0x003994A0u) [[unlikely]] return; }
L_003994A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003994C0; } }
    st32((c.r[16].w[0] + 17136u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003994B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003994B8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 352u, depth + 1u); else { c.pc = 0x0039A6F0u; return; } if (c.pc != 0x003994B8u) [[unlikely]] return; }
L_003994B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003994C8; } }
L_003994C0:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_003994C8:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003994E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003994F0u);  if (depth < kMaxDepth) unit_00AD(c, 230u, depth + 1u); else { c.pc = 0x003B69F0u; return; } if (c.pc != 0x003994F0u) [[unlikely]] return; }
L_003994F0:
    set32(c.r[3], 0u + 5u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00399508:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_00399518:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_00399520:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_0039956C; } }
L_00399548:
    set_interrupts(c, false);
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399548u | kUnwind; return; } goto L_00399548; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 17140u)));  if (t) { goto L_00399570; } }
L_0039956C:
    set32(c.r[2], ld32((c.r[18].w[0] + 17140u)));
    c.budget -= 1;
L_00399570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399578u); set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 148u, depth + 1u); else { c.pc = 0x00398E00u; return; } if (c.pc != 0x00399578u) [[unlikely]] return; }
L_00399578:
    c.r[2].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 17140u)));  if (t) { goto L_003995A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039958Cu);  if (depth < kMaxDepth) unit_00AD(c, 230u, depth + 1u); else { c.pc = 0x003B69F0u; return; } if (c.pc != 0x0039958Cu) [[unlikely]] return; }
L_0039958C:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0039959C; } }
    set_interrupts(c, true);
    c.budget -= 1;
L_0039959C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_003995B4; } }
L_003995A8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 17140u), c.r[16].w[0]);  if (t) { goto L_003995B4; } }
    set_interrupts(c, true);
    c.budget -= 1;
L_003995B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003995D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003995D8:
    set32(c.r[2], 0u + 8192u);
    st64((c.r[5].w[0] + 72u), 0ull);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003995F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003995F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00399610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399610u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 351u, depth + 1u); else { c.pc = 0x003A3598u; return; } if (c.pc != 0x00399610u) [[unlikely]] return; }
L_00399610:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00399620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399630u);  if (depth < kMaxDepth) unit_00AD(c, 230u, depth + 1u); else { c.pc = 0x003B69F0u; return; } if (c.pc != 0x00399630u) [[unlikely]] return; }
L_00399630:
    set32(c.r[3], 0u + 5u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00399648:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399658u);  if (depth < kMaxDepth) unit_00AD(c, 230u, depth + 1u); else { c.pc = 0x003B69F0u; return; } if (c.pc != 0x00399658u) [[unlikely]] return; }
L_00399658:
    set32(c.r[3], 0u + 5u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00399670:
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 61440ull;
    c.budget -= 4;
L_00399680:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003996BC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003996BC; } }
    c.budget -= 3;
L_003996BC:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003996F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003996F8; } }
    c.budget -= 3;
L_003996F8:
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[2].d[0] = c.r[6].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399680u | kUnwind; return; } goto L_00399680; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00399718:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00399750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399750u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00399750u) [[unlikely]] return; }
L_00399750:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65472ull;
    c.r[5].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399764u); c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_00A6(c, 234u, depth + 1u); else { c.pc = 0x00399670u; return; } if (c.pc != 0x00399764u) [[unlikely]] return; }
L_00399764:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00399780; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_00A8(c, 280u, depth); }
L_00399780:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003997B0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 61440ull;
    c.budget -= 4;
L_003997C0:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003997FC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003997FC; } }
    c.budget -= 3;
L_003997FC:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00399838; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00399838; } }
    c.budget -= 3;
L_00399838:
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[2].d[0] = c.r[6].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003997C0u | kUnwind; return; } goto L_003997C0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00399858:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00399890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399890u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00399890u) [[unlikely]] return; }
L_00399890:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65472ull;
    c.r[5].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003998A4u); c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_00A6(c, 239u, depth + 1u); else { c.pc = 0x003997B0u; return; } if (c.pc != 0x003998A4u) [[unlikely]] return; }
L_003998A4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003998C0; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_00A8(c, 280u, depth); }
L_003998C0:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003998F0:
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 1ull;  c.pc = t; return; }
L_00399900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00399930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399930u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00399930u) [[unlikely]] return; }
L_00399930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399938u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 104u, depth + 1u); else { c.pc = 0x00398B70u; return; } if (c.pc != 0x00399938u) [[unlikely]] return; }
L_00399938:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00399954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399950u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00399950u) [[unlikely]] return; }
L_00399950:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00399954:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00399968:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00399998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399998u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00399998u) [[unlikely]] return; }
L_00399998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003999A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 102u, depth + 1u); else { c.pc = 0x00398B60u; return; } if (c.pc != 0x003999A0u) [[unlikely]] return; }
L_003999A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003999BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003999B8u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003999B8u) [[unlikely]] return; }
L_003999B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003999BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003999D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00399A00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399A00u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00399A00u) [[unlikely]] return; }
L_00399A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399A08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 108u, depth + 1u); else { c.pc = 0x00398B90u; return; } if (c.pc != 0x00399A08u) [[unlikely]] return; }
L_00399A08:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00399A24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399A20u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00399A20u) [[unlikely]] return; }
L_00399A20:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00399A24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00399A38:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00399A68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399A68u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00399A68u) [[unlikely]] return; }
L_00399A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399A70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 106u, depth + 1u); else { c.pc = 0x00398B80u; return; } if (c.pc != 0x00399A70u) [[unlikely]] return; }
L_00399A70:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00399A8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399A88u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00399A88u) [[unlikely]] return; }
L_00399A88:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00399A8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00399AA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399AB0u);  if (depth < kMaxDepth) unit_00A6(c, 112u, depth + 1u); else { c.pc = 0x00398BC0u; return; } if (c.pc != 0x00399AB0u) [[unlikely]] return; }
L_00399AB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00399AC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399AD0u);  if (depth < kMaxDepth) unit_00A6(c, 114u, depth + 1u); else { c.pc = 0x00398BD0u; return; } if (c.pc != 0x00399AD0u) [[unlikely]] return; }
L_00399AD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00399AE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399AF0u);  if (depth < kMaxDepth) unit_00A6(c, 116u, depth + 1u); else { c.pc = 0x00398BE0u; return; } if (c.pc != 0x00399AF0u) [[unlikely]] return; }
L_00399AF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00399B00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399B10u);  if (depth < kMaxDepth) unit_00A6(c, 118u, depth + 1u); else { c.pc = 0x00398BF0u; return; } if (c.pc != 0x00399B10u) [[unlikely]] return; }
L_00399B10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00399B20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[20], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[18], c.r[17].w[0] + 8u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 9u);
    c.budget -= 16;
L_00399B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399B68u); set32(c.r[4], ld32((c.r[22].w[0] + 26112u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x00399B68u) [[unlikely]] return; }
L_00399B68:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 511ull;
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    st32((c.r[17].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[20].d[0]; c.r[5].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00399BC8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 24760u);  if (t) { goto L_00399BA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00399BB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00399BE8; } }
L_00399BA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_00399BD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00399BE8; } }
L_00399BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399BC0u); c.r[4].d[0] = ld8((c.r[3].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 140u, depth + 1u); else { c.pc = 0x00398D50u; return; } if (c.pc != 0x00399BC0u) [[unlikely]] return; }
L_00399BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399B60u | kUnwind; return; } goto L_00399B60; } }
L_00399BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399BD0u); c.r[4].d[0] = ld8((c.r[6].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 132u, depth + 1u); else { c.pc = 0x00398CD0u; return; } if (c.pc != 0x00399BD0u) [[unlikely]] return; }
L_00399BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399B60u | kUnwind; return; } goto L_00399B60; } }
L_00399BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399BE0u); c.r[4].d[0] = ld8((c.r[3].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 144u, depth + 1u); else { c.pc = 0x00398D90u; return; } if (c.pc != 0x00399BE0u) [[unlikely]] return; }
L_00399BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399B60u | kUnwind; return; } goto L_00399B60; } }
L_00399BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399BF0u);  if (depth < kMaxDepth) unit_00A6(c, 479u, depth + 1u); else { c.pc = 0x0039BB88u; return; } if (c.pc != 0x00399BF0u) [[unlikely]] return; }
L_00399BF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399B60u | kUnwind; return; } goto L_00399B60; } }
L_00399BF8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 17144u)));
    st64((c.r[29].w[0] + 112u), c.r[18].d[0]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0; st64((c.r[29].w[0] + 96u), c.r[17].d[0]);  if (t) { goto L_00399C94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[17], c.r[2].w[0] + 24800u);
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 56u), 0u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 68u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399C3Cu); c.r[18].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x00399C3Cu) [[unlikely]] return; }
L_00399C3C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[18].w[0] + 26112u), c.r[2].w[0]);  if (t) { goto L_00399C94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 25824u);
    set32(c.r[3], c.r[3].w[0] + 25088u);
    set32(c.r[5], c.r[5].w[0] + 15728u);
    set32(c.r[6], 0u + 1024u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[17].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399C80u); st32((c.r[29].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 120u, depth + 1u); else { c.pc = 0x00398C20u; return; } if (c.pc != 0x00399C80u) [[unlikely]] return; }
L_00399C80:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; st32((c.r[16].w[0] + 17144u), c.r[4].w[0]);  if (t) { goto L_00399C9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399C94u); set32(c.r[4], ld32((c.r[18].w[0] + 26112u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x00399C94u) [[unlikely]] return; }
L_00399C94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00399CCC; } }
L_00399C9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[2].w[0] + 26120u);
    st32((c.r[2].w[0] + 26120u), 0u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399CB4u); st32((c.r[3].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 300u, depth + 1u); else { c.pc = 0x00399F60u; return; } if (c.pc != 0x00399CB4u) [[unlikely]] return; }
L_00399CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399CBCu);  if (depth < kMaxDepth) unit_00A6(c, 134u, depth + 1u); else { c.pc = 0x00398D10u; return; } if (c.pc != 0x00399CBCu) [[unlikely]] return; }
L_00399CBC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399CC8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A6(c, 130u, depth + 1u); else { c.pc = 0x00398CB0u; return; } if (c.pc != 0x00399CC8u) [[unlikely]] return; }
L_00399CC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 17144u)));
    c.budget -= 1;
L_00399CCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00399CE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], 0u - 47u);
    c.budget -= 4;
    c.pc = 0x00399CFCu; syscall(c, 0x00399CF8u); if (c.pc != 0x00399CFCu) return;
    c.budget -= 1;
L_00399CFC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;  if (t) { goto L_00399D18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399D10u);  if (depth < kMaxDepth) unit_00A6(c, 142u, depth + 1u); else { c.pc = 0x00398D60u; return; } if (c.pc != 0x00399D10u) [[unlikely]] return; }
L_00399D10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00399D70; } }
L_00399D18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_00399D2C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 17144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { goto L_00399D34; } }
L_00399D2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00399D6C; } }
L_00399D34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 26120u);
    set32(c.r[4], ld32((c.r[5].w[0] + 26112u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399D68u); st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 156u, depth + 1u); else { c.pc = 0x00398E50u; return; } if (c.pc != 0x00399D68u) [[unlikely]] return; }
L_00399D68:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00399D6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00399D70:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00399D80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00399DA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17144u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { goto L_00399DB0; } }
L_00399DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00399DEC; } }
L_00399DB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 26120u);
    set32(c.r[4], ld32((c.r[5].w[0] + 26112u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399DE8u); st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 156u, depth + 1u); else { c.pc = 0x00398E50u; return; } if (c.pc != 0x00399DE8u) [[unlikely]] return; }
L_00399DE8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00399DEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00399E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], 0u - 47u);
    c.budget -= 4;
    c.pc = 0x00399E14u; syscall(c, 0x00399E10u); if (c.pc != 0x00399E14u) return;
    c.budget -= 1;
L_00399E14:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;  if (t) { goto L_00399E30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399E28u);  if (depth < kMaxDepth) unit_00A6(c, 146u, depth + 1u); else { c.pc = 0x00398DA0u; return; } if (c.pc != 0x00399E28u) [[unlikely]] return; }
L_00399E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00399E8C; } }
L_00399E30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_00399E44; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 17144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { goto L_00399E4C; } }
L_00399E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00399E88; } }
L_00399E4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 26120u);
    set32(c.r[4], ld32((c.r[5].w[0] + 26112u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399E84u); st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 156u, depth + 1u); else { c.pc = 0x00398E50u; return; } if (c.pc != 0x00399E84u) [[unlikely]] return; }
L_00399E84:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00399E88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00399E8C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00399E98:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_00399ECC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32776ull;  if (t) { goto L_00399F4C; } }
L_00399ECC:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 24824u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399EE8u); st32((c.r[29].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x00399EE8u) [[unlikely]] return; }
L_00399EE8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00399F00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32771ull;  if (t) { goto L_00399F4C; } }
L_00399F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399F08u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 66u, depth + 1u); else { c.pc = 0x003A49C0u; return; } if (c.pc != 0x00399F08u) [[unlikely]] return; }
L_00399F08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399F1Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 75u, depth + 1u); else { c.pc = 0x003A4B70u; return; } if (c.pc != 0x00399F1Cu) [[unlikely]] return; }
L_00399F1C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_00399F38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399F30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x00399F30u) [[unlikely]] return; }
L_00399F30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00399F4C; } }
L_00399F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399F40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x00399F40u) [[unlikely]] return; }
L_00399F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399F48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x00399F48u) [[unlikely]] return; }
L_00399F48:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00399F4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00399F60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399F80u); st64((c.r[29].w[0] + 48u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_00A6(c, 244u, depth + 1u); else { c.pc = 0x003998F0u; return; } if (c.pc != 0x00399F80u) [[unlikely]] return; }
L_00399F80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039A0C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399F90u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00399F90u) [[unlikely]] return; }
L_00399F90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00399FD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399FA0u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 136u, depth + 1u); else { c.pc = 0x00398D20u; return; } if (c.pc != 0x00399FA0u) [[unlikely]] return; }
L_00399FA0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_00399FBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399FB4u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00399FB4u) [[unlikely]] return; }
L_00399FB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039A0C0; } }
L_00399FBC:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_00399FD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399FD0u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00399FD0u) [[unlikely]] return; }
L_00399FD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039A0C0; } }
L_00399FD8:
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 672u);
    st128((c.r[2].w[0]) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 64u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 80u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 96u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 112u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 128u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 144u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 160u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 176u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 192u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 208u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 240u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 256u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 272u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 288u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 304u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 320u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 336u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 352u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 368u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 384u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 400u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 416u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 432u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 512u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 528u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 544u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 560u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 576u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 592u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 608u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 624u) & ~15u, c.r[0]);
    set32(c.r[8], c.r[18].w[0] << 0);
    st64((c.r[2].w[0] + 64u), c.r[8].d[0]);
    set32(c.r[8], ld32((c.r[2].w[0] + 448u)));
    st64((c.r[2].w[0] + 448u), c.r[8].d[0]);
    st64((c.r[2].w[0] + 456u), 0ull);
    set32(c.r[8], ld32((c.r[2].w[0] + 464u)));
    st64((c.r[2].w[0] + 464u), c.r[8].d[0]);
    st64((c.r[2].w[0] + 472u), 0ull);
    set32(c.r[8], ld32((c.r[2].w[0] + 480u)));
    st64((c.r[2].w[0] + 480u), c.r[8].d[0]);
    st64((c.r[2].w[0] + 488u), 0ull);
    set32(c.r[8], ld32((c.r[2].w[0] + 496u)));
    st64((c.r[2].w[0] + 496u), c.r[8].d[0]);
    st64((c.r[2].w[0] + 504u), 0ull);
    c.budget -= 55;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A0B4u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0039A0B4u) [[unlikely]] return; }
L_0039A0B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A0C0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 124u, depth + 1u); else { c.pc = 0x00398C40u; return; } if (c.pc != 0x0039A0C0u) [[unlikely]] return; }
L_0039A0C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0039A0D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A0E8u); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 156u, depth + 1u); else { c.pc = 0x00398E50u; return; } if (c.pc != 0x0039A0E8u) [[unlikely]] return; }
L_0039A0E8:
    set_interrupts(c, true);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039A100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[2].w[0] + 27152u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A138u); st32((c.r[29].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 192u, depth + 1u); else { c.pc = 0x00399250u; return; } if (c.pc != 0x0039A138u) [[unlikely]] return; }
L_0039A138:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039A148:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A160u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A6(c, 192u, depth + 1u); else { c.pc = 0x00399250u; return; } if (c.pc != 0x0039A160u) [[unlikely]] return; }
L_0039A160:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039A170:
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 24));
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A194u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 192u, depth + 1u); else { c.pc = 0x00399250u; return; } if (c.pc != 0x0039A194u) [[unlikely]] return; }
L_0039A194:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039A1A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A1B8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_00A6(c, 192u, depth + 1u); else { c.pc = 0x00399250u; return; } if (c.pc != 0x0039A1B8u) [[unlikely]] return; }
L_0039A1B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039A1C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], 0u + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A1ECu); st32((c.r[29].w[0] + 8u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 192u, depth + 1u); else { c.pc = 0x00399250u; return; } if (c.pc != 0x0039A1ECu) [[unlikely]] return; }
L_0039A1EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039A1F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A210u); set32(c.r[4], 0u + 33u);  if (depth < kMaxDepth) unit_00A6(c, 192u, depth + 1u); else { c.pc = 0x00399250u; return; } if (c.pc != 0x0039A210u) [[unlikely]] return; }
L_0039A210:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039A220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], 0u - 5u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A248u); st32((c.r[29].w[0] + 8u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 192u, depth + 1u); else { c.pc = 0x00399250u; return; } if (c.pc != 0x0039A248u) [[unlikely]] return; }
L_0039A248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039A258:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], 0u - 6u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A280u); st32((c.r[29].w[0] + 8u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 192u, depth + 1u); else { c.pc = 0x00399250u; return; } if (c.pc != 0x0039A280u) [[unlikely]] return; }
L_0039A280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039A2C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A2D8u); set32(c.r[4], 0u - 8u);  if (depth < kMaxDepth) unit_00A6(c, 192u, depth + 1u); else { c.pc = 0x00399250u; return; } if (c.pc != 0x0039A2D8u) [[unlikely]] return; }
L_0039A2D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039A2E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A300u); set32(c.r[4], 0u - 9u);  if (depth < kMaxDepth) unit_00A6(c, 192u, depth + 1u); else { c.pc = 0x00399250u; return; } if (c.pc != 0x0039A300u) [[unlikely]] return; }
L_0039A300:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039A310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A328u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_00A6(c, 192u, depth + 1u); else { c.pc = 0x00399250u; return; } if (c.pc != 0x0039A328u) [[unlikely]] return; }
L_0039A328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039A338:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[2].w[0] + 27200u);
    st32((c.r[2].w[0] + 27200u), c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + 16u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 12u), c.r[4].w[0]);  c.pc = t; return; }
L_0039A360:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[5].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_0039A394; } }
    set32(c.r[2], c.r[5].w[0] + 16u);
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0039A394:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039A3A0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[5].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_0039A3D4; } }
    set32(c.r[2], c.r[5].w[0] + 16u);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_0039A3D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039A3E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (t) { goto L_0039A4EC; } }
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0039A420; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0039A53C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0039A564; } }
L_0039A420:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0039A560; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 20u)));  goto L_0039A490; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(321ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0039A44C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A44Cu); set32(c.r[4], c.r[4].w[0] + 24848u);  if (depth < kMaxDepth) unit_00A6(c, 479u, depth + 1u); else { c.pc = 0x0039BB88u; return; } if (c.pc != 0x0039A44Cu) [[unlikely]] return; }
L_0039A44C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A464u); set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 322u, depth + 1u); else { c.pc = 0x0039A220u; return; } if (c.pc != 0x0039A464u) [[unlikely]] return; }
L_0039A464:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0039A47C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A47Cu); set32(c.r[4], c.r[4].w[0] + 24888u);  if (depth < kMaxDepth) unit_00A6(c, 479u, depth + 1u); else { c.pc = 0x0039BB88u; return; } if (c.pc != 0x0039A47Cu) [[unlikely]] return; }
L_0039A47C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0039A560; } }
L_0039A490:
    set32(c.r[16], 0u + 12u);
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0039A4E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_0039A4B4; } }
    c.budget -= 1;
L_0039A4B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0039A4B4:
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A4D0u); set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_00A6(c, 333u, depth + 1u); else { c.pc = 0x0039A360u; return; } if (c.pc != 0x0039A4D0u) [[unlikely]] return; }
L_0039A4D0:
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A4B0u | kUnwind; return; } goto L_0039A4B0; }
L_0039A4E0:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0039A560; } }
L_0039A4EC:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A500u); c.r[6].d[0] = c.r[6].d[0] & 65535ull;  if (depth < kMaxDepth) unit_00A6(c, 324u, depth + 1u); else { c.pc = 0x0039A258u; return; } if (c.pc != 0x0039A500u) [[unlikely]] return; }
L_0039A500:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_0039A520; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A518u); set32(c.r[4], c.r[4].w[0] + 24912u);  if (depth < kMaxDepth) unit_00A6(c, 479u, depth + 1u); else { c.pc = 0x0039BB88u; return; } if (c.pc != 0x0039A518u) [[unlikely]] return; }
L_0039A518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039A558; } }
L_0039A520:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0039A560; } }
L_0039A53C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039A558; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A558u); set32(c.r[4], c.r[4].w[0] + 24936u);  if (depth < kMaxDepth) unit_00A6(c, 479u, depth + 1u); else { c.pc = 0x0039BB88u; return; } if (c.pc != 0x0039A558u) [[unlikely]] return; }
L_0039A558:
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_0039A560:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0039A564:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039A578:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], c.r[21].w[0] + 27472u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039A6C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A5C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0039A5C8u) [[unlikely]] return; }
L_0039A5C8:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 27520u);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[8], 0u - 1u);
    st32((c.r[19].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[7], 0u + 10u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[6].w[0] + 12u);
    c.budget -= 12;
L_0039A5F8:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[8].d[0]) { set32(c.r[16], c.r[21].w[0] + 27472u);  goto L_0039A648; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_0039A628; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_0039A644; } }
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_0039A628:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A5F8u | kUnwind; return; } goto L_0039A5F8; } }
L_0039A644:
    set32(c.r[16], c.r[21].w[0] + 27472u);
    c.budget -= 1;
L_0039A648:
    set32(c.r[2], c.r[17].w[0] + 12u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 27472u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A664u); st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 314u, depth + 1u); else { c.pc = 0x0039A170u; return; } if (c.pc != 0x0039A664u) [[unlikely]] return; }
L_0039A664:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0039A688; } }
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039A6C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A680u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0039A680u) [[unlikely]] return; }
L_0039A680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039A6C4; } }
L_0039A688:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0039A6B0; } }
    c.budget -= 1;
L_0039A698:
    set32(c.r[4], ld32((c.r[17].w[0] + 27472u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A6A4u);  if (depth < kMaxDepth) unit_00A6(c, 316u, depth + 1u); else { c.pc = 0x0039A1A0u; return; } if (c.pc != 0x0039A6A4u) [[unlikely]] return; }
L_0039A6A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A698u | kUnwind; return; } goto L_0039A698; } }
L_0039A6B0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0039A6C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A6C0u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0039A6C0u) [[unlikely]] return; }
L_0039A6C0:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0039A6C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0039A6F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 11;
    { const bool t = c.r[18].sd[0] <= 0; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0039A79C; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
L_0039A728:
    set32(c.r[17], c.r[3].w[0] + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 27496u)));
    set32(c.r[16], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0039A738:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A738u | kUnwind; return; } goto L_0039A738; } }
    set32(c.r[5], c.r[19].w[0] + 27472u);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A770u); set32(c.r[4], ld32((c.r[5].w[0] + 24u)));  if (depth < kMaxDepth) unit_00A6(c, 334u, depth + 1u); else { c.pc = 0x0039A3A0u; return; } if (c.pc != 0x0039A770u) [[unlikely]] return; }
L_0039A770:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 13u);  if (t) { goto L_0039A788; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039A790; } }
L_0039A788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039A7A0; } }
L_0039A790:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A728u | kUnwind; return; } goto L_0039A728; } }
L_0039A79C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0039A7A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0039A7C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A7DCu); c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x0039A7DCu) [[unlikely]] return; }
L_0039A7DC:
    set32(c.r[17], c.r[16].w[0] + 27472u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[4], 0u + 528u);
    set32(c.r[6], c.r[6].w[0] - 23584u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A7F4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 310u, depth + 1u); else { c.pc = 0x0039A100u; return; } if (c.pc != 0x0039A7F4u) [[unlikely]] return; }
L_0039A7F4:
    st32((c.r[16].w[0] + 27472u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 27472u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { goto L_0039A80C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039A868; } }
L_0039A80C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], c.r[4].w[0] + 27840u);
    set32(c.r[2], c.r[2].w[0] + 27520u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[6], 0u + 528u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], 0u + 69u);
    set32(c.r[3], 0u + 72u);
    set32(c.r[4], 0u + 256u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A860u); st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_00A6(c, 332u, depth + 1u); else { c.pc = 0x0039A338u; return; } if (c.pc != 0x0039A860u) [[unlikely]] return; }
L_0039A860:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0039A868:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039A880:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 61744ull;
    c.budget -= 2;
L_0039A888:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A888u | kUnwind; return; } goto L_0039A888; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 61824ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_0039A8B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 17152u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 126ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (t) { goto L_0039A900; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 17152u), 0u);
    set32(c.r[2], c.r[18].w[0] + 28160u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A8F8u); st8((c.r[2].w[0] + 127u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A6(c, 330u, depth + 1u); else { c.pc = 0x0039A310u; return; } if (c.pc != 0x0039A8F8u) [[unlikely]] return; }
L_0039A8F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 17152u)));  if (t) { goto L_0039A904; } }
L_0039A900:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 1;
L_0039A904:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[18].w[0] + 28160u);  if (t) { goto L_0039A940; } }
    set32(c.r[4], c.r[18].w[0] + 28160u);
    st32((c.r[17].w[0] + 17152u), 0u);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A310u | kUnwind; return; } goto L_0039A310; }
L_0039A940:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[17].w[0] + 17152u), c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039A968:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0039A990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A980u); set32(c.r[4], 0u + 13u);  if (depth < kMaxDepth) unit_00A6(c, 360u, depth + 1u); else { c.pc = 0x0039A880u; return; } if (c.pc != 0x0039A980u) [[unlikely]] return; }
L_0039A980:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], 0u + 10u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A880u | kUnwind; return; } goto L_0039A880; }
L_0039A990:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A880u | kUnwind; return; } goto L_0039A880; }
L_0039A9A0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] << 1;
    c.r[6].d[0] = c.r[2].d[0] >> 53;
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-1075ll);
    c.r[2].d[0] = c.r[6].sd[0] < -53ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[6].sd[0] < 13ll ? 1ull : 0ull;  if (t) { goto L_0039A9C4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0039A9C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] << 12;  if (t) { goto L_0039A9D4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 9999u);  c.pc = t; return; }
L_0039A9D4:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 37;
    c.r[5].d[0] = c.r[2].d[0] >> 12;
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] >= 0; c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];  if (t) { goto L_0039AA18; } }
    c.r[6].d[0] = 0ull - c.r[6].d[0];
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-2ll);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] >> (c.r[3].w[0] & 63u);
    c.r[4].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[5].d[0] >> 2;  goto L_0039AA24; }
    c.r[2].d[0] = c.r[5].d[0] >> 2;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0039AA24; } }
L_0039AA18:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << (c.r[2].w[0] & 63u);
    c.budget -= 3;
L_0039AA24:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_0039AA30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0039AA7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039ABE0; } }
L_0039AA7C:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AA8Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x0039AA8Cu) [[unlikely]] return; }
L_0039AA8C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039AAC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AA9Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x0039AA9Cu) [[unlikely]] return; }
L_0039AA9C:
    set32(c.r[20], 0u + 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[21].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AAB4u); set32(c.r[6], 0u + 45u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039AAB4u) [[unlikely]] return; }
L_0039AAB4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0039AAC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 24984u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AAD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x0039AAD0u) [[unlikely]] return; }
L_0039AAD0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0039AB14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039AAF4; } }
L_0039AAE0:
    c.r[5].d[0] = 0ull | 32840ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AAF0u); set32(c.r[18], c.r[18].w[0] - 1u);  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x0039AAF0u) [[unlikely]] return; }
L_0039AAF0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0039AAF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 24992u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AB04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x0039AB04u) [[unlikely]] return; }
L_0039AB04:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AAE0u | kUnwind; return; } goto L_0039AAE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039AB64; } }
L_0039AB14:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AB24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x0039AB24u) [[unlikely]] return; }
L_0039AB24:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0039AB64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039AB4C; } }
    c.budget -= 1;
L_0039AB38:
    c.r[5].d[0] = 0ull | 32840ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AB48u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x0039AB48u) [[unlikely]] return; }
L_0039AB48:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0039AB4C:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AB5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x0039AB5Cu) [[unlikely]] return; }
L_0039AB5C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AB38u | kUnwind; return; } goto L_0039AB38; } }
L_0039AB64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 25000u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AB74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x0039AB74u) [[unlikely]] return; }
L_0039AB74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AB7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 451u, depth + 1u); else { c.pc = 0x003AF968u; return; } if (c.pc != 0x0039AB7Cu) [[unlikely]] return; }
L_0039AB7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AB84u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 366u, depth + 1u); else { c.pc = 0x0039A9A0u; return; } if (c.pc != 0x0039AB84u) [[unlikely]] return; }
L_0039AB84:
    set32(c.r[7], c.r[19].w[0] + 24960u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AB9Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 465u, depth + 1u); else { c.pc = 0x0039B9C8u; return; } if (c.pc != 0x0039AB9Cu) [[unlikely]] return; }
L_0039AB9C:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0; set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_0039ABBC; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 24968u);  if (t) { goto L_0039ABD0; } }
L_0039ABBC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 24976u);
    c.budget -= 5;
L_0039ABD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ABD8u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 465u, depth + 1u); else { c.pc = 0x0039B9C8u; return; } if (c.pc != 0x0039ABD8u) [[unlikely]] return; }
L_0039ABD8:
    set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_0039ABE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0039AC08:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 256u), c.r[30].d[0]);
    set32(c.r[2], c.r[29].w[0] + 31u);
    st64((c.r[29].w[0] + 224u), c.r[22].d[0]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 272u), c.r[31].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 240u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 208u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[16].d[0]);
    st32((c.r[29].w[0] + 64u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[22].w[0]));
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 88u), 0u);  if (t) { goto L_0039B8CC; } }
    set32(c.r[3], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 2;
L_0039AC68:
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 37u);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 84u), 0u);  if (t) { goto L_0039B884; } }
L_0039AC88:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[5].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[2], c.r[5].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(89ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0039B3D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 25056u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00398000u < 16384u) { entry = entries_00A6[(t - 0x00398000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0039ACC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AC88u | kUnwind; return; } goto L_0039AC88; } }
L_0039ACCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 2ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AC88u | kUnwind; return; } goto L_0039AC88; } }
L_0039ACD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 4ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AC88u | kUnwind; return; } goto L_0039AC88; } }
L_0039ACDC:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 10u);
    c.budget -= 3;
L_0039ACE8:
    mmi::mult(c, 0, c.r[16].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] << 24);
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    c.r[5].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[4], c.r[4].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039ACE8u | kUnwind; return; } goto L_0039ACE8; } }
    st32((c.r[29].w[0] + 80u), c.r[16].w[0]);
    c.budget -= 1;
L_0039AD14:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_0039B8B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[22].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AC88u | kUnwind; return; } goto L_0039AC88; } }
L_0039AD24:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[21].d[0] = c.r[21].d[0] | 32ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    set32(c.r[2], 0u + 42u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_0039AD58; } }
    set32(c.r[30], c.r[30].w[0] + 8u);
    set32(c.r[2], 0u - 2u);
    set32(c.r[16], ld32((c.r[30].w[0] - 8u)));
    set32(c.r[8], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AC88u | kUnwind; return; } goto L_0039AC88; } }
L_0039AD58:
    set32(c.r[2], c.r[5].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0039AD98; } }
    set32(c.r[6], 0u + 10u);
    c.budget -= 2;
L_0039AD70:
    mmi::mult(c, 0, c.r[16].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] << 24);
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    c.r[5].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[4], c.r[4].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AD70u | kUnwind; return; } goto L_0039AD70; } }
L_0039AD98:
    set32(c.r[2], 0u - 2u);
    set32(c.r[8], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AD14u | kUnwind; return; } goto L_0039AD14; } }
L_0039ADAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 8ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AC88u | kUnwind; return; } goto L_0039AC88; } }
L_0039ADB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 16ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AC88u | kUnwind; return; } goto L_0039AC88; } }
L_0039ADBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 64ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AC88u | kUnwind; return; } goto L_0039AC88; } }
L_0039ADC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 128ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AC88u | kUnwind; return; } goto L_0039AC88; } }
L_0039ADCC:
    c.r[2].d[0] = c.r[21].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 128ull;  if (t) { goto L_0039ADE4; } }
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[30].w[0] - 8u));  if (t) { goto L_0039ADF8; } }
L_0039ADE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[30], c.r[30].w[0] + 8u);  if (t) { goto L_0039ADF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[30].w[0] - 8u));  if (t) { goto L_0039ADF8; } }
L_0039ADF4:
    c.r[16].d[0] = ld32((c.r[30].w[0] - 8u));
    c.budget -= 1;
L_0039ADF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0039AE28; } }
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_0039AE14; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_0039AE6C; } }
L_0039AE14:
    set32(c.r[23], c.r[22].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_0039AE70; } }
L_0039AE28:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[3].d[0] = c.r[21].d[0] & 16ull;
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 4;
L_0039AE38:
    c.r[2].d[0] = c.r[16].d[0] & 7ull;
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[16].d[0] = c.r[16].d[0] >> 3;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AE38u | kUnwind; return; } goto L_0039AE38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_0039AE74; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_0039AE74; } }
L_0039AE6C:
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 1;
L_0039AE70:
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 1;
L_0039AE74:
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + 1u);  if (t) { goto L_0039B404; } }
L_0039AE80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].d[0] = c.r[21].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 25008u);  if (t) { goto L_0039AED4; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], 0u + 120u);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_0039AED4; } }
L_0039AEAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].d[0] = c.r[21].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 25032u);  if (t) { goto L_0039AED4; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], 0u + 88u);
    set32(c.r[5], 0u + 2u);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 84u), c.r[5].w[0]);
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0039AED4:
    c.r[2].d[0] = c.r[21].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 128ull;  if (t) { goto L_0039AEEC; } }
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[30].w[0] - 8u));  if (t) { goto L_0039AF00; } }
L_0039AEEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[30], c.r[30].w[0] + 8u);  if (t) { goto L_0039AEFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[30].w[0] - 8u));  if (t) { goto L_0039AF00; } }
L_0039AEFC:
    c.r[16].d[0] = ld32((c.r[30].w[0] - 8u));
    c.budget -= 1;
L_0039AF00:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0039AF34; } }
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 84u), 0u);  if (t) { goto L_0039AF1C; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_0039B130; } }
L_0039AF1C:
    set32(c.r[2], 0u + 48u);
    set32(c.r[23], c.r[22].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_0039B134; } }
L_0039AF34:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 3;
L_0039AF40:
    c.r[2].d[0] = c.r[16].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[16].d[0] = c.r[16].d[0] >> 4;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AF40u | kUnwind; return; } goto L_0039AF40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0039B13C; } }
L_0039AF6C:
    c.r[2].d[0] = c.r[21].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 128ull;  if (t) { goto L_0039AF84; } }
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[30].w[0] - 8u));  if (t) { goto L_0039AF98; } }
L_0039AF84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[30], c.r[30].w[0] + 8u);  if (t) { goto L_0039AF94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0] - 8u)));  if (t) { goto L_0039AF98; } }
L_0039AF94:
    set32(c.r[16], ld32((c.r[30].w[0] - 8u)));
    c.budget -= 1;
L_0039AF98:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0039AFD0; } }
    c.r[2].d[0] = c.r[21].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 43u);  if (t) { goto L_0039AFB8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_0039AFDC; } }
L_0039AFB8:
    c.r[2].d[0] = c.r[21].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_0039AFE0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[4].w[0]);  if (t) { goto L_0039AFDC; } }
L_0039AFD0:
    set32(c.r[2], 0u + 45u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0] + 84u), c.r[5].w[0]);
    c.budget -= 3;
L_0039AFDC:
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0039AFE0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039B014; } }
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0039AFFC; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_0039B070; } }
L_0039AFFC:
    set32(c.r[2], 0u + 48u);
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    set32(c.r[17], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039B074; } }
L_0039B014:
    c.r[3].d[0] = 0ull - c.r[16].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_0039B070; } }
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 2;
L_0039B030:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B040u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_00AC(c, 7u, depth + 1u); else { c.pc = 0x003B03F8u; return; } if (c.pc != 0x0039B040u) [[unlikely]] return; }
L_0039B040:
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B058u); st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 486u, depth + 1u); else { c.pc = 0x003AFC20u; return; } if (c.pc != 0x0039B058u) [[unlikely]] return; }
L_0039B058:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B030u | kUnwind; return; } goto L_0039B030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0039B07C; } }
L_0039B070:
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 1;
L_0039B074:
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 2;
L_0039B07C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + 1u);  if (t) { goto L_0039B404; } }
L_0039B084:
    c.r[2].d[0] = c.r[21].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 128ull;  if (t) { goto L_0039B09C; } }
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[30].w[0] - 8u));  if (t) { goto L_0039B0B0; } }
L_0039B09C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[30], c.r[30].w[0] + 8u);  if (t) { goto L_0039B0AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[30].w[0] - 8u));  if (t) { goto L_0039B0B0; } }
L_0039B0AC:
    c.r[16].d[0] = ld32((c.r[30].w[0] - 8u));
    c.budget -= 1;
L_0039B0B0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0039B0E0; } }
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_0039B0CC; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_0039B130; } }
L_0039B0CC:
    set32(c.r[23], c.r[22].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_0039B134; } }
L_0039B0E0:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 4;
L_0039B0F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B100u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_00AC(c, 28u, depth + 1u); else { c.pc = 0x003B12A0u; return; } if (c.pc != 0x0039B100u) [[unlikely]] return; }
L_0039B100:
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B118u); st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0039B118u) [[unlikely]] return; }
L_0039B118:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B0F0u | kUnwind; return; } goto L_0039B0F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0039B13C; } }
L_0039B130:
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 1;
L_0039B134:
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 2;
L_0039B13C:
    set32(c.r[18], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] - c.r[17].w[0]);  if (t) { goto L_0039B408; } }
L_0039B148:
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B154u); c.r[4].d[0] = ld64((c.r[30].w[0] - 8u));  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x0039B154u) [[unlikely]] return; }
L_0039B154:
    c.f[12] = c.f[0];
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_0039B17C; } }
    set32(c.r[6], 0u + 48u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_0039B894; } }
L_0039B17C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B184u); set32(c.r[23], c.r[22].w[0] + 1u);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0039B184u) [[unlikely]] return; }
L_0039B184:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B198u); set32(c.r[6], ld32((c.r[29].w[0] + 92u)));  if (depth < kMaxDepth) unit_00A6(c, 367u, depth + 1u); else { c.pc = 0x0039AA30u; return; } if (c.pc != 0x0039B198u) [[unlikely]] return; }
L_0039B198:
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[5].w[0]);
    c.budget -= 3;
L_0039B1A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_0039B8B4; } }
L_0039B1AC:
    set32(c.r[30], c.r[30].w[0] + 8u);
    set32(c.r[3], ld32((c.r[30].w[0] - 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[21].d[0] & 32ull;  if (t) { goto L_0039B240; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 40u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B1D4u); set32(c.r[23], c.r[22].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B1D4u) [[unlikely]] return; }
L_0039B1D4:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 110u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B1E8u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B1E8u) [[unlikely]] return; }
L_0039B1E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 117u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B1FCu); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B1FCu) [[unlikely]] return; }
L_0039B1FC:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 108u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B210u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B210u) [[unlikely]] return; }
L_0039B210:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 108u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B224u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B224u) [[unlikely]] return; }
L_0039B224:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 41u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B238u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B238u) [[unlikely]] return; }
L_0039B238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_0039B8B4; } }
L_0039B240:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0039B2A0; } }
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0039B28C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_0039B28C; } }
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 3;
L_0039B268:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039B2E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B268u | kUnwind; return; } goto L_0039B268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0039B408; } }
L_0039B28C:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039B2E8; } }
L_0039B2A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0039B2DC; } }
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 3;
L_0039B2B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B2B8u | kUnwind; return; } goto L_0039B2B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0039B408; } }
L_0039B2DC:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 3;
L_0039B2E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0039B408; } }
L_0039B2F0:
    set32(c.r[30], c.r[30].w[0] + 8u);
    set32(c.r[17], ld32((c.r[29].w[0] + 76u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] - 8u)));
    c.r[21].d[0] = c.r[21].d[0] | 256ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + 1u);  if (t) { goto L_0039B404; } }
L_0039B328:
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld32((c.r[30].w[0] - 8u));
    set32(c.r[4], c.r[2].w[0] + 25008u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0039B368; } }
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_0039B354; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_0039B3A4; } }
L_0039B354:
    set32(c.r[23], c.r[22].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_0039B3A8; } }
L_0039B368:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 4;
L_0039B378:
    c.r[2].d[0] = c.r[16].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[16].d[0] = c.r[16].d[0] >> 4;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B378u | kUnwind; return; } goto L_0039B378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_0039B3B0; } }
L_0039B3A4:
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 1;
L_0039B3A8:
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    set32(c.r[2], 0u + 48u);
    c.budget -= 2;
L_0039B3B0:
    set32(c.r[3], 0u + 120u);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] - c.r[17].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_0039B408; } }
L_0039B3D4:
    set32(c.r[2], c.r[6].w[0] << 24);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0039B8B0; } }
    c.r[21].d[0] = c.r[21].d[0] | 256ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[23], c.r[22].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[18], c.r[17].w[0] + 1u);
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 9;
L_0039B404:
    set32(c.r[4], c.r[5].w[0] - c.r[17].w[0]);
    c.budget -= 1;
L_0039B408:
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] - c.r[4].w[0]);
    if (c.r[2].d[0] == 0) c.r[8].d[0] = 0ull;
    set32(c.r[3], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[17], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    c.budget -= 12;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_0039B454; } }
    c.r[2].d[0] = c.r[21].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], 0u + 32u);  if (t) { goto L_0039B474; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].sd[0] < 1ll ? 1ull : 0ull;  if (t) { goto L_0039B470; } }
L_0039B454:
    c.r[3].d[0] = c.r[21].d[0] & 36ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[7], 0u + 32u);  if (t) { goto L_0039B474; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[3], 0u + 48u);
    c.r[2].d[0] = c.r[5].sd[0] < 1ll ? 1ull : 0ull;
    c.budget -= 3;
L_0039B470:
    if (c.r[2].d[0] == 0) c.r[7].d[0] = c.r[3].d[0];
    c.budget -= 1;
L_0039B474:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  if (t) { goto L_0039B580; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0039B4D4; } }
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0039B490:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B4B0u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B4B0u) [[unlikely]] return; }
L_0039B4B0:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B490u | kUnwind; return; } goto L_0039B490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039B4D8; } }
L_0039B4D4:
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0039B4D8:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_0039B510; } }
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 2;
L_0039B4E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 48u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B500u); set32(c.r[16], c.r[16].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B500u) [[unlikely]] return; }
L_0039B500:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B4E8u | kUnwind; return; } goto L_0039B4E8; } }
L_0039B510:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_0039B548; } }
L_0039B518:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B530u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B530u) [[unlikely]] return; }
L_0039B530:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B518u | kUnwind; return; } goto L_0039B518; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 1;
L_0039B548:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B1A4u | kUnwind; return; } goto L_0039B1A4; } }
L_0039B550:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 32u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B568u); set32(c.r[16], c.r[16].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B568u) [[unlikely]] return; }
L_0039B568:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B550u | kUnwind; return; } goto L_0039B550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_0039B8B4; } }
L_0039B580:
    c.r[2].d[0] = c.r[21].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_0039B764; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[5], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_0039B648; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0039B5F4; } }
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0039B5A8:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B5CCu); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B5CCu) [[unlikely]] return; }
L_0039B5CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    st32((c.r[29].w[0] + 88u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B5A8u | kUnwind; return; } goto L_0039B5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_0039B5FC; } }
L_0039B5F4:
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 2;
L_0039B5FC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0039B6F4; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0039B608:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B628u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B628u) [[unlikely]] return; }
L_0039B628:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B608u | kUnwind; return; } goto L_0039B608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039B6F4; } }
L_0039B648:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0039B6A0; } }
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0039B658:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B678u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B678u) [[unlikely]] return; }
L_0039B678:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    st32((c.r[29].w[0] + 88u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B658u | kUnwind; return; } goto L_0039B658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  if (t) { goto L_0039B6A8; } }
L_0039B6A0:
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 2;
L_0039B6A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0039B6F4; } }
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_0039B6B8:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B6D8u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B6D8u) [[unlikely]] return; }
L_0039B6D8:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B6B8u | kUnwind; return; } goto L_0039B6B8; } }
L_0039B6F4:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_0039B728; } }
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_0039B700:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 48u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B718u); set32(c.r[16], c.r[16].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B718u) [[unlikely]] return; }
L_0039B718:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B700u | kUnwind; return; } goto L_0039B700; } }
L_0039B728:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[5].d[0] = ld8((c.r[22].w[0]));  goto L_0039B8B4; }
L_0039B730:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B748u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B748u) [[unlikely]] return; }
L_0039B748:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B730u | kUnwind; return; } goto L_0039B730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_0039B8B4; } }
L_0039B764:
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0039B7C0; } }
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0039B778:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B798u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B798u) [[unlikely]] return; }
L_0039B798:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    st32((c.r[29].w[0] + 88u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B778u | kUnwind; return; } goto L_0039B778; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  if (t) { goto L_0039B7C8; } }
L_0039B7C0:
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 2;
L_0039B7C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0039B814; } }
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_0039B7D8:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B7F8u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B7F8u) [[unlikely]] return; }
L_0039B7F8:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B7D8u | kUnwind; return; } goto L_0039B7D8; } }
L_0039B814:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_0039B848; } }
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_0039B820:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 48u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B838u); set32(c.r[16], c.r[16].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B838u) [[unlikely]] return; }
L_0039B838:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B820u | kUnwind; return; } goto L_0039B820; } }
L_0039B848:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[5].d[0] = ld8((c.r[22].w[0]));  goto L_0039B8B4; }
L_0039B850:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B868u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B868u) [[unlikely]] return; }
L_0039B868:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B850u | kUnwind; return; } goto L_0039B850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_0039B8B4; } }
L_0039B884:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_0039B8B0; } }
    set32(c.r[23], c.r[22].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 2;
L_0039B894:
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B8A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B8A0u) [[unlikely]] return; }
L_0039B8A0:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B1A4u | kUnwind; return; } goto L_0039B1A4; } }
L_0039B8B0:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_0039B8B4:
    if (c.r[5].d[0] != 0) c.r[22].d[0] = c.r[23].d[0];
    c.r[2].d[0] = ld8((c.r[22].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AC68u | kUnwind; return; } goto L_0039AC68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_0039B8D8; } }
L_0039B8CC:
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 92u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
L_0039B8D8:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B8E8u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B8E8u) [[unlikely]] return; }
L_0039B8E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 256u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 240u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 224u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_0039B920:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039B934; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0039B934:
    c.r[2].d[0] = c.r[6].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[7].w[0])));  goto L_0039B96C; }
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[4], ld32((c.r[7].w[0])));
    if (c.r[2].d[0] == 0) c.r[6].d[0] = 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0039B96C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0039B978:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0039B990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B990u);  if (depth < kMaxDepth) unit_00A6(c, 362u, depth + 1u); else { c.pc = 0x0039A8B8u; return; } if (c.pc != 0x0039B990u) [[unlikely]] return; }
L_0039B990:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039B9A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0039B9B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B9B8u);  if (depth < kMaxDepth) unit_00A6(c, 364u, depth + 1u); else { c.pc = 0x0039A968u; return; } if (c.pc != 0x0039B9B8u) [[unlikely]] return; }
L_0039B9B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039B9C8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[8].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], c.r[29].w[0] + 96u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    st64((c.r[29].w[0] + 104u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[10].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B9F4u); st64((c.r[29].w[0] + 120u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_00A6(c, 384u, depth + 1u); else { c.pc = 0x0039AC08u; return; } if (c.pc != 0x0039B9F4u) [[unlikely]] return; }
L_0039B9F4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0039BA18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 18144u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BA44u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 384u, depth + 1u); else { c.pc = 0x0039AC08u; return; } if (c.pc != 0x0039BA44u) [[unlikely]] return; }
L_0039BA44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039BA50:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 104u), c.r[7].d[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[8].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[9].d[0]);
    set32(c.r[4], c.r[4].w[0] - 18144u);
    st64((c.r[29].w[0] + 128u), c.r[10].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 136u), c.r[11].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BA8Cu); set32(c.r[8], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_00A6(c, 384u, depth + 1u); else { c.pc = 0x0039AC08u; return; } if (c.pc != 0x0039BA8Cu) [[unlikely]] return; }
L_0039BA8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0039BA98:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BABCu); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0039BABCu) [[unlikely]] return; }
L_0039BABC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 18056u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BAE0u); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00A6(c, 384u, depth + 1u); else { c.pc = 0x0039AC08u; return; } if (c.pc != 0x0039BAE0u) [[unlikely]] return; }
L_0039BAE0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0039BAF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BAF0u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0039BAF0u) [[unlikely]] return; }
L_0039BAF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0039BAF4:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039BB08:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 184u), c.r[11].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BB40u); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0039BB40u) [[unlikely]] return; }
L_0039BB40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 18056u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BB64u); set32(c.r[8], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_00A6(c, 384u, depth + 1u); else { c.pc = 0x0039AC08u; return; } if (c.pc != 0x0039BB64u) [[unlikely]] return; }
L_0039BB64:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0039BB78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BB74u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0039BB74u) [[unlikely]] return; }
L_0039BB74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0039BB78:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0039BB88:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 184u), c.r[11].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BBC0u); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0039BBC0u) [[unlikely]] return; }
L_0039BBC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 18016u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BBE4u); set32(c.r[8], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_00A6(c, 384u, depth + 1u); else { c.pc = 0x0039AC08u; return; } if (c.pc != 0x0039BBE4u) [[unlikely]] return; }
L_0039BBE4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0039BBF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BBF4u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0039BBF4u) [[unlikely]] return; }
L_0039BBF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0039BBF8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0039BC08:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0039BC28:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  c.pc = t; return; }
L_0039BC38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28928u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_0039BC80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BCA0u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0039BCA0u) [[unlikely]] return; }
L_0039BCA0:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[10].w[0] + 17160u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { goto L_0039BCD0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 96u);  [[clang::musttail]] return unit_00A8(c, 280u, depth); }
L_0039BCD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], c.r[5].w[0] + 28416u);
    set32(c.r[6], c.r[19].w[0] + 28288u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[3], 0u + 1u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[18].w[0] + 28504u);
    st32((c.r[10].w[0] + 17160u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 28928u);
    set32(c.r[8], c.r[9].w[0] + 28544u);
    st32((c.r[18].w[0] + 28504u), c.r[6].w[0]);
    set32(c.r[7], 0u + 32u);
    st32((c.r[2].w[0] + 28u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[4], c.r[3].w[0] + 384u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 26;
L_0039BD38:
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039BD38u | kUnwind; return; } goto L_0039BD38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[16], 0u + 31u);
    set32(c.r[2], c.r[2].w[0] + 28928u);
    set32(c.r[2], c.r[2].w[0] + 124u);
    c.budget -= 5;
L_0039BD68:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039BD68u | kUnwind; return; } goto L_0039BD68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], c.r[2].w[0] - 17368u);
    set32(c.r[4], c.r[9].w[0] + 28544u);
    set32(c.r[3], c.r[3].w[0] - 17400u);
    set32(c.r[17], c.r[18].w[0] + 28504u);
    st32((c.r[9].w[0] + 28544u), c.r[2].w[0]);
    set32(c.r[16], 0u + 32u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BDB4u); st32((c.r[4].w[0] + 4u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0039BDB4u) [[unlikely]] return; }
L_0039BDB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BDBCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x0039BDBCu) [[unlikely]] return; }
L_0039BDBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 57360ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0039BDE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 8176u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 3;
L_0039BDE0:
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0039BE00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BDFCu);  if (depth < kMaxDepth) unit_00A6(c, 184u, depth + 1u); else { c.pc = 0x00399200u; return; } if (c.pc != 0x0039BDFCu) [[unlikely]] return; }
L_0039BDFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 1;
L_0039BE00:
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] - 15896u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BE10u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 96u, depth + 1u); else { c.pc = 0x00398B30u; return; } if (c.pc != 0x0039BE10u) [[unlikely]] return; }
L_0039BE10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BE20u); st32((c.r[3].w[0] + 28500u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 257u, depth + 1u); else { c.pc = 0x00399A38u; return; } if (c.pc != 0x0039BE20u) [[unlikely]] return; }
L_0039BE20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BE2Cu);  if (depth < kMaxDepth) unit_00A6(c, 190u, depth + 1u); else { c.pc = 0x00399230u; return; } if (c.pc != 0x0039BE2Cu) [[unlikely]] return; }
L_0039BE2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0039BE74; } }
    set32(c.r[5], c.r[20].w[0] + 28480u);
    set32(c.r[2], c.r[19].w[0] + 28288u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[6], 0u + 20u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 16;
    { set32(c.r[29], c.r[29].w[0] + 96u);  [[clang::musttail]] return unit_00A7(c, 8u, depth); }
L_0039BE74:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 1;
L_0039BE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BE80u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_00A6(c, 190u, depth + 1u); else { c.pc = 0x00399230u; return; } if (c.pc != 0x0039BE80u) [[unlikely]] return; }
L_0039BE80:
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039BE78u | kUnwind; return; } goto L_0039BE78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BE94u); set32(c.r[16], c.r[18].w[0] + 28504u);  if (depth < kMaxDepth) unit_00A6(c, 190u, depth + 1u); else { c.pc = 0x00399230u; return; } if (c.pc != 0x0039BE94u) [[unlikely]] return; }
L_0039BE94:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BEA4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 188u, depth + 1u); else { c.pc = 0x00399220u; return; } if (c.pc != 0x0039BEA4u) [[unlikely]] return; }
L_0039BEA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BEB4u); c.r[4].d[0] = c.r[4].d[0] | 1ull;  if (depth < kMaxDepth) unit_00A6(c, 188u, depth + 1u); else { c.pc = 0x00399220u; return; } if (c.pc != 0x0039BEB4u) [[unlikely]] return; }
L_0039BEB4:
    set32(c.r[3], c.r[20].w[0] + 28480u);
    set32(c.r[2], c.r[19].w[0] + 28288u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[6], 0u + 20u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 12u), 0u);
    c.budget -= 19;
    { set32(c.r[29], c.r[29].w[0] + 96u);  [[clang::musttail]] return unit_00A7(c, 8u, depth); }
L_0039BF00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BF10u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00A6(c, 253u, depth + 1u); else { c.pc = 0x003999D0u; return; } if (c.pc != 0x0039BF10u) [[unlikely]] return; }
L_0039BF10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BF20u); set32(c.r[5], ld32((c.r[3].w[0] + 28500u)));  if (depth < kMaxDepth) unit_00A6(c, 100u, depth + 1u); else { c.pc = 0x00398B50u; return; } if (c.pc != 0x0039BF20u) [[unlikely]] return; }
L_0039BF20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 17160u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039BF38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 28504u);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[3].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 20u), c.r[4].w[0]);  c.pc = t; return; }
L_0039BF68:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0039BFAC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[5], 0u + 12u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] + 28504u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    c.r[5].d[0] = c.r[28].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_0039BFD4; } }
L_0039BFAC:
    set32(c.r[3], 0u + 12u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 28504u);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    c.r[5].d[0] = c.r[28].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 10;
L_0039BFD4:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 8u), c.r[5].w[0]);  c.pc = t; return; }
L_0039BFE0:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[2], 0u + 12u);  if (t) { [[clang::musttail]] return unit_00A7(c, 2u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[5], 0u + 12u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.budget -= 5;
    [[clang::musttail]] return unit_00A7(c, 1u, depth);
}

}
