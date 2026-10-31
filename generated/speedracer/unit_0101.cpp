#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0101[4096] = {
    1, 0, 0, 0, 0, 2, 3, 0, 4, 0, 0, 0, 5, 0, 0, 6, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0,
    0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0,
    0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0,
    0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0,
    0, 126, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171,
    0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0,
    0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0,
    193, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0,
    0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283,
    0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0,
    0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304,
    0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0,
    0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 312, 0,
    0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0,
    324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0,
    0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
    340, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345,
    0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0,
    356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0,
    0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0,
    0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 373, 0, 374, 0, 0,
    0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0,
    382, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0,
    0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0,
    402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0,
    0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0,
    0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 417, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 425, 0,
    0, 0, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0,
    430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0,
    0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453,
    0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 470,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    482, 0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 489, 0, 490, 0, 0, 0,
    0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0,
    0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504,
    0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 510,
    0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0,
    0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0,
    519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0,
    0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 528, 0, 0, 0, 0, 529, 0, 0, 530, 0,
    0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 537,
    0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    541, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 0, 0,
    0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    547, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0,
    551, 0, 552, 0, 0, 0, 0, 0, 0, 553, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0,
    0, 0, 559, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 562, 0, 563, 0, 564, 0, 565, 0, 0, 0, 566, 0, 0, 0,
    0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0,
    571, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 576,
};

void unit_0101(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00504000;
    case 2u: goto L_00504014;
    case 3u: goto L_00504018;
    case 4u: goto L_00504020;
    case 5u: goto L_00504030;
    case 6u: goto L_0050403C;
    case 7u: goto L_00504040;
    case 8u: goto L_00504060;
    case 9u: goto L_00504098;
    case 10u: goto L_005040A8;
    case 11u: goto L_005040BC;
    case 12u: goto L_005040C8;
    case 13u: goto L_005040DC;
    case 14u: goto L_005040E8;
    case 15u: goto L_0050410C;
    case 16u: goto L_0050411C;
    case 17u: goto L_00504160;
    case 18u: goto L_00504190;
    case 19u: goto L_0050419C;
    case 20u: goto L_005041C4;
    case 21u: goto L_005041E4;
    case 22u: goto L_005041F4;
    case 23u: goto L_00504210;
    case 24u: goto L_00504230;
    case 25u: goto L_00504240;
    case 26u: goto L_0050425C;
    case 27u: goto L_00504288;
    case 28u: goto L_00504294;
    case 29u: goto L_005042B0;
    case 30u: goto L_005042D0;
    case 31u: goto L_005042EC;
    case 32u: goto L_00504310;
    case 33u: goto L_00504344;
    case 34u: goto L_00504354;
    case 35u: goto L_00504368;
    case 36u: goto L_00504378;
    case 37u: goto L_00504388;
    case 38u: goto L_0050439C;
    case 39u: goto L_0050440C;
    case 40u: goto L_00504430;
    case 41u: goto L_00504440;
    case 42u: goto L_00504450;
    case 43u: goto L_00504490;
    case 44u: goto L_005044C0;
    case 45u: goto L_00504510;
    case 46u: goto L_00504540;
    case 47u: goto L_00504548;
    case 48u: goto L_00504550;
    case 49u: goto L_00504590;
    case 50u: goto L_005045C0;
    case 51u: goto L_005045C8;
    case 52u: goto L_005045D0;
    case 53u: goto L_00504640;
    case 54u: goto L_00504660;
    case 55u: goto L_00504670;
    case 56u: goto L_00504680;
    case 57u: goto L_005046A0;
    case 58u: goto L_005046C8;
    case 59u: goto L_005046D4;
    case 60u: goto L_005046E0;
    case 61u: goto L_005046EC;
    case 62u: goto L_005046F8;
    case 63u: goto L_00504704;
    case 64u: goto L_00504714;
    case 65u: goto L_00504720;
    case 66u: goto L_0050472C;
    case 67u: goto L_00504738;
    case 68u: goto L_00504744;
    case 69u: goto L_00504758;
    case 70u: goto L_00504764;
    case 71u: goto L_0050476C;
    case 72u: goto L_00504780;
    case 73u: goto L_00504794;
    case 74u: goto L_005047C4;
    case 75u: goto L_005047D8;
    case 76u: goto L_005047FC;
    case 77u: goto L_00504830;
    case 78u: goto L_0050488C;
    case 79u: goto L_00504898;
    case 80u: goto L_005048A4;
    case 81u: goto L_005048B0;
    case 82u: goto L_005048BC;
    case 83u: goto L_005048D4;
    case 84u: goto L_005048E0;
    case 85u: goto L_005048EC;
    case 86u: goto L_005048F8;
    case 87u: goto L_00504904;
    case 88u: goto L_00504920;
    case 89u: goto L_0050493C;
    case 90u: goto L_00504944;
    case 91u: goto L_0050494C;
    case 92u: goto L_00504980;
    case 93u: goto L_005049A4;
    case 94u: goto L_005049AC;
    case 95u: goto L_005049B4;
    case 96u: goto L_005049BC;
    case 97u: goto L_00504AA0;
    case 98u: goto L_00504AC4;
    case 99u: goto L_00504ACC;
    case 100u: goto L_00504AD4;
    case 101u: goto L_00504ADC;
    case 102u: goto L_00504BC0;
    case 103u: goto L_00504BD0;
    case 104u: goto L_00504BE0;
    case 105u: goto L_00504C00;
    case 106u: goto L_00504C24;
    case 107u: goto L_00504C40;
    case 108u: goto L_00504C60;
    case 109u: goto L_00504C6C;
    case 110u: goto L_00504C80;
    case 111u: goto L_00504C94;
    case 112u: goto L_00504CB0;
    case 113u: goto L_00504D08;
    case 114u: goto L_00504D14;
    case 115u: goto L_00504D28;
    case 116u: goto L_00504D34;
    case 117u: goto L_00504D40;
    case 118u: goto L_00504D58;
    case 119u: goto L_00504D80;
    case 120u: goto L_00504D8C;
    case 121u: goto L_00504DA0;
    case 122u: goto L_00504DAC;
    case 123u: goto L_00504DB8;
    case 124u: goto L_00504DD0;
    case 125u: goto L_00504DF8;
    case 126u: goto L_00504E04;
    case 127u: goto L_00504E18;
    case 128u: goto L_00504E24;
    case 129u: goto L_00504E30;
    case 130u: goto L_00504E48;
    case 131u: goto L_00504E54;
    case 132u: goto L_00504E6C;
    case 133u: goto L_00504EC8;
    case 134u: goto L_00504EF0;
    case 135u: goto L_00504F0C;
    case 136u: goto L_00504F20;
    case 137u: goto L_00504F40;
    case 138u: goto L_00504F4C;
    case 139u: goto L_00504F90;
    case 140u: goto L_00504FB0;
    case 141u: goto L_00504FCC;
    case 142u: goto L_00504FE0;
    case 143u: goto L_00505000;
    case 144u: goto L_0050500C;
    case 145u: goto L_00505050;
    case 146u: goto L_00505070;
    case 147u: goto L_0050508C;
    case 148u: goto L_005050A0;
    case 149u: goto L_005050C0;
    case 150u: goto L_005050CC;
    case 151u: goto L_00505110;
    case 152u: goto L_00505130;
    case 153u: goto L_005051A0;
    case 154u: goto L_005051F4;
    case 155u: goto L_00505204;
    case 156u: goto L_00505214;
    case 157u: goto L_0050522C;
    case 158u: goto L_00505238;
    case 159u: goto L_00505244;
    case 160u: goto L_00505250;
    case 161u: goto L_00505260;
    case 162u: goto L_00505288;
    case 163u: goto L_00505294;
    case 164u: goto L_005052A0;
    case 165u: goto L_005052B4;
    case 166u: goto L_005052D4;
    case 167u: goto L_005052E4;
    case 168u: goto L_005052F0;
    case 169u: goto L_00505314;
    case 170u: goto L_00505348;
    case 171u: goto L_0050537C;
    case 172u: goto L_005053A0;
    case 173u: goto L_005053D8;
    case 174u: goto L_005053F0;
    case 175u: goto L_00505428;
    case 176u: goto L_00505440;
    case 177u: goto L_00505478;
    case 178u: goto L_00505490;
    case 179u: goto L_005054A0;
    case 180u: goto L_005054B0;
    case 181u: goto L_005054C0;
    case 182u: goto L_005054D0;
    case 183u: goto L_005054F4;
    case 184u: goto L_00505514;
    case 185u: goto L_00505524;
    case 186u: goto L_00505530;
    case 187u: goto L_00505544;
    case 188u: goto L_0050554C;
    case 189u: goto L_00505570;
    case 190u: goto L_00505584;
    case 191u: goto L_005055DC;
    case 192u: goto L_005055F0;
    case 193u: goto L_00505600;
    case 194u: goto L_00505614;
    case 195u: goto L_00505624;
    case 196u: goto L_00505640;
    case 197u: goto L_00505654;
    case 198u: goto L_00505690;
    case 199u: goto L_005056B0;
    case 200u: goto L_005056C8;
    case 201u: goto L_005056D4;
    case 202u: goto L_005056E4;
    case 203u: goto L_005056F0;
    case 204u: goto L_00505710;
    case 205u: goto L_0050575C;
    case 206u: goto L_0050579C;
    case 207u: goto L_005057A8;
    case 208u: goto L_005057B8;
    case 209u: goto L_005057E4;
    case 210u: goto L_00505800;
    case 211u: goto L_0050581C;
    case 212u: goto L_00505880;
    case 213u: goto L_005058B8;
    case 214u: goto L_00505900;
    case 215u: goto L_0050592C;
    case 216u: goto L_00505950;
    case 217u: goto L_0050598C;
    case 218u: goto L_005059A4;
    case 219u: goto L_005059C0;
    case 220u: goto L_005059E0;
    case 221u: goto L_00505A00;
    case 222u: goto L_00505A14;
    case 223u: goto L_00505A30;
    case 224u: goto L_00505A40;
    case 225u: goto L_00505A4C;
    case 226u: goto L_00505A64;
    case 227u: goto L_00505A70;
    case 228u: goto L_00505A8C;
    case 229u: goto L_00505A98;
    case 230u: goto L_00505AD8;
    case 231u: goto L_00505B08;
    case 232u: goto L_00505B24;
    case 233u: goto L_00505B40;
    case 234u: goto L_00505B4C;
    case 235u: goto L_00505B58;
    case 236u: goto L_00505B64;
    case 237u: goto L_00505B80;
    case 238u: goto L_00505B9C;
    case 239u: goto L_00505BAC;
    case 240u: goto L_00505BB8;
    case 241u: goto L_00505BD0;
    case 242u: goto L_00505BEC;
    case 243u: goto L_00505BFC;
    case 244u: goto L_00505C68;
    case 245u: goto L_00505C74;
    case 246u: goto L_00505C90;
    case 247u: goto L_00505CBC;
    case 248u: goto L_00505CEC;
    case 249u: goto L_00505D08;
    case 250u: goto L_00505D24;
    case 251u: goto L_00505D30;
    case 252u: goto L_00505D3C;
    case 253u: goto L_00505D48;
    case 254u: goto L_00505D64;
    case 255u: goto L_00505D78;
    case 256u: goto L_00505DC8;
    case 257u: goto L_00505DD0;
    case 258u: goto L_00505DE0;
    case 259u: goto L_00505DEC;
    case 260u: goto L_00505E28;
    case 261u: goto L_00505E40;
    case 262u: goto L_00505E58;
    case 263u: goto L_00505E60;
    case 264u: goto L_00505E80;
    case 265u: goto L_00505E90;
    case 266u: goto L_00505EB0;
    case 267u: goto L_00505ED4;
    case 268u: goto L_00505EE8;
    case 269u: goto L_00505EF4;
    case 270u: goto L_00505F30;
    case 271u: goto L_00505F40;
    case 272u: goto L_00505F50;
    case 273u: goto L_00505F90;
    case 274u: goto L_00505F9C;
    case 275u: goto L_00505FB4;
    case 276u: goto L_00505FD0;
    case 277u: goto L_00505FF0;
    case 278u: goto L_00506010;
    case 279u: goto L_00506024;
    case 280u: goto L_00506044;
    case 281u: goto L_0050604C;
    case 282u: goto L_0050606C;
    case 283u: goto L_0050607C;
    case 284u: goto L_00506094;
    case 285u: goto L_005060A0;
    case 286u: goto L_005060B0;
    case 287u: goto L_005060D4;
    case 288u: goto L_005060E4;
    case 289u: goto L_005060F4;
    case 290u: goto L_00506110;
    case 291u: goto L_0050612C;
    case 292u: goto L_0050614C;
    case 293u: goto L_00506164;
    case 294u: goto L_00506178;
    case 295u: goto L_00506190;
    case 296u: goto L_005061AC;
    case 297u: goto L_005061C0;
    case 298u: goto L_005061D0;
    case 299u: goto L_005061F0;
    case 300u: goto L_00506200;
    case 301u: goto L_00506220;
    case 302u: goto L_00506230;
    case 303u: goto L_00506240;
    case 304u: goto L_0050627C;
    case 305u: goto L_00506294;
    case 306u: goto L_005062B0;
    case 307u: goto L_005062D0;
    case 308u: goto L_005062F0;
    case 309u: goto L_00506304;
    case 310u: goto L_00506360;
    case 311u: goto L_00506370;
    case 312u: goto L_00506378;
    case 313u: goto L_00506388;
    case 314u: goto L_005063A4;
    case 315u: goto L_005063B8;
    case 316u: goto L_005063CC;
    case 317u: goto L_005063D4;
    case 318u: goto L_005063E0;
    case 319u: goto L_005063EC;
    case 320u: goto L_00506414;
    case 321u: goto L_0050644C;
    case 322u: goto L_00506468;
    case 323u: goto L_00506470;
    case 324u: goto L_00506480;
    case 325u: goto L_00506488;
    case 326u: goto L_005064A8;
    case 327u: goto L_005064C4;
    case 328u: goto L_005064D4;
    case 329u: goto L_005064DC;
    case 330u: goto L_005064EC;
    case 331u: goto L_00506504;
    case 332u: goto L_00506524;
    case 333u: goto L_00506540;
    case 334u: goto L_0050655C;
    case 335u: goto L_00506584;
    case 336u: goto L_00506590;
    case 337u: goto L_0050659C;
    case 338u: goto L_005065C0;
    case 339u: goto L_005065E0;
    case 340u: goto L_00506600;
    case 341u: goto L_00506614;
    case 342u: goto L_00506624;
    case 343u: goto L_00506630;
    case 344u: goto L_00506660;
    case 345u: goto L_0050667C;
    case 346u: goto L_00506698;
    case 347u: goto L_005066B4;
    case 348u: goto L_005066CC;
    case 349u: goto L_005066D8;
    case 350u: goto L_005066F0;
    case 351u: goto L_00506710;
    case 352u: goto L_00506720;
    case 353u: goto L_0050673C;
    case 354u: goto L_00506750;
    case 355u: goto L_00506760;
    case 356u: goto L_00506780;
    case 357u: goto L_005067A0;
    case 358u: goto L_005067B8;
    case 359u: goto L_005067CC;
    case 360u: goto L_005067E0;
    case 361u: goto L_00506804;
    case 362u: goto L_00506818;
    case 363u: goto L_00506828;
    case 364u: goto L_00506880;
    case 365u: goto L_005068A4;
    case 366u: goto L_005068B0;
    case 367u: goto L_005068C0;
    case 368u: goto L_005068D0;
    case 369u: goto L_005068F0;
    case 370u: goto L_00506914;
    case 371u: goto L_00506954;
    case 372u: goto L_00506964;
    case 373u: goto L_0050696C;
    case 374u: goto L_00506974;
    case 375u: goto L_00506990;
    case 376u: goto L_00506998;
    case 377u: goto L_005069B0;
    case 378u: goto L_005069C0;
    case 379u: goto L_005069CC;
    case 380u: goto L_005069D4;
    case 381u: goto L_005069F4;
    case 382u: goto L_00506A00;
    case 383u: goto L_00506A14;
    case 384u: goto L_00506A24;
    case 385u: goto L_00506A30;
    case 386u: goto L_00506A50;
    case 387u: goto L_00506A70;
    case 388u: goto L_00506A80;
    case 389u: goto L_00506AA0;
    case 390u: goto L_00506AB0;
    case 391u: goto L_00506AC0;
    case 392u: goto L_00506AD0;
    case 393u: goto L_00506B00;
    case 394u: goto L_00506B18;
    case 395u: goto L_00506B28;
    case 396u: goto L_00506B3C;
    case 397u: goto L_00506B58;
    case 398u: goto L_00506B6C;
    case 399u: goto L_00506B88;
    case 400u: goto L_00506BA0;
    case 401u: goto L_00506BE4;
    case 402u: goto L_00506C00;
    case 403u: goto L_00506C14;
    case 404u: goto L_00506C2C;
    case 405u: goto L_00506C44;
    case 406u: goto L_00506C54;
    case 407u: goto L_00506C6C;
    case 408u: goto L_00506C84;
    case 409u: goto L_00506CA0;
    case 410u: goto L_00506CB0;
    case 411u: goto L_00506CDC;
    case 412u: goto L_00506CF0;
    case 413u: goto L_00506D04;
    case 414u: goto L_00506D20;
    case 415u: goto L_00506D3C;
    case 416u: goto L_00506D60;
    case 417u: goto L_00506D88;
    case 418u: goto L_00506D90;
    case 419u: goto L_00506D98;
    case 420u: goto L_00506DB4;
    case 421u: goto L_00506DBC;
    case 422u: goto L_00506DD4;
    case 423u: goto L_00506DE4;
    case 424u: goto L_00506DF0;
    case 425u: goto L_00506DF8;
    case 426u: goto L_00506E18;
    case 427u: goto L_00506E24;
    case 428u: goto L_00506E50;
    case 429u: goto L_00506E70;
    case 430u: goto L_00506E80;
    case 431u: goto L_00506EA0;
    case 432u: goto L_00506EB0;
    case 433u: goto L_00506EC0;
    case 434u: goto L_00506ED0;
    case 435u: goto L_00506F14;
    case 436u: goto L_00506F30;
    case 437u: goto L_00506F6C;
    case 438u: goto L_00506F84;
    case 439u: goto L_00506FC4;
    case 440u: goto L_00506FE0;
    case 441u: goto L_00507024;
    case 442u: goto L_00507050;
    case 443u: goto L_00507070;
    case 444u: goto L_005070C8;
    case 445u: goto L_005070D8;
    case 446u: goto L_0050710C;
    case 447u: goto L_00507128;
    case 448u: goto L_00507144;
    case 449u: goto L_00507154;
    case 450u: goto L_00507170;
    case 451u: goto L_005071C8;
    case 452u: goto L_005071E8;
    case 453u: goto L_005071FC;
    case 454u: goto L_00507210;
    case 455u: goto L_00507220;
    case 456u: goto L_00507230;
    case 457u: goto L_0050728C;
    case 458u: goto L_00507298;
    case 459u: goto L_005072AC;
    case 460u: goto L_005072B8;
    case 461u: goto L_005072C4;
    case 462u: goto L_005072DC;
    case 463u: goto L_005072F8;
    case 464u: goto L_00507358;
    case 465u: goto L_00507384;
    case 466u: goto L_005073A0;
    case 467u: goto L_005073BC;
    case 468u: goto L_005073D0;
    case 469u: goto L_005073F0;
    case 470u: goto L_005073FC;
    case 471u: goto L_00507440;
    case 472u: goto L_00507460;
    case 473u: goto L_00507494;
    case 474u: goto L_005074A8;
    case 475u: goto L_005074BC;
    case 476u: goto L_005074D8;
    case 477u: goto L_00507534;
    case 478u: goto L_00507550;
    case 479u: goto L_00507588;
    case 480u: goto L_005075A0;
    case 481u: goto L_005075B0;
    case 482u: goto L_00507600;
    case 483u: goto L_00507608;
    case 484u: goto L_00507610;
    case 485u: goto L_0050762C;
    case 486u: goto L_00507634;
    case 487u: goto L_0050764C;
    case 488u: goto L_0050765C;
    case 489u: goto L_00507668;
    case 490u: goto L_00507670;
    case 491u: goto L_00507690;
    case 492u: goto L_0050769C;
    case 493u: goto L_005076C0;
    case 494u: goto L_005076D0;
    case 495u: goto L_005076F0;
    case 496u: goto L_00507710;
    case 497u: goto L_00507720;
    case 498u: goto L_00507740;
    case 499u: goto L_00507750;
    case 500u: goto L_00507760;
    case 501u: goto L_00507770;
    case 502u: goto L_005077AC;
    case 503u: goto L_005077BC;
    case 504u: goto L_005077FC;
    case 505u: goto L_00507810;
    case 506u: goto L_00507828;
    case 507u: goto L_00507844;
    case 508u: goto L_0050785C;
    case 509u: goto L_0050786C;
    case 510u: goto L_0050787C;
    case 511u: goto L_0050788C;
    case 512u: goto L_005078A0;
    case 513u: goto L_005078E0;
    case 514u: goto L_005078F4;
    case 515u: goto L_00507910;
    case 516u: goto L_00507940;
    case 517u: goto L_00507950;
    case 518u: goto L_0050796C;
    case 519u: goto L_00507980;
    case 520u: goto L_005079E4;
    case 521u: goto L_005079F8;
    case 522u: goto L_00507A0C;
    case 523u: goto L_00507A20;
    case 524u: goto L_00507A30;
    case 525u: goto L_00507A54;
    case 526u: goto L_00507A70;
    case 527u: goto L_00507ACC;
    case 528u: goto L_00507AD8;
    case 529u: goto L_00507AEC;
    case 530u: goto L_00507AF8;
    case 531u: goto L_00507B04;
    case 532u: goto L_00507B1C;
    case 533u: goto L_00507B38;
    case 534u: goto L_00507B98;
    case 535u: goto L_00507BC4;
    case 536u: goto L_00507BE0;
    case 537u: goto L_00507BFC;
    case 538u: goto L_00507C10;
    case 539u: goto L_00507C30;
    case 540u: goto L_00507C3C;
    case 541u: goto L_00507C80;
    case 542u: goto L_00507CA0;
    case 543u: goto L_00507CDC;
    case 544u: goto L_00507CF0;
    case 545u: goto L_00507D04;
    case 546u: goto L_00507D20;
    case 547u: goto L_00507D80;
    case 548u: goto L_00507DA0;
    case 549u: goto L_00507DB0;
    case 550u: goto L_00507DF8;
    case 551u: goto L_00507E00;
    case 552u: goto L_00507E08;
    case 553u: goto L_00507E24;
    case 554u: goto L_00507E2C;
    case 555u: goto L_00507E44;
    case 556u: goto L_00507E54;
    case 557u: goto L_00507E60;
    case 558u: goto L_00507E68;
    case 559u: goto L_00507E88;
    case 560u: goto L_00507E94;
    case 561u: goto L_00507EB8;
    case 562u: goto L_00507EC8;
    case 563u: goto L_00507ED0;
    case 564u: goto L_00507ED8;
    case 565u: goto L_00507EE0;
    case 566u: goto L_00507EF0;
    case 567u: goto L_00507F08;
    case 568u: goto L_00507F30;
    case 569u: goto L_00507F50;
    case 570u: goto L_00507F60;
    case 571u: goto L_00507F80;
    case 572u: goto L_00507F90;
    case 573u: goto L_00507FA0;
    case 574u: goto L_00507FB0;
    case 575u: goto L_00507FEC;
    case 576u: goto L_00507FFC;
    default: bad_entry(c, 0x00504000u); return;
    }
