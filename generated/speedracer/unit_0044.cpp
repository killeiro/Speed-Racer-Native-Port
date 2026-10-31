#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0044[4096] = {
    1, 2, 0, 3, 0, 0, 0, 4, 5, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22,
    0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0,
    0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 57, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0,
    0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0,
    0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0,
    0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0,
    0, 205, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0,
    212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0,
    0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0,
    225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258,
    0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0,
    0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0,
    0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0,
    0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299,
    0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0,
    309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0,
    0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0,
    0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0,
    0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0,
    0, 339, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0,
    0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0,
    0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0,
    368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    371, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0,
    0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0,
    385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0,
    0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0,
    398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0,
    405, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412,
    0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 0,
    0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0,
    0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0,
    0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0,
};

void unit_0044(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00210000;
    case 2u: goto L_00210004;
    case 3u: goto L_0021000C;
    case 4u: goto L_0021001C;
    case 5u: goto L_00210020;
    case 6u: goto L_0021002C;
    case 7u: goto L_00210040;
    case 8u: goto L_00210064;
    case 9u: goto L_00210070;
    case 10u: goto L_00210080;
    case 11u: goto L_002100A0;
    case 12u: goto L_002100AC;
    case 13u: goto L_002100BC;
    case 14u: goto L_002100D0;
    case 15u: goto L_002100E0;
    case 16u: goto L_002100F0;
    case 17u: goto L_00210110;
    case 18u: goto L_00210120;
    case 19u: goto L_00210130;
    case 20u: goto L_00210154;
    case 21u: goto L_00210168;
    case 22u: goto L_0021017C;
    case 23u: goto L_0021019C;
    case 24u: goto L_002101B0;
    case 25u: goto L_002101C0;
    case 26u: goto L_002101D4;
    case 27u: goto L_002101E4;
    case 28u: goto L_00210200;
    case 29u: goto L_0021020C;
    case 30u: goto L_0021021C;
    case 31u: goto L_00210230;
    case 32u: goto L_00210250;
    case 33u: goto L_00210260;
    case 34u: goto L_00210274;
    case 35u: goto L_00210288;
    case 36u: goto L_002102A8;
    case 37u: goto L_002102BC;
    case 38u: goto L_002102CC;
    case 39u: goto L_002102F0;
    case 40u: goto L_00210338;
    case 41u: goto L_00210348;
    case 42u: goto L_0021035C;
    case 43u: goto L_00210388;
    case 44u: goto L_0021039C;
    case 45u: goto L_002103BC;
    case 46u: goto L_002103D8;
    case 47u: goto L_002103EC;
    case 48u: goto L_00210414;
    case 49u: goto L_00210424;
    case 50u: goto L_00210440;
    case 51u: goto L_00210454;
    case 52u: goto L_00210464;
    case 53u: goto L_00210478;
    case 54u: goto L_0021048C;
    case 55u: goto L_002104AC;
    case 56u: goto L_002104F8;
    case 57u: goto L_00210514;
    case 58u: goto L_00210518;
    case 59u: goto L_00210524;
    case 60u: goto L_00210554;
    case 61u: goto L_00210564;
    case 62u: goto L_00210580;
    case 63u: goto L_00210594;
    case 64u: goto L_002105A4;
    case 65u: goto L_002105C8;
    case 66u: goto L_002105D8;
    case 67u: goto L_002105EC;
    case 68u: goto L_0021061C;
    case 69u: goto L_0021062C;
    case 70u: goto L_00210648;
    case 71u: goto L_0021065C;
    case 72u: goto L_0021066C;
    case 73u: goto L_00210680;
    case 74u: goto L_00210694;
    case 75u: goto L_002106B4;
    case 76u: goto L_002106F8;
    case 77u: goto L_00210720;
    case 78u: goto L_00210750;
    case 79u: goto L_00210760;
    case 80u: goto L_002107A8;
    case 81u: goto L_002107C8;
    case 82u: goto L_002107F0;
    case 83u: goto L_00210800;
    case 84u: goto L_00210820;
    case 85u: goto L_00210888;
    case 86u: goto L_002108A8;
    case 87u: goto L_002108C8;
    case 88u: goto L_002108D8;
    case 89u: goto L_002108F4;
    case 90u: goto L_00210908;
    case 91u: goto L_00210918;
    case 92u: goto L_00210934;
    case 93u: goto L_00210950;
    case 94u: goto L_00210964;
    case 95u: goto L_00210974;
    case 96u: goto L_00210990;
    case 97u: goto L_002109A8;
    case 98u: goto L_002109C0;
    case 99u: goto L_002109D4;
    case 100u: goto L_002109E4;
    case 101u: goto L_00210A00;
    case 102u: goto L_00210A20;
    case 103u: goto L_00210A50;
    case 104u: goto L_00210A60;
    case 105u: goto L_00210A94;
    case 106u: goto L_00210AA4;
    case 107u: goto L_00210AB4;
    case 108u: goto L_00210AD0;
    case 109u: goto L_00210B0C;
    case 110u: goto L_00210B1C;
    case 111u: goto L_00210B50;
    case 112u: goto L_00210B60;
    case 113u: goto L_00210B74;
    case 114u: goto L_00210B88;
    case 115u: goto L_00210BB8;
    case 116u: goto L_00210BC8;
    case 117u: goto L_00210BE4;
    case 118u: goto L_00210BF8;
    case 119u: goto L_00210C08;
    case 120u: goto L_00210C1C;
    case 121u: goto L_00210C30;
    case 122u: goto L_00210C50;
    case 123u: goto L_00210C64;
    case 124u: goto L_00210C78;
    case 125u: goto L_00210C94;
    case 126u: goto L_00210CA8;
    case 127u: goto L_00210CC8;
    case 128u: goto L_00210CF0;
    case 129u: goto L_00210D00;
    case 130u: goto L_00210D14;
    case 131u: goto L_00210D24;
    case 132u: goto L_00210D40;
    case 133u: goto L_00210D60;
    case 134u: goto L_00210D98;
    case 135u: goto L_00210E3C;
    case 136u: goto L_00210E48;
    case 137u: goto L_00210EA4;
    case 138u: goto L_00210EA8;
    case 139u: goto L_00210EF0;
    case 140u: goto L_00210F00;
    case 141u: goto L_00210F1C;
    case 142u: goto L_00210F28;
    case 143u: goto L_00210F3C;
    case 144u: goto L_00210F4C;
    case 145u: goto L_00210F60;
    case 146u: goto L_00210F70;
    case 147u: goto L_00210F84;
    case 148u: goto L_00210F94;
    case 149u: goto L_00210FA8;
    case 150u: goto L_00210FC0;
    case 151u: goto L_00210FDC;
    case 152u: goto L_00211040;
    case 153u: goto L_0021105C;
    case 154u: goto L_00211068;
    case 155u: goto L_00211074;
    case 156u: goto L_00211088;
    case 157u: goto L_0021109C;
    case 158u: goto L_002110B0;
    case 159u: goto L_002110CC;
    case 160u: goto L_002110EC;
    case 161u: goto L_00211110;
    case 162u: goto L_00211124;
    case 163u: goto L_0021112C;
    case 164u: goto L_00211140;
    case 165u: goto L_0021115C;
    case 166u: goto L_00211180;
    case 167u: goto L_00211190;
    case 168u: goto L_0021119C;
    case 169u: goto L_002111A4;
    case 170u: goto L_002111B0;
    case 171u: goto L_002111D0;
    case 172u: goto L_002111EC;
    case 173u: goto L_0021121C;
    case 174u: goto L_0021125C;
    case 175u: goto L_00211290;
    case 176u: goto L_002112B8;
    case 177u: goto L_002112E0;
    case 178u: goto L_002112F0;
    case 179u: goto L_00211314;
    case 180u: goto L_00211324;
    case 181u: goto L_00211344;
    case 182u: goto L_00211380;
    case 183u: goto L_00211390;
    case 184u: goto L_002113A0;
    case 185u: goto L_002113B0;
    case 186u: goto L_00211414;
    case 187u: goto L_00211424;
    case 188u: goto L_00211444;
    case 189u: goto L_00211450;
    case 190u: goto L_0021146C;
    case 191u: goto L_00211490;
    case 192u: goto L_002114A4;
    case 193u: goto L_002114E0;
    case 194u: goto L_00211508;
    case 195u: goto L_00211550;
    case 196u: goto L_00211560;
    case 197u: goto L_00211584;
    case 198u: goto L_00211594;
    case 199u: goto L_002115B4;
    case 200u: goto L_002115E0;
    case 201u: goto L_00211620;
    case 202u: goto L_0021163C;
    case 203u: goto L_00211660;
    case 204u: goto L_00211670;
    case 205u: goto L_00211684;
    case 206u: goto L_00211690;
    case 207u: goto L_002116A4;
    case 208u: goto L_002116C0;
    case 209u: goto L_002116D0;
    case 210u: goto L_002116E0;
    case 211u: goto L_002116F0;
    case 212u: goto L_00211700;
    case 213u: goto L_00211710;
    case 214u: goto L_00211728;
    case 215u: goto L_00211738;
    case 216u: goto L_00211760;
    case 217u: goto L_00211790;
    case 218u: goto L_002117AC;
    case 219u: goto L_002117D0;
    case 220u: goto L_002117F8;
    case 221u: goto L_00211808;
    case 222u: goto L_00211824;
    case 223u: goto L_00211840;
    case 224u: goto L_0021186C;
    case 225u: goto L_00211880;
    case 226u: goto L_00211890;
    case 227u: goto L_002118AC;
    case 228u: goto L_002118BC;
    case 229u: goto L_00211910;
    case 230u: goto L_00211920;
    case 231u: goto L_00211934;
    case 232u: goto L_00211940;
    case 233u: goto L_00211954;
    case 234u: goto L_00211970;
    case 235u: goto L_00211980;
    case 236u: goto L_00211990;
    case 237u: goto L_002119A0;
    case 238u: goto L_002119C0;
    case 239u: goto L_002119E0;
    case 240u: goto L_002119F0;
    case 241u: goto L_00211A08;
    case 242u: goto L_00211A28;
    case 243u: goto L_00211A38;
    case 244u: goto L_00211A54;
    case 245u: goto L_00211A68;
    case 246u: goto L_00211A78;
    case 247u: goto L_00211A90;
    case 248u: goto L_00211AA4;
    case 249u: goto L_00211AC4;
    case 250u: goto L_00211AE0;
    case 251u: goto L_00211AF0;
    case 252u: goto L_00211B10;
    case 253u: goto L_00211B90;
    case 254u: goto L_00211BF0;
    case 255u: goto L_00211C24;
    case 256u: goto L_00211C40;
    case 257u: goto L_00211C50;
    case 258u: goto L_00211C7C;
    case 259u: goto L_00211C98;
    case 260u: goto L_00211CB0;
    case 261u: goto L_00211CE4;
    case 262u: goto L_00211CF0;
    case 263u: goto L_00211D30;
    case 264u: goto L_00211D3C;
    case 265u: goto L_00211D50;
    case 266u: goto L_00211D68;
    case 267u: goto L_00211D74;
    case 268u: goto L_00211D88;
    case 269u: goto L_00211DA0;
    case 270u: goto L_00211DB4;
    case 271u: goto L_00211DE0;
    case 272u: goto L_00211DF0;
    case 273u: goto L_00211E0C;
    case 274u: goto L_00211E18;
    case 275u: goto L_00211E2C;
    case 276u: goto L_00211E3C;
    case 277u: goto L_00211E50;
    case 278u: goto L_00211E70;
    case 279u: goto L_00211E8C;
    case 280u: goto L_00211EE8;
    case 281u: goto L_00211F20;
    case 282u: goto L_00211F3C;
    case 283u: goto L_00211F48;
    case 284u: goto L_00211F60;
    case 285u: goto L_00211F70;
    case 286u: goto L_00211F84;
    case 287u: goto L_00211F98;
    case 288u: goto L_00211FE0;
    case 289u: goto L_00211FF0;
    case 290u: goto L_0021200C;
    case 291u: goto L_00212030;
    case 292u: goto L_00212040;
    case 293u: goto L_00212060;
    case 294u: goto L_0021207C;
    case 295u: goto L_002120AC;
    case 296u: goto L_00212100;
    case 297u: goto L_00212130;
    case 298u: goto L_00212154;
    case 299u: goto L_0021217C;
    case 300u: goto L_0021218C;
    case 301u: goto L_002121B0;
    case 302u: goto L_002121C0;
    case 303u: goto L_002121E0;
    case 304u: goto L_00212200;
    case 305u: goto L_00212234;
    case 306u: goto L_00212240;
    case 307u: goto L_00212298;
    case 308u: goto L_002122F0;
    case 309u: goto L_00212300;
    case 310u: goto L_00212310;
    case 311u: goto L_00212328;
    case 312u: goto L_0021233C;
    case 313u: goto L_00212380;
    case 314u: goto L_002123E4;
    case 315u: goto L_002123F4;
    case 316u: goto L_00212414;
    case 317u: goto L_00212444;
    case 318u: goto L_00212454;
    case 319u: goto L_00212470;
    case 320u: goto L_00212490;
    case 321u: goto L_002124AC;
    case 322u: goto L_002124D0;
    case 323u: goto L_002124E4;
    case 324u: goto L_00212520;
    case 325u: goto L_00212568;
    case 326u: goto L_00212578;
    case 327u: goto L_00212594;
    case 328u: goto L_002125B4;
    case 329u: goto L_002125D0;
    case 330u: goto L_002125F0;
    case 331u: goto L_00212614;
    case 332u: goto L_00212650;
    case 333u: goto L_00212660;
    case 334u: goto L_00212684;
    case 335u: goto L_00212694;
    case 336u: goto L_002126B4;
    case 337u: goto L_002126E0;
    case 338u: goto L_002126F0;
    case 339u: goto L_00212704;
    case 340u: goto L_00212710;
    case 341u: goto L_00212724;
    case 342u: goto L_00212740;
    case 343u: goto L_00212750;
    case 344u: goto L_00212760;
    case 345u: goto L_00212770;
    case 346u: goto L_00212790;
    case 347u: goto L_002127B0;
    case 348u: goto L_002127C0;
    case 349u: goto L_002127D8;
    case 350u: goto L_002127F8;
    case 351u: goto L_00212808;
    case 352u: goto L_00212824;
    case 353u: goto L_00212838;
    case 354u: goto L_00212848;
    case 355u: goto L_00212860;
    case 356u: goto L_00212874;
    case 357u: goto L_00212894;
    case 358u: goto L_002128B0;
    case 359u: goto L_002128C0;
    case 360u: goto L_002128E0;
    case 361u: goto L_00212960;
    case 362u: goto L_002129C0;
    case 363u: goto L_002129F4;
    case 364u: goto L_00212A10;
    case 365u: goto L_00212A20;
    case 366u: goto L_00212A4C;
    case 367u: goto L_00212A68;
    case 368u: goto L_00212A80;
    case 369u: goto L_00212AB4;
    case 370u: goto L_00212AC0;
    case 371u: goto L_00212B00;
    case 372u: goto L_00212B0C;
    case 373u: goto L_00212B20;
    case 374u: goto L_00212B38;
    case 375u: goto L_00212B44;
    case 376u: goto L_00212B58;
    case 377u: goto L_00212B70;
    case 378u: goto L_00212B84;
    case 379u: goto L_00212BB0;
    case 380u: goto L_00212C08;
    case 381u: goto L_00212C18;
    case 382u: goto L_00212C34;
    case 383u: goto L_00212C40;
    case 384u: goto L_00212C5C;
    case 385u: goto L_00212C80;
    case 386u: goto L_00212C90;
    case 387u: goto L_00212CAC;
    case 388u: goto L_00212CB8;
    case 389u: goto L_00212CCC;
    case 390u: goto L_00212CF0;
    case 391u: goto L_00212D04;
    case 392u: goto L_00212D14;
    case 393u: goto L_00212D28;
    case 394u: goto L_00212D38;
    case 395u: goto L_00212D4C;
    case 396u: goto L_00212D5C;
    case 397u: goto L_00212D70;
    case 398u: goto L_00212D80;
    case 399u: goto L_00212D94;
    case 400u: goto L_00212DB0;
    case 401u: goto L_00212DCC;
    case 402u: goto L_00212E28;
    case 403u: goto L_00212F50;
    case 404u: goto L_00212F6C;
    case 405u: goto L_00212F80;
    case 406u: goto L_00212F8C;
    case 407u: goto L_00212F98;
    case 408u: goto L_00212FA4;
    case 409u: goto L_00212FB0;
    case 410u: goto L_00212FD0;
    case 411u: goto L_00212FE0;
    case 412u: goto L_00212FFC;
    case 413u: goto L_00213004;
    case 414u: goto L_00213020;
    case 415u: goto L_0021303C;
    case 416u: goto L_00213044;
    case 417u: goto L_00213050;
    case 418u: goto L_0021305C;
    case 419u: goto L_00213068;
    case 420u: goto L_00213074;
    case 421u: goto L_00213090;
    case 422u: goto L_002130A4;
    case 423u: goto L_002130E4;
    case 424u: goto L_002130F0;
    case 425u: goto L_0021310C;
    case 426u: goto L_0021313C;
    case 427u: goto L_00213180;
    case 428u: goto L_002131C0;
    case 429u: goto L_002131E8;
    case 430u: goto L_0021322C;
    case 431u: goto L_00213240;
    case 432u: goto L_002132A0;
    case 433u: goto L_002132D0;
    case 434u: goto L_00213370;
    case 435u: goto L_0021338C;
    case 436u: goto L_002133C8;
    case 437u: goto L_0021357C;
    case 438u: goto L_002135B0;
    case 439u: goto L_002135B8;
    case 440u: goto L_00213638;
    case 441u: goto L_0021365C;
    case 442u: goto L_00213688;
    case 443u: goto L_002136E0;
    case 444u: goto L_00213728;
    case 445u: goto L_00213794;
    case 446u: goto L_002137D0;
    case 447u: goto L_002137F0;
    case 448u: goto L_002138E0;
    case 449u: goto L_002139D8;
    case 450u: goto L_002139E8;
    case 451u: goto L_00213B40;
    case 452u: goto L_00213C50;
    case 453u: goto L_00213C60;
    case 454u: goto L_00213D14;
    case 455u: goto L_00213D80;
    case 456u: goto L_00213DDC;
    case 457u: goto L_00213E44;
    case 458u: goto L_00213F38;
    case 459u: goto L_00213F40;
    case 460u: goto L_00213F60;
    case 461u: goto L_00213F90;
    case 462u: goto L_00213FAC;
    case 463u: goto L_00213FD0;
    case 464u: goto L_00213FE0;
    case 465u: goto L_00213FF4;
    default: bad_entry(c, 0x00210000u); return;
    }
L_00210000:
    st32((c.r[29].w[0] + 140u), c.r[16].w[0]);
    c.budget -= 1;
L_00210004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021000Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0021000Cu) [[unlikely]] return; }
L_0021000C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021001Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0021001Cu) [[unlikely]] return; }
L_0021001C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 136u), c.r[18].w[0]);  if (t) { goto L_00210040; } }
    goto L_00210024;
L_00210020:
    st32((c.r[29].w[0] + 136u), c.r[18].w[0]);
    c.budget -= 1;
L_00210024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021002Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0021002Cu) [[unlikely]] return; }
L_0021002C:
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210040u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210040u) [[unlikely]] return; }
L_00210040:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 34u));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 124u);  goto L_00210098; }
    set32(c.r[2], c.r[19].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st16((c.r[20].w[0] + 34u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210064u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x00210064u) [[unlikely]] return; }
L_00210064:
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210070u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_003D(c, 186u, depth + 1u); else { c.pc = 0x001F5890u; return; } if (c.pc != 0x00210070u) [[unlikely]] return; }
L_00210070:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210080u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x00210080u) [[unlikely]] return; }
L_00210080:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 28u)));  goto L_00210148; }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 36u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00210144; } }
L_00210098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002100A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x002100A0u) [[unlikely]] return; }
L_002100A0:
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002100ACu); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_003D(c, 186u, depth + 1u); else { c.pc = 0x001F5890u; return; } if (c.pc != 0x002100ACu) [[unlikely]] return; }
L_002100AC:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002100BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x002100BCu) [[unlikely]] return; }
L_002100BC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 116u);  goto L_00210108; }
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002100D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x002100D0u) [[unlikely]] return; }
L_002100D0:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[5], c.r[29].w[0] + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002100E0u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_003D(c, 346u, depth + 1u); else { c.pc = 0x001F6C50u; return; } if (c.pc != 0x002100E0u) [[unlikely]] return; }
L_002100E0:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002100F0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x002100F0u) [[unlikely]] return; }
L_002100F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00210144; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 36u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00210144; } }
L_00210108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210110u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x00210110u) [[unlikely]] return; }
L_00210110:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[5], c.r[29].w[0] + 116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210120u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_003D(c, 186u, depth + 1u); else { c.pc = 0x001F5890u; return; } if (c.pc != 0x00210120u) [[unlikely]] return; }
L_00210120:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210130u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x00210130u) [[unlikely]] return; }
L_00210130:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00210144; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 36u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[20].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00210144:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 1;
L_00210148:
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210154u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x00210154u) [[unlikely]] return; }
L_00210154:
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 140u)));  goto L_002101A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210168u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210168u) [[unlikely]] return; }
L_00210168:
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021017Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0021017Cu) [[unlikely]] return; }
L_0021017C:
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021019C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021019Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021019Cu) [[unlikely]] return; }
L_0021019C:
    set32(c.r[16], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_002101A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[21].w[0]), c.r[16].w[0]);  if (t) { goto L_002101C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002101B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002101B0u) [[unlikely]] return; }
L_002101B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002101C0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002101C0u) [[unlikely]] return; }
L_002101C0:
    set32(c.r[16], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002102CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002101D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002101D4u) [[unlikely]] return; }
L_002101D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002101E4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002101E4u) [[unlikely]] return; }
L_002101E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00210200; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00210200u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00210200u) [[unlikely]] return; }
L_00210200:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002102CC; } }
L_0021020C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 132u), c.r[18].w[0]);  if (t) { goto L_00210230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021021Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0021021Cu) [[unlikely]] return; }
L_0021021C:
    set32(c.r[3], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210230u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210230u) [[unlikely]] return; }
L_00210230:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 32u));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[20].w[0] + 24u);  goto L_00210254; }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 38u));
    set32(c.r[4], c.r[20].w[0] + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210250u); set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 39u, depth + 1u); else { c.pc = 0x002102F0u; return; } if (c.pc != 0x00210250u) [[unlikely]] return; }
L_00210250:
    set32(c.r[4], c.r[20].w[0] + 24u);
    c.budget -= 1;
L_00210254:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210260u); set32(c.r[6], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_0043(c, 230u, depth + 1u); else { c.pc = 0x0020F470u; return; } if (c.pc != 0x00210260u) [[unlikely]] return; }
L_00210260:
    set32(c.r[3], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002102AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210274u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210274u) [[unlikely]] return; }
L_00210274:
    set32(c.r[3], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210288u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210288u) [[unlikely]] return; }
L_00210288:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002102A8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002102A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002102A8u) [[unlikely]] return; }
L_002102A8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002102AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[21].w[0]), 0u);  if (t) { goto L_002102CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002102BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002102BCu) [[unlikely]] return; }
L_002102BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002102CCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002102CCu) [[unlikely]] return; }
L_002102CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002102F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.budget -= 12;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002106F8; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 10u));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 4u)));  goto L_002104DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_002104C0; } }
L_00210338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 124u), 0u);  if (t) { goto L_0021035C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210348u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210348u) [[unlikely]] return; }
L_00210348:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021035Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0021035Cu) [[unlikely]] return; }
L_0021035C:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[20], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[19].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { goto L_002103BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210388u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210388u) [[unlikely]] return; }
L_00210388:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021039Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0021039Cu) [[unlikely]] return; }
L_0021039C:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002103BC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002103BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002103BCu) [[unlikely]] return; }
L_002103BC:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 1u);  goto L_002104BC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 120u), 0u);  if (t) { goto L_002103EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002103D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002103D8u) [[unlikely]] return; }
L_002103D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002103ECu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002103ECu) [[unlikely]] return; }
L_002103EC:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[20], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[19], ld32((c.r[20].w[0])));
    c.budget -= 6;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 120u)));  goto L_00210468; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[29].w[0] + 120u)));  goto L_00210444; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210414u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210414u) [[unlikely]] return; }