L_00504000:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504014u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0011(c, 473u, depth + 1u); else { c.pc = 0x00147F40u; return; } if (c.pc != 0x00504014u) [[unlikely]] return; }
L_00504014:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00504018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504020u);  if (depth < kMaxDepth) unit_0011(c, 476u, depth + 1u); else { c.pc = 0x00147F90u; return; } if (c.pc != 0x00504020u) [[unlikely]] return; }
L_00504020:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00503F8Cu | kUnwind; return; } [[clang::musttail]] return unit_0100(c, 484u, depth); } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_00504030:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050403Cu); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0012(c, 465u, depth + 1u); else { c.pc = 0x0014B870u; return; } if (c.pc != 0x0050403Cu) [[unlikely]] return; }
L_0050403C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00504040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00504060:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 22324u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_005040C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504098u); st32((c.r[29].w[0] + 92u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00504098u) [[unlikely]] return; }
L_00504098:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], 0u + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005040A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x005040A8u) [[unlikely]] return; }
L_005040A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  goto L_005040C0; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005040BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 30u, depth + 1u); else { c.pc = 0x005042D0u; return; } if (c.pc != 0x005040BCu) [[unlikely]] return; }
L_005040BC:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_005040C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005040C8u); st32((c.r[28].w[0] - 22324u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x005040C8u) [[unlikely]] return; }
L_005040C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 22324u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005040DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005040DCu) [[unlikely]] return; }
L_005040DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005040E8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x005040E8u) [[unlikely]] return; }
L_005040E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 22324u)));  goto L_00504120; }
    set32(c.r[2], ld32((c.r[28].w[0] - 22324u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 22324u)));
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050410Cu); set32(c.r[4], ld32((c.r[28].w[0] - 22324u)));  if (depth < kMaxDepth) unit_0100(c, 391u, depth + 1u); else { c.pc = 0x00503540u; return; } if (c.pc != 0x0050410Cu) [[unlikely]] return; }
L_0050410C:
    set32(c.r[4], ld32((c.r[28].w[0] - 22324u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050411Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 405u, depth + 1u); else { c.pc = 0x005036E0u; return; } if (c.pc != 0x0050411Cu) [[unlikely]] return; }
L_0050411C:
    set32(c.r[3], ld32((c.r[28].w[0] - 22324u)));
    c.budget -= 1;
L_00504120:
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[3].w[0] + 8u), 0u);  goto L_00504134; }
    st32((c.r[3].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 1;
L_00504134:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22324u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00504160:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_005042B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22832u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504190u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0100(c, 391u, depth + 1u); else { c.pc = 0x00503540u; return; } if (c.pc != 0x00504190u) [[unlikely]] return; }
L_00504190:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050419Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0103(c, 61u, depth + 1u); else { c.pc = 0x0050C5E0u; return; } if (c.pc != 0x0050419Cu) [[unlikely]] return; }
L_0050419C:
    st32((c.r[17].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 22324u)));
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 27612u)));  goto L_005041B4; }
    st32((c.r[28].w[0] - 22324u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 2;
L_005041B4:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 576u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005041C4u); st8((c.r[4].w[0] + 1096u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 2u, depth + 1u); else { c.pc = 0x00238010u; return; } if (c.pc != 0x005041C4u) [[unlikely]] return; }
L_005041C4:
    set32(c.r[2], c.r[17].w[0] + 76u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 72u);  goto L_00504214; }
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00504210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005041E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005041E4u) [[unlikely]] return; }
L_005041E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005041F4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005041F4u) [[unlikely]] return; }
L_005041F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00504210; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00504210u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00504210u) [[unlikely]] return; }
L_00504210:
    set32(c.r[2], c.r[17].w[0] + 72u);
    c.budget -= 1;
L_00504214:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 44u);  goto L_00504260; }
    set32(c.r[18], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0050425C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504230u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00504230u) [[unlikely]] return; }
L_00504230:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504240u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00504240u) [[unlikely]] return; }
L_00504240:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050425C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050425Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050425Cu) [[unlikely]] return; }
L_0050425C:
    set32(c.r[2], c.r[17].w[0] + 44u);
    c.budget -= 1;
L_00504260:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 28u);  goto L_00504278; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 16600u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 4;
L_00504278:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0050428C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504288u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00504288u) [[unlikely]] return; }
L_00504288:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0050428C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504294u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 393u, depth + 1u); else { c.pc = 0x00426DC0u; return; } if (c.pc != 0x00504294u) [[unlikely]] return; }
L_00504294:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_005042B4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005042B0u); set32(c.r[5], 0u + 84u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x005042B0u) [[unlikely]] return; }
L_005042B0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_005042B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_005042D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005042ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 397u, depth + 1u); else { c.pc = 0x00426E40u; return; } if (c.pc != 0x005042ECu) [[unlikely]] return; }
L_005042EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 22832u);
    set32(c.r[4], c.r[16].w[0] + 28u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 22888u);
    st32((c.r[16].w[0] + 20u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504310u); st32((c.r[16].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00504310u) [[unlikely]] return; }
L_00504310:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 16600u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 72u), 0u);  if (t) { goto L_00504354; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504344u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00504344u) [[unlikely]] return; }
L_00504344:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504354u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00504354u) [[unlikely]] return; }
L_00504354:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_00504378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504368u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00504368u) [[unlikely]] return; }
L_00504368:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504378u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00504378u) [[unlikely]] return; }
L_00504378:
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504388u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00504388u) [[unlikely]] return; }
L_00504388:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  goto L_005043A0; }
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050439Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0103(c, 65u, depth + 1u); else { c.pc = 0x0050C650u; return; } if (c.pc != 0x0050439Cu) [[unlikely]] return; }
L_0050439C:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_005043A0:
    set32(c.r[3], 0u + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[2], c.r[2].w[0] - 16600u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[29].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_005043E0; } }
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 1;
L_005043E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[28].w[0] - 27612u)));  goto L_005043F4; }
    st32((c.r[16].w[0] + 48u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 2;
L_005043F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 16600u);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 576u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050440Cu); st8((c.r[4].w[0] + 1096u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 2u, depth + 1u); else { c.pc = 0x00238010u; return; } if (c.pc != 0x0050440Cu) [[unlikely]] return; }
L_0050440C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00504430:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld64((c.r[4].w[0] + 160u));  c.pc = t; return; }
L_00504440:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | 16384ull;  c.pc = t; return; }
L_00504450:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[6].w[0])));
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), c.r[3].w[0]);  c.pc = t; return; }
L_00504490:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[6].w[0])));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  c.pc = t; return; }
L_005044C0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[6].w[0])));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 8u));
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 9u));
    st8((c.r[4].w[0] + 57u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 10u));
    st8((c.r[4].w[0] + 58u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 11u));
    st8((c.r[4].w[0] + 59u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld64((c.r[6].w[0] + 16u));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 64u), c.r[3].d[0]);  c.pc = t; return; }
L_00504510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504540u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_001A(c, 532u, depth + 1u); else { c.pc = 0x0016B760u; return; } if (c.pc != 0x00504540u) [[unlikely]] return; }
L_00504540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[17].w[0] + 152u));  if (t) { goto L_00504554; } }
L_00504548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504550u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_001A(c, 582u, depth + 1u); else { c.pc = 0x0016BC10u; return; } if (c.pc != 0x00504550u) [[unlikely]] return; }
L_00504550:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 152u));
    c.budget -= 1;
L_00504554:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00504548u | kUnwind; return; } goto L_00504548; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00504590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005045C0u); c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 475u, depth + 1u); else { c.pc = 0x0016B320u; return; } if (c.pc != 0x005045C0u) [[unlikely]] return; }
L_005045C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[17].w[0] + 152u));  if (t) { goto L_005045D4; } }
L_005045C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005045D0u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_001A(c, 582u, depth + 1u); else { c.pc = 0x0016BC10u; return; } if (c.pc != 0x005045D0u) [[unlikely]] return; }
L_005045D0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 152u));
    c.budget -= 1;
L_005045D4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005045C8u | kUnwind; return; } goto L_005045C8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00504604; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 153u));
    st8((c.r[17].w[0] + 154u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 153u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00504618; } }
L_00504604:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  goto L_0050461C; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 153u));
    st8((c.r[17].w[0] + 154u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 153u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00504618:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0050461C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00504640:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504660u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000A(c, 387u, depth + 1u); else { c.pc = 0x0012B1E0u; return; } if (c.pc != 0x00504660u) [[unlikely]] return; }
L_00504660:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504670u); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_001A(c, 331u, depth + 1u); else { c.pc = 0x0016A5E0u; return; } if (c.pc != 0x00504670u) [[unlikely]] return; }
L_00504670:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504680u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x00504680u) [[unlikely]] return; }
L_00504680:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_005046A0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005046C8u); set32(c.r[5], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x005046C8u) [[unlikely]] return; }
L_005046C8:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005046D4u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0004(c, 343u, depth + 1u); else { c.pc = 0x00113B00u; return; } if (c.pc != 0x005046D4u) [[unlikely]] return; }
L_005046D4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005046E0u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x005046E0u) [[unlikely]] return; }
L_005046E0:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005046ECu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001A(c, 316u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x005046ECu) [[unlikely]] return; }
L_005046EC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005046F8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x005046F8u) [[unlikely]] return; }
L_005046F8:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504704u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00504704u) [[unlikely]] return; }
L_00504704:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504714u); c.r[5].d[0] = c.r[2].d[0] | 16384ull;  if (depth < kMaxDepth) unit_001A(c, 55u, depth + 1u); else { c.pc = 0x00168650u; return; } if (c.pc != 0x00504714u) [[unlikely]] return; }
L_00504714:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504720u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0013(c, 75u, depth + 1u); else { c.pc = 0x0014C8C0u; return; } if (c.pc != 0x00504720u) [[unlikely]] return; }
L_00504720:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050472Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001A(c, 311u, depth + 1u); else { c.pc = 0x0016A2E0u; return; } if (c.pc != 0x0050472Cu) [[unlikely]] return; }
L_0050472C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504738u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00504738u) [[unlikely]] return; }
L_00504738:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504744u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_000A(c, 387u, depth + 1u); else { c.pc = 0x0012B1E0u; return; } if (c.pc != 0x00504744u) [[unlikely]] return; }
L_00504744:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 320u));
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504758u); st64((c.r[29].w[0] + 160u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_001A(c, 310u, depth + 1u); else { c.pc = 0x0016A2B0u; return; } if (c.pc != 0x00504758u) [[unlikely]] return; }
L_00504758:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504764u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x00504764u) [[unlikely]] return; }
L_00504764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050476Cu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0050476Cu) [[unlikely]] return; }
L_0050476C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00504784; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504780u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00504780u) [[unlikely]] return; }
L_00504780:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00504784:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 240u), c.r[2].w[0]);  goto L_00504798; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504794u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00504794u) [[unlikely]] return; }
L_00504794:
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 1;
L_00504798:
    set32(c.r[4], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 244u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 248u), 0u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 252u), 0u);
    set32(c.r[7], c.r[29].w[0] + 256u);
    set32(c.r[3], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005047C4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 65u, depth + 1u); else { c.pc = 0x0016C8C0u; return; } if (c.pc != 0x005047C4u) [[unlikely]] return; }
L_005047C4:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005047D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x00169DB0u; return; } if (c.pc != 0x005047D8u) [[unlikely]] return; }
L_005047D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[4], c.r[17].w[0] + 84u);
    set32(c.r[5], c.r[29].w[0] + 60u);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005047FCu); st8((c.r[17].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000A(c, 320u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x005047FCu) [[unlikely]] return; }
L_005047FC:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 88u));
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[5], 0u - 1u);
    st64((c.r[17].w[0] + 112u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 96u));
    st64((c.r[17].w[0] + 120u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 104u));
    st64((c.r[17].w[0] + 128u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 112u));
    st64((c.r[17].w[0] + 136u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504830u); st32((c.r[17].w[0] + 144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x00504830u) [[unlikely]] return; }
L_00504830:
    set32(c.r[3], ld32((c.r[17].w[0] + 144u)));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 153u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[17].w[0] + 154u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[17].w[0] + 153u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_005048C8; }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 128u));
    st64((c.r[17].w[0] + 160u), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[17].w[0] + 136u));
    c.r[2].d[0] = ld64((c.r[17].w[0] + 112u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 240u);  goto L_00504884; }
    c.r[3].d[0] = ld64((c.r[17].w[0] + 120u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29376u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 6u);  goto L_005048C4; }
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_00504884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050488Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 122u, depth + 1u); else { c.pc = 0x0016D030u; return; } if (c.pc != 0x0050488Cu) [[unlikely]] return; }
L_0050488C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504898u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 118u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x00504898u) [[unlikely]] return; }
L_00504898:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005048A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x005048A4u) [[unlikely]] return; }
L_005048A4:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005048B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x005048B0u) [[unlikely]] return; }
L_005048B0:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005048BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x005048BCu) [[unlikely]] return; }
L_005048BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00504908; } }
L_005048C4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_005048C8:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005048D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 122u, depth + 1u); else { c.pc = 0x0016D030u; return; } if (c.pc != 0x005048D4u) [[unlikely]] return; }
L_005048D4:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005048E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 118u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x005048E0u) [[unlikely]] return; }
L_005048E0:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005048ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x005048ECu) [[unlikely]] return; }
L_005048EC:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005048F8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x005048F8u) [[unlikely]] return; }
L_005048F8:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504904u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x00504904u) [[unlikely]] return; }
L_00504904:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00504908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_00504920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050493Cu); set32(c.r[4], ld32((c.r[4].w[0] + 12u)));  if (depth < kMaxDepth) unit_001A(c, 354u, depth + 1u); else { c.pc = 0x0016A820u; return; } if (c.pc != 0x0050493Cu) [[unlikely]] return; }
L_0050493C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 152u));  if (t) { goto L_00504950; } }
L_00504944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050494Cu); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_001A(c, 582u, depth + 1u); else { c.pc = 0x0016BC10u; return; } if (c.pc != 0x0050494Cu) [[unlikely]] return; }
L_0050494C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 152u));
    c.budget -= 1;
L_00504950:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00504944u | kUnwind; return; } goto L_00504944; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 59u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00504980:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00504A20; } }
L_005049A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005049ACu); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_001A(c, 356u, depth + 1u); else { c.pc = 0x0016A870u; return; } if (c.pc != 0x005049ACu) [[unlikely]] return; }
L_005049AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[18].w[0] + 152u));  if (t) { goto L_005049C0; } }
L_005049B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005049BCu); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_001A(c, 582u, depth + 1u); else { c.pc = 0x0016BC10u; return; } if (c.pc != 0x005049BCu) [[unlikely]] return; }
L_005049BC:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 152u));
    c.budget -= 1;
L_005049C0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005049B4u | kUnwind; return; } goto L_005049B4; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 56u));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00504A20; }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 57u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00504A1C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 59u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00504A1C; } }
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[18].w[0] + 153u));  goto L_00504A08; }
    c.r[4].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = ld8((c.r[18].w[0] + 153u));
    c.budget -= 2;
L_00504A08:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 154u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 153u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_00504A84; } }
L_00504A1C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00504A20:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st8((c.r[18].w[0] + 152u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x005049A4u | kUnwind; return; } goto L_005049A4; }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 56u));
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0] + 153u));  goto L_00504A48; }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 57u));
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[18].w[0] + 153u));
    c.budget -= 3;
L_00504A48:
    st8((c.r[18].w[0] + 154u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 153u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 56u));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0] + 59u));  goto L_00504A68; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00504A80; } }
L_00504A68:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 12u);  goto L_00504A7C; }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00504A80; } }
L_00504A7C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00504A80:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00504A84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00504AA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00504B64; } }
L_00504AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504ACCu); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_001A(c, 356u, depth + 1u); else { c.pc = 0x0016A870u; return; } if (c.pc != 0x00504ACCu) [[unlikely]] return; }
L_00504ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[18].w[0] + 152u));  if (t) { goto L_00504AE0; } }
L_00504AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504ADCu); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_001A(c, 582u, depth + 1u); else { c.pc = 0x0016BC10u; return; } if (c.pc != 0x00504ADCu) [[unlikely]] return; }
L_00504ADC:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 152u));
    c.budget -= 1;
L_00504AE0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00504AD4u | kUnwind; return; } goto L_00504AD4; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 56u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00504B64; }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 57u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00504B60; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 58u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0] + 59u));  goto L_00504B20; }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00504B30; } }
L_00504B20:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0]), 0u);  goto L_00504B30; }
    set32(c.r[2], 0u + 5u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00504B30:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = ld8((c.r[18].w[0] + 153u));  goto L_00504B50; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00504B60; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 153u));
    c.budget -= 1;
L_00504B50:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 154u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 153u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00504B9C; } }
L_00504B60:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00504B64:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st8((c.r[18].w[0] + 152u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00504AC4u | kUnwind; return; } goto L_00504AC4; }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 153u));
    st8((c.r[18].w[0] + 154u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 153u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 56u));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 12u);  goto L_00504B94; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00504B98; } }
L_00504B94:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00504B98:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00504B9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00504BC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 156u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00504BD0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 156u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 156u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00504BE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 22944u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00504C00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22304u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 22304u), 0u);  goto L_00504C28; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00504C24u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00504C24u) [[unlikely]] return; }
L_00504C24:
    st32((c.r[28].w[0] - 22304u), 0u);
    c.budget -= 1;
L_00504C28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00504C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 23152u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504C60u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00504C60u) [[unlikely]] return; }
L_00504C60:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504C6Cu); set32(c.r[4], 0u + 168u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00504C6Cu) [[unlikely]] return; }
L_00504C6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 22304u), c.r[2].w[0]);  goto L_00504C84; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504C80u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0101(c, 152u, depth + 1u); else { c.pc = 0x00505130u; return; } if (c.pc != 0x00504C80u) [[unlikely]] return; }
L_00504C80:
    st32((c.r[28].w[0] - 22304u), c.r[2].w[0]);
    c.budget -= 1;
L_00504C84:
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504C94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00504C94u) [[unlikely]] return; }
L_00504C94:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00504CB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00504EC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22784u);
    set32(c.r[3], c.r[3].w[0] - 22768u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 22752u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[17].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504D08u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 54u, depth + 1u); else { c.pc = 0x00168640u; return; } if (c.pc != 0x00504D08u) [[unlikely]] return; }