L_00210414:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210424u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210424u) [[unlikely]] return; }
L_00210424:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00210440; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00210440u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00210440u) [[unlikely]] return; }
L_00210440:
    set32(c.r[19], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_00210444:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[20].w[0]), c.r[19].w[0]);  if (t) { goto L_00210464; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210454u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210454u) [[unlikely]] return; }
L_00210454:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210464u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210464u) [[unlikely]] return; }
L_00210464:
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_00210468:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));  goto L_002104B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210478u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210478u) [[unlikely]] return; }
L_00210478:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021048Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0021048Cu) [[unlikely]] return; }
L_0021048C:
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002104AC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002104ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002104ACu) [[unlikely]] return; }
L_002104AC:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.budget -= 1;
L_002104B0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_002104BC:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002104C0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 10u));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00210338u | kUnwind; return; } goto L_00210338; }
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[16], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 2;
L_002104DC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_002106D8; } }
    c.r[17].d[0] = ld16((c.r[18].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002104F8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002104F8u) [[unlikely]] return; }
L_002104F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22944u);
    set32(c.r[6], c.r[6].w[0] + 22784u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210518u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00210518u) [[unlikely]] return; }
    goto L_00210518;
L_00210514:
    set32(c.r[7], 0u + 4u);
    c.budget -= 1;
L_00210518:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002105AC; } }
L_00210524:
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[21], ld32((c.r[19].w[0])));
    c.budget -= 8;
    if (c.r[21].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[20].w[0] + 1u);  goto L_002105A8; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0])));  goto L_00210584; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210554u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210554u) [[unlikely]] return; }
L_00210554:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210564u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210564u) [[unlikely]] return; }
L_00210564:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00210580; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00210580u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00210580u) [[unlikely]] return; }
L_00210580:
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00210584:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[19].w[0]), c.r[17].w[0]);  if (t) { goto L_002105A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210594u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210594u) [[unlikely]] return; }
L_00210594:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002105A4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002105A4u) [[unlikely]] return; }
L_002105A4:
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002105A8:
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002105AC:
    c.r[21].d[0] = ld16((c.r[18].w[0] + 10u));
    c.r[2].d[0] = c.r[20].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00210524u | kUnwind; return; } goto L_00210524; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[18].w[0] + 8u));  if (t) { goto L_002106C0; } }
L_002105C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 116u), 0u);  if (t) { goto L_002105EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002105D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002105D8u) [[unlikely]] return; }
L_002105D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002105ECu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002105ECu) [[unlikely]] return; }
L_002105EC:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[21].d[0] & 65535ull;
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[19].w[0])));
    c.budget -= 8;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 116u)));  goto L_00210670; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 116u)));  goto L_0021064C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021061Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0021061Cu) [[unlikely]] return; }
L_0021061C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021062Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0021062Cu) [[unlikely]] return; }
L_0021062C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00210648; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00210648u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00210648u) [[unlikely]] return; }
L_00210648:
    set32(c.r[17], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 1;
L_0021064C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[19].w[0]), c.r[17].w[0]);  if (t) { goto L_0021066C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021065Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0021065Cu) [[unlikely]] return; }
L_0021065C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021066Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0021066Cu) [[unlikely]] return; }
L_0021066C:
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 1;
L_00210670:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[21].w[0] + 1u);  goto L_002106B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210680u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210680u) [[unlikely]] return; }
L_00210680:
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210694u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210694u) [[unlikely]] return; }
L_00210694:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002106B4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002106B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002106B4u) [[unlikely]] return; }
L_002106B4:
    set32(c.r[2], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002106B8:
    c.r[21].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[18].w[0] + 8u));
    c.budget -= 2;
L_002106C0:
    c.r[3].d[0] = c.r[21].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002105C8u | kUnwind; return; } goto L_002105C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002106DC; } }
L_002106D8:
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_002106DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22784u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002106F8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002106F8u) [[unlikely]] return; }
L_002106F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00210720:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 40u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210750u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00210750u) [[unlikely]] return; }
L_00210750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002107E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210760u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x00210760u) [[unlikely]] return; }
L_00210760:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 8992u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15008u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 32u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 38u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 34u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 36u), static_cast<std::uint16_t>(0u));
    c.r[20].d[0] = ld16((c.r[17].w[0] + 32u));
    c.budget -= 14;
    { const bool t = c.r[20].sd[0] <= 0; set32(c.r[16], c.r[17].w[0] + 24u);  if (t) { goto L_002107D0; } }
    set32(c.r[2], c.r[20].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002107A8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002107A8u) [[unlikely]] return; }
L_002107A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22944u);
    set32(c.r[6], c.r[6].w[0] + 22784u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002107C8u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002107C8u) [[unlikely]] return; }
L_002107C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002107D4; } }
L_002107D0:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_002107D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15024u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002107E0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002107F0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 321u, depth + 1u); else { c.pc = 0x0020FED0u; return; } if (c.pc != 0x002107F0u) [[unlikely]] return; }
L_002107F0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.budget -= 4;
L_00210800:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00210820:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 34u));
    set32(c.r[2], ld32((c.r[5].w[0] + 112u)));
    set32(c.r[4], c.r[17].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 24u));
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00210874; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_00210874:
    c.r[16].d[0] = c.r[4].d[0] & 65535ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210888u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 102u, depth + 1u); else { c.pc = 0x00210A20u; return; } if (c.pc != 0x00210888u) [[unlikely]] return; }
L_00210888:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 108u)));  goto L_0021091C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002108A8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_006E(c, 458u, depth + 1u); else { c.pc = 0x002BB6E0u; return; } if (c.pc != 0x002108A8u) [[unlikely]] return; }
L_002108A8:
    set32(c.r[16], ld32((c.r[29].w[0] + 108u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[18].d[0];  if (t) { goto L_00210918; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 108u), c.r[18].w[0]);  goto L_002108F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002108C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002108C8u) [[unlikely]] return; }
L_002108C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002108D8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002108D8u) [[unlikely]] return; }
L_002108D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002108F4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002108F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002108F4u) [[unlikely]] return; }
L_002108F4:
    st32((c.r[29].w[0] + 108u), c.r[18].w[0]);
    c.budget -= 1;
L_002108F8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00210918; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210908u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210908u) [[unlikely]] return; }
L_00210908:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210918u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210918u) [[unlikely]] return; }
L_00210918:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_0021091C:
    c.f[12] = 0u;
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210934u); set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  if (depth < kMaxDepth) unit_0087(c, 207u, depth + 1u); else { c.pc = 0x0031DF90u; return; } if (c.pc != 0x00210934u) [[unlikely]] return; }
L_00210934:
    set32(c.r[5], ld32((c.r[19].w[0] + 128u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00210950u); set32(c.r[4], c.r[29].w[0] + 104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00210950u) [[unlikely]] return; }
L_00210950:
    set32(c.r[16], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_00210994; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210964u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210964u) [[unlikely]] return; }
L_00210964:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210974u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210974u) [[unlikely]] return; }
L_00210974:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00210990; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00210990u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00210990u) [[unlikely]] return; }
L_00210990:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_00210994:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002109A8u); set32(c.r[5], ld32((c.r[2].w[0] + 212u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002109A8u) [[unlikely]] return; }
L_002109A8:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002109C0u); set32(c.r[5], ld32((c.r[2].w[0] + 216u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002109C0u) [[unlikely]] return; }
L_002109C0:
    set32(c.r[16], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00210A04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002109D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002109D4u) [[unlikely]] return; }
L_002109D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002109E4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002109E4u) [[unlikely]] return; }
L_002109E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00210A00; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00210A00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00210A00u) [[unlikely]] return; }
L_00210A00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00210A04:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00210A20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 150u));
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 144u)));  goto L_00210A6C; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_00210AB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210A50u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210A50u) [[unlikely]] return; }
L_00210A50:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210A60u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210A60u) [[unlikely]] return; }
L_00210A60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00210AB8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 144u)));
    c.budget -= 1;
L_00210A6C:
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00210AAC; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_00210AB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210A94u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210A94u) [[unlikely]] return; }
L_00210A94:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210AA4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210AA4u) [[unlikely]] return; }
L_00210AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00210AB4; } }
L_00210AAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210AB4u);  if (depth < kMaxDepth) unit_0044(c, 108u, depth + 1u); else { c.pc = 0x00210AD0u; return; } if (c.pc != 0x00210AB4u) [[unlikely]] return; }
L_00210AB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00210AB8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00210AD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 10u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00210B24; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0]), 0u);  if (t) { goto L_00210D44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210B0Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210B0Cu) [[unlikely]] return; }
L_00210B0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210B1Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210B1Cu) [[unlikely]] return; }
L_00210B1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00210D48; } }
L_00210B24:
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 10u));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 92u), c.r[16].w[0]);  if (t) { goto L_00210B60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210B50u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210B50u) [[unlikely]] return; }
L_00210B50:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210B60u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210B60u) [[unlikely]] return; }
L_00210B60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 88u), 0u);  if (t) { goto L_00210B88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210B74u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210B74u) [[unlikely]] return; }
L_00210B74:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210B88u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210B88u) [[unlikely]] return; }
L_00210B88:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 10u));
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 8;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 88u)));  goto L_00210C0C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 88u)));  goto L_00210BE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210BB8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210BB8u) [[unlikely]] return; }
L_00210BB8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210BC8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210BC8u) [[unlikely]] return; }
L_00210BC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00210BE4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00210BE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00210BE4u) [[unlikely]] return; }
L_00210BE4:
    set32(c.r[17], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00210BE8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_00210C08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210BF8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210BF8u) [[unlikely]] return; }
L_00210BF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210C08u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210C08u) [[unlikely]] return; }
L_00210C08:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00210C0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00210C54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210C1Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210C1Cu) [[unlikely]] return; }
L_00210C1C:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210C30u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210C30u) [[unlikely]] return; }
L_00210C30:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00210C50; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00210C50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00210C50u) [[unlikely]] return; }
L_00210C50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00210C54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 84u), 0u);  if (t) { goto L_00210C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210C64u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210C64u) [[unlikely]] return; }
L_00210C64:
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210C78u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210C78u) [[unlikely]] return; }
L_00210C78:
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.r[16].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_00210CC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210C94u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210C94u) [[unlikely]] return; }
L_00210C94:
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210CA8u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210CA8u) [[unlikely]] return; }
L_00210CA8:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00210CC8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00210CC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00210CC8u) [[unlikely]] return; }
L_00210CC8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 92u)));  goto L_00210CE0; }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 4;
L_00210CE0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0]), c.r[16].w[0]);  if (t) { goto L_00210D00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210CF0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210CF0u) [[unlikely]] return; }
L_00210CF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210D00u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210D00u) [[unlikely]] return; }
L_00210D00:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00210D44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210D14u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00210D14u) [[unlikely]] return; }
L_00210D14:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210D24u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00210D24u) [[unlikely]] return; }
L_00210D24:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00210D40; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00210D40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00210D40u) [[unlikely]] return; }
L_00210D40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00210D44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00210D48:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00210D60:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[17], ld32((c.r[5].w[0] + 96u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00210EAC; } }
L_00210D98:
    set32(c.r[2], ld32((c.r[21].w[0] + 112u)));
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[3], ld32((c.r[21].w[0] + 128u)));
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[22], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 218u));
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 212u)));  goto L_00210DC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00210DD4; } }
L_00210DC8:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_00210DD4:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[19].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[19].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[19].w[0] + 104u), c.f[0]);  if (t) { goto L_00210E64; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 84u)));  goto L_00210E68; }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 140u), 0u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 156u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[3].w[0]));
    c.f[14] = ld32((c.r[3].w[0] + 4u));
    c.f[15] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210E3Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_005F(c, 80u, depth + 1u); else { c.pc = 0x0027D8C0u; return; } if (c.pc != 0x00210E3Cu) [[unlikely]] return; }
L_00210E3C:
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[4], c.r[19].w[0] + 48u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_00210E48:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00210E48u | kUnwind; return; } goto L_00210E48; } }
L_00210E64:
    set32(c.r[3], ld32((c.r[21].w[0] + 84u)));
    c.budget -= 1;
L_00210E68:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[21].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 108u), c.f[0]);
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.f[12] = ld32((c.r[22].w[0] + 12u));
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00210EA4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00210EA4u) [[unlikely]] return; }
L_00210EA4:
    set32(c.r[3], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00210EA8:
    c.r[20].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_00210EAC:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 48u));
    c.r[4].d[0] = c.r[20].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = c.r[20].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00210D98u | kUnwind; return; } goto L_00210D98; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00210EF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 10288u);  c.pc = t; return; }