L_00504D08:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504D14u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 151u, depth + 1u); else { c.pc = 0x00505110u; return; } if (c.pc != 0x00504D14u) [[unlikely]] return; }
L_00504D14:
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[6], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504D28u); set32(c.r[7], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0101(c, 149u, depth + 1u); else { c.pc = 0x005050C0u; return; } if (c.pc != 0x00504D28u) [[unlikely]] return; }
L_00504D28:
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504D34u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 151u, depth + 1u); else { c.pc = 0x00505110u; return; } if (c.pc != 0x00504D34u) [[unlikely]] return; }
L_00504D34:
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504D40u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0101(c, 148u, depth + 1u); else { c.pc = 0x005050A0u; return; } if (c.pc != 0x00504D40u) [[unlikely]] return; }
L_00504D40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00504D5C; }
    set32(c.r[6], ld32((c.r[29].w[0] + 136u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504D58u); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0101(c, 146u, depth + 1u); else { c.pc = 0x00505070u; return; } if (c.pc != 0x00504D58u) [[unlikely]] return; }
L_00504D58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00504D5C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[29].w[0] + 116u), c.r[2].w[0]);  goto L_00504D6C; }
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 2;
L_00504D6C:
    set32(c.r[4], c.r[29].w[0] + 108u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[18], c.r[2].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504D80u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 48u, depth + 1u); else { c.pc = 0x001685C0u; return; } if (c.pc != 0x00504D80u) [[unlikely]] return; }
L_00504D80:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504D8Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 145u, depth + 1u); else { c.pc = 0x00505050u; return; } if (c.pc != 0x00504D8Cu) [[unlikely]] return; }
L_00504D8C:
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504DA0u); set32(c.r[7], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_0101(c, 143u, depth + 1u); else { c.pc = 0x00505000u; return; } if (c.pc != 0x00504DA0u) [[unlikely]] return; }
L_00504DA0:
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504DACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 145u, depth + 1u); else { c.pc = 0x00505050u; return; } if (c.pc != 0x00504DACu) [[unlikely]] return; }
L_00504DAC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504DB8u); set32(c.r[5], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_0101(c, 142u, depth + 1u); else { c.pc = 0x00504FE0u; return; } if (c.pc != 0x00504DB8u) [[unlikely]] return; }
L_00504DB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00504DD4; }
    set32(c.r[6], ld32((c.r[29].w[0] + 112u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504DD0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0101(c, 140u, depth + 1u); else { c.pc = 0x00504FB0u; return; } if (c.pc != 0x00504DD0u) [[unlikely]] return; }
L_00504DD0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00504DD4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  goto L_00504DE4; }
    set32(c.r[2], c.r[17].w[0] + 8u);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 2;
L_00504DE4:
    set32(c.r[4], c.r[29].w[0] + 84u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[18], c.r[2].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504DF8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 237u, depth + 1u); else { c.pc = 0x00169930u; return; } if (c.pc != 0x00504DF8u) [[unlikely]] return; }
L_00504DF8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504E04u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 139u, depth + 1u); else { c.pc = 0x00504F90u; return; } if (c.pc != 0x00504E04u) [[unlikely]] return; }
L_00504E04:
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[6], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504E18u); set32(c.r[7], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0101(c, 137u, depth + 1u); else { c.pc = 0x00504F40u; return; } if (c.pc != 0x00504E18u) [[unlikely]] return; }
L_00504E18:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504E24u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 139u, depth + 1u); else { c.pc = 0x00504F90u; return; } if (c.pc != 0x00504E24u) [[unlikely]] return; }
L_00504E24:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504E30u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0101(c, 136u, depth + 1u); else { c.pc = 0x00504F20u; return; } if (c.pc != 0x00504E30u) [[unlikely]] return; }
L_00504E30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_00504E4C; }
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504E48u); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_0101(c, 134u, depth + 1u); else { c.pc = 0x00504EF0u; return; } if (c.pc != 0x00504E48u) [[unlikely]] return; }
L_00504E48:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_00504E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504E54u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00504E54u) [[unlikely]] return; }
L_00504E54:
    set32(c.r[2], c.r[17].w[0] + 72u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_00504E70; }
    set32(c.r[4], c.r[17].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504E6Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x00504E6Cu) [[unlikely]] return; }
L_00504E6C:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_00504E70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_00504E88; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22688u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
L_00504E88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00504E9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22704u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_00504E9C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00504EB4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_00504EB4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00504ECC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504EC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00504EC8u) [[unlikely]] return; }
L_00504EC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00504ECC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00504EF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504F0Cu); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x00504F0Cu) [[unlikely]] return; }
L_00504F0C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00504F20:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_00504F40:
    c.r[8].d[0] = c.r[6].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);  if (t) { goto L_00504F54; } }
L_00504F4C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_00504F54:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[8].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  goto L_00504F78; }
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[3].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00504F4Cu | kUnwind; return; } goto L_00504F4C; }
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.budget -= 1;
L_00504F78:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00504F90:
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00504FB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00504FCCu); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x00504FCCu) [[unlikely]] return; }
L_00504FCC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00504FE0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_00505000:
    c.r[8].d[0] = c.r[6].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);  if (t) { goto L_00505014; } }
L_0050500C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_00505014:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[8].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  goto L_00505038; }
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[3].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0050500Cu | kUnwind; return; } goto L_0050500C; }
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.budget -= 1;
L_00505038:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00505050:
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00505070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050508Cu); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x0050508Cu) [[unlikely]] return; }
L_0050508C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_005050A0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_005050C0:
    c.r[8].d[0] = c.r[6].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);  if (t) { goto L_005050D4; } }
L_005050CC:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_005050D4:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[8].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  goto L_005050F8; }
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[3].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x005050CCu | kUnwind; return; } goto L_005050CC; }
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.budget -= 1;
L_005050F8:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00505110:
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00505130:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[17].w[0] + 72u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 22704u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22688u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22784u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22768u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22752u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005051A0u); set32(c.r[4], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_000A(c, 395u, depth + 1u); else { c.pc = 0x0012B2D0u; return; } if (c.pc != 0x005051A0u) [[unlikely]] return; }
L_005051A0:
    set32(c.r[6], 0u - 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[18].w[0]), c.r[6].w[0]);
    set32(c.r[3], 0u - 2u);
    st32((c.r[18].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    st64((c.r[18].w[0] + 40u), c.r[3].d[0]);
    set32(c.r[5], c.r[5].w[0] + 23165u);
    st64((c.r[18].w[0] + 48u), c.r[3].d[0]);
    st64((c.r[18].w[0] + 56u), c.r[3].d[0]);
    st64((c.r[18].w[0] + 64u), c.r[3].d[0]);
    st32((c.r[18].w[0] + 72u), 0u);
    st8((c.r[17].w[0] + 152u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 153u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 154u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 155u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 156u), static_cast<std::uint8_t>(0u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005051F4u); st64((c.r[17].w[0] + 160u), c.r[6].d[0]);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x005051F4u) [[unlikely]] return; }
L_005051F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505204u); set32(c.r[5], c.r[5].w[0] + 23165u);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x00505204u) [[unlikely]] return; }
L_00505204:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505214u); set32(c.r[5], c.r[5].w[0] + 23165u);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x00505214u) [[unlikely]] return; }
L_00505214:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[7], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050522Cu); set32(c.r[8], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001A(c, 177u, depth + 1u); else { c.pc = 0x00169380u; return; } if (c.pc != 0x0050522Cu) [[unlikely]] return; }
L_0050522C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505238u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x00505238u) [[unlikely]] return; }
L_00505238:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505244u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x00505244u) [[unlikely]] return; }
L_00505244:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505250u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x00505250u) [[unlikely]] return; }
L_00505250:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[6].w[0] + 32704u);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
L_00505260:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00505260u | kUnwind; return; } goto L_00505260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505288u);  if (depth < kMaxDepth) unit_001A(c, 176u, depth + 1u); else { c.pc = 0x00169370u; return; } if (c.pc != 0x00505288u) [[unlikely]] return; }
L_00505288:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505294u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001A(c, 130u, depth + 1u); else { c.pc = 0x00168E70u; return; } if (c.pc != 0x00505294u) [[unlikely]] return; }
L_00505294:
    set32(c.r[4], 0u + 156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005052A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x005052A0u) [[unlikely]] return; }
L_005052A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  goto L_005052B8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005052B4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 623u, depth + 1u); else { c.pc = 0x0016BF90u; return; } if (c.pc != 0x005052B4u) [[unlikely]] return; }
L_005052B4:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_005052B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] + 116u), 0u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] + 23183u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005052D4u); st32((c.r[2].w[0] + 120u), 0u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x005052D4u) [[unlikely]] return; }
L_005052D4:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005052E4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 163u, depth + 1u); else { c.pc = 0x0016D630u; return; } if (c.pc != 0x005052E4u) [[unlikely]] return; }
L_005052E4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005052F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x005052F0u) [[unlikely]] return; }
L_005052F0:
    st32((c.r[29].w[0] + 252u), c.r[17].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 252u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505314u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x00505314u) [[unlikely]] return; }
L_00505314:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00505320; } }
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00505320:
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 248u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[4], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505348u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x00505348u) [[unlikely]] return; }
L_00505348:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00505354; } }
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_00505354:
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 244u);
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[4], c.r[2].w[0] + 32u);
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050537Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0050537Cu) [[unlikely]] return; }
L_0050537C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_005053A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_005053DC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 22688u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_005053D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005053D8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x005053D8u) [[unlikely]] return; }
L_005053D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_005053DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005053F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0050542C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 22704u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00505428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505428u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00505428u) [[unlikely]] return; }
L_00505428:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0050542C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00505440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0050547C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00505478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505478u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00505478u) [[unlikely]] return; }
L_00505478:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0050547C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00505490:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00504CB0u | kUnwind; return; } goto L_00504CB0; }
L_005054A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00504450u | kUnwind; return; } goto L_00504450; }
L_005054B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00504CB0u | kUnwind; return; } goto L_00504CB0; }
L_005054C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x005044C0u | kUnwind; return; } goto L_005044C0; }
L_005054D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22304u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005054F4u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0101(c, 97u, depth + 1u); else { c.pc = 0x00504AA0u; return; } if (c.pc != 0x005054F4u) [[unlikely]] return; }
L_005054F4:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00505544; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505514u); set32(c.r[5], c.r[5].w[0] + 23584u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00505514u) [[unlikely]] return; }
L_00505514:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505524u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0101(c, 368u, depth + 1u); else { c.pc = 0x005068D0u; return; } if (c.pc != 0x00505524u) [[unlikely]] return; }
L_00505524:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505530u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00505530u) [[unlikely]] return; }
L_00505530:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00505544u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00505544u) [[unlikely]] return; }
L_00505544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050554Cu);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x0050554Cu) [[unlikely]] return; }
L_0050554C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 44u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_005055C0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00505570u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00505570u) [[unlikely]] return; }
L_00505570:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505584u); set32(c.r[5], c.r[5].w[0] + 23656u);  if (depth < kMaxDepth) unit_0029(c, 79u, depth + 1u); else { c.pc = 0x001A51D0u; return; } if (c.pc != 0x00505584u) [[unlikely]] return; }
L_00505584:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { c.r[3].d[0] = ld8((c.r[17].w[0] + 44u));  goto L_005055C4; }
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[17].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_00505674; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 44u));
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00505678; } }
L_005055C0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 44u));
    c.budget -= 1;
L_005055C4:
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00505674; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005055DCu); set32(c.r[4], ld32((c.r[28].w[0] - 22304u)));  if (depth < kMaxDepth) unit_0101(c, 88u, depth + 1u); else { c.pc = 0x00504920u; return; } if (c.pc != 0x005055DCu) [[unlikely]] return; }
L_005055DC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 2u);  goto L_00505630; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005055F0u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x005055F0u) [[unlikely]] return; }
L_005055F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505600u); set32(c.r[5], c.r[5].w[0] + 23656u);  if (depth < kMaxDepth) unit_00E8(c, 540u, depth + 1u); else { c.pc = 0x004A3EA0u; return; } if (c.pc != 0x00505600u) [[unlikely]] return; }
L_00505600:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505614u); set32(c.r[6], c.r[6].w[0] + 23680u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00505614u) [[unlikely]] return; }
L_00505614:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505624u); set32(c.r[5], c.r[5].w[0] + 23734u);  if (depth < kMaxDepth) unit_00E8(c, 553u, depth + 1u); else { c.pc = 0x004A3FC0u; return; } if (c.pc != 0x00505624u) [[unlikely]] return; }
L_00505624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_00505654; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_00505630:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] + 23750u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505640u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00505640u) [[unlikely]] return; }
L_00505640:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00505654u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00505654u) [[unlikely]] return; }
L_00505654:
    st32((c.r[17].w[0] + 48u), 0u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[17].w[0] + 44u));
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00505674:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00505678:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00505690:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22304u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005056B0u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0101(c, 92u, depth + 1u); else { c.pc = 0x00504980u; return; } if (c.pc != 0x005056B0u) [[unlikely]] return; }
L_005056B0:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_005056F4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005056C8u); set32(c.r[4], ld32((c.r[28].w[0] - 22304u)));  if (depth < kMaxDepth) unit_0101(c, 104u, depth + 1u); else { c.pc = 0x00504BE0u; return; } if (c.pc != 0x005056C8u) [[unlikely]] return; }
L_005056C8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005056D4u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x005056D4u) [[unlikely]] return; }
L_005056D4:
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005056E4u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0101(c, 368u, depth + 1u); else { c.pc = 0x005068D0u; return; } if (c.pc != 0x005056E4u) [[unlikely]] return; }
L_005056E4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005056F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x005056F0u) [[unlikely]] return; }
L_005056F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_005056F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00505710:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_005057E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22672u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_005057CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[17].w[0] + 28u);
    set32(c.r[2], c.r[2].w[0] - 22432u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0050575C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050575Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0050575Cu) [[unlikely]] return; }
L_0050575C:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_005057B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_005057B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_005057B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_005057B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_005057B8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005057B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050579Cu);  if (depth < kMaxDepth) unit_001A(c, 57u, depth + 1u); else { c.pc = 0x00168680u; return; } if (c.pc != 0x0050579Cu) [[unlikely]] return; }
L_0050579C:
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005057A8u); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_001A(c, 56u, depth + 1u); else { c.pc = 0x00168670u; return; } if (c.pc != 0x005057A8u) [[unlikely]] return; }
L_005057A8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_005057B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005057B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x005057B8u) [[unlikely]] return; }
L_005057B8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_005057D0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28496u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_005057CC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_005057D0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_005057E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005057E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x005057E4u) [[unlikely]] return; }
L_005057E4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_005057E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00505800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050581Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 410u, depth + 1u); else { c.pc = 0x00506CB0u; return; } if (c.pc != 0x0050581Cu) [[unlikely]] return; }
L_0050581C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] - 22672u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[6].d[0] = c.r[2].d[0] & 1ull;
    c.r[7].d[0] = ld8((c.r[16].w[0] + 44u));
    set32(c.r[5], 0u - 2u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 3u);
    set32(c.r[4], c.r[2].w[0] << 1);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 44u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00505880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0050592C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[17].w[0] + 28u);
    set32(c.r[2], c.r[2].w[0] - 22432u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_005058B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005058B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x005058B8u) [[unlikely]] return; }
L_005058B8:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00505900; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00505900; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00505900; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00505900; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00505900; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00505900; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00505900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505900u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00505900u) [[unlikely]] return; }
L_00505900:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00505918; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28496u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_00505918:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00505930; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050592Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0050592Cu) [[unlikely]] return; }
L_0050592C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00505930:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00505950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_005059A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 22624u);
    set32(c.r[2], c.r[2].w[0] - 22596u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050598Cu); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0101(c, 456u, depth + 1u); else { c.pc = 0x00507230u; return; } if (c.pc != 0x0050598Cu) [[unlikely]] return; }
L_0050598C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_005059A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005059A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x005059A4u) [[unlikely]] return; }
L_005059A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_005059A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_005059C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22304u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005059E0u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0101(c, 57u, depth + 1u); else { c.pc = 0x005046A0u; return; } if (c.pc != 0x005059E0u) [[unlikely]] return; }
L_005059E0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 92u)));  goto L_00505A1C; }
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] + 23808u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505A00u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00505A00u) [[unlikely]] return; }
L_00505A00:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00505A14u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00505A14u) [[unlikely]] return; }
L_00505A14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00505B68; } }
L_00505A1C:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00505A54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505A30u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x00505A30u) [[unlikely]] return; }
L_00505A30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505A40u); set32(c.r[5], c.r[5].w[0] + 23883u);  if (depth < kMaxDepth) unit_00E8(c, 553u, depth + 1u); else { c.pc = 0x004A3FC0u; return; } if (c.pc != 0x00505A40u) [[unlikely]] return; }
L_00505A40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505A4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0101(c, 434u, depth + 1u); else { c.pc = 0x00506ED0u; return; } if (c.pc != 0x00505A4Cu) [[unlikely]] return; }
L_00505A4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00505B64; } }
L_00505A54:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505A64u); set32(c.r[6], c.r[6].w[0] + 23898u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00505A64u) [[unlikely]] return; }
L_00505A64:
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505A70u); set32(c.r[4], ld32((c.r[28].w[0] - 22304u)));  if (depth < kMaxDepth) unit_0101(c, 104u, depth + 1u); else { c.pc = 0x00504BE0u; return; } if (c.pc != 0x00505A70u) [[unlikely]] return; }
L_00505A70:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[2].w[0] + 1u);  goto L_00505A84; }
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_00505A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505A8Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00505A8Cu) [[unlikely]] return; }
L_00505A8C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505A98u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x00505A98u) [[unlikely]] return; }
L_00505A98:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29372u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 64u)));  goto L_00505AE0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 65u);  goto L_00505AB8; }
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_00505AB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 23991u);
    set32(c.r[7], c.r[7].w[0] + 24000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505AD8u); set32(c.r[8], c.r[8].w[0] + 24027u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00505AD8u) [[unlikely]] return; }
L_00505AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_00505B0C; } }
L_00505AE0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 65u);  goto L_00505AF0; }
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_00505AF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 24056u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505B08u); set32(c.r[7], c.r[7].w[0] + 24027u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00505B08u) [[unlikely]] return; }
L_00505B08:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00505B0C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[29].w[0] + 49u);  goto L_00505B1C; }
    set32(c.r[17], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_00505B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505B24u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x00505B24u) [[unlikely]] return; }
L_00505B24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 24062u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505B40u); set32(c.r[7], c.r[7].w[0] + 24084u);  if (depth < kMaxDepth) unit_00E8(c, 548u, depth + 1u); else { c.pc = 0x004A3F50u; return; } if (c.pc != 0x00505B40u) [[unlikely]] return; }
L_00505B40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505B4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0101(c, 434u, depth + 1u); else { c.pc = 0x00506ED0u; return; } if (c.pc != 0x00505B4Cu) [[unlikely]] return; }
L_00505B4C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505B58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00505B58u) [[unlikely]] return; }
L_00505B58:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505B64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00505B64u) [[unlikely]] return; }
L_00505B64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00505B68:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00505B80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00505BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505B9Cu);  if (depth < kMaxDepth) unit_0101(c, 219u, depth + 1u); else { c.pc = 0x005059C0u; return; } if (c.pc != 0x00505B9Cu) [[unlikely]] return; }
L_00505B9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00505BBC; } }
L_00505BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505BACu);  if (depth < kMaxDepth) unit_0103(c, 452u, depth + 1u); else { c.pc = 0x0050F380u; return; } if (c.pc != 0x00505BACu) [[unlikely]] return; }
L_00505BAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505BB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0101(c, 434u, depth + 1u); else { c.pc = 0x00506ED0u; return; } if (c.pc != 0x00505BB8u) [[unlikely]] return; }
L_00505BB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00505BBC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00505BD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505BECu); set32(c.r[4], ld32((c.r[28].w[0] - 22304u)));  if (depth < kMaxDepth) unit_0101(c, 103u, depth + 1u); else { c.pc = 0x00504BD0u; return; } if (c.pc != 0x00505BECu) [[unlikely]] return; }
L_00505BEC:
    set32(c.r[4], ld32((c.r[28].w[0] - 22304u)));
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505BFCu); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0101(c, 97u, depth + 1u); else { c.pc = 0x00504AA0u; return; } if (c.pc != 0x00505BFCu) [[unlikely]] return; }
L_00505BFC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 92u)));  goto L_00505D80; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00505C30; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22304u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 155u));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 2u);  goto L_00505C58; }
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00505C54; } }
L_00505C30:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], 0u + 2u);  goto L_00505D54; }
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00505D50; } }
L_00505C54:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_00505C58:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] + 24085u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505C68u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00505C68u) [[unlikely]] return; }
L_00505C68:
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505C74u); set32(c.r[4], ld32((c.r[28].w[0] - 22304u)));  if (depth < kMaxDepth) unit_0101(c, 104u, depth + 1u); else { c.pc = 0x00504BE0u; return; } if (c.pc != 0x00505C74u) [[unlikely]] return; }
L_00505C74:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[2].w[0] + 1u);  goto L_00505C88; }
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_00505C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505C90u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00505C90u) [[unlikely]] return; }
L_00505C90:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29372u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 64u)));  goto L_00505CC0; }
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00505CBC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505CBCu); set32(c.r[5], c.r[5].w[0] + 24194u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00505CBCu) [[unlikely]] return; }
L_00505CBC:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 1;
L_00505CC0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 65u);  goto L_00505CD0; }
    set32(c.r[7], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_00505CD0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 24056u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505CECu); set32(c.r[8], c.r[8].w[0] + 24027u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00505CECu) [[unlikely]] return; }
L_00505CEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[29].w[0] + 49u);  goto L_00505D00; }
    set32(c.r[16], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_00505D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505D08u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x00505D08u) [[unlikely]] return; }
L_00505D08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 24062u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505D24u); set32(c.r[7], c.r[7].w[0] + 24084u);  if (depth < kMaxDepth) unit_00E8(c, 548u, depth + 1u); else { c.pc = 0x004A3F50u; return; } if (c.pc != 0x00505D24u) [[unlikely]] return; }
L_00505D24:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505D30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0101(c, 434u, depth + 1u); else { c.pc = 0x00506ED0u; return; } if (c.pc != 0x00505D30u) [[unlikely]] return; }
L_00505D30:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505D3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00505D3Cu) [[unlikely]] return; }
L_00505D3C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505D48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00505D48u) [[unlikely]] return; }
L_00505D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00505E64; } }
L_00505D50:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_00505D54:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] + 24218u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505D64u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00505D64u) [[unlikely]] return; }
L_00505D64:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00505D78u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00505D78u) [[unlikely]] return; }
L_00505D78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00505E60; } }
L_00505D80:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00505D90; } }
    st8((c.r[28].w[0] - 22172u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00505D90:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], 0u + 5u);  goto L_00505DF8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 22304u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 155u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 2u);  goto L_00505DB8; }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00505DF4; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_00505DB8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] + 24314u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505DC8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00505DC8u) [[unlikely]] return; }
L_00505DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505DD0u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x00505DD0u) [[unlikely]] return; }
L_00505DD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505DE0u); set32(c.r[5], c.r[5].w[0] + 23883u);  if (depth < kMaxDepth) unit_00E8(c, 553u, depth + 1u); else { c.pc = 0x004A3FC0u; return; } if (c.pc != 0x00505DE0u) [[unlikely]] return; }
L_00505DE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505DECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0101(c, 434u, depth + 1u); else { c.pc = 0x00506ED0u; return; } if (c.pc != 0x00505DECu) [[unlikely]] return; }
L_00505DEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00505E60; } }
L_00505DF4:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_00505DF8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], 0u + 2u);  goto L_00505E48; }
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_00505E30; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505E28u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0101(c, 434u, depth + 1u); else { c.pc = 0x00506ED0u; return; } if (c.pc != 0x00505E28u) [[unlikely]] return; }
L_00505E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00505E60; } }
L_00505E30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00505E40u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00505E40u) [[unlikely]] return; }
L_00505E40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00505E60; } }
L_00505E48:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] + 24408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505E58u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00505E58u) [[unlikely]] return; }
L_00505E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505E60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 219u, depth + 1u); else { c.pc = 0x005059C0u; return; } if (c.pc != 0x00505E60u) [[unlikely]] return; }
L_00505E60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00505E64:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00505E80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505E90u);  if (depth < kMaxDepth) unit_0101(c, 416u, depth + 1u); else { c.pc = 0x00506D60u; return; } if (c.pc != 0x00505E90u) [[unlikely]] return; }
L_00505E90:
    set32(c.r[4], ld32((c.r[28].w[0] - 22304u)));
    st8((c.r[28].w[0] - 29372u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 153u));
    st8((c.r[4].w[0] + 155u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00505EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 52u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505ED4u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00505ED4u) [[unlikely]] return; }
L_00505ED4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_00505EEC; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505EE8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 210u, depth + 1u); else { c.pc = 0x00505800u; return; } if (c.pc != 0x00505EE8u) [[unlikely]] return; }
L_00505EE8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00505EEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505EF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 472u, depth + 1u); else { c.pc = 0x00507460u; return; } if (c.pc != 0x00505EF4u) [[unlikely]] return; }
L_00505EF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22624u);
    set32(c.r[3], c.r[3].w[0] - 22596u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00505F30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00505950u | kUnwind; return; } goto L_00505950; }
L_00505F40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  goto L_00507070; }
L_00505F50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00505FB4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 22560u);
    set32(c.r[2], c.r[2].w[0] - 22532u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 36u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505F90u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 121u, depth + 1u); else { c.pc = 0x0013D730u; return; } if (c.pc != 0x00505F90u) [[unlikely]] return; }
L_00505F90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505F9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0101(c, 526u, depth + 1u); else { c.pc = 0x00507A70u; return; } if (c.pc != 0x00505F9Cu) [[unlikely]] return; }
L_00505F9C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00505FB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00505FB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00505FB4u) [[unlikely]] return; }
L_00505FB4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00505FB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00505FD0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00504000u < 16384u) { entry = entries_0101[(t - 0x00504000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00505FF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506010u); set32(c.r[5], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x00506010u) [[unlikely]] return; }
L_00506010:
    set32(c.r[4], ld32((c.r[28].w[0] - 22304u)));
    set32(c.r[5], c.r[29].w[0] + 60u);
    set32(c.r[6], c.r[16].w[0] + 36u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506024u); set32(c.r[7], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0101(c, 45u, depth + 1u); else { c.pc = 0x00504510u; return; } if (c.pc != 0x00506024u) [[unlikely]] return; }
L_00506024:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_00506084; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506044u); set32(c.r[6], c.r[6].w[0] + 24560u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00506044u) [[unlikely]] return; }
L_00506044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050604Cu);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x0050604Cu) [[unlikely]] return; }
L_0050604C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 24623u);
    set32(c.r[6], c.r[6].w[0] + 24643u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050606Cu); set32(c.r[7], c.r[7].w[0] + 24665u);  if (depth < kMaxDepth) unit_00E8(c, 548u, depth + 1u); else { c.pc = 0x004A3F50u; return; } if (c.pc != 0x0050606Cu) [[unlikely]] return; }
L_0050606C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050607Cu); st32((c.r[16].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0050607Cu) [[unlikely]] return; }
L_0050607C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_005060A4; } }
L_00506084:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00506094u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00506094u) [[unlikely]] return; }
L_00506094:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005060A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x005060A0u) [[unlikely]] return; }
L_005060A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_005060A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_005060B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005060D4u); set32(c.r[5], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x005060D4u) [[unlikely]] return; }
L_005060D4:
    set32(c.r[4], ld32((c.r[28].w[0] - 22304u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005060E4u); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0101(c, 53u, depth + 1u); else { c.pc = 0x00504640u; return; } if (c.pc != 0x005060E4u) [[unlikely]] return; }
L_005060E4:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005060F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x005060F4u) [[unlikely]] return; }
L_005060F4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 76u)));  goto L_0050611C; }
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] + 24666u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506110u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00506110u) [[unlikely]] return; }
L_00506110:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00506178; } }
L_0050611C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 2u);  goto L_00506154; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050612Cu);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x0050612Cu) [[unlikely]] return; }
L_0050612C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 24623u);
    set32(c.r[6], c.r[6].w[0] + 24643u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050614Cu); set32(c.r[7], c.r[7].w[0] + 24665u);  if (depth < kMaxDepth) unit_00E8(c, 548u, depth + 1u); else { c.pc = 0x004A3F50u; return; } if (c.pc != 0x0050614Cu) [[unlikely]] return; }