L_00210F00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210F1Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 411u, depth + 1u); else { c.pc = 0x002BB1A0u; return; } if (c.pc != 0x00210F1Cu) [[unlikely]] return; }
L_00210F1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210F28u); set32(c.r[4], ld32((c.r[2].w[0] - 10288u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00210F28u) [[unlikely]] return; }
L_00210F28:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210F3Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00210F3Cu) [[unlikely]] return; }
L_00210F3C:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210F4Cu); set32(c.r[4], c.r[4].w[0] - 10272u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x00210F4Cu) [[unlikely]] return; }
L_00210F4C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210F60u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00210F60u) [[unlikely]] return; }
L_00210F60:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210F70u); set32(c.r[4], c.r[4].w[0] - 10267u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x00210F70u) [[unlikely]] return; }
L_00210F70:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210F84u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00210F84u) [[unlikely]] return; }
L_00210F84:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 20u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210F94u); set32(c.r[4], c.r[4].w[0] - 10261u);  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x00210F94u) [[unlikely]] return; }
L_00210F94:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210FA8u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00210FA8u) [[unlikely]] return; }
L_00210FA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00210FC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210FDCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x00210FDCu) [[unlikely]] return; }
L_00210FDC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 8u)));  goto L_00210FEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00211020; } }
L_00210FEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  goto L_00211000; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00211020; } }
L_00211000:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00211020; }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 20u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00211020; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00211020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00211040:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021105Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x0021105Cu) [[unlikely]] return; }
L_0021105C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211068u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0081(c, 668u, depth + 1u); else { c.pc = 0x00307F40u; return; } if (c.pc != 0x00211068u) [[unlikely]] return; }
L_00211068:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211074u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00211074u) [[unlikely]] return; }
L_00211074:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00211088u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00211088u) [[unlikely]] return; }
L_00211088:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 20u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 63u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021109Cu); st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x0021109Cu) [[unlikely]] return; }
L_0021109C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002110B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002110CCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 425u, depth + 1u); else { c.pc = 0x002BB2E0u; return; } if (c.pc != 0x002110CCu) [[unlikely]] return; }
L_002110CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002110DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002110F0; } }
L_002110DC:
    set32(c.r[5], c.r[17].w[0] + 8u);
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002110ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002110ECu) [[unlikely]] return; }
L_002110EC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002110F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00211110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211124u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 427u, depth + 1u); else { c.pc = 0x002BB310u; return; } if (c.pc != 0x00211124u) [[unlikely]] return; }
L_00211124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021112Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x0021112Cu) [[unlikely]] return; }
L_0021112C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00211140:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021115Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x0021115Cu) [[unlikely]] return; }
L_0021115C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x14010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00211188; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211180u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0081(c, 672u, depth + 1u); else { c.pc = 0x00307FD0u; return; } if (c.pc != 0x00211180u) [[unlikely]] return; }
L_00211180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00211194; } }
L_00211188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211190u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0082(c, 20u, depth + 1u); else { c.pc = 0x00308230u; return; } if (c.pc != 0x00211190u) [[unlikely]] return; }
L_00211190:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00211194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021119Cu); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0021119Cu) [[unlikely]] return; }
L_0021119C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002111A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x002111A4u) [[unlikely]] return; }
L_002111A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002111B0u); set32(c.r[5], c.r[29].w[0] + 63u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002111B0u) [[unlikely]] return; }
L_002111B0:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 63u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002111D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002111ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 450u, depth + 1u); else { c.pc = 0x002BB580u; return; } if (c.pc != 0x002111ECu) [[unlikely]] return; }
L_002111EC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[16].w[0], c.r[6].w[0]);  if (t) { goto L_00211208; } }
    breakpoint(c, 0x00211204u);
    c.budget -= 1;
L_00211208:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_0021122C; } }
L_0021121C:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_0021122C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_00211234; } }
L_0021122C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021121Cu | kUnwind; return; } goto L_0021121C; }
L_00211234:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[4].w[0], c.r[6].w[0]);  if (t) { goto L_00211248; } }
    breakpoint(c, 0x00211244u);
    c.budget -= 1;
L_00211248:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_0021126C; } }
L_0021125C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_0021126C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[5].w[0] + 8u)));  if (t) { goto L_00211274; } }
L_0021126C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021125Cu | kUnwind; return; } goto L_0021125C; }
L_00211274:
    st32((c.r[7].w[0] + 16u), c.r[8].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00211290:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002112B8u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 446u, depth + 1u); else { c.pc = 0x002BB4A0u; return; } if (c.pc != 0x002112B8u) [[unlikely]] return; }
L_002112B8:
    set32(c.r[19], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  goto L_0021134C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  goto L_002112F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002112E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002112E0u) [[unlikely]] return; }
L_002112E0:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002112F0u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002112F0u) [[unlikely]] return; }
L_002112F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_002112F4:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[18].d[0]) { st32((c.r[16].w[0] + 8u), c.r[19].w[0]);  goto L_00211348; }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211314u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00211314u) [[unlikely]] return; }
L_00211314:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211324u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00211324u) [[unlikely]] return; }
L_00211324:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00211344; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211344u); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00211344u) [[unlikely]] return; }
L_00211344:
    st32((c.r[16].w[0] + 8u), c.r[19].w[0]);
    c.budget -= 1;
L_00211348:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_0021134C:
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 20u));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00211380:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[5].w[0]);  c.pc = t; return; }
L_00211390:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002113A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002113B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0021146C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[19].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] - 8880u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_00211444; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00211448; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211414u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00211414u) [[unlikely]] return; }
L_00211414:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211424u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00211424u) [[unlikely]] return; }
L_00211424:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00211444; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211444u); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00211444u) [[unlikely]] return; }
L_00211444:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00211448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211450u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x00211450u) [[unlikely]] return; }
L_00211450:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_00211470; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021146Cu); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0021146Cu) [[unlikely]] return; }
L_0021146C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00211470:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00211490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002114A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002114A4u) [[unlikely]] return; }
L_002114A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20312u)));
    set32(c.r[3], c.r[3].w[0] - 8880u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002114E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211508u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x00211508u) [[unlikely]] return; }
L_00211508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], ld32((c.r[2].w[0] + 20312u)));
    set32(c.r[3], c.r[3].w[0] - 8880u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[18], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 14;
    if (c.r[2].d[0] == c.r[18].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002115BC; }
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_00211564; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211550u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00211550u) [[unlikely]] return; }
L_00211550:
    set32(c.r[2], ld32((c.r[18].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211560u); st32((c.r[18].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00211560u) [[unlikely]] return; }
L_00211560:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_00211564:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[17].d[0]) { st32((c.r[16].w[0] + 8u), c.r[18].w[0]);  goto L_002115B8; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[17], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211584u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00211584u) [[unlikely]] return; }
L_00211584:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211594u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00211594u) [[unlikely]] return; }
L_00211594:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002115B4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002115B4u); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002115B4u) [[unlikely]] return; }
L_002115B4:
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 1;
L_002115B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002115BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002115E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021163C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 8768u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00211620; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211620u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x00211620u) [[unlikely]] return; }
L_00211620:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00211640; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021163Cu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0021163Cu) [[unlikely]] return; }
L_0021163C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00211640:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00211660:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 10232u);  c.pc = t; return; }
L_00211670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211684u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 230u, depth + 1u); else { c.pc = 0x00211920u; return; } if (c.pc != 0x00211684u) [[unlikely]] return; }
L_00211684:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211690u); set32(c.r[4], ld32((c.r[2].w[0] - 10232u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00211690u) [[unlikely]] return; }
L_00211690:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002116A4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002116A4u) [[unlikely]] return; }
L_002116A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002116C0:
    c.budget -= 2;
    {  goto L_00211970; }
L_002116D0:
    c.budget -= 2;
    {  goto L_00211980; }
L_002116E0:
    c.budget -= 2;
    {  goto L_00211990; }
L_002116F0:
    c.budget -= 2;
    {  goto L_002119A0; }
L_00211700:
    c.budget -= 2;
    {  goto L_00211A90; }
L_00211710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211728u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00211728u) [[unlikely]] return; }
L_00211728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00211744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211738u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 269u, depth + 1u); else { c.pc = 0x00211DA0u; return; } if (c.pc != 0x00211738u) [[unlikely]] return; }
L_00211738:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 8768u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00211744:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00211760:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002117AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211790u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x00211790u) [[unlikely]] return; }
L_00211790:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002117B0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002117ACu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002117ACu) [[unlikely]] return; }
L_002117AC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002117B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002117D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002117F8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002117F8u) [[unlikely]] return; }
L_002117F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00211814; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211808u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 269u, depth + 1u); else { c.pc = 0x00211DA0u; return; } if (c.pc != 0x00211808u) [[unlikely]] return; }
L_00211808:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 8768u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00211814:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211824u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 250u, depth + 1u); else { c.pc = 0x00211AE0u; return; } if (c.pc != 0x00211824u) [[unlikely]] return; }
L_00211824:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00211840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 7;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00211870; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021186Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021186Cu) [[unlikely]] return; }
L_0021186C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00211870:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00211880:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 20u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00211890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002118ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 304u, depth + 1u); else { c.pc = 0x00212200u; return; } if (c.pc != 0x002118ACu) [[unlikely]] return; }
L_002118AC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 264u)));  goto L_002118DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002118F4; } }
L_002118BC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], ld32((c.r[4].w[0])));  if (t) { goto L_002118DC; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002118DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002118E8; } }
L_002118DC:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002118BCu | kUnwind; return; } goto L_002118BC; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002118E8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002118F4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002118F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00211910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 10192u);  c.pc = t; return; }
L_00211920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211934u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 272u, depth + 1u); else { c.pc = 0x00211DF0u; return; } if (c.pc != 0x00211934u) [[unlikely]] return; }
L_00211934:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211940u); set32(c.r[4], ld32((c.r[2].w[0] - 10192u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00211940u) [[unlikely]] return; }
L_00211940:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211954u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00211954u) [[unlikely]] return; }
L_00211954:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00211970:
    c.budget -= 2;
    {  goto L_00211E70; }
L_00211980:
    c.budget -= 2;
    {  goto L_00211F20; }
L_00211990:
    c.budget -= 2;
    {  goto L_00211F60; }
L_002119A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002119C0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 288u, depth + 1u); else { c.pc = 0x00211FE0u; return; } if (c.pc != 0x002119C0u) [[unlikely]] return; }
L_002119C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 104ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00211A7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002119E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002119E0u) [[unlikely]] return; }
L_002119E0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002119F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002119F0u) [[unlikely]] return; }
L_002119F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 52u)));  goto L_00211A10; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211A08u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 105u, depth + 1u); else { c.pc = 0x00248EB0u; return; } if (c.pc != 0x00211A08u) [[unlikely]] return; }
L_00211A08:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 2;
L_00211A10:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { goto L_00211A78; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 52u), c.r[16].w[0]);  goto L_00211A58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211A28u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00211A28u) [[unlikely]] return; }
L_00211A28:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211A38u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00211A38u) [[unlikely]] return; }
L_00211A38:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00211A54; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00211A54u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00211A54u) [[unlikely]] return; }
L_00211A54:
    st32((c.r[17].w[0] + 52u), c.r[16].w[0]);
    c.budget -= 1;
L_00211A58:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00211A78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211A68u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00211A68u) [[unlikely]] return; }
L_00211A68:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211A78u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00211A78u) [[unlikely]] return; }
L_00211A78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00211A7C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00211A90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211AA4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 289u, depth + 1u); else { c.pc = 0x00211FF0u; return; } if (c.pc != 0x00211AA4u) [[unlikely]] return; }
L_00211AA4:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 104ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00211AC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211AC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x00211AC4u) [[unlikely]] return; }
L_00211AC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00211AC8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00211AE0:
    c.budget -= 2;
    {  goto L_00212130; }