L_0050614C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_00506178; } }
L_00506154:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] + 24725u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506164u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00506164u) [[unlikely]] return; }
L_00506164:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00506178u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00506178u) [[unlikely]] return; }
L_00506178:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00506190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005061ACu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x005061ACu) [[unlikely]] return; }
L_005061AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_005061C4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005061C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0101(c, 266u, depth + 1u); else { c.pc = 0x00505EB0u; return; } if (c.pc != 0x005061C0u) [[unlikely]] return; }
L_005061C0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_005061C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005061D0u); set32(c.r[6], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0101(c, 542u, depth + 1u); else { c.pc = 0x00507CA0u; return; } if (c.pc != 0x005061D0u) [[unlikely]] return; }
L_005061D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 22560u);
    set32(c.r[2], c.r[2].w[0] - 22532u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005061F0u); set32(c.r[4], ld32((c.r[28].w[0] - 22304u)));  if (depth < kMaxDepth) unit_0101(c, 41u, depth + 1u); else { c.pc = 0x00504440u; return; } if (c.pc != 0x005061F0u) [[unlikely]] return; }
L_005061F0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506200u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 130u, depth + 1u); else { c.pc = 0x0013D9B0u; return; } if (c.pc != 0x00506200u) [[unlikely]] return; }
L_00506200:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00506220:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00505F50u | kUnwind; return; } goto L_00505F50; }
L_00506230:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  goto L_00507910; }
L_00506240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00506294; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 22496u);
    set32(c.r[2], c.r[2].w[0] - 22468u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050627Cu); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0102(c, 40u, depth + 1u); else { c.pc = 0x00508370u; return; } if (c.pc != 0x0050627Cu) [[unlikely]] return; }
L_0050627C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00506298; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506294u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00506294u) [[unlikely]] return; }
L_00506294:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00506298:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_005062B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005062D0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x005062D0u) [[unlikely]] return; }
L_005062D0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 40u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00506340; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005062F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005062F0u) [[unlikely]] return; }
L_005062F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506304u); set32(c.r[5], c.r[5].w[0] + 24800u);  if (depth < kMaxDepth) unit_0029(c, 79u, depth + 1u); else { c.pc = 0x001A51D0u; return; } if (c.pc != 0x00506304u) [[unlikely]] return; }
L_00506304:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[3].d[0] = ld8((c.r[17].w[0] + 40u));  goto L_00506344; }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[17].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_0050659C; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 40u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_005065A0; } }
L_00506340:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 40u));
    c.budget -= 1;
L_00506344:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0050659C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506360u); set32(c.r[5], c.r[5].w[0] + 24817u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00506360u) [[unlikely]] return; }
L_00506360:
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506370u); set32(c.r[5], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x00506370u) [[unlikely]] return; }
L_00506370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506378u); set32(c.r[4], ld32((c.r[28].w[0] - 22304u)));  if (depth < kMaxDepth) unit_0101(c, 41u, depth + 1u); else { c.pc = 0x00504440u; return; } if (c.pc != 0x00506378u) [[unlikely]] return; }
L_00506378:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506388u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00506388u) [[unlikely]] return; }
L_00506388:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_005063AC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005063A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0008(c, 433u, depth + 1u); else { c.pc = 0x00123580u; return; } if (c.pc != 0x005063A4u) [[unlikely]] return; }
L_005063A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 2;
L_005063AC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005063B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 130u, depth + 1u); else { c.pc = 0x0013D9B0u; return; } if (c.pc != 0x005063B8u) [[unlikely]] return; }
L_005063B8:
    set32(c.r[6], ld32((c.r[17].w[0] + 32u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005063CCu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0007(c, 400u, depth + 1u); else { c.pc = 0x0011FF50u; return; } if (c.pc != 0x005063CCu) [[unlikely]] return; }
L_005063CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005063D4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 103u, depth + 1u); else { c.pc = 0x0013D2E0u; return; } if (c.pc != 0x005063D4u) [[unlikely]] return; }
L_005063D4:
    set32(c.r[18], c.r[18].w[0] - c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_005063F0; } }
L_005063E0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005063ECu); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_000F(c, 78u, depth + 1u); else { c.pc = 0x0013CD40u; return; } if (c.pc != 0x005063ECu) [[unlikely]] return; }
L_005063EC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_005063F0:
    c.r[2].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005063E0u | kUnwind; return; } goto L_005063E0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22304u)));
    set32(c.r[5], c.r[29].w[0] + 156u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506414u); set32(c.r[8], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0101(c, 49u, depth + 1u); else { c.pc = 0x00504590u; return; } if (c.pc != 0x00506414u) [[unlikely]] return; }
L_00506414:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 36u));  goto L_005064B4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[3], c.r[2].w[0] + 56u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[3].w[0] + 1u);  goto L_00506444; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_00506444; } }
    set32(c.r[18], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00506444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050644Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 103u, depth + 1u); else { c.pc = 0x0013D2E0u; return; } if (c.pc != 0x0050644Cu) [[unlikely]] return; }
L_0050644C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506468u); set32(c.r[6], c.r[6].w[0] + 24829u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00506468u) [[unlikely]] return; }
L_00506468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506470u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x00506470u) [[unlikely]] return; }
L_00506470:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506480u); set32(c.r[5], c.r[5].w[0] + 24800u);  if (depth < kMaxDepth) unit_00E8(c, 540u, depth + 1u); else { c.pc = 0x004A3EA0u; return; } if (c.pc != 0x00506480u) [[unlikely]] return; }
L_00506480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506488u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x00506488u) [[unlikely]] return; }
L_00506488:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 24899u);
    set32(c.r[6], c.r[6].w[0] + 24913u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005064A8u); set32(c.r[7], c.r[7].w[0] + 24934u);  if (depth < kMaxDepth) unit_00E8(c, 548u, depth + 1u); else { c.pc = 0x004A3F50u; return; } if (c.pc != 0x005064A8u) [[unlikely]] return; }
L_005064A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_00506540; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 36u));
    c.budget -= 1;
L_005064B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_00506530; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005064C4u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x005064C4u) [[unlikely]] return; }
L_005064C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005064D4u); set32(c.r[5], c.r[5].w[0] + 24935u);  if (depth < kMaxDepth) unit_00E8(c, 553u, depth + 1u); else { c.pc = 0x004A3FC0u; return; } if (c.pc != 0x005064D4u) [[unlikely]] return; }
L_005064D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005064DCu); st32((c.r[17].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x005064DCu) [[unlikely]] return; }
L_005064DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005064ECu); set32(c.r[5], c.r[5].w[0] + 24800u);  if (depth < kMaxDepth) unit_0029(c, 79u, depth + 1u); else { c.pc = 0x001A51D0u; return; } if (c.pc != 0x005064ECu) [[unlikely]] return; }
L_005064EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_005064FC; }
    set32(c.r[2], c.r[2].w[0] + 68u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_005064FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506504u);  if (depth < kMaxDepth) unit_0101(c, 364u, depth + 1u); else { c.pc = 0x00506880u; return; } if (c.pc != 0x00506504u) [[unlikely]] return; }
L_00506504:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00506540; } }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00506524u); set32(c.r[5], c.r[5].w[0] + 24934u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00506524u) [[unlikely]] return; }
L_00506524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00506540; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00506530:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00506540u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00506540u) [[unlikely]] return; }
L_00506540:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 44u), 0u);  goto L_00506560; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050655Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050655Cu) [[unlikely]] return; }
L_0050655C:
    st32((c.r[17].w[0] + 44u), 0u);
    c.budget -= 1;
L_00506560:
    set32(c.r[2], 0u - 2u);
    c.r[6].d[0] = ld8((c.r[17].w[0] + 40u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u - 1u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506584u); st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 121u, depth + 1u); else { c.pc = 0x0013D730u; return; } if (c.pc != 0x00506584u) [[unlikely]] return; }
L_00506584:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506590u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x00506590u) [[unlikely]] return; }
L_00506590:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050659Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0050659Cu) [[unlikely]] return; }
L_0050659C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_005065A0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_005065C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22304u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005065E0u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0101(c, 57u, depth + 1u); else { c.pc = 0x005046A0u; return; } if (c.pc != 0x005065E0u) [[unlikely]] return; }
L_005065E0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0050660C; } }
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] + 24958u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506600u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00506600u) [[unlikely]] return; }
L_00506600:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_005066D8; } }
L_0050660C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506614u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x00506614u) [[unlikely]] return; }
L_00506614:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506624u); set32(c.r[5], c.r[5].w[0] + 24800u);  if (depth < kMaxDepth) unit_00E8(c, 540u, depth + 1u); else { c.pc = 0x004A3EA0u; return; } if (c.pc != 0x00506624u) [[unlikely]] return; }
L_00506624:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506630u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x00506630u) [[unlikely]] return; }
L_00506630:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00506668; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 25029u);
    set32(c.r[6], c.r[6].w[0] + 24913u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506660u); set32(c.r[7], c.r[7].w[0] + 25035u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00506660u) [[unlikely]] return; }
L_00506660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_00506680; } }
L_00506668:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 25065u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050667Cu); set32(c.r[6], c.r[6].w[0] + 24913u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0050667Cu) [[unlikely]] return; }
L_0050667C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00506680:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[29].w[0] + 49u);  goto L_00506690; }
    set32(c.r[17], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_00506690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506698u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x00506698u) [[unlikely]] return; }
L_00506698:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 24899u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005066B4u); set32(c.r[7], c.r[7].w[0] + 24934u);  if (depth < kMaxDepth) unit_00E8(c, 548u, depth + 1u); else { c.pc = 0x004A3F50u; return; } if (c.pc != 0x005066B4u) [[unlikely]] return; }
L_005066B4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] + 25068u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005066CCu); st32((c.r[16].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x005066CCu) [[unlikely]] return; }
L_005066CC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005066D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x005066D8u) [[unlikely]] return; }
L_005066D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_005066F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506710u); set32(c.r[5], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x00506710u) [[unlikely]] return; }
L_00506710:
    set32(c.r[4], ld32((c.r[28].w[0] - 22304u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506720u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0101(c, 53u, depth + 1u); else { c.pc = 0x00504640u; return; } if (c.pc != 0x00506720u) [[unlikely]] return; }
L_00506720:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 60u)));  goto L_00506770; }
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] + 25174u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050673Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0050673Cu) [[unlikely]] return; }
L_0050673C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 22172u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_00506768; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506750u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x00506750u) [[unlikely]] return; }
L_00506750:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506760u); set32(c.r[5], c.r[5].w[0] + 25233u);  if (depth < kMaxDepth) unit_00E8(c, 553u, depth + 1u); else { c.pc = 0x004A3FC0u; return; } if (c.pc != 0x00506760u) [[unlikely]] return; }
L_00506760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), 0u);  if (t) { goto L_005067C0; } }
L_00506768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_005067C0; } }
L_00506770:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 2u);  goto L_005067A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506780u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x00506780u) [[unlikely]] return; }
L_00506780:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 24899u);
    set32(c.r[6], c.r[6].w[0] + 24913u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005067A0u); set32(c.r[7], c.r[7].w[0] + 24934u);  if (depth < kMaxDepth) unit_00E8(c, 548u, depth + 1u); else { c.pc = 0x004A3F50u; return; } if (c.pc != 0x005067A0u) [[unlikely]] return; }
L_005067A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), 0u);  if (t) { goto L_005067C0; } }
L_005067A8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] + 25254u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005067B8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x005067B8u) [[unlikely]] return; }
L_005067B8:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_005067C0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005067CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x005067CCu) [[unlikely]] return; }
L_005067CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_005067E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506804u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00506804u) [[unlikely]] return; }
L_00506804:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_0050681C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506818u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0101(c, 266u, depth + 1u); else { c.pc = 0x00505EB0u; return; } if (c.pc != 0x00506818u) [[unlikely]] return; }
L_00506818:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0050681C:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506828u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 51u, depth + 1u); else { c.pc = 0x005084E0u; return; } if (c.pc != 0x00506828u) [[unlikely]] return; }
L_00506828:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 22496u);
    set32(c.r[2], c.r[2].w[0] - 22468u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = 0ull & 1ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 40u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00506880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00506894; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_005068A4; } }
L_00506894:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005068A4u); set32(c.r[5], ld32((c.r[28].w[0] - 29600u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005068A4u) [[unlikely]] return; }
L_005068A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005068B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00506240u | kUnwind; return; } goto L_00506240; }
L_005068C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  [[clang::musttail]] return unit_0102(c, 17u, depth); }
L_005068D0:
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[6].w[0] + 1u);  goto L_005068E8; }
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 1;
L_005068E8:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00105240u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 129u, depth); }
L_005068F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506914u); set32(c.r[4], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00506914u) [[unlikely]] return; }
L_00506914:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 84u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[29].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00506954; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[17].w[0] + 29u);  goto L_0050694C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_0050694C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506954u); set32(c.r[4], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00506954u) [[unlikely]] return; }
L_00506954:
    set32(c.r[4], c.r[29].w[0] + 108u);
    set32(c.r[5], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506964u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0101(c, 391u, depth + 1u); else { c.pc = 0x00506AC0u; return; } if (c.pc != 0x00506964u) [[unlikely]] return; }
L_00506964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 4u);  if (t) { goto L_005069F8; } }
L_0050696C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506974u); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0101(c, 390u, depth + 1u); else { c.pc = 0x00506AB0u; return; } if (c.pc != 0x00506974u) [[unlikely]] return; }
L_00506974:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[17].w[0] + 4u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00506990u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00506990u) [[unlikely]] return; }
L_00506990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506998u); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0101(c, 389u, depth + 1u); else { c.pc = 0x00506AA0u; return; } if (c.pc != 0x00506998u) [[unlikely]] return; }
L_00506998:
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00506A0C; } }
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005069B0u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0101(c, 391u, depth + 1u); else { c.pc = 0x00506AC0u; return; } if (c.pc != 0x005069B0u) [[unlikely]] return; }
L_005069B0:
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005069C0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 388u, depth + 1u); else { c.pc = 0x00506A80u; return; } if (c.pc != 0x005069C0u) [[unlikely]] return; }
L_005069C0:
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005069CCu); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0101(c, 387u, depth + 1u); else { c.pc = 0x00506A70u; return; } if (c.pc != 0x005069CCu) [[unlikely]] return; }
L_005069CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005069D4u); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0101(c, 390u, depth + 1u); else { c.pc = 0x00506AB0u; return; } if (c.pc != 0x005069D4u) [[unlikely]] return; }
L_005069D4:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_005069F4; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005069F4u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0101(c, 386u, depth + 1u); else { c.pc = 0x00506A50u; return; } if (c.pc != 0x005069F4u) [[unlikely]] return; }
L_005069F4:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_005069F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506A00u);  if (depth < kMaxDepth) unit_0101(c, 389u, depth + 1u); else { c.pc = 0x00506AA0u; return; } if (c.pc != 0x00506A00u) [[unlikely]] return; }
L_00506A00:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0050696Cu | kUnwind; return; } goto L_0050696C; } }
L_00506A0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506A14u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x00506A14u) [[unlikely]] return; }
L_00506A14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506A24u); set32(c.r[5], c.r[5].w[0] + 25328u);  if (depth < kMaxDepth) unit_00E8(c, 540u, depth + 1u); else { c.pc = 0x004A3EA0u; return; } if (c.pc != 0x00506A24u) [[unlikely]] return; }
L_00506A24:
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506A30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00506A30u) [[unlikely]] return; }
L_00506A30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00506A50:
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_00506A70:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00506A80:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00506AA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_00506AB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_00506AC0:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00506AD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506B00u); set32(c.r[5], c.r[5].w[0] + 25352u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00506B00u) [[unlikely]] return; }
L_00506B00:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00506B60; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_00506B48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506B18u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x00506B18u) [[unlikely]] return; }
L_00506B18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506B28u); set32(c.r[5], c.r[5].w[0] + 25328u);  if (depth < kMaxDepth) unit_00E8(c, 553u, depth + 1u); else { c.pc = 0x004A3FC0u; return; } if (c.pc != 0x00506B28u) [[unlikely]] return; }
L_00506B28:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] + 25376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506B3Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00506B3Cu) [[unlikely]] return; }
L_00506B3C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00506B88; } }
L_00506B48:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00506B58u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00506B58u) [[unlikely]] return; }
L_00506B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00506B8C; } }
L_00506B60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506B6Cu); set32(c.r[5], c.r[5].w[0] + 25441u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00506B6Cu) [[unlikely]] return; }
L_00506B6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00506B88; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00506B88u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00506B88u) [[unlikely]] return; }
L_00506B88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00506B8C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00506BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00506C74; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_00506BD8; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00506C88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00506C84; } }
L_00506BD8:
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00506BE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00506BE4u) [[unlikely]] return; }
L_00506BE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 2u);  goto L_00506C1C; }
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] + 25457u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506C00u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00506C00u) [[unlikely]] return; }
L_00506C00:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00506C14u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00506C14u) [[unlikely]] return; }
L_00506C14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00506C84; } }
L_00506C1C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] + 25519u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506C2Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00506C2Cu) [[unlikely]] return; }
L_00506C2C:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_00506C5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506C44u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x00506C44u) [[unlikely]] return; }
L_00506C44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506C54u); set32(c.r[5], c.r[5].w[0] + 25352u);  if (depth < kMaxDepth) unit_00E8(c, 553u, depth + 1u); else { c.pc = 0x004A3FC0u; return; } if (c.pc != 0x00506C54u) [[unlikely]] return; }
L_00506C54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), 0u);  if (t) { goto L_00506C84; } }
L_00506C5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00506C6Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00506C6Cu) [[unlikely]] return; }
L_00506C6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00506C84; } }
L_00506C74:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00506C84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00506C84u) [[unlikely]] return; }
L_00506C84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00506C88:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00506CA0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_00506CB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 28496u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[16].w[0] + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506CDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00506CDCu) [[unlikely]] return; }
L_00506CDC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00506CF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506CF0u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00506CF0u) [[unlikely]] return; }
L_00506CF0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00506CF4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_00506D08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506D04u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00506D04u) [[unlikely]] return; }
L_00506D04:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00506D08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 8u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506D20u); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x00506D20u) [[unlikely]] return; }
L_00506D20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] - 22432u);
    set32(c.r[4], c.r[16].w[0] + 28u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506D3Cu); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00506D3Cu) [[unlikely]] return; }
L_00506D3C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00506D60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[18].w[0] + 4u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506D88u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0101(c, 433u, depth + 1u); else { c.pc = 0x00506EC0u; return; } if (c.pc != 0x00506D88u) [[unlikely]] return; }
L_00506D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[18].w[0] + 4u);  if (t) { goto L_00506E1C; } }
L_00506D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506D98u); set32(c.r[4], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0101(c, 432u, depth + 1u); else { c.pc = 0x00506EB0u; return; } if (c.pc != 0x00506D98u) [[unlikely]] return; }
L_00506D98:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[18].w[0] + 4u);
    set32(c.r[6], c.r[29].w[0] + 92u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00506DB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00506DB4u) [[unlikely]] return; }
L_00506DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506DBCu); set32(c.r[4], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0101(c, 431u, depth + 1u); else { c.pc = 0x00506EA0u; return; } if (c.pc != 0x00506DBCu) [[unlikely]] return; }
L_00506DBC:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00506E34; }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506DD4u); set32(c.r[5], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0101(c, 433u, depth + 1u); else { c.pc = 0x00506EC0u; return; } if (c.pc != 0x00506DD4u) [[unlikely]] return; }
L_00506DD4:
    set32(c.r[4], c.r[29].w[0] + 84u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506DE4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 430u, depth + 1u); else { c.pc = 0x00506E80u; return; } if (c.pc != 0x00506DE4u) [[unlikely]] return; }
L_00506DE4:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506DF0u); set32(c.r[5], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_0101(c, 429u, depth + 1u); else { c.pc = 0x00506E70u; return; } if (c.pc != 0x00506DF0u) [[unlikely]] return; }
L_00506DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506DF8u); set32(c.r[4], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0101(c, 432u, depth + 1u); else { c.pc = 0x00506EB0u; return; } if (c.pc != 0x00506DF8u) [[unlikely]] return; }
L_00506DF8:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00506E18; } }
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[29].w[0] + 88u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506E18u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0101(c, 428u, depth + 1u); else { c.pc = 0x00506E50u; return; } if (c.pc != 0x00506E18u) [[unlikely]] return; }
L_00506E18:
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_00506E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506E24u);  if (depth < kMaxDepth) unit_0101(c, 431u, depth + 1u); else { c.pc = 0x00506EA0u; return; } if (c.pc != 0x00506E24u) [[unlikely]] return; }
L_00506E24:
    c.r[3].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00506D90u | kUnwind; return; } goto L_00506D90; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00506E34:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00506E50:
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_00506E70:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00506E80:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00506EA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_00506EB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_00506EC0:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00506ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    c.budget -= 9;
    if (c.r[16].d[0] != c.r[4].d[0]) { st32((c.r[17].w[0] + 24u), c.r[16].w[0]);  goto L_00506F18; }
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00506F14; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00506F14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00506F14u) [[unlikely]] return; }
L_00506F14:
    st32((c.r[17].w[0] + 24u), c.r[16].w[0]);
    c.budget -= 1;
L_00506F18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00506F30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00506F74; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00506F6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00506F6Cu) [[unlikely]] return; }
L_00506F6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0050705C; } }
L_00506F74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506F84u); set32(c.r[5], c.r[5].w[0] + 25696u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00506F84u) [[unlikely]] return; }
L_00506F84:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00506FD4; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_00506FCC; }
    set32(c.r[7], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 20u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[7].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00506FC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00506FC4u) [[unlikely]] return; }
L_00506FC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00507058; } }
L_00506FCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00507058; } }
L_00506FD4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00506FE0u); set32(c.r[5], c.r[5].w[0] + 25718u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00506FE0u) [[unlikely]] return; }
L_00506FE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00507058; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 24928u)));
    c.r[3].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[5].d[0] = ld8((c.r[6].w[0] + 20u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[6].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0050702C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00507024u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00507024u) [[unlikely]] return; }
L_00507024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00507058; } }
L_0050702C:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_00507054; }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00507050u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00507050u) [[unlikely]] return; }
L_00507050:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00507054:
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 1;
L_00507058:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0050705C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00507070:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 20u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0050709C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00507154; } }
L_0050709C:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], 0u + 8u);  goto L_005070B8; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00507154; } }
L_005070B8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[6].w[0] + 4u)));  goto L_005070E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005070C8u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x005070C8u) [[unlikely]] return; }
L_005070C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005070D8u); set32(c.r[5], c.r[5].w[0] + 25718u);  if (depth < kMaxDepth) unit_00E8(c, 553u, depth + 1u); else { c.pc = 0x004A3FC0u; return; } if (c.pc != 0x005070D8u) [[unlikely]] return; }
L_005070D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), 0u);  if (t) { goto L_00507154; } }
L_005070E0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[6].w[0] + 5u);  goto L_005070F0; }
    set32(c.r[7], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 1;
L_005070F0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 25733u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050710Cu); set32(c.r[8], c.r[8].w[0] + 25739u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x0050710Cu) [[unlikely]] return; }
L_0050710C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[29].w[0] + 49u);  goto L_00507120; }
    set32(c.r[17], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_00507120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507128u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x00507128u) [[unlikely]] return; }
L_00507128:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 25696u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507144u); set32(c.r[7], c.r[7].w[0] + 25768u);  if (depth < kMaxDepth) unit_00E8(c, 548u, depth + 1u); else { c.pc = 0x004A3F50u; return; } if (c.pc != 0x00507144u) [[unlikely]] return; }
L_00507144:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507154u); st32((c.r[16].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00507154u) [[unlikely]] return; }
L_00507154:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00507170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_00507204; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_005071F0; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 28u)));  goto L_005071D0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_005071BC; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00507214; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00507210; } }
L_005071BC:
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005071C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005071C8u) [[unlikely]] return; }
L_005071C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00507210; } }
L_005071D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00507210; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005071E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005071E8u) [[unlikely]] return; }
L_005071E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00507210; } }
L_005071F0:
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005071FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005071FCu) [[unlikely]] return; }
L_005071FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00507210; } }
L_00507204:
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00507210u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00507210u) [[unlikely]] return; }
L_00507210:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00507214:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00507220:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  c.pc = t; return; }
L_00507230:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00507384; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 22384u);
    set32(c.r[2], c.r[2].w[0] - 22356u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00507274; } }
    set32(c.r[3], c.r[3].w[0] + 20u);
    c.budget -= 1;
L_00507274:
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 84u);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[18], c.r[2].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050728Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 391u, depth + 1u); else { c.pc = 0x00506AC0u; return; } if (c.pc != 0x0050728Cu) [[unlikely]] return; }
L_0050728C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507298u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 471u, depth + 1u); else { c.pc = 0x00507440u; return; } if (c.pc != 0x00507298u) [[unlikely]] return; }
L_00507298:
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[6], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005072ACu); set32(c.r[7], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0101(c, 469u, depth + 1u); else { c.pc = 0x005073F0u; return; } if (c.pc != 0x005072ACu) [[unlikely]] return; }
L_005072AC:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005072B8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 471u, depth + 1u); else { c.pc = 0x00507440u; return; } if (c.pc != 0x005072B8u) [[unlikely]] return; }
L_005072B8:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005072C4u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0101(c, 468u, depth + 1u); else { c.pc = 0x005073D0u; return; } if (c.pc != 0x005072C4u) [[unlikely]] return; }
L_005072C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  goto L_005072E0; }
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005072DCu); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_0101(c, 466u, depth + 1u); else { c.pc = 0x005073A0u; return; } if (c.pc != 0x005072DCu) [[unlikely]] return; }
L_005072DC:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_005072E0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 20u);  goto L_005072FC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005072F8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005072F8u) [[unlikely]] return; }
L_005072F8:
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_005072FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 28u), 0u);  if (t) { goto L_00507310; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22320u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_00507310:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00507358; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00507358; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00507358; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00507358; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00507358; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00507358; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00507358; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507358u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00507358u) [[unlikely]] return; }
L_00507358:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00507370; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28496u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_00507370:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00507388; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507384u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00507384u) [[unlikely]] return; }
L_00507384:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00507388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_005073A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005073BCu); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x005073BCu) [[unlikely]] return; }
L_005073BC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_005073D0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_005073F0:
    c.r[8].d[0] = c.r[6].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);  if (t) { goto L_00507404; } }