L_00211AF0:
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00210000u < 16384u) { entry = entries_0044[(t - 0x00210000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00211B10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 8ull;  goto L_00211B44; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13528u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.f[0]);  if (t) { goto L_00211C00; } }
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 1;
L_00211B44:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_00211BCC; }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = c.r[4].d[0] & 64ull;  goto L_00211B78; }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00211B74; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00211BCC; } }
L_00211B74:
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 1;
L_00211B78:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));  goto L_00211BC0; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00211B90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00211B90u) [[unlikely]] return; }
L_00211B90:
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[16].w[0] + 40u), c.f[0]);  goto L_00211BBC; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00211BB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00211BCC; } }
L_00211BB8:
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.budget -= 1;
L_00211BBC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.budget -= 1;
L_00211BC0:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 65407ull;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00211BCC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  goto L_00211C04; }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00211C44; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00211BF0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00211BF0u) [[unlikely]] return; }
L_00211BF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00211C00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00211C40; } }
L_00211C00:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_00211C04:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00211C40; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00211C24u); set32(c.r[6], c.r[29].w[0] + 47u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00211C24u) [[unlikely]] return; }
L_00211C24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00211C40; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 47u));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00211C40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00211C40u) [[unlikely]] return; }
L_00211C40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00211C44:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00211C50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 52u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211C7Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00211C7Cu) [[unlikely]] return; }
L_00211C7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00211C9C; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211C98u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 11u, depth + 1u); else { c.pc = 0x00240110u; return; } if (c.pc != 0x00211C98u) [[unlikely]] return; }
L_00211C98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00211C9C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00211CB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00211CD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00211D1C; } }
L_00211CD4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00211CE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00211CE4u) [[unlikely]] return; }
L_00211CE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 11224u);  if (t) { goto L_00211D00; } }
L_00211CF0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00211D00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00211D0C; } }
L_00211D00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00211CF0u | kUnwind; return; } goto L_00211CF0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00211D0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00211D1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00211D1C; } }
L_00211D1C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00211D30u); set32(c.r[5], c.r[29].w[0] + 63u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00211D30u) [[unlikely]] return; }
L_00211D30:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 63u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211D3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 18u, depth + 1u); else { c.pc = 0x00248260u; return; } if (c.pc != 0x00211D3Cu) [[unlikely]] return; }
L_00211D3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00211D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00211D68u); set32(c.r[5], c.r[29].w[0] + 31u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00211D68u) [[unlikely]] return; }
L_00211D68:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211D74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00211D74u) [[unlikely]] return; }
L_00211D74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00211D8C; }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 31u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211D88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 45u, depth + 1u); else { c.pc = 0x00248590u; return; } if (c.pc != 0x00211D88u) [[unlikely]] return; }
L_00211D88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00211D8C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00211DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211DB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 322u, depth + 1u); else { c.pc = 0x002124D0u; return; } if (c.pc != 0x00211DB4u) [[unlikely]] return; }
L_00211DB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 8576u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00211DE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 10152u);  c.pc = t; return; }
L_00211DF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211E0Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 254u, depth + 1u); else { c.pc = 0x00272B50u; return; } if (c.pc != 0x00211E0Cu) [[unlikely]] return; }
L_00211E0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211E18u); set32(c.r[4], ld32((c.r[2].w[0] - 10152u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00211E18u) [[unlikely]] return; }
L_00211E18:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211E2Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00211E2Cu) [[unlikely]] return; }
L_00211E2C:
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211E3Cu); set32(c.r[4], c.r[4].w[0] - 10144u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x00211E3Cu) [[unlikely]] return; }
L_00211E3C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211E50u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00211E50u) [[unlikely]] return; }
L_00211E50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00211E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211E8Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 259u, depth + 1u); else { c.pc = 0x00272BC0u; return; } if (c.pc != 0x00211E8Cu) [[unlikely]] return; }
L_00211E8C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 60u)));  goto L_00211E9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00211F0C; } }
L_00211E9C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00211EB0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00211F0C; }
L_00211EB0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00211EC4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00211EF0; } }
L_00211EC4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 56u)));  goto L_00211F00; }
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00211EFC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00211EE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00211EE8u) [[unlikely]] return; }
L_00211EE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00211EFC; } }
L_00211EF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00211F0C; } }
L_00211EFC:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_00211F00:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00211F0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00211F20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211F3Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 262u, depth + 1u); else { c.pc = 0x00272C60u; return; } if (c.pc != 0x00211F3Cu) [[unlikely]] return; }
L_00211F3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211F48u); set32(c.r[5], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_0081(c, 668u, depth + 1u); else { c.pc = 0x00307F40u; return; } if (c.pc != 0x00211F48u) [[unlikely]] return; }
L_00211F48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00211F60:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_005C(c, 265u, depth); }
L_00211F70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211F84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 426u, depth + 1u); else { c.pc = 0x002BB300u; return; } if (c.pc != 0x00211F84u) [[unlikely]] return; }
L_00211F84:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00211FCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 264u)));  if (t) { goto L_00211FB8; } }
L_00211F98:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_00211FB8; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00211FB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[6].w[0]);  if (t) { goto L_00211FC8; } }
L_00211FB8:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[6], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00211F98u | kUnwind; return; } goto L_00211F98; }
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 60u), c.r[6].w[0]);
    c.budget -= 2;
L_00211FC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00211FCC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00211FE0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_005C(c, 268u, depth); }
L_00211FF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021200Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 270u, depth + 1u); else { c.pc = 0x00272D50u; return; } if (c.pc != 0x0021200Cu) [[unlikely]] return; }
L_0021200C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x14010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00212038; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212030u); set32(c.r[5], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_0081(c, 672u, depth + 1u); else { c.pc = 0x00307FD0u; return; } if (c.pc != 0x00212030u) [[unlikely]] return; }
L_00212030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00212044; } }
L_00212038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212040u); set32(c.r[5], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_0082(c, 20u, depth + 1u); else { c.pc = 0x00308230u; return; } if (c.pc != 0x00212040u) [[unlikely]] return; }
L_00212040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00212044:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00212060:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021207Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 278u, depth + 1u); else { c.pc = 0x00272E20u; return; } if (c.pc != 0x0021207Cu) [[unlikely]] return; }
L_0021207C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[16].w[0], c.r[6].w[0]);  if (t) { goto L_00212098; } }
    breakpoint(c, 0x00212094u);
    c.budget -= 1;
L_00212098:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_002120BC; } }
L_002120AC:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_002120BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_002120C4; } }
L_002120BC:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002120ACu | kUnwind; return; } goto L_002120AC; }
L_002120C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0021211C; } }
    set32(c.r[3], ld32((c.r[8].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00212120; }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[4].w[0], c.r[6].w[0]);  if (t) { goto L_002120EC; } }
    breakpoint(c, 0x002120E8u);
    c.budget -= 1;
L_002120EC:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_00212110; } }
L_00212100:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_00212110; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[5].w[0] + 8u)));  if (t) { goto L_00212118; } }
L_00212110:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00212100u | kUnwind; return; } goto L_00212100; }
L_00212118:
    st32((c.r[7].w[0] + 60u), c.r[8].w[0]);
    c.budget -= 1;
L_0021211C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00212120:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00212130:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212154u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 281u, depth + 1u); else { c.pc = 0x00272E70u; return; } if (c.pc != 0x00212154u) [[unlikely]] return; }
L_00212154:
    set32(c.r[17], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[17].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002121E8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 56u)));  goto L_00212190; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021217Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0021217Cu) [[unlikely]] return; }
L_0021217C:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021218Cu); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0021218Cu) [[unlikely]] return; }
L_0021218C:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 1;
L_00212190:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 56u), c.r[17].w[0]);  goto L_002121E4; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002121B0u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002121B0u) [[unlikely]] return; }
L_002121B0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002121C0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002121C0u) [[unlikely]] return; }
L_002121C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002121E0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002121E0u); set32(c.r[5], c.r[19].w[0] + 56u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002121E0u) [[unlikely]] return; }
L_002121E0:
    st32((c.r[19].w[0] + 56u), c.r[17].w[0]);
    c.budget -= 1;
L_002121E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002121E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00212200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00212224; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00212260; } }
L_00212224:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00212234u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00212234u) [[unlikely]] return; }
L_00212234:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 13368u);  if (t) { goto L_00212250; } }
L_00212240:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00212250; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0021225C; } }
L_00212250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00212240u | kUnwind; return; } goto L_00212240; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021225C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00212260:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002122D8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  goto L_00212288; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002122D8; } }
L_00212288:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002122D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 264u)));  if (t) { goto L_002122B8; } }
L_00212298:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], ld32((c.r[4].w[0])));  if (t) { goto L_002122B8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002122B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002122C4; } }
L_002122B8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00212298u | kUnwind; return; } goto L_00212298; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002122C4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002122D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002122D8; } }
L_002122D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002122D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002122F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 56u)));  c.pc = t; return; }
L_00212300:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00212310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 60u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212328u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 183u, depth + 1u); else { c.pc = 0x0031DCD0u; return; } if (c.pc != 0x00212328u) [[unlikely]] return; }
L_00212328:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00212370; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 264u)));  if (t) { goto L_0021235C; } }
L_0021233C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_0021235C; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0021235C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[6].w[0]);  if (t) { goto L_0021236C; } }
L_0021235C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[6], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021233Cu | kUnwind; return; } goto L_0021233C; }
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 60u), c.r[6].w[0]);
    c.budget -= 2;
L_0021236C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00212370:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00212380:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002124AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[19].w[0] + 56u);
    set32(c.r[3], c.r[3].w[0] - 8384u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_00212414; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00212414; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002123E4u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002123E4u) [[unlikely]] return; }
L_002123E4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002123F4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002123F4u) [[unlikely]] return; }
L_002123F4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00212414; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212414u); set32(c.r[5], c.r[19].w[0] + 56u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00212414u) [[unlikely]] return; }
L_00212414:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_00212494; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[19].w[0] + 52u);
    set32(c.r[3], c.r[3].w[0] + 5104u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_00212470; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00212470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212444u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00212444u) [[unlikely]] return; }
L_00212444:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212454u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00212454u) [[unlikely]] return; }
L_00212454:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00212470; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00212470u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00212470u) [[unlikely]] return; }
L_00212470:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00212490; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2336u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212490u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 245u, depth + 1u); else { c.pc = 0x0031E610u; return; } if (c.pc != 0x00212490u) [[unlikely]] return; }
L_00212490:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_00212494:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_002124B0; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002124ACu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002124ACu) [[unlikely]] return; }
L_002124AC:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002124B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002124D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002124E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 305u, depth + 1u); else { c.pc = 0x002730C0u; return; } if (c.pc != 0x002124E4u) [[unlikely]] return; }
L_002124E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    set32(c.r[2], c.r[2].w[0] - 8384u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00212520:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002125D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 52u);
    set32(c.r[3], c.r[3].w[0] + 5104u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00212594; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00212594; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212568u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00212568u) [[unlikely]] return; }
L_00212568:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212578u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00212578u) [[unlikely]] return; }
L_00212578:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00212594; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00212594u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00212594u) [[unlikely]] return; }
L_00212594:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002125B8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2336u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002125B4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 245u, depth + 1u); else { c.pc = 0x0031E610u; return; } if (c.pc != 0x002125B4u) [[unlikely]] return; }
L_002125B4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002125B8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002125D4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002125D0u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002125D0u) [[unlikely]] return; }
L_002125D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002125D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002125F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212614u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 305u, depth + 1u); else { c.pc = 0x002730C0u; return; } if (c.pc != 0x00212614u) [[unlikely]] return; }
L_00212614:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    set32(c.r[3], c.r[3].w[0] - 8384u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0] + 56u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 60u), 0u);
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 11;
    if (c.r[2].d[0] == c.r[17].d[0]) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_002126BC; }
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 56u)));  goto L_00212664; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212650u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00212650u) [[unlikely]] return; }
L_00212650:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212660u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00212660u) [[unlikely]] return; }
L_00212660:
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 1;
L_00212664:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 56u), c.r[17].w[0]);  goto L_002126B8; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212684u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00212684u) [[unlikely]] return; }
L_00212684:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212694u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00212694u) [[unlikely]] return; }
L_00212694:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002126B4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002126B4u); set32(c.r[5], c.r[19].w[0] + 56u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002126B4u) [[unlikely]] return; }
L_002126B4:
    st32((c.r[19].w[0] + 56u), c.r[17].w[0]);
    c.budget -= 1;
L_002126B8:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002126BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002126E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 10104u);  c.pc = t; return; }
L_002126F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212704u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 272u, depth + 1u); else { c.pc = 0x00211DF0u; return; } if (c.pc != 0x00212704u) [[unlikely]] return; }
L_00212704:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212710u); set32(c.r[4], ld32((c.r[2].w[0] - 10104u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00212710u) [[unlikely]] return; }
L_00212710:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212724u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00212724u) [[unlikely]] return; }
L_00212724:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00212740:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00211E70u | kUnwind; return; } goto L_00211E70; }
L_00212750:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00211F20u | kUnwind; return; } goto L_00211F20; }
L_00212760:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00211F60u | kUnwind; return; } goto L_00211F60; }
L_00212770:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212790u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 288u, depth + 1u); else { c.pc = 0x00211FE0u; return; } if (c.pc != 0x00212790u) [[unlikely]] return; }
L_00212790:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 104ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0021284C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002127B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002127B0u) [[unlikely]] return; }
L_002127B0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002127C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002127C0u) [[unlikely]] return; }
L_002127C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 52u)));  goto L_002127E0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002127D8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 240u, depth + 1u); else { c.pc = 0x0025DD40u; return; } if (c.pc != 0x002127D8u) [[unlikely]] return; }
L_002127D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 2;
L_002127E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { goto L_00212848; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 52u), c.r[16].w[0]);  goto L_00212828; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002127F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002127F8u) [[unlikely]] return; }
L_002127F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212808u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00212808u) [[unlikely]] return; }
L_00212808:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00212824; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00212824u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00212824u) [[unlikely]] return; }
L_00212824:
    st32((c.r[17].w[0] + 52u), c.r[16].w[0]);
    c.budget -= 1;
L_00212828:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00212848; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212838u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00212838u) [[unlikely]] return; }
L_00212838:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212848u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00212848u) [[unlikely]] return; }
L_00212848:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0021284C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00212860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212874u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 289u, depth + 1u); else { c.pc = 0x00211FF0u; return; } if (c.pc != 0x00212874u) [[unlikely]] return; }
L_00212874:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 104ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00212898; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212894u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x00212894u) [[unlikely]] return; }
L_00212894:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00212898:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002128B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00212130u | kUnwind; return; } goto L_00212130; }
L_002128C0:
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00210000u < 16384u) { entry = entries_0044[(t - 0x00210000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002128E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 8ull;  goto L_00212914; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13528u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.f[0]);  if (t) { goto L_002129D0; } }
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 1;
L_00212914:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0021299C; }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = c.r[4].d[0] & 64ull;  goto L_00212948; }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00212944; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021299C; } }
L_00212944:
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 1;
L_00212948:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));  goto L_00212990; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00212960u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00212960u) [[unlikely]] return; }
L_00212960:
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[16].w[0] + 40u), c.f[0]);  goto L_0021298C; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00212988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0021299C; } }
L_00212988:
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.budget -= 1;
L_0021298C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.budget -= 1;
L_00212990:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 65407ull;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0021299C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  goto L_002129D4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00212A14; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002129C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002129C0u) [[unlikely]] return; }
L_002129C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002129D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00212A10; } }
L_002129D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_002129D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00212A10; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002129F4u); set32(c.r[6], c.r[29].w[0] + 44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002129F4u) [[unlikely]] return; }
L_002129F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00212A10; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[29].w[0] + 44u));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00212A10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00212A10u) [[unlikely]] return; }
L_00212A10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00212A14:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00212A20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 52u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212A4Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00212A4Cu) [[unlikely]] return; }
L_00212A4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00212A6C; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212A68u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 87u, depth + 1u); else { c.pc = 0x00241010u; return; } if (c.pc != 0x00212A68u) [[unlikely]] return; }
L_00212A68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00212A6C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00212A80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00212AA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00212AEC; } }
L_00212AA4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00212AB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00212AB4u) [[unlikely]] return; }
L_00212AB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 13224u);  if (t) { goto L_00212AD0; } }
L_00212AC0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00212AD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00212ADC; } }
L_00212AD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00212AC0u | kUnwind; return; } goto L_00212AC0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00212ADC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00212AEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00212AEC; } }
L_00212AEC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00212B00u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00212B00u) [[unlikely]] return; }
L_00212B00:
    c.f[12] = ld32((c.r[29].w[0] + 60u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212B0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 210u, depth + 1u); else { c.pc = 0x0025D980u; return; } if (c.pc != 0x00212B0Cu) [[unlikely]] return; }
L_00212B0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00212B20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00212B38u); set32(c.r[5], c.r[29].w[0] + 28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00212B38u) [[unlikely]] return; }
L_00212B38:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212B44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00212B44u) [[unlikely]] return; }
L_00212B44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00212B5C; }
    c.f[12] = ld32((c.r[29].w[0] + 28u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212B58u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 236u, depth + 1u); else { c.pc = 0x0025DCC0u; return; } if (c.pc != 0x00212B58u) [[unlikely]] return; }
L_00212B58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00212B5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00212B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212B84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 322u, depth + 1u); else { c.pc = 0x002124D0u; return; } if (c.pc != 0x00212B84u) [[unlikely]] return; }
L_00212B84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 8208u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00212BB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00212C5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 8016u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00212C40; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 40u);
    set32(c.r[3], c.r[3].w[0] - 13680u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00212C34; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00212C38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212C08u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00212C08u) [[unlikely]] return; }
L_00212C08:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212C18u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00212C18u) [[unlikely]] return; }
L_00212C18:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00212C34; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00212C34u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00212C34u) [[unlikely]] return; }
L_00212C34:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00212C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212C40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x00212C40u) [[unlikely]] return; }
L_00212C40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00212C60; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212C5Cu); set32(c.r[5], 0u + 304u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00212C5Cu) [[unlikely]] return; }
L_00212C5C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00212C60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00212C80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 10072u);  c.pc = t; return; }
L_00212C90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212CACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 152u, depth + 1u); else { c.pc = 0x001FDAE0u; return; } if (c.pc != 0x00212CACu) [[unlikely]] return; }
L_00212CAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212CB8u); set32(c.r[4], ld32((c.r[2].w[0] - 10072u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00212CB8u) [[unlikely]] return; }
L_00212CB8:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212CCCu); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00212CCCu) [[unlikely]] return; }
L_00212CCC:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00212CE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_00212CE4; } }
L_00212CE0:
    set32(c.r[5], c.r[5].w[0] - 10032u);
    c.budget -= 1;
L_00212CE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212CF0u); set32(c.r[4], c.r[4].w[0] - 10048u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x00212CF0u) [[unlikely]] return; }
L_00212CF0:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212D04u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00212D04u) [[unlikely]] return; }
L_00212D04:
    c.f[12] = ld32((c.r[17].w[0] + 48u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212D14u); set32(c.r[4], c.r[4].w[0] - 10027u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x00212D14u) [[unlikely]] return; }
L_00212D14:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212D28u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00212D28u) [[unlikely]] return; }
L_00212D28:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212D38u); set32(c.r[4], c.r[4].w[0] - 10021u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x00212D38u) [[unlikely]] return; }
L_00212D38:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212D4Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00212D4Cu) [[unlikely]] return; }
L_00212D4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212D5Cu); set32(c.r[5], c.r[5].w[0] - 10014u);  if (depth < kMaxDepth) unit_0072(c, 36u, depth + 1u); else { c.pc = 0x002C84C0u; return; } if (c.pc != 0x00212D5Cu) [[unlikely]] return; }
L_00212D5C:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212D70u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00212D70u) [[unlikely]] return; }
L_00212D70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212D80u); set32(c.r[5], c.r[5].w[0] - 10007u);  if (depth < kMaxDepth) unit_0072(c, 36u, depth + 1u); else { c.pc = 0x002C84C0u; return; } if (c.pc != 0x00212D80u) [[unlikely]] return; }
L_00212D80:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212D94u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00212D94u) [[unlikely]] return; }
L_00212D94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00212DB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212DCCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 167u, depth + 1u); else { c.pc = 0x001FDC20u; return; } if (c.pc != 0x00212DCCu) [[unlikely]] return; }
L_00212DCC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 44u)));  goto L_00212DDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00212F30; } }
L_00212DDC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00212DF0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00212F30; }
L_00212DF0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00212E04; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00212E30; } }
L_00212E04:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 48u));  goto L_00212E40; }
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00212E3C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00212E28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00212E28u) [[unlikely]] return; }
L_00212E28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00212E3C; } }
L_00212E30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00212F30; } }
L_00212E3C:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.budget -= 1;
L_00212E40:
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_00212F30; }
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00212F2C; } }
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00212E7C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00212E7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00212E9C; } }
    c.f[1] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00212E9C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00212E9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_00212EC0; }
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00212EBC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00212EBC:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_00212EC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00212F2C; } }
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00212EE0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00212EE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00212F00; } }
    c.f[1] = ld32((c.r[17].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00212F00; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00212F00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_00212F24; }
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00212F20; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00212F20:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_00212F24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00212F30; }
L_00212F2C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00212F30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00212F50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212F6Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 171u, depth + 1u); else { c.pc = 0x001FDDA0u; return; } if (c.pc != 0x00212F6Cu) [[unlikely]] return; }
L_00212F6C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00212F80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00212F80u) [[unlikely]] return; }
L_00212F80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212F8Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00212F8Cu) [[unlikely]] return; }
L_00212F8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212F98u); set32(c.r[5], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00212F98u) [[unlikely]] return; }
L_00212F98:
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212FA4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x00212FA4u) [[unlikely]] return; }
L_00212FA4:
    set32(c.r[4], c.r[17].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212FB0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x00212FB0u) [[unlikely]] return; }
L_00212FB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00212FD0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FDE40u | kUnwind; return; } [[clang::musttail]] return unit_003F(c, 179u, depth); }
L_00212FE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212FFCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 182u, depth + 1u); else { c.pc = 0x001FDEA0u; return; } if (c.pc != 0x00212FFCu) [[unlikely]] return; }
L_00212FFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213004u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x00213004u) [[unlikely]] return; }
L_00213004:
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00213020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021303Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 192u, depth + 1u); else { c.pc = 0x001FDF70u; return; } if (c.pc != 0x0021303Cu) [[unlikely]] return; }
L_0021303C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213044u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x00213044u) [[unlikely]] return; }
L_00213044:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213050u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00213050u) [[unlikely]] return; }
L_00213050:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021305Cu); set32(c.r[5], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0021305Cu) [[unlikely]] return; }
L_0021305C:
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213068u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x00213068u) [[unlikely]] return; }
L_00213068:
    set32(c.r[4], c.r[17].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213074u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x00213074u) [[unlikely]] return; }
L_00213074:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00213090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 304u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002130A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002130A4u) [[unlikely]] return; }
L_002130A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002130E8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[12] = c.r[3].w[0];
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] + 31040u);
    c.f[13] = c.f[12];
    set32(c.r[10], c.r[10].w[0] + 31056u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002130E4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0044(c, 455u, depth + 1u); else { c.pc = 0x00213D80u; return; } if (c.pc != 0x002130E4u) [[unlikely]] return; }
L_002130E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002130E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002130F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021310Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 200u, depth + 1u); else { c.pc = 0x001FE000u; return; } if (c.pc != 0x0021310Cu) [[unlikely]] return; }
L_0021310C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[16].w[0], c.r[6].w[0]);  if (t) { goto L_00213128; } }
    breakpoint(c, 0x00213124u);
    c.budget -= 1;
L_00213128:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_0021314C; } }
L_0021313C:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_0021314C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_00213154; } }
L_0021314C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021313Cu | kUnwind; return; } goto L_0021313C; }
L_00213154:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002131AC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[4].w[0], c.r[6].w[0]);  if (t) { goto L_0021316C; } }
    breakpoint(c, 0x00213168u);
    c.budget -= 1;
L_0021316C:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_00213194; } }
L_00213180:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_00213194; }
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002131A0; } }
L_00213194:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00213180u | kUnwind; return; } goto L_00213180; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002131A0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[7].w[0] + 44u), c.r[4].w[0]);  goto L_002131AC; }
    st32((c.r[7].w[0] + 44u), c.r[8].w[0]);
    c.budget -= 1;
L_002131AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002131C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 304u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002131E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002131E8u) [[unlikely]] return; }
L_002131E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[6].d[0] = c.r[17].d[0] + 0ull;  goto L_00213234; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[12] = c.r[2].w[0];
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] + 31040u);
    c.f[13] = c.f[12];
    set32(c.r[10], c.r[10].w[0] + 31056u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021322Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0044(c, 455u, depth + 1u); else { c.pc = 0x00213D80u; return; } if (c.pc != 0x0021322Cu) [[unlikely]] return; }