L_005073FC:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_00507404:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[8].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  goto L_00507428; }
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[3].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x005073FCu | kUnwind; return; } goto L_005073FC; }
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.budget -= 1;
L_00507428:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00507440:
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00507460:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 28496u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[17].w[0] + 4u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507494u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00507494u) [[unlikely]] return; }
L_00507494:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_005074AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005074A8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x005074A8u) [[unlikely]] return; }
L_005074A8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_005074AC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[18].w[0]), c.r[2].w[0]);  goto L_005074C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005074BCu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x005074BCu) [[unlikely]] return; }
L_005074BC:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_005074C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 8u);
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005074D8u); st32((c.r[18].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x005074D8u) [[unlikely]] return; }
L_005074D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22320u);
    set32(c.r[3], c.r[3].w[0] - 22384u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 22356u);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 28u), c.r[16].w[0]);  if (t) { goto L_0050750C; } }
    set32(c.r[3], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_0050750C:
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[7], c.r[29].w[0] + 76u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507534u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x00507534u) [[unlikely]] return; }
L_00507534:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00507550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0050758C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 22320u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00507588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507588u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00507588u) [[unlikely]] return; }
L_00507588:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0050758C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005075A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00507230u | kUnwind; return; } goto L_00507230; }
L_005075B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u - 2u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[29].w[0] + 88u));
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[29].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507600u); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0101(c, 500u, depth + 1u); else { c.pc = 0x00507760u; return; } if (c.pc != 0x00507600u) [[unlikely]] return; }
L_00507600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[18].w[0] + 4u);  if (t) { goto L_00507694; } }
L_00507608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507610u); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0101(c, 499u, depth + 1u); else { c.pc = 0x00507750u; return; } if (c.pc != 0x00507610u) [[unlikely]] return; }
L_00507610:
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[18].w[0] + 4u);
    set32(c.r[6], c.r[29].w[0] + 88u);
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050762Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050762Cu) [[unlikely]] return; }
L_0050762C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507634u); set32(c.r[4], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0101(c, 498u, depth + 1u); else { c.pc = 0x00507740u; return; } if (c.pc != 0x00507634u) [[unlikely]] return; }
L_00507634:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_005076A8; } }
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050764Cu); set32(c.r[5], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0101(c, 500u, depth + 1u); else { c.pc = 0x00507760u; return; } if (c.pc != 0x0050764Cu) [[unlikely]] return; }
L_0050764C:
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050765Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 497u, depth + 1u); else { c.pc = 0x00507720u; return; } if (c.pc != 0x0050765Cu) [[unlikely]] return; }
L_0050765C:
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507668u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0101(c, 496u, depth + 1u); else { c.pc = 0x00507710u; return; } if (c.pc != 0x00507668u) [[unlikely]] return; }
L_00507668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507670u); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0101(c, 499u, depth + 1u); else { c.pc = 0x00507750u; return; } if (c.pc != 0x00507670u) [[unlikely]] return; }
L_00507670:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_00507690; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507690u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0101(c, 495u, depth + 1u); else { c.pc = 0x005076F0u; return; } if (c.pc != 0x00507690u) [[unlikely]] return; }
L_00507690:
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_00507694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050769Cu);  if (depth < kMaxDepth) unit_0101(c, 498u, depth + 1u); else { c.pc = 0x00507740u; return; } if (c.pc != 0x0050769Cu) [[unlikely]] return; }
L_0050769C:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00507608u | kUnwind; return; } goto L_00507608; } }
L_005076A8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_005076B8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 22172u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_005076B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005076C0u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x005076C0u) [[unlikely]] return; }
L_005076C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005076D0u); set32(c.r[5], c.r[5].w[0] + 25824u);  if (depth < kMaxDepth) unit_00E8(c, 540u, depth + 1u); else { c.pc = 0x004A3EA0u; return; } if (c.pc != 0x005076D0u) [[unlikely]] return; }
L_005076D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_005076F0:
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_00507710:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00507720:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00507740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_00507750:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_00507760:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00507770:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_005077AC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005077ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005077ACu) [[unlikely]] return; }
L_005077AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005077BCu); set32(c.r[5], c.r[5].w[0] + 25839u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x005077BCu) [[unlikely]] return; }
L_005077BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00507804; }
    set32(c.r[7], ld32((c.r[28].w[0] - 24928u)));
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[6].d[0] = ld8((c.r[7].w[0] + 20u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[7].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005077FCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005077FCu) [[unlikely]] return; }
L_005077FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_005078F8; } }
L_00507804:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507810u); set32(c.r[5], c.r[5].w[0] + 25857u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00507810u) [[unlikely]] return; }
L_00507810:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00507838; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], 0u + 4u);  goto L_00507830; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507828u);  if (depth < kMaxDepth) unit_0103(c, 452u, depth + 1u); else { c.pc = 0x0050F380u; return; } if (c.pc != 0x00507828u) [[unlikely]] return; }
L_00507828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), 0u);  if (t) { goto L_005078F4; } }
L_00507830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_005078F4; } }
L_00507838:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507844u); set32(c.r[5], c.r[5].w[0] + 25876u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00507844u) [[unlikely]] return; }
L_00507844:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00507894; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00507884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050785Cu);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x0050785Cu) [[unlikely]] return; }
L_0050785C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050786Cu); set32(c.r[5], c.r[5].w[0] + 25824u);  if (depth < kMaxDepth) unit_00E8(c, 540u, depth + 1u); else { c.pc = 0x004A3EA0u; return; } if (c.pc != 0x0050786Cu) [[unlikely]] return; }
L_0050786C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050787Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050787Cu) [[unlikely]] return; }
L_0050787C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005078F4; } }
L_00507884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050788Cu);  if (depth < kMaxDepth) unit_0103(c, 452u, depth + 1u); else { c.pc = 0x0050F380u; return; } if (c.pc != 0x0050788Cu) [[unlikely]] return; }
L_0050788C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), 0u);  if (t) { goto L_005078F4; } }
L_00507894:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005078A0u); set32(c.r[5], c.r[5].w[0] + 25896u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x005078A0u) [[unlikely]] return; }
L_005078A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005078F4; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_005078E8; }
    set32(c.r[7], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[7].w[0] + 20u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[7].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005078E0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005078E0u) [[unlikely]] return; }
L_005078E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005078F4; } }
L_005078E8:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005078F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005078F4u) [[unlikely]] return; }
L_005078F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_005078F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00507910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0050795C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507940u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x00507940u) [[unlikely]] return; }
L_00507940:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507950u); set32(c.r[5], c.r[5].w[0] + 25824u);  if (depth < kMaxDepth) unit_00E8(c, 553u, depth + 1u); else { c.pc = 0x004A3FC0u; return; } if (c.pc != 0x00507950u) [[unlikely]] return; }
L_00507950:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0050796C; } }
L_0050795C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050796Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050796Cu) [[unlikely]] return; }
L_0050796C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00507980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_00507A14; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_00507A00; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_005079EC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 28u)));  goto L_005079CC; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00507A24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00507A20; } }
L_005079CC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00507A20; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005079E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005079E4u) [[unlikely]] return; }
L_005079E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00507A20; } }
L_005079EC:
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005079F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005079F8u) [[unlikely]] return; }
L_005079F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00507A20; } }
L_00507A00:
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00507A0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00507A0Cu) [[unlikely]] return; }
L_00507A0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00507A20; } }
L_00507A14:
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00507A20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00507A20u) [[unlikely]] return; }
L_00507A20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00507A24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00507A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00507A54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00507A54u) [[unlikely]] return; }
L_00507A54:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00507A70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00507BC4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 22304u);
    set32(c.r[2], c.r[2].w[0] - 22276u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00507AB4; } }
    set32(c.r[3], c.r[3].w[0] + 20u);
    c.budget -= 1;
L_00507AB4:
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 84u);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[18], c.r[2].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507ACCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 433u, depth + 1u); else { c.pc = 0x00506EC0u; return; } if (c.pc != 0x00507ACCu) [[unlikely]] return; }
L_00507ACC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507AD8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 541u, depth + 1u); else { c.pc = 0x00507C80u; return; } if (c.pc != 0x00507AD8u) [[unlikely]] return; }
L_00507AD8:
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[6], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507AECu); set32(c.r[7], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0101(c, 539u, depth + 1u); else { c.pc = 0x00507C30u; return; } if (c.pc != 0x00507AECu) [[unlikely]] return; }
L_00507AEC:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507AF8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 541u, depth + 1u); else { c.pc = 0x00507C80u; return; } if (c.pc != 0x00507AF8u) [[unlikely]] return; }
L_00507AF8:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507B04u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0101(c, 538u, depth + 1u); else { c.pc = 0x00507C10u; return; } if (c.pc != 0x00507B04u) [[unlikely]] return; }
L_00507B04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  goto L_00507B20; }
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507B1Cu); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_0101(c, 536u, depth + 1u); else { c.pc = 0x00507BE0u; return; } if (c.pc != 0x00507B1Cu) [[unlikely]] return; }
L_00507B1C:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_00507B20:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 20u);  goto L_00507B3C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00507B38u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00507B38u) [[unlikely]] return; }
L_00507B38:
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_00507B3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 28u), 0u);  if (t) { goto L_00507B50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28480u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_00507B50:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00507B98; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00507B98; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00507B98; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00507B98; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00507B98; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00507B98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00507B98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507B98u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00507B98u) [[unlikely]] return; }
L_00507B98:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00507BB0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28496u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_00507BB0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00507BC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507BC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00507BC4u) [[unlikely]] return; }
L_00507BC4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00507BC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00507BE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507BFCu); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x00507BFCu) [[unlikely]] return; }
L_00507BFC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00507C10:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_00507C30:
    c.r[8].d[0] = c.r[6].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);  if (t) { goto L_00507C44; } }
L_00507C3C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_00507C44:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[8].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  goto L_00507C68; }
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[3].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00507C3Cu | kUnwind; return; } goto L_00507C3C; }
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.budget -= 1;
L_00507C68:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00507C80:
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00507CA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 28496u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[16], c.r[19].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507CDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00507CDCu) [[unlikely]] return; }
L_00507CDC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00507CF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507CF0u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00507CF0u) [[unlikely]] return; }
L_00507CF0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00507CF4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_00507D08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507D04u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00507D04u) [[unlikely]] return; }
L_00507D04:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00507D08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507D20u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x00507D20u) [[unlikely]] return; }
L_00507D20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 28480u);
    set32(c.r[3], c.r[3].w[0] - 22304u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 22276u);
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 32u), c.r[17].w[0]);
    c.budget -= 13;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[19].w[0] + 28u), c.r[18].w[0]);  if (t) { goto L_00507D58; } }
    set32(c.r[3], c.r[19].w[0] + 20u);
    c.budget -= 1;
L_00507D58:
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[7], c.r[29].w[0] + 92u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507D80u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x00507D80u) [[unlikely]] return; }
L_00507D80:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00507DA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00507A70u | kUnwind; return; } goto L_00507A70; }
L_00507DB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u - 2u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[29].w[0] + 108u));
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507DF8u); st8((c.r[29].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0101(c, 573u, depth + 1u); else { c.pc = 0x00507FA0u; return; } if (c.pc != 0x00507DF8u) [[unlikely]] return; }
L_00507DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[18].w[0] + 4u);  if (t) { goto L_00507E8C; } }
L_00507E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507E08u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0101(c, 572u, depth + 1u); else { c.pc = 0x00507F90u; return; } if (c.pc != 0x00507E08u) [[unlikely]] return; }
L_00507E08:
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[18].w[0] + 4u);
    set32(c.r[6], c.r[29].w[0] + 108u);
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00507E24u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00507E24u) [[unlikely]] return; }
L_00507E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507E2Cu); set32(c.r[4], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0101(c, 571u, depth + 1u); else { c.pc = 0x00507F80u; return; } if (c.pc != 0x00507E2Cu) [[unlikely]] return; }
L_00507E2C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00507EA0; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507E44u); set32(c.r[5], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0101(c, 573u, depth + 1u); else { c.pc = 0x00507FA0u; return; } if (c.pc != 0x00507E44u) [[unlikely]] return; }
L_00507E44:
    set32(c.r[4], c.r[29].w[0] + 100u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507E54u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 570u, depth + 1u); else { c.pc = 0x00507F60u; return; } if (c.pc != 0x00507E54u) [[unlikely]] return; }
L_00507E54:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507E60u); set32(c.r[5], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_0101(c, 569u, depth + 1u); else { c.pc = 0x00507F50u; return; } if (c.pc != 0x00507E60u) [[unlikely]] return; }
L_00507E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507E68u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0101(c, 572u, depth + 1u); else { c.pc = 0x00507F90u; return; } if (c.pc != 0x00507E68u) [[unlikely]] return; }
L_00507E68:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_00507E88; } }
    set32(c.r[4], c.r[29].w[0] + 92u);
    set32(c.r[5], c.r[29].w[0] + 104u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507E88u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0101(c, 568u, depth + 1u); else { c.pc = 0x00507F30u; return; } if (c.pc != 0x00507E88u) [[unlikely]] return; }
L_00507E88:
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_00507E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507E94u);  if (depth < kMaxDepth) unit_0101(c, 571u, depth + 1u); else { c.pc = 0x00507F80u; return; } if (c.pc != 0x00507E94u) [[unlikely]] return; }
L_00507E94:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00507E00u | kUnwind; return; } goto L_00507E00; } }
L_00507EA0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00507EB0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 22172u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00507EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507EB8u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x00507EB8u) [[unlikely]] return; }
L_00507EB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507EC8u); set32(c.r[5], c.r[5].w[0] + 25984u);  if (depth < kMaxDepth) unit_00E8(c, 540u, depth + 1u); else { c.pc = 0x004A3EA0u; return; } if (c.pc != 0x00507EC8u) [[unlikely]] return; }
L_00507EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507ED0u);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x00507ED0u) [[unlikely]] return; }
L_00507ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507ED8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 317u, depth + 1u); else { c.pc = 0x003BE990u; return; } if (c.pc != 0x00507ED8u) [[unlikely]] return; }
L_00507ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507EE0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 398u, depth + 1u); else { c.pc = 0x003BF2A0u; return; } if (c.pc != 0x00507EE0u) [[unlikely]] return; }
L_00507EE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507EF0u); set32(c.r[5], c.r[5].w[0] + 26001u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00507EF0u) [[unlikely]] return; }
L_00507EF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00507F0C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507F08u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 451u, depth + 1u); else { c.pc = 0x004378F0u; return; } if (c.pc != 0x00507F08u) [[unlikely]] return; }
L_00507F08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00507F0C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00507F30:
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_00507F50:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00507F60:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00507F80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_00507F90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_00507FA0:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00507FB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00507FEC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00507FECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00507FECu) [[unlikely]] return; }
L_00507FEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00507FFCu); set32(c.r[5], c.r[5].w[0] + 26014u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00507FFCu) [[unlikely]] return; }
L_00507FFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0102(c, 4u, depth); } }
    [[clang::musttail]] return unit_0102(c, 2u, depth);
}

}