L_0021322C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00213234:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213240u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 206u, depth + 1u); else { c.pc = 0x001FE150u; return; } if (c.pc != 0x00213240u) [[unlikely]] return; }
L_00213240:
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 64u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 68u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 72u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 76u));
    st32((c.r[16].w[0] + 76u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002132A0:
    set32(c.r[29], c.r[29].w[0] - 448u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] + 31024u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002132D0u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0072(c, 25u, depth + 1u); else { c.pc = 0x002C8320u; return; } if (c.pc != 0x002132D0u) [[unlikely]] return; }
L_002132D0:
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002132EC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002132EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021330C; } }
    c.f[1] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0021330C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021330C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] & 255ull;  goto L_00213330; }
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0021332C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021332C:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00213330:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00213350; } }
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00213350; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00213350:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00213394; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  goto L_002137B8; }
    set32(c.r[5], c.r[3].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213370u); set32(c.r[4], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_0087(c, 267u, depth + 1u); else { c.pc = 0x0031E940u; return; } if (c.pc != 0x00213370u) [[unlikely]] return; }
L_00213370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00213394; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + 240u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021338Cu); set32(c.r[5], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0087(c, 267u, depth + 1u); else { c.pc = 0x0031E940u; return; } if (c.pc != 0x0021338Cu) [[unlikely]] return; }
L_0021338C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002137B4; } }
L_00213394:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 31024u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] + 15184u);
    set32(c.r[5], c.r[16].w[0] + 128u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 31028u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31032u));
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.budget -= 13;
L_002133C8:
    ld128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002133C8u | kUnwind; return; } goto L_002133C8; } }
    c.f[5] = ld32((c.r[16].w[0] + 60u));
    c.f[4] = ld32((c.r[16].w[0] + 76u));
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    c.f[2] = ld32((c.r[16].w[0] + 72u));
    c.facc = fp::mul(c.f[5], c.f[4]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    st32((c.r[29].w[0] + 400u), c.f[6]);
    c.facc = fp::mul(c.f[3], c.f[1]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[0], c.f[4]));
    st32((c.r[29].w[0] + 404u), c.f[4]);
    c.facc = fp::mul(c.f[0], c.f[2]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[5], c.f[1]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 432u), c.f[6]);
    st32((c.r[29].w[0] + 408u), c.f[3]);
    c.f[20] = c.r[2].w[0];
    st32((c.r[29].w[0] + 436u), c.f[4]);
    st32((c.r[29].w[0] + 440u), c.f[3]);
    c.facc = fp::mul(c.f[6], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_rsqrt(c, 2u, c.f[20], c.f[2]);
    c.f[0] = fp::mul(c.f[6], c.f[2]);
    st32((c.r[29].w[0] + 432u), c.f[0]);
    c.f[1] = fp::mul(c.f[4], c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 436u), c.f[1]);
    st32((c.r[29].w[0] + 440u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.f[21] = ld32((c.r[16].w[0] + 52u));
    c.budget -= 34;
    { const bool t = c.r[3].d[0] == 0ull; c.f[22] = ld32((c.r[16].w[0] + 48u));  if (t) { goto L_00213764; } }
    c.f[0] = ld32((c.r[3].w[0] + 112u));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.f[2] = ld32((c.r[3].w[0] + 116u));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[1] = ld32((c.r[3].w[0] + 120u));
    st32((c.r[29].w[0] + 336u), c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.f[0] = ld32((c.r[3].w[0] + 124u));
    st32((c.r[29].w[0] + 340u), c.f[2]);
    st32((c.r[29].w[0] + 344u), c.f[1]);
    st32((c.r[29].w[0] + 348u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 128u));
    c.f[1] = ld32((c.r[3].w[0] + 132u));
    c.f[0] = ld32((c.r[3].w[0] + 136u));
    st32((c.r[29].w[0] + 352u), c.f[2]);
    st32((c.r[29].w[0] + 356u), c.f[1]);
    st32((c.r[29].w[0] + 360u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 140u));
    c.f[1] = ld32((c.r[3].w[0] + 144u));
    c.f[0] = ld32((c.r[3].w[0] + 148u));
    st32((c.r[29].w[0] + 364u), c.f[2]);
    st32((c.r[29].w[0] + 368u), c.f[1]);
    st32((c.r[29].w[0] + 372u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 152u));
    c.f[1] = ld32((c.r[3].w[0] + 156u));
    c.f[0] = ld32((c.r[3].w[0] + 160u));
    st32((c.r[29].w[0] + 376u), c.f[2]);
    st32((c.r[29].w[0] + 380u), c.f[1]);
    st32((c.r[29].w[0] + 384u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 164u));
    c.f[1] = ld32((c.r[3].w[0] + 168u));
    c.f[0] = ld32((c.r[3].w[0] + 172u));
    st32((c.r[29].w[0] + 388u), c.f[2]);
    st32((c.r[29].w[0] + 392u), c.f[1]);
    st32((c.r[29].w[0] + 396u), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 256u);
    c.f[3] = ld32((c.r[2].w[0] + 112u));
    c.f[2] = ld32((c.r[2].w[0] + 116u));
    c.f[1] = ld32((c.r[2].w[0] + 120u));
    c.f[0] = ld32((c.r[2].w[0] + 124u));
    st32((c.r[29].w[0] + 272u), c.f[3]);
    st32((c.r[29].w[0] + 276u), c.f[2]);
    st32((c.r[29].w[0] + 280u), c.f[1]);
    st32((c.r[29].w[0] + 284u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 128u));
    c.f[2] = ld32((c.r[2].w[0] + 132u));
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[2].w[0] + 140u));
    st32((c.r[29].w[0] + 288u), c.f[3]);
    st32((c.r[29].w[0] + 292u), c.f[2]);
    st32((c.r[29].w[0] + 296u), c.f[1]);
    st32((c.r[29].w[0] + 300u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 144u));
    c.f[2] = ld32((c.r[2].w[0] + 148u));
    c.f[1] = ld32((c.r[2].w[0] + 152u));
    c.f[0] = ld32((c.r[2].w[0] + 156u));
    st32((c.r[29].w[0] + 304u), c.f[3]);
    st32((c.r[29].w[0] + 308u), c.f[2]);
    st32((c.r[29].w[0] + 312u), c.f[1]);
    st32((c.r[29].w[0] + 316u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 160u));
    st32((c.r[29].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 164u));
    st32((c.r[29].w[0] + 324u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    st32((c.r[29].w[0] + 328u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 172u));
    st32((c.r[29].w[0] + 332u), c.f[0]);
    c.budget -= 68;
L_0021357C:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021357Cu | kUnwind; return; } goto L_0021357C; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 220u), 0u);
    st32((c.r[29].w[0] + 236u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002135B0u); st32((c.r[29].w[0] + 252u), 0u);  if (depth < kMaxDepth) unit_0087(c, 263u, depth + 1u); else { c.pc = 0x0031E870u; return; } if (c.pc != 0x002135B0u) [[unlikely]] return; }
L_002135B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002135B8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x002135B8u) [[unlikely]] return; }
L_002135B8:
    set32(c.r[3], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[29].w[0] + 336u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 1u, 13u, 11u, 12u);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 15u, 14u, 3u, c.vu0.vf[4].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 15u, 15u, 3u, c.vu0.vf[5].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 15u, 16u, 3u, c.vu0.vf[6].w[2]);
    vu::mulabc(c.vu0, 14u, 1u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[12].w[1]);
    vu::maddbc(c.vu0, 14u, 13u, 3u, c.vu0.vf[12].w[2]);
    vu::mulbc(c.vu0, 14u, 13u, 13u, c.vu0.vf[11].w[3]);
    vu::add(c.vu0, 14u, 13u, 13u, 11u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[14]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213638u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x00213638u) [[unlikely]] return; }
L_00213638:
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[16].w[0] + 128u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.budget -= 9;
L_0021365C:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021365Cu | kUnwind; return; } goto L_0021365C; } }
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[5], c.r[16].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213688u); set32(c.r[6], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x00213688u) [[unlikely]] return; }
L_00213688:
    c.f[1] = ld32((c.r[29].w[0] + 416u));
    c.f[2] = ld32((c.r[29].w[0] + 420u));
    c.f[3] = ld32((c.r[29].w[0] + 424u));
    st32((c.r[29].w[0] + 432u), c.f[1]);
    st32((c.r[29].w[0] + 436u), c.f[2]);
    st32((c.r[29].w[0] + 440u), c.f[3]);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_rsqrt(c, 4u, c.f[20], c.f[4]);
    set32(c.r[5], c.r[29].w[0] + 336u);
    set32(c.r[4], c.r[16].w[0] + 176u);
    set32(c.r[3], 0u + 3u);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    st32((c.r[29].w[0] + 432u), c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[1] = fp::mul(c.f[3], c.f[4]);
    c.f[22] = fp::mul(c.f[22], c.f[0]);
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    st32((c.r[29].w[0] + 436u), c.f[2]);
    st32((c.r[29].w[0] + 440u), c.f[1]);
    c.budget -= 22;
L_002136E0:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002136E0u | kUnwind; return; } goto L_002136E0; } }
    c.f[0] = ld32((c.r[29].w[0] + 384u));
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.f[2] = ld32((c.r[29].w[0] + 388u));
    set32(c.r[4], c.r[16].w[0] + 240u);
    c.f[1] = ld32((c.r[29].w[0] + 392u));
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 396u));
    st32((c.r[16].w[0] + 228u), c.f[2]);
    st32((c.r[16].w[0] + 232u), c.f[1]);
    st32((c.r[16].w[0] + 236u), c.f[0]);
    c.budget -= 11;
L_00213728:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00213728u | kUnwind; return; } goto L_00213728; } }
    c.f[2] = ld32((c.r[29].w[0] + 320u));
    c.f[1] = ld32((c.r[29].w[0] + 324u));
    c.f[0] = ld32((c.r[29].w[0] + 328u));
    st32((c.r[16].w[0] + 288u), c.f[2]);
    st32((c.r[16].w[0] + 292u), c.f[1]);
    st32((c.r[16].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 332u));
    st32((c.r[16].w[0] + 300u), c.f[0]);
    c.budget -= 8;
L_00213764:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.f[1] = fp::mul(c.f[22], c.f[0]);
    set32(c.r[6], c.r[16].w[0] + 112u);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    st32((c.r[16].w[0] + 80u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213794u); st32((c.r[16].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_0072(c, 24u, depth + 1u); else { c.pc = 0x002C82D0u; return; } if (c.pc != 0x00213794u) [[unlikely]] return; }
L_00213794:
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[16].w[0] + 96u), c.f[2]);
    st32((c.r[16].w[0] + 100u), c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 8;
L_002137B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_002137B8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002137D4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002137D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002137D0u) [[unlikely]] return; }
L_002137D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002137D4:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 448u);  c.pc = t; return; }
L_002137F0:
    c.r[7].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 112u)));
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 96u));
    c.f[4] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 100u));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[4] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = fp::mul(c.f[3], c.f[2]);  if (t) { goto L_0021387C; } }
    c.f[0] = ld32((c.r[28].w[0] - 32628u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[3] = fp::add(c.f[2], c.f[2]);  goto L_00213880; }
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 8u), c.f[0]);  if (t) { goto L_002138D4; } }
L_0021387C:
    c.f[3] = fp::add(c.f[2], c.f[2]);
    c.budget -= 1;
L_00213880:
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[2] = fp::add(c.f[1], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::add(c.f[4], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.budget -= 21;
L_002138D4:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FE230u | kUnwind; return; } [[clang::musttail]] return unit_003F(c, 214u, depth); }
L_002138E0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[7].d[0] = c.r[18].d[0] & 65535ull;
    st32((c.r[29].w[0] + 28u), c.f[27]);
    set32(c.r[2], c.r[7].w[0] << 1);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    set32(c.r[3], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[6].w[0] + 32u)));
    c.f[2] = ld32((c.r[4].w[0] + 96u));
    set32(c.r[2], ld32((c.r[6].w[0] + 112u)));
    c.f[1] = ld32((c.r[4].w[0] + 100u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[27] = c.f[12];
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[9] = ld32((c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[10] = ld32((c.r[16].w[0] + 4u));
    c.f[11] = ld32((c.r[16].w[0] + 8u));
    c.facc = fp::mul(c.f[2], c.f[9]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[10]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[11]));
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    c.f[1] = ld32((c.r[28].w[0] - 32628u));
    c.f[20] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 48;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[19].w[0]));  goto L_00213A94; }
    c.f[0] = c.f[20] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00213A90; } }
    c.f[2] = ld32((c.r[20].w[0] + 120u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[1] = ld32((c.r[20].w[0] + 116u));
    set32(c.r[5], c.r[20].w[0] + 128u);
    c.f[0] = ld32((c.r[20].w[0] + 112u));
    set32(c.r[6], c.r[20].w[0] + 56u);
    c.f[20] = fp::sub(c.f[11], c.f[2]);
    c.f[21] = fp::sub(c.f[10], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002139D8u); c.f[22] = fp::sub(c.f[9], c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x002139D8u) [[unlikely]] return; }
L_002139D8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[20].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002139E8u); set32(c.r[6], c.r[20].w[0] + 68u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x002139E8u) [[unlikely]] return; }
L_002139E8:
    c.f[8] = ld32((c.r[29].w[0] + 192u));
    c.f[7] = ld32((c.r[29].w[0] + 196u));
    c.f[6] = ld32((c.r[29].w[0] + 200u));
    c.facc = fp::mul(c.f[8], c.f[22]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[21]));
    c.f[9] = fp::add(c.facc, fp::mul(c.f[6], c.f[20]));
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.facc = fp::mul(c.f[2], c.f[22]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[21]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[0], c.f[20]));
    c.f[5] = fp::mul(c.f[3], c.f[0]);
    c.f[4] = fp::mul(c.f[3], c.f[1]);
    c.f[3] = fp::mul(c.f[3], c.f[2]);
    c.f[2] = fp::mul(c.f[9], c.f[8]);
    c.f[1] = fp::mul(c.f[9], c.f[7]);
    c.f[0] = fp::mul(c.f[9], c.f[6]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = ld32((c.r[20].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 25;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = c.f[27];  goto L_00213D00; }
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[5], c.f[5]));
    c.f[0] = ld32((c.r[20].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00213CFC; } }
    st32((c.r[19].w[0]), c.f[27]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 32u), c.f[27]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[20].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 28u), c.f[0]);  if (t) { goto L_00213D30; } }
L_00213A90:
    c.f[0] = ld32((c.r[19].w[0]));
    c.budget -= 1;
L_00213A94:
    c.f[6] = ld32((c.r[2].w[0]));
    c.f[7] = ld32((c.r[2].w[0] + 4u));
    c.f[12] = fp::sub(c.f[0], c.f[27]);
    c.f[8] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = fp::mul(c.f[12], c.f[6]);
    c.f[1] = fp::mul(c.f[12], c.f[7]);
    c.f[5] = ld32((c.r[20].w[0] + 96u));
    c.f[0] = fp::mul(c.f[12], c.f[8]);
    c.f[4] = ld32((c.r[20].w[0] + 100u));
    c.f[3] = ld32((c.r[20].w[0] + 104u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[3] = fp::add(c.f[20], c.f[2]);
    c.f[1] = c.f[3] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32628u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 19;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::mul(c.f[20], c.f[3]);  goto L_00213AE8; }
    c.f[3] = 0u;
    c.f[0] = fp::mul(c.f[20], c.f[3]);
    c.budget -= 2;
L_00213AE8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00213CFC; } }
    c.f[0] = c.f[20] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 28688u)));
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    fpu_div(c, 26u, c.f[0], c.f[2]);
    c.facc = fp::add(c.f[1], c.f[11]);
    c.f[23] = fp::add(c.facc, fp::mul(c.f[26], c.f[8]));
    c.facc = fp::add(c.f[1], c.f[10]);
    c.f[24] = fp::add(c.facc, fp::mul(c.f[26], c.f[7]));
    c.facc = fp::add(c.f[1], c.f[9]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.f[25] = fp::add(c.facc, fp::mul(c.f[26], c.f[6]));  if (t) { goto L_00213B50; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A80000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213B40u);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x00213B40u) [[unlikely]] return; }
L_00213B40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] - 10064u), c.f[0]);
    st8((c.r[28].w[0] - 28688u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00213B50:
    c.f[2] = ld32((c.r[20].w[0] + 96u));
    c.f[1] = ld32((c.r[20].w[0] + 100u));
    c.f[0] = ld32((c.r[20].w[0] + 104u));
    c.facc = fp::mul(c.f[2], c.f[25]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[24]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[23]));
    c.f[1] = ld32((c.r[20].w[0] + 108u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[20].w[0] + 120u));  goto L_00213C2C; }
    c.f[3] = c.f[25] & fp::kAbs;
    c.f[0] = c.f[24] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00213BA0; } }
    c.f[3] = c.f[24] & fp::kAbs;
    c.budget -= 1;
L_00213BA0:
    c.f[0] = c.f[23] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00213BB4; } }
    c.f[3] = c.f[23] & fp::kAbs;
    c.budget -= 1;
L_00213BB4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00213BFC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[2] = ld32((c.r[2].w[0] - 10064u));
    c.f[0] = ld32((c.r[20].w[0] + 100u));
    c.f[1] = ld32((c.r[20].w[0] + 96u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[24] = fp::sub(c.f[24], c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[25] = fp::sub(c.f[25], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.f[23] = fp::sub(c.f[23], c.f[0]);  if (t) { goto L_00213C28; } }
L_00213BFC:
    c.f[2] = ld32((c.r[2].w[0] - 10064u));
    c.f[0] = ld32((c.r[20].w[0] + 100u));
    c.f[1] = ld32((c.r[20].w[0] + 96u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[24] = fp::add(c.f[24], c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[25] = fp::add(c.f[25], c.f[1]);
    c.f[23] = fp::add(c.f[23], c.f[0]);
    c.budget -= 11;
L_00213C28:
    c.f[2] = ld32((c.r[20].w[0] + 120u));
    c.budget -= 1;
L_00213C2C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[1] = ld32((c.r[20].w[0] + 116u));
    set32(c.r[5], c.r[20].w[0] + 128u);
    c.f[0] = ld32((c.r[20].w[0] + 112u));
    set32(c.r[6], c.r[20].w[0] + 56u);
    c.f[20] = fp::sub(c.f[23], c.f[2]);
    c.f[21] = fp::sub(c.f[24], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213C50u); c.f[22] = fp::sub(c.f[25], c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x00213C50u) [[unlikely]] return; }
L_00213C50:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[20].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213C60u); set32(c.r[6], c.r[20].w[0] + 68u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x00213C60u) [[unlikely]] return; }
L_00213C60:
    c.f[8] = ld32((c.r[29].w[0] + 160u));
    c.f[7] = ld32((c.r[29].w[0] + 164u));
    c.f[6] = ld32((c.r[29].w[0] + 168u));
    c.facc = fp::mul(c.f[8], c.f[22]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[21]));
    c.f[9] = fp::add(c.facc, fp::mul(c.f[6], c.f[20]));
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    c.facc = fp::mul(c.f[2], c.f[22]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[21]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[0], c.f[20]));
    c.f[5] = fp::mul(c.f[3], c.f[0]);
    c.f[4] = fp::mul(c.f[3], c.f[1]);
    c.f[3] = fp::mul(c.f[3], c.f[2]);
    c.f[2] = fp::mul(c.f[9], c.f[8]);
    c.f[1] = fp::mul(c.f[9], c.f[7]);
    c.f[0] = fp::mul(c.f[9], c.f[6]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = ld32((c.r[20].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 25;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00213CFC; } }
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[5], c.f[5]));
    c.f[0] = ld32((c.r[20].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00213CFC; } }
    c.f[0] = fp::add(c.f[27], c.f[26]);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[19].w[0]), c.f[0]);
    st32((c.r[20].w[0] + 32u), c.f[0]);
    st32((c.r[20].w[0] + 20u), c.f[25]);
    st32((c.r[20].w[0] + 24u), c.f[24]);
    st32((c.r[20].w[0] + 28u), c.f[23]);
    c.budget -= 7;
L_00213CFC:
    c.f[12] = c.f[27];
    c.budget -= 1;
L_00213D00:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213D14u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 217u, depth + 1u); else { c.pc = 0x001FE2F0u; return; } if (c.pc != 0x00213D14u) [[unlikely]] return; }
L_00213D14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00213D24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_00213D34; } }
L_00213D24:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_00213D2C; }
L_00213D2C:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00213D30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_00213D34:
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00213D80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[2] = ld32((c.r[9].w[0]));
    c.f[1] = ld32((c.r[9].w[0] + 4u));
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.f[2] = ld32((c.r[10].w[0]));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[10].w[0] + 4u));
    st32((c.r[29].w[0] + 80u), c.f[2]);
    c.f[0] = ld32((c.r[10].w[0] + 8u));
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.f[21] = c.f[13];
    c.f[20] = c.f[14];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213DDCu); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_003F(c, 219u, depth + 1u); else { c.pc = 0x001FE340u; return; } if (c.pc != 0x00213DDCu) [[unlikely]] return; }
L_00213DDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 8016u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[16].w[0] + 44u), c.r[17].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[16].w[0] + 48u), c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[16].w[0] + 52u), c.f[20]);
    set32(c.r[5], c.r[5].w[0] + 31024u);
    st32((c.r[16].w[0] + 56u), c.f[2]);
    st32((c.r[16].w[0] + 60u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    st32((c.r[16].w[0] + 68u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[16].w[0] + 72u), c.f[1]);
    c.f[12] = 0u;
    st32((c.r[16].w[0] + 76u), c.f[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213E44u); st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 25u, depth + 1u); else { c.pc = 0x002C8320u; return; } if (c.pc != 0x00213E44u) [[unlikely]] return; }
L_00213E44:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[16].w[0] + 176u);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[25].w[0] + 31024u));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[24].w[0] + 31028u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[15].w[0] + 31032u));
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.f[3] = ld32((c.r[14].w[0] + 15184u));
    c.f[2] = ld32((c.r[13].w[0] + 15188u));
    c.f[1] = ld32((c.r[12].w[0] + 15192u));
    c.f[0] = ld32((c.r[11].w[0] + 15196u));
    st32((c.r[16].w[0] + 128u), c.f[3]);
    st32((c.r[16].w[0] + 132u), c.f[2]);
    st32((c.r[16].w[0] + 136u), c.f[1]);
    st32((c.r[16].w[0] + 140u), c.f[0]);
    c.f[3] = ld32((c.r[10].w[0] + 15200u));
    c.f[2] = ld32((c.r[9].w[0] + 15204u));
    c.f[1] = ld32((c.r[8].w[0] + 15208u));
    c.f[0] = ld32((c.r[7].w[0] + 15212u));
    st32((c.r[16].w[0] + 144u), c.f[3]);
    st32((c.r[16].w[0] + 148u), c.f[2]);
    st32((c.r[16].w[0] + 152u), c.f[1]);
    st32((c.r[16].w[0] + 156u), c.f[0]);
    c.f[3] = ld32((c.r[6].w[0] + 15216u));
    c.f[2] = ld32((c.r[5].w[0] + 15220u));
    c.f[1] = ld32((c.r[3].w[0] + 15224u));
    c.f[0] = ld32((c.r[2].w[0] + 15228u));
    st32((c.r[16].w[0] + 160u), c.f[3]);
    st32((c.r[16].w[0] + 164u), c.f[2]);
    st32((c.r[16].w[0] + 168u), c.f[1]);
    st32((c.r[16].w[0] + 172u), c.f[0]);
    st32((c.r[16].w[0] + 188u), 0u);
    st32((c.r[16].w[0] + 204u), 0u);
    st32((c.r[16].w[0] + 220u), 0u);
    st32((c.r[16].w[0] + 252u), 0u);
    st32((c.r[16].w[0] + 268u), 0u);
    c.budget -= 61;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213F38u); st32((c.r[16].w[0] + 284u), 0u);  if (depth < kMaxDepth) unit_0087(c, 269u, depth + 1u); else { c.pc = 0x0031EA30u; return; } if (c.pc != 0x00213F38u) [[unlikely]] return; }
L_00213F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213F40u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_0087(c, 269u, depth + 1u); else { c.pc = 0x0031EA30u; return; } if (c.pc != 0x00213F40u) [[unlikely]] return; }
L_00213F40:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00213F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00213FAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 7920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213F90u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x00213F90u) [[unlikely]] return; }
L_00213F90:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00213FB0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213FACu); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00213FACu) [[unlikely]] return; }
L_00213FAC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00213FB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00213FD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 9976u);  c.pc = t; return; }
L_00213FE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213FF4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 140u, depth + 1u); else { c.pc = 0x00210F00u; return; } if (c.pc != 0x00213FF4u) [[unlikely]] return; }
L_00213FF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214000u); set32(c.r[4], ld32((c.r[2].w[0] - 9976u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00214000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0045(c, 1u, depth);
}

}
