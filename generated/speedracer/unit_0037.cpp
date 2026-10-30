#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0037[4096] = {
    1, 2, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0,
    0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 0,
    56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0,
    0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 0,
    0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84,
    0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0,
    92, 0, 0, 0, 0, 0, 93, 0, 0, 94, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 0,
    101, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108,
    0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130,
    0, 0, 0, 131, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0,
    0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0,
    0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160,
    0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 172, 173, 0,
    174, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 184, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0,
    0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 202, 0, 0, 0, 0, 0, 203,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 220, 0, 0,
    0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0,
    0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 236, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0,
    245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 262, 0, 0, 0, 0, 263, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0,
    270, 0, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0,
    277, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0,
    0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 294, 0,
    295, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 301, 0, 0, 0, 302, 0, 0, 303, 0, 0,
    0, 304, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308,
    0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 311, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0,
    318, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0,
    0, 328, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0,
    340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0,
    344, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0,
    351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0,
    0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0,
    372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 385,
    0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393,
    0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0,
    0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0,
    0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0,
    0, 417, 0, 0, 0, 0, 418, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0,
    0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427,
    0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 436, 0, 0, 437, 0, 0,
    438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0,
    0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 446, 0, 447, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0,
    452, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458,
    0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0,
    0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0,
    470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0,
    0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0,
    482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0,
    489, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0,
    0, 496, 0, 0, 497, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0,
    501, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0,
    0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0,
    0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 518, 0, 0, 0, 519, 0, 0, 520, 0, 0, 521, 0, 0,
    0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 528, 0,
    0, 529, 0, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0,
    0, 535, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0,
    543, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 0, 0, 549, 0,
    0, 550, 0, 0, 551, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0, 554, 0, 0, 555, 0, 0, 556, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0,
    559, 0, 0, 560, 0, 0, 561, 0, 0, 562, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0,
    567, 0, 0, 0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0,
    0, 0, 0, 573, 0, 0, 574, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 580, 0, 0,
    0, 581, 0, 0, 0, 0, 582, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 0,
    588, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0,
    0, 594, 0, 595, 0, 0, 596, 0, 597, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 0, 601, 0, 0, 0, 0, 602, 0, 603,
    0, 0, 604, 0, 0, 0, 0, 605, 0, 606, 0, 0, 607, 0, 0, 0, 0, 608, 0, 609, 0, 0, 610, 0, 0, 0, 0, 611, 0, 612, 0, 0,
    0, 0, 613, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 618, 0, 0, 0, 0, 619, 0, 0,
    0, 620, 0, 0, 621, 0, 622, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 624, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0,
    628, 0, 629, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 635,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 637, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0,
    0, 0, 640, 0, 0, 0, 641, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0,
    646, 0, 0, 0, 647, 0, 648, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0,
    653, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 0,
    0, 658, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0,
    663, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 665, 0, 0, 666, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 669,
    0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 673, 0, 0, 674, 0, 0, 675, 0,
    676, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 678, 0, 0, 679, 0, 0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0,
    682, 0, 0, 0, 0, 0, 683, 0, 0, 684, 0, 0, 685, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 689,
    0, 0, 0, 0, 690, 0, 0, 0, 0, 691, 0, 0, 0, 692, 0, 693, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 696,
    0, 0, 697, 0, 0, 698, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 703, 0, 0,
};

void unit_0037(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001DC000;
    case 2u: goto L_001DC004;
    case 3u: goto L_001DC00C;
    case 4u: goto L_001DC018;
    case 5u: goto L_001DC030;
    case 6u: goto L_001DC03C;
    case 7u: goto L_001DC060;
    case 8u: goto L_001DC078;
    case 9u: goto L_001DC0A0;
    case 10u: goto L_001DC11C;
    case 11u: goto L_001DC138;
    case 12u: goto L_001DC150;
    case 13u: goto L_001DC1B8;
    case 14u: goto L_001DC1D4;
    case 15u: goto L_001DC1F0;
    case 16u: goto L_001DC22C;
    case 17u: goto L_001DC29C;
    case 18u: goto L_001DC32C;
    case 19u: goto L_001DC350;
    case 20u: goto L_001DC384;
    case 21u: goto L_001DC398;
    case 22u: goto L_001DC3A8;
    case 23u: goto L_001DC3B8;
    case 24u: goto L_001DC3E0;
    case 25u: goto L_001DC420;
    case 26u: goto L_001DC460;
    case 27u: goto L_001DC4AC;
    case 28u: goto L_001DC4D0;
    case 29u: goto L_001DC4F8;
    case 30u: goto L_001DC514;
    case 31u: goto L_001DC594;
    case 32u: goto L_001DC5E0;
    case 33u: goto L_001DC600;
    case 34u: goto L_001DC62C;
    case 35u: goto L_001DC6A0;
    case 36u: goto L_001DC6C4;
    case 37u: goto L_001DC710;
    case 38u: goto L_001DC730;
    case 39u: goto L_001DC740;
    case 40u: goto L_001DC760;
    case 41u: goto L_001DC76C;
    case 42u: goto L_001DC784;
    case 43u: goto L_001DC790;
    case 44u: goto L_001DC7A8;
    case 45u: goto L_001DC7B4;
    case 46u: goto L_001DC7C4;
    case 47u: goto L_001DC7E0;
    case 48u: goto L_001DC810;
    case 49u: goto L_001DC81C;
    case 50u: goto L_001DC82C;
    case 51u: goto L_001DC838;
    case 52u: goto L_001DC84C;
    case 53u: goto L_001DC858;
    case 54u: goto L_001DC864;
    case 55u: goto L_001DC874;
    case 56u: goto L_001DC880;
    case 57u: goto L_001DC890;
    case 58u: goto L_001DC8A4;
    case 59u: goto L_001DC8C0;
    case 60u: goto L_001DC8D0;
    case 61u: goto L_001DC8E0;
    case 62u: goto L_001DC914;
    case 63u: goto L_001DC924;
    case 64u: goto L_001DC930;
    case 65u: goto L_001DC944;
    case 66u: goto L_001DC950;
    case 67u: goto L_001DC95C;
    case 68u: goto L_001DC96C;
    case 69u: goto L_001DC978;
    case 70u: goto L_001DC988;
    case 71u: goto L_001DC99C;
    case 72u: goto L_001DC9B8;
    case 73u: goto L_001DC9C8;
    case 74u: goto L_001DC9D8;
    case 75u: goto L_001DC9E8;
    case 76u: goto L_001DC9F4;
    case 77u: goto L_001DCA08;
    case 78u: goto L_001DCA14;
    case 79u: goto L_001DCA20;
    case 80u: goto L_001DCA30;
    case 81u: goto L_001DCA3C;
    case 82u: goto L_001DCA4C;
    case 83u: goto L_001DCA60;
    case 84u: goto L_001DCA7C;
    case 85u: goto L_001DCA8C;
    case 86u: goto L_001DCA9C;
    case 87u: goto L_001DCAB8;
    case 88u: goto L_001DCAC4;
    case 89u: goto L_001DCAD4;
    case 90u: goto L_001DCAE4;
    case 91u: goto L_001DCAF4;
    case 92u: goto L_001DCB00;
    case 93u: goto L_001DCB18;
    case 94u: goto L_001DCB24;
    case 95u: goto L_001DCB28;
    case 96u: goto L_001DCB38;
    case 97u: goto L_001DCB44;
    case 98u: goto L_001DCB58;
    case 99u: goto L_001DCB64;
    case 100u: goto L_001DCB70;
    case 101u: goto L_001DCB80;
    case 102u: goto L_001DCB8C;
    case 103u: goto L_001DCB9C;
    case 104u: goto L_001DCBB0;
    case 105u: goto L_001DCBC4;
    case 106u: goto L_001DCBDC;
    case 107u: goto L_001DCBE8;
    case 108u: goto L_001DCBFC;
    case 109u: goto L_001DCC08;
    case 110u: goto L_001DCC1C;
    case 111u: goto L_001DCC28;
    case 112u: goto L_001DCC34;
    case 113u: goto L_001DCC44;
    case 114u: goto L_001DCC50;
    case 115u: goto L_001DCC60;
    case 116u: goto L_001DCC74;
    case 117u: goto L_001DCC98;
    case 118u: goto L_001DCCAC;
    case 119u: goto L_001DCCBC;
    case 120u: goto L_001DCCD0;
    case 121u: goto L_001DCCE0;
    case 122u: goto L_001DCCF0;
    case 123u: goto L_001DCD00;
    case 124u: goto L_001DCD38;
    case 125u: goto L_001DCD70;
    case 126u: goto L_001DCDA0;
    case 127u: goto L_001DCDB8;
    case 128u: goto L_001DCDD0;
    case 129u: goto L_001DCDE8;
    case 130u: goto L_001DCDFC;
    case 131u: goto L_001DCE0C;
    case 132u: goto L_001DCE14;
    case 133u: goto L_001DCE20;
    case 134u: goto L_001DCE2C;
    case 135u: goto L_001DCE48;
    case 136u: goto L_001DCE54;
    case 137u: goto L_001DCE6C;
    case 138u: goto L_001DCE84;
    case 139u: goto L_001DCEB0;
    case 140u: goto L_001DCED4;
    case 141u: goto L_001DCEE0;
    case 142u: goto L_001DCEF8;
    case 143u: goto L_001DCF1C;
    case 144u: goto L_001DCF2C;
    case 145u: goto L_001DCF34;
    case 146u: goto L_001DCF40;
    case 147u: goto L_001DCF50;
    case 148u: goto L_001DCF68;
    case 149u: goto L_001DCF78;
    case 150u: goto L_001DCFA0;
    case 151u: goto L_001DCFC0;
    case 152u: goto L_001DCFD4;
    case 153u: goto L_001DCFE0;
    case 154u: goto L_001DCFFC;
    case 155u: goto L_001DD02C;
    case 156u: goto L_001DD034;
    case 157u: goto L_001DD040;
    case 158u: goto L_001DD050;
    case 159u: goto L_001DD06C;
    case 160u: goto L_001DD07C;
    case 161u: goto L_001DD0A0;
    case 162u: goto L_001DD0BC;
    case 163u: goto L_001DD0C8;
    case 164u: goto L_001DD0DC;
    case 165u: goto L_001DD0F0;
    case 166u: goto L_001DD10C;
    case 167u: goto L_001DD118;
    case 168u: goto L_001DD128;
    case 169u: goto L_001DD140;
    case 170u: goto L_001DD15C;
    case 171u: goto L_001DD16C;
    case 172u: goto L_001DD174;
    case 173u: goto L_001DD178;
    case 174u: goto L_001DD180;
    case 175u: goto L_001DD198;
    case 176u: goto L_001DD1A4;
    case 177u: goto L_001DD1B0;
    case 178u: goto L_001DD1C0;
    case 179u: goto L_001DD1CC;
    case 180u: goto L_001DD1E4;
    case 181u: goto L_001DD200;
    case 182u: goto L_001DD224;
    case 183u: goto L_001DD230;
    case 184u: goto L_001DD244;
    case 185u: goto L_001DD24C;
    case 186u: goto L_001DD254;
    case 187u: goto L_001DD264;
    case 188u: goto L_001DD274;
    case 189u: goto L_001DD284;
    case 190u: goto L_001DD290;
    case 191u: goto L_001DD2A8;
    case 192u: goto L_001DD2E0;
    case 193u: goto L_001DD300;
    case 194u: goto L_001DD310;
    case 195u: goto L_001DD340;
    case 196u: goto L_001DD364;
    case 197u: goto L_001DD380;
    case 198u: goto L_001DD3A8;
    case 199u: goto L_001DD3B8;
    case 200u: goto L_001DD3D4;
    case 201u: goto L_001DD3DC;
    case 202u: goto L_001DD3E4;
    case 203u: goto L_001DD3FC;
    case 204u: goto L_001DD408;
    case 205u: goto L_001DD424;
    case 206u: goto L_001DD44C;
    case 207u: goto L_001DD494;
    case 208u: goto L_001DD4A4;
    case 209u: goto L_001DD4B8;
    case 210u: goto L_001DD4C0;
    case 211u: goto L_001DD4C8;
    case 212u: goto L_001DD4E0;
    case 213u: goto L_001DD4EC;
    case 214u: goto L_001DD500;
    case 215u: goto L_001DD518;
    case 216u: goto L_001DD544;
    case 217u: goto L_001DD558;
    case 218u: goto L_001DD564;
    case 219u: goto L_001DD56C;
    case 220u: goto L_001DD574;
    case 221u: goto L_001DD58C;
    case 222u: goto L_001DD598;
    case 223u: goto L_001DD5A8;
    case 224u: goto L_001DD5D0;
    case 225u: goto L_001DD610;
    case 226u: goto L_001DD640;
    case 227u: goto L_001DD660;
    case 228u: goto L_001DD68C;
    case 229u: goto L_001DD6BC;
    case 230u: goto L_001DD6CC;
    case 231u: goto L_001DD6E4;
    case 232u: goto L_001DD704;
    case 233u: goto L_001DD730;
    case 234u: goto L_001DD758;
    case 235u: goto L_001DD760;
    case 236u: goto L_001DD76C;
    case 237u: goto L_001DD7B0;
    case 238u: goto L_001DD7E0;
    case 239u: goto L_001DD80C;
    case 240u: goto L_001DD82C;
    case 241u: goto L_001DD850;
    case 242u: goto L_001DD880;
    case 243u: goto L_001DD8B4;
    case 244u: goto L_001DD8F8;
    case 245u: goto L_001DD900;
    case 246u: goto L_001DD90C;
    case 247u: goto L_001DD950;
    case 248u: goto L_001DD9B0;
    case 249u: goto L_001DD9F0;
    case 250u: goto L_001DDA34;
    case 251u: goto L_001DDA3C;
    case 252u: goto L_001DDA48;
    case 253u: goto L_001DDA8C;
    case 254u: goto L_001DDAC0;
    case 255u: goto L_001DDAF4;
    case 256u: goto L_001DDB10;
    case 257u: goto L_001DDB1C;
    case 258u: goto L_001DDB28;
    case 259u: goto L_001DDB48;
    case 260u: goto L_001DDB60;
    case 261u: goto L_001DDB80;
    case 262u: goto L_001DDB8C;
    case 263u: goto L_001DDBA0;
    case 264u: goto L_001DDBA8;
    case 265u: goto L_001DDBB4;
    case 266u: goto L_001DDBC0;
    case 267u: goto L_001DDBD4;
    case 268u: goto L_001DDBE8;
    case 269u: goto L_001DDBF4;
    case 270u: goto L_001DDC00;
    case 271u: goto L_001DDC10;
    case 272u: goto L_001DDC1C;
    case 273u: goto L_001DDC28;
    case 274u: goto L_001DDC34;
    case 275u: goto L_001DDC54;
    case 276u: goto L_001DDC6C;
    case 277u: goto L_001DDC80;
    case 278u: goto L_001DDC90;
    case 279u: goto L_001DDC9C;
    case 280u: goto L_001DDCB0;
    case 281u: goto L_001DDCC4;
    case 282u: goto L_001DDCE0;
    case 283u: goto L_001DDD1C;
    case 284u: goto L_001DDD38;
    case 285u: goto L_001DDD44;
    case 286u: goto L_001DDD50;
    case 287u: goto L_001DDD70;
    case 288u: goto L_001DDD88;
    case 289u: goto L_001DDDA4;
    case 290u: goto L_001DDDB4;
    case 291u: goto L_001DDDC0;
    case 292u: goto L_001DDDD8;
    case 293u: goto L_001DDDE4;
    case 294u: goto L_001DDDF8;
    case 295u: goto L_001DDE00;
    case 296u: goto L_001DDE0C;
    case 297u: goto L_001DDE18;
    case 298u: goto L_001DDE2C;
    case 299u: goto L_001DDE40;
    case 300u: goto L_001DDE4C;
    case 301u: goto L_001DDE58;
    case 302u: goto L_001DDE68;
    case 303u: goto L_001DDE74;
    case 304u: goto L_001DDE84;
    case 305u: goto L_001DDE90;
    case 306u: goto L_001DDE9C;
    case 307u: goto L_001DDEC0;
    case 308u: goto L_001DDEFC;
    case 309u: goto L_001DDF08;
    case 310u: goto L_001DDF14;
    case 311u: goto L_001DDF28;
    case 312u: goto L_001DDF30;
    case 313u: goto L_001DDF3C;
    case 314u: goto L_001DDF48;
    case 315u: goto L_001DDF54;
    case 316u: goto L_001DDF64;
    case 317u: goto L_001DDF78;
    case 318u: goto L_001DDF80;
    case 319u: goto L_001DDF88;
    case 320u: goto L_001DDF94;
    case 321u: goto L_001DDFB4;
    case 322u: goto L_001DDFC0;
    case 323u: goto L_001DDFE0;
    case 324u: goto L_001DE010;
    case 325u: goto L_001DE048;
    case 326u: goto L_001DE05C;
    case 327u: goto L_001DE078;
    case 328u: goto L_001DE084;
    case 329u: goto L_001DE090;
    case 330u: goto L_001DE0A4;
    case 331u: goto L_001DE0B8;
    case 332u: goto L_001DE0D8;
    case 333u: goto L_001DE0E8;
    case 334u: goto L_001DE110;
    case 335u: goto L_001DE12C;
    case 336u: goto L_001DE144;
    case 337u: goto L_001DE150;
    case 338u: goto L_001DE15C;
    case 339u: goto L_001DE170;
    case 340u: goto L_001DE180;
    case 341u: goto L_001DE1A0;
    case 342u: goto L_001DE1C8;
    case 343u: goto L_001DE1E0;
    case 344u: goto L_001DE200;
    case 345u: goto L_001DE214;
    case 346u: goto L_001DE224;
    case 347u: goto L_001DE230;
    case 348u: goto L_001DE248;
    case 349u: goto L_001DE25C;
    case 350u: goto L_001DE270;
    case 351u: goto L_001DE280;
    case 352u: goto L_001DE2AC;
    case 353u: goto L_001DE2E8;
    case 354u: goto L_001DE310;
    case 355u: goto L_001DE334;
    case 356u: goto L_001DE354;
    case 357u: goto L_001DE368;
    case 358u: goto L_001DE378;
    case 359u: goto L_001DE384;
    case 360u: goto L_001DE39C;
    case 361u: goto L_001DE3B0;
    case 362u: goto L_001DE3C4;
    case 363u: goto L_001DE3D4;
    case 364u: goto L_001DE400;
    case 365u: goto L_001DE43C;
    case 366u: goto L_001DE460;
    case 367u: goto L_001DE494;
    case 368u: goto L_001DE4B4;
    case 369u: goto L_001DE4CC;
    case 370u: goto L_001DE4E4;
    case 371u: goto L_001DE4F4;
    case 372u: goto L_001DE500;
    case 373u: goto L_001DE518;
    case 374u: goto L_001DE530;
    case 375u: goto L_001DE544;
    case 376u: goto L_001DE554;
    case 377u: goto L_001DE580;
    case 378u: goto L_001DE5BC;
    case 379u: goto L_001DE5D0;
    case 380u: goto L_001DE600;
    case 381u: goto L_001DE630;
    case 382u: goto L_001DE648;
    case 383u: goto L_001DE658;
    case 384u: goto L_001DE664;
    case 385u: goto L_001DE67C;
    case 386u: goto L_001DE694;
    case 387u: goto L_001DE6A8;
    case 388u: goto L_001DE6B8;
    case 389u: goto L_001DE6E4;
    case 390u: goto L_001DE720;
    case 391u: goto L_001DE734;
    case 392u: goto L_001DE760;
    case 393u: goto L_001DE77C;
    case 394u: goto L_001DE798;
    case 395u: goto L_001DE7AC;
    case 396u: goto L_001DE7BC;
    case 397u: goto L_001DE7EC;
    case 398u: goto L_001DE82C;
    case 399u: goto L_001DE840;
    case 400u: goto L_001DE864;
    case 401u: goto L_001DE878;
    case 402u: goto L_001DE888;
    case 403u: goto L_001DE894;
    case 404u: goto L_001DE8AC;
    case 405u: goto L_001DE8C0;
    case 406u: goto L_001DE8D4;
    case 407u: goto L_001DE8E4;
    case 408u: goto L_001DE910;
    case 409u: goto L_001DE94C;
    case 410u: goto L_001DE970;
    case 411u: goto L_001DE98C;
    case 412u: goto L_001DE9A8;
    case 413u: goto L_001DE9C0;
    case 414u: goto L_001DEA2C;
    case 415u: goto L_001DEA48;
    case 416u: goto L_001DEA68;
    case 417u: goto L_001DEA84;
    case 418u: goto L_001DEA98;
    case 419u: goto L_001DEAA4;
    case 420u: goto L_001DEAAC;
    case 421u: goto L_001DEAD0;
    case 422u: goto L_001DEAE8;
    case 423u: goto L_001DEB04;
    case 424u: goto L_001DEB24;
    case 425u: goto L_001DEB40;
    case 426u: goto L_001DEB50;
    case 427u: goto L_001DEB7C;
    case 428u: goto L_001DEB90;
    case 429u: goto L_001DEBA0;
    case 430u: goto L_001DEBCC;
    case 431u: goto L_001DEC08;
    case 432u: goto L_001DEC20;
    case 433u: goto L_001DEC34;
    case 434u: goto L_001DEC50;
    case 435u: goto L_001DEC58;
    case 436u: goto L_001DEC68;
    case 437u: goto L_001DEC74;
    case 438u: goto L_001DEC80;
    case 439u: goto L_001DECA0;
    case 440u: goto L_001DECC0;
    case 441u: goto L_001DECCC;
    case 442u: goto L_001DECE4;
    case 443u: goto L_001DECF8;
    case 444u: goto L_001DED0C;
    case 445u: goto L_001DED18;
    case 446u: goto L_001DED2C;
    case 447u: goto L_001DED34;
    case 448u: goto L_001DED40;
    case 449u: goto L_001DED4C;
    case 450u: goto L_001DED60;
    case 451u: goto L_001DED74;
    case 452u: goto L_001DED80;
    case 453u: goto L_001DED94;
    case 454u: goto L_001DEDA0;
    case 455u: goto L_001DEDAC;
    case 456u: goto L_001DEDC0;
    case 457u: goto L_001DEDDC;
    case 458u: goto L_001DEDFC;
    case 459u: goto L_001DEE18;
    case 460u: goto L_001DEE2C;
    case 461u: goto L_001DEE3C;
    case 462u: goto L_001DEE58;
    case 463u: goto L_001DEE74;
    case 464u: goto L_001DEE90;
    case 465u: goto L_001DEEA4;
    case 466u: goto L_001DEEB0;
    case 467u: goto L_001DEEC0;
    case 468u: goto L_001DEED8;
    case 469u: goto L_001DEEE8;
    case 470u: goto L_001DEF00;
    case 471u: goto L_001DEF1C;
    case 472u: goto L_001DEF28;
    case 473u: goto L_001DEF38;
    case 474u: goto L_001DEF4C;
    case 475u: goto L_001DEF70;
    case 476u: goto L_001DEF88;
    case 477u: goto L_001DEF98;
    case 478u: goto L_001DEFB0;
    case 479u: goto L_001DEFCC;
    case 480u: goto L_001DEFD8;
    case 481u: goto L_001DEFE8;
    case 482u: goto L_001DF000;
    case 483u: goto L_001DF020;
    case 484u: goto L_001DF02C;
    case 485u: goto L_001DF03C;
    case 486u: goto L_001DF054;
    case 487u: goto L_001DF064;
    case 488u: goto L_001DF070;
    case 489u: goto L_001DF080;
    case 490u: goto L_001DF090;
    case 491u: goto L_001DF0A8;
    case 492u: goto L_001DF0B8;
    case 493u: goto L_001DF0CC;
    case 494u: goto L_001DF0E4;
    case 495u: goto L_001DF0F8;
    case 496u: goto L_001DF104;
    case 497u: goto L_001DF110;
    case 498u: goto L_001DF11C;
    case 499u: goto L_001DF140;
    case 500u: goto L_001DF160;
    case 501u: goto L_001DF180;
    case 502u: goto L_001DF18C;
    case 503u: goto L_001DF19C;
    case 504u: goto L_001DF1B4;
    case 505u: goto L_001DF1C4;
    case 506u: goto L_001DF1D0;
    case 507u: goto L_001DF1E0;
    case 508u: goto L_001DF1F0;
    case 509u: goto L_001DF208;
    case 510u: goto L_001DF218;
    case 511u: goto L_001DF22C;
    case 512u: goto L_001DF244;
    case 513u: goto L_001DF250;
    case 514u: goto L_001DF260;
    case 515u: goto L_001DF270;
    case 516u: goto L_001DF290;
    case 517u: goto L_001DF2C0;
    case 518u: goto L_001DF2CC;
    case 519u: goto L_001DF2DC;
    case 520u: goto L_001DF2E8;
    case 521u: goto L_001DF2F4;
    case 522u: goto L_001DF310;
    case 523u: goto L_001DF324;
    case 524u: goto L_001DF330;
    case 525u: goto L_001DF33C;
    case 526u: goto L_001DF34C;
    case 527u: goto L_001DF36C;
    case 528u: goto L_001DF378;
    case 529u: goto L_001DF384;
    case 530u: goto L_001DF394;
    case 531u: goto L_001DF39C;
    case 532u: goto L_001DF3C8;
    case 533u: goto L_001DF3DC;
    case 534u: goto L_001DF3F0;
    case 535u: goto L_001DF404;
    case 536u: goto L_001DF410;
    case 537u: goto L_001DF420;
    case 538u: goto L_001DF430;
    case 539u: goto L_001DF43C;
    case 540u: goto L_001DF450;
    case 541u: goto L_001DF468;
    case 542u: goto L_001DF474;
    case 543u: goto L_001DF480;
    case 544u: goto L_001DF48C;
    case 545u: goto L_001DF4C4;
    case 546u: goto L_001DF4D0;
    case 547u: goto L_001DF4DC;
    case 548u: goto L_001DF4E8;
    case 549u: goto L_001DF4F8;
    case 550u: goto L_001DF504;
    case 551u: goto L_001DF510;
    case 552u: goto L_001DF520;
    case 553u: goto L_001DF52C;
    case 554u: goto L_001DF53C;
    case 555u: goto L_001DF548;
    case 556u: goto L_001DF554;
    case 557u: goto L_001DF560;
    case 558u: goto L_001DF574;
    case 559u: goto L_001DF580;
    case 560u: goto L_001DF58C;
    case 561u: goto L_001DF598;
    case 562u: goto L_001DF5A4;
    case 563u: goto L_001DF5B8;
    case 564u: goto L_001DF5C4;
    case 565u: goto L_001DF5D0;
    case 566u: goto L_001DF5E0;
    case 567u: goto L_001DF600;
    case 568u: goto L_001DF618;
    case 569u: goto L_001DF628;
    case 570u: goto L_001DF638;
    case 571u: goto L_001DF650;
    case 572u: goto L_001DF670;
    case 573u: goto L_001DF68C;
    case 574u: goto L_001DF698;
    case 575u: goto L_001DF6A4;
    case 576u: goto L_001DF6BC;
    case 577u: goto L_001DF6D0;
    case 578u: goto L_001DF6DC;
    case 579u: goto L_001DF6E8;
    case 580u: goto L_001DF6F4;
    case 581u: goto L_001DF704;
    case 582u: goto L_001DF718;
    case 583u: goto L_001DF724;
    case 584u: goto L_001DF734;
    case 585u: goto L_001DF750;
    case 586u: goto L_001DF75C;
    case 587u: goto L_001DF768;
    case 588u: goto L_001DF780;
    case 589u: goto L_001DF798;
    case 590u: goto L_001DF7AC;
    case 591u: goto L_001DF7C4;
    case 592u: goto L_001DF7EC;
    case 593u: goto L_001DF7F8;
    case 594u: goto L_001DF804;
    case 595u: goto L_001DF80C;
    case 596u: goto L_001DF818;
    case 597u: goto L_001DF820;
    case 598u: goto L_001DF82C;
    case 599u: goto L_001DF84C;
    case 600u: goto L_001DF854;
    case 601u: goto L_001DF860;
    case 602u: goto L_001DF874;
    case 603u: goto L_001DF87C;
    case 604u: goto L_001DF888;
    case 605u: goto L_001DF89C;
    case 606u: goto L_001DF8A4;
    case 607u: goto L_001DF8B0;
    case 608u: goto L_001DF8C4;
    case 609u: goto L_001DF8CC;
    case 610u: goto L_001DF8D8;
    case 611u: goto L_001DF8EC;
    case 612u: goto L_001DF8F4;
    case 613u: goto L_001DF908;
    case 614u: goto L_001DF91C;
    case 615u: goto L_001DF930;
    case 616u: goto L_001DF948;
    case 617u: goto L_001DF954;
    case 618u: goto L_001DF960;
    case 619u: goto L_001DF974;
    case 620u: goto L_001DF984;
    case 621u: goto L_001DF990;
    case 622u: goto L_001DF998;
    case 623u: goto L_001DF9B0;
    case 624u: goto L_001DF9C8;
    case 625u: goto L_001DF9D0;
    case 626u: goto L_001DF9E4;
    case 627u: goto L_001DF9F4;
    case 628u: goto L_001DFA00;
    case 629u: goto L_001DFA08;
    case 630u: goto L_001DFA20;
    case 631u: goto L_001DFA44;
    case 632u: goto L_001DFA50;
    case 633u: goto L_001DFA68;
    case 634u: goto L_001DFA70;
    case 635u: goto L_001DFA7C;
    case 636u: goto L_001DFAB0;
    case 637u: goto L_001DFAC8;
    case 638u: goto L_001DFAD4;
    case 639u: goto L_001DFAF4;
    case 640u: goto L_001DFB08;
    case 641u: goto L_001DFB18;
    case 642u: goto L_001DFB30;
    case 643u: goto L_001DFB54;
    case 644u: goto L_001DFB60;
    case 645u: goto L_001DFB70;
    case 646u: goto L_001DFB80;
    case 647u: goto L_001DFB90;
    case 648u: goto L_001DFB98;
    case 649u: goto L_001DFBB0;
    case 650u: goto L_001DFBD0;
    case 651u: goto L_001DFBDC;
    case 652u: goto L_001DFBF4;
    case 653u: goto L_001DFC00;
    case 654u: goto L_001DFC20;
    case 655u: goto L_001DFC40;
    case 656u: goto L_001DFC58;
    case 657u: goto L_001DFC6C;
    case 658u: goto L_001DFC84;
    case 659u: goto L_001DFC90;
    case 660u: goto L_001DFCB0;
    case 661u: goto L_001DFCCC;
    case 662u: goto L_001DFCE0;
    case 663u: goto L_001DFD00;
    case 664u: goto L_001DFD20;
    case 665u: goto L_001DFD2C;
    case 666u: goto L_001DFD38;
    case 667u: goto L_001DFD44;
    case 668u: goto L_001DFD68;
    case 669u: goto L_001DFD7C;
    case 670u: goto L_001DFD88;
    case 671u: goto L_001DFDB0;
    case 672u: goto L_001DFDCC;
    case 673u: goto L_001DFDE0;
    case 674u: goto L_001DFDEC;
    case 675u: goto L_001DFDF8;
    case 676u: goto L_001DFE00;
    case 677u: goto L_001DFE20;
    case 678u: goto L_001DFE3C;
    case 679u: goto L_001DFE48;
    case 680u: goto L_001DFE54;
    case 681u: goto L_001DFE6C;
    case 682u: goto L_001DFE80;
    case 683u: goto L_001DFE98;
    case 684u: goto L_001DFEA4;
    case 685u: goto L_001DFEB0;
    case 686u: goto L_001DFEBC;
    case 687u: goto L_001DFED0;
    case 688u: goto L_001DFEEC;
    case 689u: goto L_001DFEFC;
    case 690u: goto L_001DFF10;
    case 691u: goto L_001DFF24;
    case 692u: goto L_001DFF34;
    case 693u: goto L_001DFF3C;
    case 694u: goto L_001DFF4C;
    case 695u: goto L_001DFF60;
    case 696u: goto L_001DFF7C;
    case 697u: goto L_001DFF88;
    case 698u: goto L_001DFF94;
    case 699u: goto L_001DFFA0;
    case 700u: goto L_001DFFC0;
    case 701u: goto L_001DFFDC;
    case 702u: goto L_001DFFE8;
    case 703u: goto L_001DFFF4;
    default: bad_entry(c, 0x001DC000u); return;
    }
L_001DC000:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DC004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DC078; } }
L_001DC00C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC018u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 288u, depth + 1u); else { c.pc = 0x001D78D0u; return; } if (c.pc != 0x001DC018u) [[unlikely]] return; }
L_001DC018:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_001DC040; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_001DC030:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC03Cu); set32(c.r[6], c.r[6].w[0] - 24298u);  if (depth < kMaxDepth) unit_0032(c, 93u, depth + 1u); else { c.pc = 0x001C9800u; return; } if (c.pc != 0x001DC03Cu) [[unlikely]] return; }
L_001DC03C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001DC040:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[7], c.r[18].w[0] + 1u);  goto L_001DC068; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC060u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 12u, depth + 1u); else { c.pc = 0x001DC150u; return; } if (c.pc != 0x001DC060u) [[unlikely]] return; }
L_001DC060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 8u)));  if (t) { goto L_001DC078; } }
L_001DC068:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC078u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 340u, depth + 1u); else { c.pc = 0x001DBBA0u; return; } if (c.pc != 0x001DC078u) [[unlikely]] return; }
L_001DC078:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001DC0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[7].w[0])));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[8].w[0])));
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[3].w[0] + 28u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 29;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DC11C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC11Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0032(c, 206u, depth + 1u); else { c.pc = 0x001CB740u; return; } if (c.pc != 0x001DC11Cu) [[unlikely]] return; }
L_001DC11C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 32u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC138u); set32(c.r[5], c.r[2].w[0] - 32u);  if (depth < kMaxDepth) unit_0032(c, 161u, depth + 1u); else { c.pc = 0x001CAEA0u; return; } if (c.pc != 0x001DC138u) [[unlikely]] return; }
L_001DC138:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DC150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[7].w[0])));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DC1B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC1B8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0032(c, 206u, depth + 1u); else { c.pc = 0x001CB740u; return; } if (c.pc != 0x001DC1B8u) [[unlikely]] return; }
L_001DC1B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 24u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC1D4u); set32(c.r[5], c.r[2].w[0] - 24u);  if (depth < kMaxDepth) unit_0032(c, 161u, depth + 1u); else { c.pc = 0x001CAEA0u; return; } if (c.pc != 0x001DC1D4u) [[unlikely]] return; }
L_001DC1D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 8u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DC1F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 48u));
    c.r[3].d[0] = c.r[5].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DC234; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[5].d[0] & 4ull;  goto L_001DC238; }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC22Cu); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0032(c, 203u, depth + 1u); else { c.pc = 0x001CB640u; return; } if (c.pc != 0x001DC22Cu) [[unlikely]] return; }
L_001DC22C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001DC340; } }
L_001DC234:
    c.r[3].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 1;
L_001DC238:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DC33C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 7;
    if (c.r[7].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_001DC288; }
    set32(c.r[6], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));  if (t) { goto L_001DC27C; } }
    set32(c.r[5], c.r[6].w[0] + 3u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 2));
    c.budget -= 2;
L_001DC27C:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] - 4u)));
    c.budget -= 3;
L_001DC288:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 50u));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 16u)));  goto L_001DC2A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC29Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 121u, depth + 1u); else { c.pc = 0x001CA6A0u; return; } if (c.pc != 0x001DC29Cu) [[unlikely]] return; }
L_001DC29C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DC33C; } }
L_001DC2A4:
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[7].w[0])));
    set32(c.r[7], c.r[8].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = c.r[7].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 2));  if (t) { goto L_001DC2C0; } }
    set32(c.r[5], c.r[7].w[0] + 3u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 2));
    c.budget -= 2;
L_001DC2C0:
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 16u)));  goto L_001DC2D4; }
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 2;
L_001DC2D4:
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001DC324; }
    set32(c.r[7], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[7].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001DC318; }
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[5], c.r[8].w[0] - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 2));  if (t) { goto L_001DC30C; } }
    set32(c.r[3], c.r[5].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_001DC30C:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.budget -= 3;
L_001DC318:
    c.budget -= 2;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 16u)));  goto L_001DC334; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001DC324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC32Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0032(c, 203u, depth + 1u); else { c.pc = 0x001CB640u; return; } if (c.pc != 0x001DC32Cu) [[unlikely]] return; }
L_001DC32C:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 2;
L_001DC334:
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 2;
L_001DC33C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DC340:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DC350:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DC37C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DC3C0; } }
L_001DC37C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC384u); c.f[12] = ld32((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001DC384u) [[unlikely]] return; }
L_001DC384:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC398u); set32(c.r[5], c.r[5].w[0] - 24324u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x001DC398u) [[unlikely]] return; }
L_001DC398:
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC3A8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001DC3A8u) [[unlikely]] return; }
L_001DC3A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC3B8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001DC3B8u) [[unlikely]] return; }
L_001DC3B8:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001DC3C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001DC3E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DC404; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DC444; } }
L_001DC404:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DC444; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC420u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0034(c, 19u, depth + 1u); else { c.pc = 0x001D02C0u; return; } if (c.pc != 0x001DC420u) [[unlikely]] return; }
L_001DC420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DC440; } }
    set32(c.r[3], 0u + 3u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.f[0]);  if (t) { goto L_001DC444; } }
L_001DC440:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DC444:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DC460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DC4B4; } }
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0])));  goto L_001DC498; }
    set32(c.r[16], 0u + 32u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_001DC498:
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = c.r[16].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC4ACu); c.r[7].d[0] = c.r[7].d[0] >> 32;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001DC4ACu) [[unlikely]] return; }
L_001DC4AC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 2;
L_001DC4B4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DC4D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001DC5B4; } }
L_001DC4F8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[19].w[0])));  goto L_001DC574; }
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC514u); set32(c.r[6], c.r[29].w[0] + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DC514u) [[unlikely]] return; }
L_001DC514:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_001DC548; }
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[3].w[0] - 1u);  goto L_001DC534; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DC548; } }
L_001DC534:
    st32((c.r[19].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
L_001DC548:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_001DC55C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DC5C0; } }
L_001DC55C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 6;
L_001DC574:
    c.r[1].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001DC584; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DC584:
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC594u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001DC594u) [[unlikely]] return; }
L_001DC594:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[18], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[17], c.r[17].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
L_001DC5B4:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DC4F8u | kUnwind; return; } goto L_001DC4F8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DC5C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001DC5E0:
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_001DC600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DC688; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC62Cu); set32(c.r[6], c.r[29].w[0] + 44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DC62Cu) [[unlikely]] return; }
L_001DC62C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_001DC660; }
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[3].w[0] - 1u);  goto L_001DC64C; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DC660; } }
L_001DC64C:
    st32((c.r[16].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
L_001DC660:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_001DC674; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001DC694; } }
L_001DC674:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
L_001DC688:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
L_001DC694:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DC6A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC6C4u); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DC6C4u) [[unlikely]] return; }
L_001DC6C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_001DC6F8; }
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[3].w[0] - 1u);  goto L_001DC6E4; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DC6F8; } }
L_001DC6E4:
    st32((c.r[16].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
L_001DC6F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DC710:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 24123u);
    set32(c.r[6], c.r[6].w[0] - 24256u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC730u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 307u, depth + 1u); else { c.pc = 0x001DDEC0u; return; } if (c.pc != 0x001DC730u) [[unlikely]] return; }
L_001DC730:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001DC740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], 0u + 5u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC760u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 399u, depth + 1u); else { c.pc = 0x001DE840u; return; } if (c.pc != 0x001DC760u) [[unlikely]] return; }
L_001DC760:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC76Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 254u, depth + 1u); else { c.pc = 0x001DDAC0u; return; } if (c.pc != 0x001DC76Cu) [[unlikely]] return; }
L_001DC76C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 40u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC784u); set32(c.r[6], c.r[6].w[0] - 24117u);  if (depth < kMaxDepth) unit_0037(c, 410u, depth + 1u); else { c.pc = 0x001DE970u; return; } if (c.pc != 0x001DC784u) [[unlikely]] return; }
L_001DC784:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC790u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DC790u) [[unlikely]] return; }
L_001DC790:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001DC7AC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC7A8u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0037(c, 399u, depth + 1u); else { c.pc = 0x001DE840u; return; } if (c.pc != 0x001DC7A8u) [[unlikely]] return; }
L_001DC7A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DC7AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC7B4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DC7B4u) [[unlikely]] return; }
L_001DC7B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC7C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 47u, depth + 1u); else { c.pc = 0x001DC7E0u; return; } if (c.pc != 0x001DC7C4u) [[unlikely]] return; }
L_001DC7C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DC7E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001DCD38; } }
L_001DC810:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC81Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DC81Cu) [[unlikely]] return; }
L_001DC81C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC82Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DC82Cu) [[unlikely]] return; }
L_001DC82C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC838u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DC838u) [[unlikely]] return; }
L_001DC838:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DC898; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC84Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DC84Cu) [[unlikely]] return; }
L_001DC84C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC858u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DC858u) [[unlikely]] return; }
L_001DC858:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC864u); set32(c.r[5], 0u - 4u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DC864u) [[unlikely]] return; }
L_001DC864:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC874u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 382u, depth + 1u); else { c.pc = 0x001C3D80u; return; } if (c.pc != 0x001DC874u) [[unlikely]] return; }
L_001DC874:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC880u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 49u, depth + 1u); else { c.pc = 0x001C5160u; return; } if (c.pc != 0x001DC880u) [[unlikely]] return; }
L_001DC880:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC890u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DC890u) [[unlikely]] return; }
L_001DC890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DC8A8; } }
L_001DC898:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC8A4u); set32(c.r[6], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 52u, depth + 1u); else { c.pc = 0x001C5390u; return; } if (c.pc != 0x001DC8A4u) [[unlikely]] return; }
L_001DC8A4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DC8A8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DC8D8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC8C0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 385u, depth + 1u); else { c.pc = 0x001C3F70u; return; } if (c.pc != 0x001DC8C0u) [[unlikely]] return; }
L_001DC8C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC8D0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 385u, depth + 1u); else { c.pc = 0x001C3F70u; return; } if (c.pc != 0x001DC8D0u) [[unlikely]] return; }
L_001DC8D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[16].w[0] - c.r[17].w[0]);  if (t) { goto L_001DC8E4; } }
L_001DC8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC8E0u); set32(c.r[5], 0u - 3u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DC8E0u) [[unlikely]] return; }
L_001DC8E0:
    set32(c.r[19], c.r[16].w[0] - c.r[17].w[0]);
    c.budget -= 1;
L_001DC8E4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_001DCD48; }
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_001DC904; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001DC904:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC914u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DC914u) [[unlikely]] return; }
L_001DC914:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC924u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DC924u) [[unlikely]] return; }
L_001DC924:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC930u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DC930u) [[unlikely]] return; }
L_001DC930:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DC990; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC944u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DC944u) [[unlikely]] return; }
L_001DC944:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC950u); set32(c.r[5], 0u - 3u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DC950u) [[unlikely]] return; }
L_001DC950:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC95Cu); set32(c.r[5], 0u - 3u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DC95Cu) [[unlikely]] return; }
L_001DC95C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC96Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 382u, depth + 1u); else { c.pc = 0x001C3D80u; return; } if (c.pc != 0x001DC96Cu) [[unlikely]] return; }
L_001DC96C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC978u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 49u, depth + 1u); else { c.pc = 0x001C5160u; return; } if (c.pc != 0x001DC978u) [[unlikely]] return; }
L_001DC978:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC988u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DC988u) [[unlikely]] return; }
L_001DC988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DC9A0; } }
L_001DC990:
    set32(c.r[5], 0u - 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC99Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 52u, depth + 1u); else { c.pc = 0x001C5390u; return; } if (c.pc != 0x001DC99Cu) [[unlikely]] return; }
L_001DC99C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DC9A0:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DC9D0; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC9B8u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 385u, depth + 1u); else { c.pc = 0x001C3F70u; return; } if (c.pc != 0x001DC9B8u) [[unlikely]] return; }
L_001DC9B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC9C8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 385u, depth + 1u); else { c.pc = 0x001C3F70u; return; } if (c.pc != 0x001DC9C8u) [[unlikely]] return; }
L_001DC9C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001DCAA0; } }
L_001DC9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC9D8u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DC9D8u) [[unlikely]] return; }
L_001DC9D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC9E8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DC9E8u) [[unlikely]] return; }
L_001DC9E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC9F4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DC9F4u) [[unlikely]] return; }
L_001DC9F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DCA54; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCA08u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DCA08u) [[unlikely]] return; }
L_001DCA08:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCA14u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DCA14u) [[unlikely]] return; }
L_001DCA14:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCA20u); set32(c.r[5], 0u - 4u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DCA20u) [[unlikely]] return; }
L_001DCA20:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCA30u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 382u, depth + 1u); else { c.pc = 0x001C3D80u; return; } if (c.pc != 0x001DCA30u) [[unlikely]] return; }
L_001DCA30:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCA3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 49u, depth + 1u); else { c.pc = 0x001C5160u; return; } if (c.pc != 0x001DCA3Cu) [[unlikely]] return; }
L_001DCA3C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCA4Cu); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DCA4Cu) [[unlikely]] return; }
L_001DCA4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DCA64; } }
L_001DCA54:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCA60u); set32(c.r[6], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 52u, depth + 1u); else { c.pc = 0x001C5390u; return; } if (c.pc != 0x001DCA60u) [[unlikely]] return; }
L_001DCA60:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DCA64:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DCA94; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCA7Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 385u, depth + 1u); else { c.pc = 0x001C3F70u; return; } if (c.pc != 0x001DCA7Cu) [[unlikely]] return; }
L_001DCA7C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCA8Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 385u, depth + 1u); else { c.pc = 0x001C3F70u; return; } if (c.pc != 0x001DCA8Cu) [[unlikely]] return; }
L_001DCA8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DCA9C; } }
L_001DCA94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCA9Cu); set32(c.r[5], 0u - 3u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DCA9Cu) [[unlikely]] return; }
L_001DCA9C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001DCAA0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[3].d[0];  if (t) { goto L_001DCD44; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCAB8u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DCAB8u) [[unlikely]] return; }
L_001DCAB8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCAC4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DCAC4u) [[unlikely]] return; }
L_001DCAC4:
    set32(c.r[6], c.r[16].w[0] - 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCAD4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DCAD4u) [[unlikely]] return; }
L_001DCAD4:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCAE4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 385u, depth + 1u); else { c.pc = 0x001C3F70u; return; } if (c.pc != 0x001DCAE4u) [[unlikely]] return; }
L_001DCAE4:
    set32(c.r[6], c.r[16].w[0] - 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCAF4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 385u, depth + 1u); else { c.pc = 0x001C3F70u; return; } if (c.pc != 0x001DCAF4u) [[unlikely]] return; }
L_001DCAF4:
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[16].w[0] - 1u);  if (t) { goto L_001DCB24; } }
L_001DCB00:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DCB1C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB18u); set32(c.r[5], c.r[5].w[0] - 24116u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DCB18u) [[unlikely]] return; }
L_001DCB18:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DCB1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB24u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DCB24u) [[unlikely]] return; }
L_001DCB24:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001DCB28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB38u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DCB38u) [[unlikely]] return; }
L_001DCB38:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB44u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DCB44u) [[unlikely]] return; }
L_001DCB44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DCBA4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB58u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DCB58u) [[unlikely]] return; }
L_001DCB58:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB64u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DCB64u) [[unlikely]] return; }
L_001DCB64:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB70u); set32(c.r[5], 0u - 4u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DCB70u) [[unlikely]] return; }
L_001DCB70:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB80u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 382u, depth + 1u); else { c.pc = 0x001C3D80u; return; } if (c.pc != 0x001DCB80u) [[unlikely]] return; }
L_001DCB80:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 49u, depth + 1u); else { c.pc = 0x001C5160u; return; } if (c.pc != 0x001DCB8Cu) [[unlikely]] return; }
L_001DCB8C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB9Cu); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DCB9Cu) [[unlikely]] return; }
L_001DCB9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DCBB4; } }
L_001DCBA4:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCBB0u); set32(c.r[6], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 52u, depth + 1u); else { c.pc = 0x001C5390u; return; } if (c.pc != 0x001DCBB0u) [[unlikely]] return; }
L_001DCBB0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DCBB4:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { c.r[1].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DCB00u | kUnwind; return; } goto L_001DCB00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] - 1u);  if (t) { goto L_001DCBEC; } }
L_001DCBC4:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DCBE0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCBDCu); set32(c.r[5], c.r[5].w[0] - 24116u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DCBDCu) [[unlikely]] return; }
L_001DCBDC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DCBE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCBE8u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DCBE8u) [[unlikely]] return; }
L_001DCBE8:
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 1;
L_001DCBEC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCBFCu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DCBFCu) [[unlikely]] return; }
L_001DCBFC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCC08u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DCC08u) [[unlikely]] return; }
L_001DCC08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DCC68; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCC1Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DCC1Cu) [[unlikely]] return; }
L_001DCC1C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCC28u); set32(c.r[5], 0u - 4u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DCC28u) [[unlikely]] return; }
L_001DCC28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCC34u); set32(c.r[5], 0u - 3u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DCC34u) [[unlikely]] return; }
L_001DCC34:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCC44u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 382u, depth + 1u); else { c.pc = 0x001C3D80u; return; } if (c.pc != 0x001DCC44u) [[unlikely]] return; }
L_001DCC44:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCC50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 49u, depth + 1u); else { c.pc = 0x001C5160u; return; } if (c.pc != 0x001DCC50u) [[unlikely]] return; }
L_001DCC50:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCC60u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DCC60u) [[unlikely]] return; }
L_001DCC60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DCC78; } }
L_001DCC68:
    set32(c.r[5], 0u - 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCC74u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 52u, depth + 1u); else { c.pc = 0x001C5390u; return; } if (c.pc != 0x001DCC74u) [[unlikely]] return; }
L_001DCC74:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DCC78:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { c.r[1].d[0] = c.r[20].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DCBC4u | kUnwind; return; } goto L_001DCBC4; }
    c.r[1].d[0] = c.r[20].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DCCA0; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCC98u); set32(c.r[5], 0u - 4u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DCC98u) [[unlikely]] return; }
L_001DCC98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[16].w[0] - 1u);  if (t) { goto L_001DCCC4; } }
L_001DCCA0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCCACu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 385u, depth + 1u); else { c.pc = 0x001C3F70u; return; } if (c.pc != 0x001DCCACu) [[unlikely]] return; }
L_001DCCAC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCCBCu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 385u, depth + 1u); else { c.pc = 0x001C3F70u; return; } if (c.pc != 0x001DCCBCu) [[unlikely]] return; }
L_001DCCBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DCB28u | kUnwind; return; } goto L_001DCB28; } }
L_001DCCC4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCCD0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DCCD0u) [[unlikely]] return; }
L_001DCCD0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCCE0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DCCE0u) [[unlikely]] return; }
L_001DCCE0:
    set32(c.r[6], c.r[16].w[0] - 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCCF0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 385u, depth + 1u); else { c.pc = 0x001C3F70u; return; } if (c.pc != 0x001DCCF0u) [[unlikely]] return; }
L_001DCCF0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCD00u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 385u, depth + 1u); else { c.pc = 0x001C3F70u; return; } if (c.pc != 0x001DCD00u) [[unlikely]] return; }
L_001DCD00:
    set32(c.r[3], c.r[19].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[19].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[19].w[0] + 1u);  goto L_001DCD24; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[19].w[0] + 2u);  if (t) { goto L_001DCD2C; } }
L_001DCD24:
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[5].w[0] - 2u);
    c.budget -= 2;
L_001DCD2C:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCD38u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 47u, depth + 1u); else { c.pc = 0x001DC7E0u; return; } if (c.pc != 0x001DCD38u) [[unlikely]] return; }
L_001DCD38:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DC810u | kUnwind; return; } goto L_001DC810; }
L_001DCD44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001DCD48:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001DCD70:
    set32(c.r[29], c.r[29].w[0] - 1120u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], 0u + 2u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], c.r[6].w[0] - 24117u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], c.r[29].w[0] + 1116u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCDA0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 366u, depth + 1u); else { c.pc = 0x001DE460u; return; } if (c.pc != 0x001DCDA0u) [[unlikely]] return; }
L_001DCDA0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCDB8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0037(c, 341u, depth + 1u); else { c.pc = 0x001DE1A0u; return; } if (c.pc != 0x001DCDB8u) [[unlikely]] return; }
L_001DCDB8:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], c.f[0]);
    c.f[12] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCDD0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0037(c, 341u, depth + 1u); else { c.pc = 0x001DE1A0u; return; } if (c.pc != 0x001DCDD0u) [[unlikely]] return; }
L_001DCDD0:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCDE8u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 399u, depth + 1u); else { c.pc = 0x001DE840u; return; } if (c.pc != 0x001DCDE8u) [[unlikely]] return; }
L_001DCDE8:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001DCE04; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCDFCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 254u, depth + 1u); else { c.pc = 0x001DDAC0u; return; } if (c.pc != 0x001DCDFCu) [[unlikely]] return; }
L_001DCDFC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_001DCE04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCE0Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0037(c, 226u, depth + 1u); else { c.pc = 0x001DD640u; return; } if (c.pc != 0x001DCE0Cu) [[unlikely]] return; }
L_001DCE0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_001DCE74; } }
L_001DCE14:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCE20u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DCE20u) [[unlikely]] return; }
L_001DCE20:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCE2Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 57u, depth + 1u); else { c.pc = 0x001C56F0u; return; } if (c.pc != 0x001DCE2Cu) [[unlikely]] return; }
L_001DCE2C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_001DCE4C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCE48u); set32(c.r[6], c.r[6].w[0] - 24081u);  if (depth < kMaxDepth) unit_0037(c, 426u, depth + 1u); else { c.pc = 0x001DEB50u; return; } if (c.pc != 0x001DCE48u) [[unlikely]] return; }
L_001DCE48:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_001DCE4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCE54u);  if (depth < kMaxDepth) unit_0037(c, 227u, depth + 1u); else { c.pc = 0x001DD660u; return; } if (c.pc != 0x001DCE54u) [[unlikely]] return; }
L_001DCE54:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001DCE70; }
    set32(c.r[6], ld32((c.r[29].w[0] + 1116u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCE6Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 241u, depth + 1u); else { c.pc = 0x001DD850u; return; } if (c.pc != 0x001DCE6Cu) [[unlikely]] return; }
L_001DCE6C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001DCE70:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001DCE74:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DCE14u | kUnwind; return; } goto L_001DCE14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCE84u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0037(c, 238u, depth + 1u); else { c.pc = 0x001DD7E0u; return; } if (c.pc != 0x001DCE84u) [[unlikely]] return; }
L_001DCE84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1120u);  c.pc = t; return; }
L_001DCEB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], 0u + 5u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCED4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 399u, depth + 1u); else { c.pc = 0x001DE840u; return; } if (c.pc != 0x001DCED4u) [[unlikely]] return; }
L_001DCED4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCEE0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 254u, depth + 1u); else { c.pc = 0x001DDAC0u; return; } if (c.pc != 0x001DCEE0u) [[unlikely]] return; }
L_001DCEE0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = c.r[16].w[0];
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCEF8u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0037(c, 341u, depth + 1u); else { c.pc = 0x001DE1A0u; return; } if (c.pc != 0x001DCEF8u) [[unlikely]] return; }
L_001DCEF8:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 4;
    if (c.r[16].sd[0] > 0) { set32(c.r[6], c.r[16].w[0] - 1u);  goto L_001DCF10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DCF7C; } }
L_001DCF10:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCF1Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 282u, depth + 1u); else { c.pc = 0x001DDCE0u; return; } if (c.pc != 0x001DCF1Cu) [[unlikely]] return; }
L_001DCF1C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCF2Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DCF2Cu) [[unlikely]] return; }
L_001DCF2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_001DCF58; } }
L_001DCF34:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCF40u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DCF40u) [[unlikely]] return; }
L_001DCF40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCF50u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 385u, depth + 1u); else { c.pc = 0x001C3F70u; return; } if (c.pc != 0x001DCF50u) [[unlikely]] return; }
L_001DCF50:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001DCF58:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DCF34u | kUnwind; return; } goto L_001DCF34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCF68u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 40u, depth + 1u); else { c.pc = 0x001C4A80u; return; } if (c.pc != 0x001DCF68u) [[unlikely]] return; }
L_001DCF68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCF78u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 385u, depth + 1u); else { c.pc = 0x001C3F70u; return; } if (c.pc != 0x001DCF78u) [[unlikely]] return; }
L_001DCF78:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DCF7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DCFA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCFC0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001DCFC0u) [[unlikely]] return; }
L_001DCFC0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCFD4u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 399u, depth + 1u); else { c.pc = 0x001DE840u; return; } if (c.pc != 0x001DCFD4u) [[unlikely]] return; }
L_001DCFD4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCFE0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 254u, depth + 1u); else { c.pc = 0x001DDAC0u; return; } if (c.pc != 0x001DCFE0u) [[unlikely]] return; }
L_001DCFE0:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[5].d[0]; set32(c.r[17], c.r[2].w[0] + 1u);  if (t) { goto L_001DCFF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DD01C; } }
L_001DCFF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCFFCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001DCFFCu) [[unlikely]] return; }
L_001DCFFC:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.r[1].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], 0u + 3u);  goto L_001DD01C; }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], 0u + 3u);
    c.budget -= 2;
L_001DD01C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD02Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 282u, depth + 1u); else { c.pc = 0x001DDCE0u; return; } if (c.pc != 0x001DD02Cu) [[unlikely]] return; }
L_001DD02C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_001DD054; } }
L_001DD034:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD040u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DD040u) [[unlikely]] return; }
L_001DD040:
    set32(c.r[6], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD050u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 385u, depth + 1u); else { c.pc = 0x001C3F70u; return; } if (c.pc != 0x001DD050u) [[unlikely]] return; }
L_001DD050:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_001DD054:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DD034u | kUnwind; return; } goto L_001DD034; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD06Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DD06Cu) [[unlikely]] return; }
L_001DD06C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD07Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 385u, depth + 1u); else { c.pc = 0x001C3F70u; return; } if (c.pc != 0x001DD07Cu) [[unlikely]] return; }
L_001DD07C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001DD0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 5u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD0BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 399u, depth + 1u); else { c.pc = 0x001DE840u; return; } if (c.pc != 0x001DD0BCu) [[unlikely]] return; }
L_001DD0BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD0C8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001DD0C8u) [[unlikely]] return; }
L_001DD0C8:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD0DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 282u, depth + 1u); else { c.pc = 0x001DDCE0u; return; } if (c.pc != 0x001DD0DCu) [[unlikely]] return; }
L_001DD0DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DD0F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 5u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD10Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 399u, depth + 1u); else { c.pc = 0x001DE840u; return; } if (c.pc != 0x001DD10Cu) [[unlikely]] return; }
L_001DD10C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD118u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 254u, depth + 1u); else { c.pc = 0x001DDAC0u; return; } if (c.pc != 0x001DD118u) [[unlikely]] return; }
L_001DD118:
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD128u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001DD128u) [[unlikely]] return; }
L_001DD128:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DD140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 5u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD15Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 399u, depth + 1u); else { c.pc = 0x001DE840u; return; } if (c.pc != 0x001DD15Cu) [[unlikely]] return; }
L_001DD15C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD16Cu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0037(c, 399u, depth + 1u); else { c.pc = 0x001DE840u; return; } if (c.pc != 0x001DD16Cu) [[unlikely]] return; }
L_001DD16C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD174u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 40u, depth + 1u); else { c.pc = 0x001C4A80u; return; } if (c.pc != 0x001DD174u) [[unlikely]] return; }
L_001DD174:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001DD178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD180u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 365u, depth + 1u); else { c.pc = 0x001C3A10u; return; } if (c.pc != 0x001DD180u) [[unlikely]] return; }
L_001DD180:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001DD190; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DD1EC; } }
L_001DD190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD198u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DD198u) [[unlikely]] return; }
L_001DD198:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD1A4u); set32(c.r[5], 0u - 3u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DD1A4u) [[unlikely]] return; }
L_001DD1A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD1B0u); set32(c.r[5], 0u - 3u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DD1B0u) [[unlikely]] return; }
L_001DD1B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD1C0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 382u, depth + 1u); else { c.pc = 0x001C3D80u; return; } if (c.pc != 0x001DD1C0u) [[unlikely]] return; }
L_001DD1C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD1CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DD1CCu) [[unlikely]] return; }
L_001DD1CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001DD1DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DD1EC; } }
L_001DD1DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD1E4u); set32(c.r[5], 0u - 3u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DD1E4u) [[unlikely]] return; }
L_001DD1E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DD178u | kUnwind; return; } goto L_001DD178; } }
L_001DD1EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DD200:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], 0u + 5u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD224u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 399u, depth + 1u); else { c.pc = 0x001DE840u; return; } if (c.pc != 0x001DD224u) [[unlikely]] return; }
L_001DD224:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD230u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 254u, depth + 1u); else { c.pc = 0x001DDAC0u; return; } if (c.pc != 0x001DD230u) [[unlikely]] return; }
L_001DD230:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD244u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0037(c, 399u, depth + 1u); else { c.pc = 0x001DE840u; return; } if (c.pc != 0x001DD244u) [[unlikely]] return; }
L_001DD244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_001DD2AC; } }
L_001DD24C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD254u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DD254u) [[unlikely]] return; }
L_001DD254:
    c.f[0] = c.r[17].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD264u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001DD264u) [[unlikely]] return; }
L_001DD264:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD274u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DD274u) [[unlikely]] return; }
L_001DD274:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD284u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 382u, depth + 1u); else { c.pc = 0x001C3D80u; return; } if (c.pc != 0x001DD284u) [[unlikely]] return; }
L_001DD284:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD290u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DD290u) [[unlikely]] return; }
L_001DD290:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DD2A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DD2BC; } }
L_001DD2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD2A8u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DD2A8u) [[unlikely]] return; }
L_001DD2A8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001DD2AC:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DD24Cu | kUnwind; return; } goto L_001DD24C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DD2BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DD2E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[5], c.r[5].w[0] - 11504u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD300u); set32(c.r[6], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_0030(c, 375u, depth + 1u); else { c.pc = 0x001C3C30u; return; } if (c.pc != 0x001DD300u) [[unlikely]] return; }
L_001DD300:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DD310:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[6].w[0]), c.r[2].w[0]);  goto L_001DD324; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DD32C; } }
L_001DD324:
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 2;
L_001DD32C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD340:
    set32(c.r[29], c.r[29].w[0] - 1120u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD364u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001DD364u) [[unlikely]] return; }
L_001DD364:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[2].w[0] + 1u);  if (t) { goto L_001DD394; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24037u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD380u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DD380u) [[unlikely]] return; }
L_001DD380:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_001DD3BC; } }
L_001DD394:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24030u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD3A8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 26u, depth + 1u); else { c.pc = 0x001C4820u; return; } if (c.pc != 0x001DD3A8u) [[unlikely]] return; }
L_001DD3A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD3B8u); set32(c.r[5], c.r[5].w[0] - 24026u);  if (depth < kMaxDepth) unit_00AD(c, 271u, depth + 1u); else { c.pc = 0x003B7080u; return; } if (c.pc != 0x001DD3B8u) [[unlikely]] return; }
L_001DD3B8:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_001DD3BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_001DD410; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD3D4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x001DD3D4u) [[unlikely]] return; }
L_001DD3D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD3DCu); set32(c.r[17], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00AD(c, 230u, depth + 1u); else { c.pc = 0x003B69F0u; return; } if (c.pc != 0x001DD3DCu) [[unlikely]] return; }
L_001DD3DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD3E4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00AE(c, 165u, depth + 1u); else { c.pc = 0x003B9EB0u; return; } if (c.pc != 0x001DD3E4u) [[unlikely]] return; }
L_001DD3E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD3FCu); set32(c.r[5], c.r[5].w[0] - 24024u);  if (depth < kMaxDepth) unit_0031(c, 26u, depth + 1u); else { c.pc = 0x001C4820u; return; } if (c.pc != 0x001DD3FCu) [[unlikely]] return; }
L_001DD3FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD408u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 67u, depth + 1u); else { c.pc = 0x001C5D10u; return; } if (c.pc != 0x001DD408u) [[unlikely]] return; }
L_001DD408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001DD5AC; } }
L_001DD410:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001DD42C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD424u); set32(c.r[4], ld32((c.r[29].w[0] + 80u)));  if (depth < kMaxDepth) unit_00AE(c, 100u, depth + 1u); else { c.pc = 0x003B8FA8u; return; } if (c.pc != 0x001DD424u) [[unlikely]] return; }
L_001DD424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_001DD444; } }
L_001DD42C:
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 6;
L_001DD444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD44Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 319u, depth + 1u); else { c.pc = 0x003BB100u; return; } if (c.pc != 0x001DD44Cu) [[unlikely]] return; }
L_001DD44C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] - 31768u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DD4F8; }
    c.r[2].d[0] = c.r[3].d[0] & 151ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DD4F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001DD4F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD494u);  if (depth < kMaxDepth) unit_00AD(c, 236u, depth + 1u); else { c.pc = 0x003B6A88u; return; } if (c.pc != 0x001DD494u) [[unlikely]] return; }
L_001DD494:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD4A4u); set32(c.r[5], c.r[5].w[0] - 24005u);  if (depth < kMaxDepth) unit_00AD(c, 271u, depth + 1u); else { c.pc = 0x003B7080u; return; } if (c.pc != 0x001DD4A4u) [[unlikely]] return; }
L_001DD4A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_001DD4F4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD4B8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x001DD4B8u) [[unlikely]] return; }
L_001DD4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD4C0u); set32(c.r[17], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00AD(c, 230u, depth + 1u); else { c.pc = 0x003B69F0u; return; } if (c.pc != 0x001DD4C0u) [[unlikely]] return; }
L_001DD4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD4C8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00AE(c, 165u, depth + 1u); else { c.pc = 0x003B9EB0u; return; } if (c.pc != 0x001DD4C8u) [[unlikely]] return; }
L_001DD4C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD4E0u); set32(c.r[5], c.r[5].w[0] - 24024u);  if (depth < kMaxDepth) unit_0031(c, 26u, depth + 1u); else { c.pc = 0x001C4820u; return; } if (c.pc != 0x001DD4E0u) [[unlikely]] return; }
L_001DD4E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD4ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 67u, depth + 1u); else { c.pc = 0x001C5D10u; return; } if (c.pc != 0x001DD4ECu) [[unlikely]] return; }
L_001DD4EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001DD5AC; } }
L_001DD4F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DD4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD500u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x001DD500u) [[unlikely]] return; }
L_001DD500:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 10800u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD518u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 375u, depth + 1u); else { c.pc = 0x001C3C30u; return; } if (c.pc != 0x001DD518u) [[unlikely]] return; }
L_001DD518:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[19].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_001DD544; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD544u);  if (depth < kMaxDepth) unit_00AD(c, 236u, depth + 1u); else { c.pc = 0x003B6A88u; return; } if (c.pc != 0x001DD544u) [[unlikely]] return; }
L_001DD544:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DD5A0; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD558u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DD558u) [[unlikely]] return; }
L_001DD558:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD564u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x001DD564u) [[unlikely]] return; }
L_001DD564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD56Cu); set32(c.r[17], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00AD(c, 230u, depth + 1u); else { c.pc = 0x003B69F0u; return; } if (c.pc != 0x001DD56Cu) [[unlikely]] return; }
L_001DD56C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD574u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00AE(c, 165u, depth + 1u); else { c.pc = 0x003B9EB0u; return; } if (c.pc != 0x001DD574u) [[unlikely]] return; }
L_001DD574:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD58Cu); set32(c.r[5], c.r[5].w[0] - 24024u);  if (depth < kMaxDepth) unit_0031(c, 26u, depth + 1u); else { c.pc = 0x001C4820u; return; } if (c.pc != 0x001DD58Cu) [[unlikely]] return; }
L_001DD58C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD598u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 67u, depth + 1u); else { c.pc = 0x001C5D10u; return; } if (c.pc != 0x001DD598u) [[unlikely]] return; }
L_001DD598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001DD5AC; } }
L_001DD5A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD5A8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 67u, depth + 1u); else { c.pc = 0x001C5D10u; return; } if (c.pc != 0x001DD5A8u) [[unlikely]] return; }
L_001DD5A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DD5AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1120u);  c.pc = t; return; }
L_001DD5D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001DD600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DD624; } }
L_001DD600:
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD610u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_00AD(c, 277u, depth + 1u); else { c.pc = 0x003B7130u; return; } if (c.pc != 0x001DD610u) [[unlikely]] return; }
L_001DD610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_001DD620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] + 4u);  if (t) { goto L_001DD624; } }
L_001DD620:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DD624:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DD640:
    st32((c.r[5].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + 12u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 4u), 0u);  c.pc = t; return; }
L_001DD660:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD68Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 44u, depth + 1u); else { c.pc = 0x001C4EF0u; return; } if (c.pc != 0x001DD68Cu) [[unlikely]] return; }
L_001DD68C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[5], c.r[19].w[0] + 12u);
    set32(c.r[3], 0u + 1024u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001DD6EC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD6BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x001DD6BCu) [[unlikely]] return; }
L_001DD6BC:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD6CCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001DD6CCu) [[unlikely]] return; }
L_001DD6CC:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u - 2u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD6E4u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DD6E4u) [[unlikely]] return; }
L_001DD6E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001DD7C4; } }
L_001DD6EC:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_001DD6FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001DD71C; } }
L_001DD6FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD704u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DD704u) [[unlikely]] return; }
L_001DD704:
    set32(c.r[3], c.r[19].w[0] + 12u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_001DD71C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_001DD734; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD730u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 65u, depth + 1u); else { c.pc = 0x001C5C40u; return; } if (c.pc != 0x001DD730u) [[unlikely]] return; }
L_001DD730:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_001DD734:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001DD7C0; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[17], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD758u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 44u, depth + 1u); else { c.pc = 0x001C4EF0u; return; } if (c.pc != 0x001DD758u) [[unlikely]] return; }
L_001DD758:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001DD760:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD76Cu); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0031(c, 44u, depth + 1u); else { c.pc = 0x001C4EF0u; return; } if (c.pc != 0x001DD76Cu) [[unlikely]] return; }
L_001DD76C:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  goto L_001DD794; }
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DD7A8; }
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_001DD794:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DD760u | kUnwind; return; } goto L_001DD760; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DD7A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD7B0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 361u, depth + 1u); else { c.pc = 0x001C3940u; return; } if (c.pc != 0x001DD7B0u) [[unlikely]] return; }
L_001DD7B0:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_001DD7C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001DD7C4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001DD7E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 12u);
    set32(c.r[6], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 9;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_001DD824; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD80Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DD80Cu) [[unlikely]] return; }
L_001DD80C:
    set32(c.r[2], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 6;
L_001DD824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD82Cu); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0030(c, 361u, depth + 1u); else { c.pc = 0x001C3940u; return; } if (c.pc != 0x001DD82Cu) [[unlikely]] return; }
L_001DD82C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DD850:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001DD97C; } }
L_001DD880:
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[21].w[0] + 1036u);
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[21].w[0])));  goto L_001DD968; }
    set32(c.r[5], c.r[21].w[0] + 12u);
    set32(c.r[6], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 4;
    if (c.r[6].d[0] != 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 8u)));  goto L_001DD8AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001DD8CC; } }
L_001DD8AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD8B4u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DD8B4u) [[unlikely]] return; }
L_001DD8B4:
    set32(c.r[3], c.r[21].w[0] + 12u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_001DD8CC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DD964; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001DD964; } }
    set32(c.r[18], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[17], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD8F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 44u, depth + 1u); else { c.pc = 0x001C4EF0u; return; } if (c.pc != 0x001DD8F8u) [[unlikely]] return; }
L_001DD8F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001DD900:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD90Cu); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0031(c, 44u, depth + 1u); else { c.pc = 0x001C4EF0u; return; } if (c.pc != 0x001DD90Cu) [[unlikely]] return; }
L_001DD90C:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  goto L_001DD934; }
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DD948; }
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_001DD934:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DD900u | kUnwind; return; } goto L_001DD900; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DD948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD950u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 361u, depth + 1u); else { c.pc = 0x001C3940u; return; } if (c.pc != 0x001DD950u) [[unlikely]] return; }
L_001DD950:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[21].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_001DD964:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_001DD968:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
L_001DD97C:
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DD880u | kUnwind; return; } goto L_001DD880; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001DD9B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[19].w[0] + 12u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 12;
    if (c.r[6].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_001DD9E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001DDA08; } }
L_001DD9E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD9F0u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DD9F0u) [[unlikely]] return; }
L_001DD9F0:
    set32(c.r[2], c.r[19].w[0] + 12u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
L_001DDA08:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 12u);  goto L_001DDAA0; }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001DDA9C; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[17], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDA34u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 44u, depth + 1u); else { c.pc = 0x001C4EF0u; return; } if (c.pc != 0x001DDA34u) [[unlikely]] return; }
L_001DDA34:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001DDA3C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDA48u); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0031(c, 44u, depth + 1u); else { c.pc = 0x001C4EF0u; return; } if (c.pc != 0x001DDA48u) [[unlikely]] return; }
L_001DDA48:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  goto L_001DDA70; }
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DDA84; }
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_001DDA70:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DDA3Cu | kUnwind; return; } goto L_001DDA3C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DDA84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDA8Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 361u, depth + 1u); else { c.pc = 0x001C3940u; return; } if (c.pc != 0x001DDA8Cu) [[unlikely]] return; }
L_001DDA8C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_001DDA9C:
    set32(c.r[2], c.r[19].w[0] + 12u);
    c.budget -= 1;
L_001DDAA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001DDAC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].sd[0] > 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001DDAFC; } }
    c.r[1].d[0] = c.r[17].sd[0] < -9999ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001DDAFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDAF4u);  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001DDAF4u) [[unlikely]] return; }
L_001DDAF4:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_001DDAFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24002u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDB10u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DDB10u) [[unlikely]] return; }
L_001DDB10:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDB1Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 15u, depth + 1u); else { c.pc = 0x001C4570u; return; } if (c.pc != 0x001DDB1Cu) [[unlikely]] return; }
L_001DDB1C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDB28u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x001DDB28u) [[unlikely]] return; }
L_001DDB28:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 5;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DDB58; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDB48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 58u, depth + 1u); else { c.pc = 0x001C57E0u; return; } if (c.pc != 0x001DDB48u) [[unlikely]] return; }
L_001DDB48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DDB54; } }
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_001DDB54:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DDB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDB60u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DDB60u) [[unlikely]] return; }
L_001DDB60:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DDB74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DDCC8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DDB74:
    set32(c.r[5], 0u - 10000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDB80u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DDB80u) [[unlikely]] return; }
L_001DDB80:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDB8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DDB8Cu) [[unlikely]] return; }
L_001DDB8C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DDC14; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDBA0u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DDBA0u) [[unlikely]] return; }
L_001DDBA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDBA8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 10u, depth + 1u); else { c.pc = 0x001C4430u; return; } if (c.pc != 0x001DDBA8u) [[unlikely]] return; }
L_001DDBA8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDBB4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DDBB4u) [[unlikely]] return; }
L_001DDBB4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDBC0u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0030(c, 384u, depth + 1u); else { c.pc = 0x001C3E80u; return; } if (c.pc != 0x001DDBC0u) [[unlikely]] return; }
L_001DDBC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDBD4u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DDBD4u) [[unlikely]] return; }
L_001DDBD4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23993u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDBE8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DDBE8u) [[unlikely]] return; }
L_001DDBE8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDBF4u); set32(c.r[5], 0u - 3u);  if (depth < kMaxDepth) unit_0031(c, 4u, depth + 1u); else { c.pc = 0x001C4050u; return; } if (c.pc != 0x001DDBF4u) [[unlikely]] return; }
L_001DDBF4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC00u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DDC00u) [[unlikely]] return; }
L_001DDC00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u - 10000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC10u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0030(c, 385u, depth + 1u); else { c.pc = 0x001C3F70u; return; } if (c.pc != 0x001DDC10u) [[unlikely]] return; }
L_001DDC10:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DDC14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC1Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DDC1Cu) [[unlikely]] return; }
L_001DDC1C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC28u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 15u, depth + 1u); else { c.pc = 0x001C4570u; return; } if (c.pc != 0x001DDC28u) [[unlikely]] return; }
L_001DDC28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC34u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x001DDC34u) [[unlikely]] return; }
L_001DDC34:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 5;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DDC64; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 58u, depth + 1u); else { c.pc = 0x001C57E0u; return; } if (c.pc != 0x001DDC54u) [[unlikely]] return; }
L_001DDC54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DDC60; } }
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_001DDC60:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DDC64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC6Cu); set32(c.r[5], 0u - 3u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DDC6Cu) [[unlikely]] return; }
L_001DDC6C:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[16], 0u + 1u);  goto L_001DDC80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DDCC8; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001DDC80:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC90u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DDC90u) [[unlikely]] return; }
L_001DDC90:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC9Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DDC9Cu) [[unlikely]] return; }
L_001DDC9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DDCBC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDCB0u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DDCB0u) [[unlikely]] return; }
L_001DDCB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DDC80u | kUnwind; return; } goto L_001DDC80; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DDCBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDCC4u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DDCC4u) [[unlikely]] return; }
L_001DDCC4:
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_001DDCC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DDCE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[18].sd[0] > 0; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001DDD24; } }
    c.r[1].d[0] = c.r[18].sd[0] < -9999ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001DDD24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDD1Cu);  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001DDD1Cu) [[unlikely]] return; }
L_001DDD1C:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_001DDD24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24002u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDD38u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DDD38u) [[unlikely]] return; }
L_001DDD38:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDD44u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 15u, depth + 1u); else { c.pc = 0x001C4570u; return; } if (c.pc != 0x001DDD44u) [[unlikely]] return; }
L_001DDD44:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDD50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x001DDD50u) [[unlikely]] return; }
L_001DDD50:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 5;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001DDD80; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDD70u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 58u, depth + 1u); else { c.pc = 0x001C57E0u; return; } if (c.pc != 0x001DDD70u) [[unlikely]] return; }
L_001DDD70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DDD7C; } }
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_001DDD7C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001DDD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDD88u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DDD88u) [[unlikely]] return; }
L_001DDD88:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001DDDCC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24002u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDDA4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DDDA4u) [[unlikely]] return; }
L_001DDDA4:
    c.f[0] = c.r[17].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDDB4u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001DDDB4u) [[unlikely]] return; }
L_001DDDB4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDDC0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 4u, depth + 1u); else { c.pc = 0x001C4050u; return; } if (c.pc != 0x001DDDC0u) [[unlikely]] return; }
L_001DDDC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001DDEA0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001DDDCC:
    set32(c.r[5], 0u - 10000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDDD8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DDDD8u) [[unlikely]] return; }
L_001DDDD8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDDE4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DDDE4u) [[unlikely]] return; }
L_001DDDE4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_001DDE6C; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDDF8u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DDDF8u) [[unlikely]] return; }
L_001DDDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDE00u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 10u, depth + 1u); else { c.pc = 0x001C4430u; return; } if (c.pc != 0x001DDE00u) [[unlikely]] return; }
L_001DDE00:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDE0Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DDE0Cu) [[unlikely]] return; }
L_001DDE0C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDE18u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0030(c, 384u, depth + 1u); else { c.pc = 0x001C3E80u; return; } if (c.pc != 0x001DDE18u) [[unlikely]] return; }
L_001DDE18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDE2Cu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DDE2Cu) [[unlikely]] return; }
L_001DDE2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23993u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDE40u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DDE40u) [[unlikely]] return; }
L_001DDE40:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDE4Cu); set32(c.r[5], 0u - 3u);  if (depth < kMaxDepth) unit_0031(c, 4u, depth + 1u); else { c.pc = 0x001C4050u; return; } if (c.pc != 0x001DDE4Cu) [[unlikely]] return; }
L_001DDE4C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDE58u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DDE58u) [[unlikely]] return; }
L_001DDE58:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u - 10000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDE68u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0030(c, 385u, depth + 1u); else { c.pc = 0x001C3F70u; return; } if (c.pc != 0x001DDE68u) [[unlikely]] return; }
L_001DDE68:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DDE6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDE74u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DDE74u) [[unlikely]] return; }
L_001DDE74:
    c.f[0] = c.r[17].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDE84u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001DDE84u) [[unlikely]] return; }
L_001DDE84:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDE90u); set32(c.r[5], 0u - 3u);  if (depth < kMaxDepth) unit_0031(c, 4u, depth + 1u); else { c.pc = 0x001C4050u; return; } if (c.pc != 0x001DDE90u) [[unlikely]] return; }
L_001DDE90:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDE9Cu); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DDE9Cu) [[unlikely]] return; }
L_001DDE9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001DDEA0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001DDEC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001DDF64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDEFCu);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x001DDEFCu) [[unlikely]] return; }
L_001DDEFC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDF08u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 17u, depth + 1u); else { c.pc = 0x001C4640u; return; } if (c.pc != 0x001DDF08u) [[unlikely]] return; }
L_001DDF08:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDF14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DDF14u) [[unlikely]] return; }
L_001DDF14:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] + 1u);  goto L_001DDF58; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDF28u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DDF28u) [[unlikely]] return; }
L_001DDF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDF30u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 10u, depth + 1u); else { c.pc = 0x001C4430u; return; } if (c.pc != 0x001DDF30u) [[unlikely]] return; }
L_001DDF30:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDF3Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x001DDF3Cu) [[unlikely]] return; }
L_001DDF3C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDF48u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DDF48u) [[unlikely]] return; }
L_001DDF48:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDF54u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x001DDF54u) [[unlikely]] return; }
L_001DDF54:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001DDF58:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDF64u); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0031(c, 65u, depth + 1u); else { c.pc = 0x001C5C40u; return; } if (c.pc != 0x001DDF64u) [[unlikely]] return; }
L_001DDF64:
    set32(c.r[3], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[19].w[0] + 3u);
    set32(c.r[17], 0u - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - c.r[2].w[0]);  if (t) { goto L_001DDFC4; } }
L_001DDF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDF80u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x001DDF80u) [[unlikely]] return; }
L_001DDF80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001DDF98; } }
L_001DDF88:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDF94u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DDF94u) [[unlikely]] return; }
L_001DDF94:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001DDF98:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DDF88u | kUnwind; return; } goto L_001DDF88; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDFB4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 22u, depth + 1u); else { c.pc = 0x001C4760u; return; } if (c.pc != 0x001DDFB4u) [[unlikely]] return; }
L_001DDFB4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDFC0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x001DDFC0u) [[unlikely]] return; }
L_001DDFC0:
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.budget -= 1;
L_001DDFC4:
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DDF78u | kUnwind; return; } goto L_001DDF78; } }
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDFE0u); set32(c.r[5], c.r[2].w[0] - c.r[19].w[0]);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DDFE0u) [[unlikely]] return; }
L_001DDFE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001DE010:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].sd[0] > 0; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001DE050; } }
    c.r[1].d[0] = c.r[17].sd[0] < -9999ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DE054; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE048u);  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001DE048u) [[unlikely]] return; }
L_001DE048:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_001DE050:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DE054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE05Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 9u, depth + 1u); else { c.pc = 0x001C42E0u; return; } if (c.pc != 0x001DE05Cu) [[unlikely]] return; }
L_001DE05C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001DE070; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DE0BC; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001DE070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE078u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x001DE078u) [[unlikely]] return; }
L_001DE078:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE084u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 15u, depth + 1u); else { c.pc = 0x001C4570u; return; } if (c.pc != 0x001DE084u) [[unlikely]] return; }
L_001DE084:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE090u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DE090u) [[unlikely]] return; }
L_001DE090:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DE0B0; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE0A4u); set32(c.r[5], 0u - 3u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DE0A4u) [[unlikely]] return; }
L_001DE0A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DE0BC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DE0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE0B8u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 67u, depth + 1u); else { c.pc = 0x001C5D10u; return; } if (c.pc != 0x001DE0B8u) [[unlikely]] return; }
L_001DE0B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DE0BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001DE0D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DE0EC; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DE0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE0D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DE0D8u) [[unlikely]] return; }
L_001DE0D8:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE0E8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 382u, depth + 1u); else { c.pc = 0x001C3D80u; return; } if (c.pc != 0x001DE0E8u) [[unlikely]] return; }
L_001DE0E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DE0EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DE110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE12Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 9u, depth + 1u); else { c.pc = 0x001C42E0u; return; } if (c.pc != 0x001DE12Cu) [[unlikely]] return; }
L_001DE12C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001DE13C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DE184; } }
L_001DE13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE144u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x001DE144u) [[unlikely]] return; }
L_001DE144:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE150u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 15u, depth + 1u); else { c.pc = 0x001C4570u; return; } if (c.pc != 0x001DE150u) [[unlikely]] return; }
L_001DE150:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE15Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DE15Cu) [[unlikely]] return; }
L_001DE15C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001DE178; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE170u); set32(c.r[5], 0u - 3u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DE170u) [[unlikely]] return; }
L_001DE170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DE184; } }
L_001DE178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE180u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 67u, depth + 1u); else { c.pc = 0x001C5D10u; return; } if (c.pc != 0x001DE180u) [[unlikely]] return; }
L_001DE180:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DE184:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DE1A0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE1C8u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DE1C8u) [[unlikely]] return; }
L_001DE1C8:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DE1D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[20];  if (t) { goto L_001DE2EC; } }
L_001DE1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE1E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x001DE1E0u) [[unlikely]] return; }
L_001DE1E0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[0];  if (t) { goto L_001DE2E8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE200u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 58u, depth + 1u); else { c.pc = 0x001C57E0u; return; } if (c.pc != 0x001DE200u) [[unlikely]] return; }
L_001DE200:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[0] = c.f[20];  goto L_001DE2EC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE214u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0031(c, 61u, depth + 1u); else { c.pc = 0x001C59D0u; return; } if (c.pc != 0x001DE214u) [[unlikely]] return; }
L_001DE214:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE224u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DE224u) [[unlikely]] return; }
L_001DE224:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE230u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 61u, depth + 1u); else { c.pc = 0x001C59D0u; return; } if (c.pc != 0x001DE230u) [[unlikely]] return; }
L_001DE230:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23991u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE248u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 26u, depth + 1u); else { c.pc = 0x001C4820u; return; } if (c.pc != 0x001DE248u) [[unlikely]] return; }
L_001DE248:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE25Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0032(c, 119u, depth + 1u); else { c.pc = 0x001CA610u; return; } if (c.pc != 0x001DE25Cu) [[unlikely]] return; }
L_001DE25C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24002u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE270u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0032(c, 106u, depth + 1u); else { c.pc = 0x001CA130u; return; } if (c.pc != 0x001DE270u) [[unlikely]] return; }
L_001DE270:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE280u); set32(c.r[5], c.r[5].w[0] - 23971u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x001DE280u) [[unlikely]] return; }
L_001DE280:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  goto L_001DE2B8; }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001DE2B4; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 84u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE2ACu); set32(c.r[5], c.r[5].w[0] - 23964u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DE2ACu) [[unlikely]] return; }
L_001DE2AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE2E8; } }
L_001DE2B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 1;
L_001DE2B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 84u)));  goto L_001DE2D0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 23934u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 4;
L_001DE2D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE2E8u); set32(c.r[5], c.r[5].w[0] - 23932u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DE2E8u) [[unlikely]] return; }
L_001DE2E8:
    c.f[0] = c.f[20];
    c.budget -= 1;
L_001DE2EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001DE310:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE334u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x001DE334u) [[unlikely]] return; }
L_001DE334:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[0];  if (t) { goto L_001DE43C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE354u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 58u, depth + 1u); else { c.pc = 0x001C57E0u; return; } if (c.pc != 0x001DE354u) [[unlikely]] return; }
L_001DE354:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[0] = c.f[20];  goto L_001DE440; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE368u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0031(c, 61u, depth + 1u); else { c.pc = 0x001C59D0u; return; } if (c.pc != 0x001DE368u) [[unlikely]] return; }
L_001DE368:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE378u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DE378u) [[unlikely]] return; }
L_001DE378:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE384u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 61u, depth + 1u); else { c.pc = 0x001C59D0u; return; } if (c.pc != 0x001DE384u) [[unlikely]] return; }
L_001DE384:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23991u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE39Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 26u, depth + 1u); else { c.pc = 0x001C4820u; return; } if (c.pc != 0x001DE39Cu) [[unlikely]] return; }
L_001DE39C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE3B0u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0032(c, 119u, depth + 1u); else { c.pc = 0x001CA610u; return; } if (c.pc != 0x001DE3B0u) [[unlikely]] return; }
L_001DE3B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24002u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE3C4u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0032(c, 106u, depth + 1u); else { c.pc = 0x001CA130u; return; } if (c.pc != 0x001DE3C4u) [[unlikely]] return; }
L_001DE3C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE3D4u); set32(c.r[5], c.r[5].w[0] - 23971u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x001DE3D4u) [[unlikely]] return; }
L_001DE3D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  goto L_001DE40C; }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001DE408; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 84u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE400u); set32(c.r[5], c.r[5].w[0] - 23964u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DE400u) [[unlikely]] return; }
L_001DE400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE43C; } }
L_001DE408:
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 1;
L_001DE40C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 84u)));  goto L_001DE424; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 23934u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 4;
L_001DE424:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE43Cu); set32(c.r[5], c.r[5].w[0] - 23932u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DE43Cu) [[unlikely]] return; }
L_001DE43C:
    c.f[0] = c.f[20];
    c.budget -= 1;
L_001DE440:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001DE460:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE494u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DE494u) [[unlikely]] return; }
L_001DE494:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001DE4C4; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001DE5D8; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DE4B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE4B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001DE4B4u) [[unlikely]] return; }
L_001DE4B4:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE5D8; } }
L_001DE4C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE4CCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x001DE4CCu) [[unlikely]] return; }
L_001DE4CC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001DE5BC; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE4E4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0031(c, 61u, depth + 1u); else { c.pc = 0x001C59D0u; return; } if (c.pc != 0x001DE4E4u) [[unlikely]] return; }
L_001DE4E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE4F4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DE4F4u) [[unlikely]] return; }
L_001DE4F4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE500u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 61u, depth + 1u); else { c.pc = 0x001C59D0u; return; } if (c.pc != 0x001DE500u) [[unlikely]] return; }
L_001DE500:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23991u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE518u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 26u, depth + 1u); else { c.pc = 0x001C4820u; return; } if (c.pc != 0x001DE518u) [[unlikely]] return; }
L_001DE518:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE530u); c.r[16].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 119u, depth + 1u); else { c.pc = 0x001CA610u; return; } if (c.pc != 0x001DE530u) [[unlikely]] return; }
L_001DE530:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24002u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE544u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0032(c, 106u, depth + 1u); else { c.pc = 0x001CA130u; return; } if (c.pc != 0x001DE544u) [[unlikely]] return; }
L_001DE544:
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE554u); set32(c.r[5], c.r[5].w[0] - 23971u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x001DE554u) [[unlikely]] return; }
L_001DE554:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 116u)));  goto L_001DE58C; }
    set32(c.r[16], c.r[20].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001DE588; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 116u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE580u); set32(c.r[5], c.r[5].w[0] - 23964u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DE580u) [[unlikely]] return; }
L_001DE580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE5BC; } }
L_001DE588:
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 1;
L_001DE58C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 116u)));  goto L_001DE5A4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 23934u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 4;
L_001DE5A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE5BCu); set32(c.r[5], c.r[5].w[0] - 23932u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DE5BCu) [[unlikely]] return; }
L_001DE5BC:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_001DE5D8; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE5D0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 44u, depth + 1u); else { c.pc = 0x001C4EF0u; return; } if (c.pc != 0x001DE5D0u) [[unlikely]] return; }
L_001DE5D0:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001DE5D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001DE600:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE630u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x001DE630u) [[unlikely]] return; }
L_001DE630:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001DE720; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE648u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0031(c, 61u, depth + 1u); else { c.pc = 0x001C59D0u; return; } if (c.pc != 0x001DE648u) [[unlikely]] return; }
L_001DE648:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE658u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DE658u) [[unlikely]] return; }
L_001DE658:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE664u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 61u, depth + 1u); else { c.pc = 0x001C59D0u; return; } if (c.pc != 0x001DE664u) [[unlikely]] return; }
L_001DE664:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23991u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE67Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 26u, depth + 1u); else { c.pc = 0x001C4820u; return; } if (c.pc != 0x001DE67Cu) [[unlikely]] return; }
L_001DE67C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE694u); c.r[16].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 119u, depth + 1u); else { c.pc = 0x001CA610u; return; } if (c.pc != 0x001DE694u) [[unlikely]] return; }
L_001DE694:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24002u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE6A8u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0032(c, 106u, depth + 1u); else { c.pc = 0x001CA130u; return; } if (c.pc != 0x001DE6A8u) [[unlikely]] return; }
L_001DE6A8:
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE6B8u); set32(c.r[5], c.r[5].w[0] - 23971u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x001DE6B8u) [[unlikely]] return; }
L_001DE6B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 116u)));  goto L_001DE6F0; }
    set32(c.r[16], c.r[20].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001DE6EC; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 116u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE6E4u); set32(c.r[5], c.r[5].w[0] - 23964u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DE6E4u) [[unlikely]] return; }
L_001DE6E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE720; } }
L_001DE6EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 1;
L_001DE6F0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 116u)));  goto L_001DE708; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 23934u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 4;
L_001DE708:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE720u); set32(c.r[5], c.r[5].w[0] - 23932u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DE720u) [[unlikely]] return; }
L_001DE720:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_001DE73C; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE734u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 44u, depth + 1u); else { c.pc = 0x001C4EF0u; return; } if (c.pc != 0x001DE734u) [[unlikely]] return; }
L_001DE734:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001DE73C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001DE760:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE77Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DE77Cu) [[unlikely]] return; }
L_001DE77C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001DE830; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE798u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0032(c, 119u, depth + 1u); else { c.pc = 0x001CA610u; return; } if (c.pc != 0x001DE798u) [[unlikely]] return; }
L_001DE798:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24002u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE7ACu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0032(c, 106u, depth + 1u); else { c.pc = 0x001CA130u; return; } if (c.pc != 0x001DE7ACu) [[unlikely]] return; }
L_001DE7AC:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE7BCu); set32(c.r[5], c.r[5].w[0] - 23971u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x001DE7BCu) [[unlikely]] return; }
L_001DE7BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 52u)));  goto L_001DE7F8; }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001DE7F4; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 52u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23964u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE7ECu); set32(c.r[7], c.r[7].w[0] - 23902u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DE7ECu) [[unlikely]] return; }
L_001DE7EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE82C; } }
L_001DE7F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 1;
L_001DE7F8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 52u)));  goto L_001DE810; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 23934u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 4;
L_001DE810:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23932u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE82Cu); set32(c.r[8], c.r[8].w[0] - 23902u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DE82Cu) [[unlikely]] return; }
L_001DE82C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001DE830:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001DE840:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE864u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DE864u) [[unlikely]] return; }
L_001DE864:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001DE950; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE878u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 61u, depth + 1u); else { c.pc = 0x001C59D0u; return; } if (c.pc != 0x001DE878u) [[unlikely]] return; }
L_001DE878:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE888u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DE888u) [[unlikely]] return; }
L_001DE888:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE894u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 61u, depth + 1u); else { c.pc = 0x001C59D0u; return; } if (c.pc != 0x001DE894u) [[unlikely]] return; }
L_001DE894:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23991u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE8ACu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 26u, depth + 1u); else { c.pc = 0x001C4820u; return; } if (c.pc != 0x001DE8ACu) [[unlikely]] return; }
L_001DE8AC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE8C0u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0032(c, 119u, depth + 1u); else { c.pc = 0x001CA610u; return; } if (c.pc != 0x001DE8C0u) [[unlikely]] return; }
L_001DE8C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24002u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE8D4u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0032(c, 106u, depth + 1u); else { c.pc = 0x001CA130u; return; } if (c.pc != 0x001DE8D4u) [[unlikely]] return; }
L_001DE8D4:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE8E4u); set32(c.r[5], c.r[5].w[0] - 23971u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x001DE8E4u) [[unlikely]] return; }
L_001DE8E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 68u)));  goto L_001DE91C; }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001DE918; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 68u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE910u); set32(c.r[5], c.r[5].w[0] - 23964u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DE910u) [[unlikely]] return; }
L_001DE910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE94C; } }
L_001DE918:
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 1;
L_001DE91C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 68u)));  goto L_001DE934; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 23934u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 4;
L_001DE934:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE94Cu); set32(c.r[5], c.r[5].w[0] - 23932u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DE94Cu) [[unlikely]] return; }
L_001DE94C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001DE950:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001DE970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE98Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 77u, depth + 1u); else { c.pc = 0x001C5F20u; return; } if (c.pc != 0x001DE98Cu) [[unlikely]] return; }
L_001DE98C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001DE9AC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE9A8u); set32(c.r[5], c.r[5].w[0] - 23887u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DE9A8u) [[unlikely]] return; }
L_001DE9A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001DE9AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DE9C0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[6].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 200u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 208u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 216u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 224u), c.r[10].d[0]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 232u), c.r[11].d[0]);  if (t) { goto L_001DEA08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001DEA14; } }
L_001DEA08:
    set32(c.r[2], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 3;
L_001DEA14:
    set32(c.r[2], c.r[29].w[0] + 240u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEA2Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0032(c, 119u, depth + 1u); else { c.pc = 0x001CA610u; return; } if (c.pc != 0x001DEA2Cu) [[unlikely]] return; }
L_001DEA2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DEA70; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23867u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEA48u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0032(c, 106u, depth + 1u); else { c.pc = 0x001CA130u; return; } if (c.pc != 0x001DEA48u) [[unlikely]] return; }
L_001DEA48:
    set32(c.r[7], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { goto L_001DEA70; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23863u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEA68u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0031(c, 26u, depth + 1u); else { c.pc = 0x001C4820u; return; } if (c.pc != 0x001DEA68u) [[unlikely]] return; }
L_001DEA68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[17].d[0] << 32;  if (t) { goto L_001DEA88; } }
L_001DEA70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23855u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEA84u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DEA84u) [[unlikely]] return; }
L_001DEA84:
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.budget -= 1;
L_001DEA88:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEA98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 29u, depth + 1u); else { c.pc = 0x001C48C0u; return; } if (c.pc != 0x001DEA98u) [[unlikely]] return; }
L_001DEA98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEAA4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0030(c, 361u, depth + 1u); else { c.pc = 0x001C3940u; return; } if (c.pc != 0x001DEAA4u) [[unlikely]] return; }
L_001DEAA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEAACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 367u, depth + 1u); else { c.pc = 0x001C3AF0u; return; } if (c.pc != 0x001DEAACu) [[unlikely]] return; }
L_001DEAAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001DEAD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEAE8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 119u, depth + 1u); else { c.pc = 0x001CA610u; return; } if (c.pc != 0x001DEAE8u) [[unlikely]] return; }
L_001DEAE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DEB2C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23867u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEB04u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0032(c, 106u, depth + 1u); else { c.pc = 0x001CA130u; return; } if (c.pc != 0x001DEB04u) [[unlikely]] return; }
L_001DEB04:
    set32(c.r[7], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { goto L_001DEB2C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23863u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEB24u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0031(c, 26u, depth + 1u); else { c.pc = 0x001C4820u; return; } if (c.pc != 0x001DEB24u) [[unlikely]] return; }
L_001DEB24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001DEB44; } }
L_001DEB2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23855u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEB40u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DEB40u) [[unlikely]] return; }
L_001DEB40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001DEB44:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001DEB50:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEB7Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0032(c, 119u, depth + 1u); else { c.pc = 0x001CA610u; return; } if (c.pc != 0x001DEB7Cu) [[unlikely]] return; }
L_001DEB7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24002u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEB90u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0032(c, 106u, depth + 1u); else { c.pc = 0x001CA130u; return; } if (c.pc != 0x001DEB90u) [[unlikely]] return; }
L_001DEB90:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEBA0u); set32(c.r[5], c.r[5].w[0] - 23971u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x001DEBA0u) [[unlikely]] return; }
L_001DEBA0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 68u)));  goto L_001DEBD8; }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001DEBD4; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 68u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEBCCu); set32(c.r[5], c.r[5].w[0] - 23964u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DEBCCu) [[unlikely]] return; }
L_001DEBCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001DEC0C; } }
L_001DEBD4:
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 1;
L_001DEBD8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 68u)));  goto L_001DEBF0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 23934u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 4;
L_001DEBF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC08u); set32(c.r[5], c.r[5].w[0] - 23932u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DEC08u) [[unlikely]] return; }
L_001DEC08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001DEC0C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001DEC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 439u, depth + 1u); else { c.pc = 0x001DECA0u; return; } if (c.pc != 0x001DEC34u) [[unlikely]] return; }
L_001DEC34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23302u);
    set32(c.r[6], c.r[6].w[0] - 23632u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC50u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 307u, depth + 1u); else { c.pc = 0x001DDEC0u; return; } if (c.pc != 0x001DEC50u) [[unlikely]] return; }
L_001DEC50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 10u, depth + 1u); else { c.pc = 0x001C4430u; return; } if (c.pc != 0x001DEC58u) [[unlikely]] return; }
L_001DEC58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC68u); set32(c.r[5], c.r[5].w[0] - 23292u);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x001DEC68u) [[unlikely]] return; }
L_001DEC68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC74u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 65u, depth + 1u); else { c.pc = 0x001C5C40u; return; } if (c.pc != 0x001DEC74u) [[unlikely]] return; }
L_001DEC74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC80u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x001DEC80u) [[unlikely]] return; }
L_001DEC80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DECA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 23284u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DECC0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DECC0u) [[unlikely]] return; }
L_001DECC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DECCCu); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DECCCu) [[unlikely]] return; }
L_001DECCC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 23840u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DECE4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 307u, depth + 1u); else { c.pc = 0x001DDEC0u; return; } if (c.pc != 0x001DECE4u) [[unlikely]] return; }
L_001DECE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23281u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DECF8u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DECF8u) [[unlikely]] return; }
L_001DECF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED0Cu); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DED0Cu) [[unlikely]] return; }
L_001DED0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED18u); set32(c.r[5], 0u - 3u);  if (depth < kMaxDepth) unit_0031(c, 4u, depth + 1u); else { c.pc = 0x001C4050u; return; } if (c.pc != 0x001DED18u) [[unlikely]] return; }
L_001DED18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23262u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED2Cu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DED2Cu) [[unlikely]] return; }
L_001DED2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 10u, depth + 1u); else { c.pc = 0x001C4430u; return; } if (c.pc != 0x001DED34u) [[unlikely]] return; }
L_001DED34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED40u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DED40u) [[unlikely]] return; }
L_001DED40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED4Cu); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0030(c, 384u, depth + 1u); else { c.pc = 0x001C3E80u; return; } if (c.pc != 0x001DED4Cu) [[unlikely]] return; }
L_001DED4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23253u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED60u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DED60u) [[unlikely]] return; }
L_001DED60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23246u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED74u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DED74u) [[unlikely]] return; }
L_001DED74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED80u); set32(c.r[5], 0u - 3u);  if (depth < kMaxDepth) unit_0031(c, 4u, depth + 1u); else { c.pc = 0x001C4050u; return; } if (c.pc != 0x001DED80u) [[unlikely]] return; }
L_001DED80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 2448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED94u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 22u, depth + 1u); else { c.pc = 0x001C4760u; return; } if (c.pc != 0x001DED94u) [[unlikely]] return; }
L_001DED94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEDA0u); set32(c.r[5], 0u - 3u);  if (depth < kMaxDepth) unit_0031(c, 4u, depth + 1u); else { c.pc = 0x001C4050u; return; } if (c.pc != 0x001DEDA0u) [[unlikely]] return; }
L_001DEDA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEDACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 4u, depth + 1u); else { c.pc = 0x001C4050u; return; } if (c.pc != 0x001DEDACu) [[unlikely]] return; }
L_001DEDAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DEDC0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEDDCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0031(c, 42u, depth + 1u); else { c.pc = 0x001C4CF0u; return; } if (c.pc != 0x001DEDDCu) [[unlikely]] return; }
L_001DEDDC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001DEDFC; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEDFCu); set32(c.r[6], c.r[6].w[0] - 23244u);  if (depth < kMaxDepth) unit_0037(c, 426u, depth + 1u); else { c.pc = 0x001DEB50u; return; } if (c.pc != 0x001DEDFCu) [[unlikely]] return; }
L_001DEDFC:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[16].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001DEE20; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23225u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEE18u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DEE18u) [[unlikely]] return; }
L_001DEE18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001DEE78; } }
L_001DEE20:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEE2Cu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0032(c, 119u, depth + 1u); else { c.pc = 0x001CA610u; return; } if (c.pc != 0x001DEE2Cu) [[unlikely]] return; }
L_001DEE2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DEE60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEE3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001DEE3Cu) [[unlikely]] return; }
L_001DEE3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DEE60; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23217u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEE58u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DEE58u) [[unlikely]] return; }
L_001DEE58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE74; } }
L_001DEE60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23212u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEE74u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DEE74u) [[unlikely]] return; }
L_001DEE74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001DEE78:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001DEE90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEEA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001DEEA4u) [[unlikely]] return; }
L_001DEEA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEEB0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 140u, depth + 1u); else { c.pc = 0x001CAA50u; return; } if (c.pc != 0x001DEEB0u) [[unlikely]] return; }
L_001DEEB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DEEC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEED8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0031(c, 72u, depth + 1u); else { c.pc = 0x001C5E60u; return; } if (c.pc != 0x001DEED8u) [[unlikely]] return; }
L_001DEED8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEEE8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DEEE8u) [[unlikely]] return; }
L_001DEEE8:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001DEF08; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF00u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 60u, depth + 1u); else { c.pc = 0x001C58E0u; return; } if (c.pc != 0x001DEF00u) [[unlikely]] return; }
L_001DEF00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001DEF20; }
L_001DEF08:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF1Cu); set32(c.r[6], c.r[6].w[0] - 23202u);  if (depth < kMaxDepth) unit_0037(c, 426u, depth + 1u); else { c.pc = 0x001DEB50u; return; } if (c.pc != 0x001DEF1Cu) [[unlikely]] return; }
L_001DEF1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DEF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF28u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DEF28u) [[unlikely]] return; }
L_001DEF28:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF38u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 75u, depth + 1u); else { c.pc = 0x001C5EC0u; return; } if (c.pc != 0x001DEF38u) [[unlikely]] return; }
L_001DEF38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 4096u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF4Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 22u, depth + 1u); else { c.pc = 0x001C4760u; return; } if (c.pc != 0x001DEF4Cu) [[unlikely]] return; }
L_001DEF4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DEF70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF88u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0031(c, 72u, depth + 1u); else { c.pc = 0x001C5E60u; return; } if (c.pc != 0x001DEF88u) [[unlikely]] return; }
L_001DEF88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF98u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DEF98u) [[unlikely]] return; }
L_001DEF98:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001DEFB8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEFB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 60u, depth + 1u); else { c.pc = 0x001C58E0u; return; } if (c.pc != 0x001DEFB0u) [[unlikely]] return; }
L_001DEFB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001DEFD0; }
L_001DEFB8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEFCCu); set32(c.r[6], c.r[6].w[0] - 23202u);  if (depth < kMaxDepth) unit_0037(c, 426u, depth + 1u); else { c.pc = 0x001DEB50u; return; } if (c.pc != 0x001DEFCCu) [[unlikely]] return; }
L_001DEFCC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DEFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEFD8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DEFD8u) [[unlikely]] return; }
L_001DEFD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEFE8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 75u, depth + 1u); else { c.pc = 0x001C5EC0u; return; } if (c.pc != 0x001DEFE8u) [[unlikely]] return; }
L_001DEFE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DF000:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u - 10002u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF020u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0031(c, 42u, depth + 1u); else { c.pc = 0x001C4CF0u; return; } if (c.pc != 0x001DF020u) [[unlikely]] return; }
L_001DF020:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF02Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001DF02Cu) [[unlikely]] return; }
L_001DF02C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF03Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 77u, depth + 1u); else { c.pc = 0x001C5F20u; return; } if (c.pc != 0x001DF03Cu) [[unlikely]] return; }
L_001DF03C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DF058; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF054u); set32(c.r[5], c.r[5].w[0] - 23180u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DF054u) [[unlikely]] return; }
L_001DF054:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DF058:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF064u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 75u, depth + 1u); else { c.pc = 0x001C5EC0u; return; } if (c.pc != 0x001DF064u) [[unlikely]] return; }
L_001DF064:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF070u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 144u, depth + 1u); else { c.pc = 0x001CAB40u; return; } if (c.pc != 0x001DF070u) [[unlikely]] return; }
L_001DF070:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001DF0C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF080u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001DF080u) [[unlikely]] return; }
L_001DF080:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF090u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 77u, depth + 1u); else { c.pc = 0x001C5F20u; return; } if (c.pc != 0x001DF090u) [[unlikely]] return; }
L_001DF090:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001DF0AC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF0A8u); set32(c.r[5], c.r[5].w[0] - 23151u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DF0A8u) [[unlikely]] return; }
L_001DF0A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DF0AC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF0B8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 75u, depth + 1u); else { c.pc = 0x001C5EC0u; return; } if (c.pc != 0x001DF0B8u) [[unlikely]] return; }
L_001DF0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF0D0; } }
L_001DF0C0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF0CCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 75u, depth + 1u); else { c.pc = 0x001C5EC0u; return; } if (c.pc != 0x001DF0CCu) [[unlikely]] return; }
L_001DF0CC:
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_001DF0D0:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001DF120; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF0E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 57u, depth + 1u); else { c.pc = 0x001C56F0u; return; } if (c.pc != 0x001DF0E4u) [[unlikely]] return; }
L_001DF0E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DF114; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF0F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 421u, depth + 1u); else { c.pc = 0x001DEAD0u; return; } if (c.pc != 0x001DF0F8u) [[unlikely]] return; }
L_001DF0F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF104u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 65u, depth + 1u); else { c.pc = 0x001C5C40u; return; } if (c.pc != 0x001DF104u) [[unlikely]] return; }
L_001DF104:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF110u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0030(c, 361u, depth + 1u); else { c.pc = 0x001C3940u; return; } if (c.pc != 0x001DF110u) [[unlikely]] return; }
L_001DF110:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DF114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF11Cu);  if (depth < kMaxDepth) unit_0030(c, 367u, depth + 1u); else { c.pc = 0x001C3AF0u; return; } if (c.pc != 0x001DF11Cu) [[unlikely]] return; }
L_001DF11C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001DF120:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DF140:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF160u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0031(c, 42u, depth + 1u); else { c.pc = 0x001C4CF0u; return; } if (c.pc != 0x001DF160u) [[unlikely]] return; }
L_001DF160:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DF184; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF180u); set32(c.r[6], c.r[6].w[0] - 23244u);  if (depth < kMaxDepth) unit_0037(c, 426u, depth + 1u); else { c.pc = 0x001DEB50u; return; } if (c.pc != 0x001DF180u) [[unlikely]] return; }
L_001DF180:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DF184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF18Cu);  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001DF18Cu) [[unlikely]] return; }
L_001DF18C:
    set32(c.r[16], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF19Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 77u, depth + 1u); else { c.pc = 0x001C5F20u; return; } if (c.pc != 0x001DF19Cu) [[unlikely]] return; }
L_001DF19C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DF1B8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF1B4u); set32(c.r[5], c.r[5].w[0] - 23180u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DF1B4u) [[unlikely]] return; }
L_001DF1B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DF1B8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF1C4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 75u, depth + 1u); else { c.pc = 0x001C5EC0u; return; } if (c.pc != 0x001DF1C4u) [[unlikely]] return; }
L_001DF1C4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF1D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 144u, depth + 1u); else { c.pc = 0x001CAB40u; return; } if (c.pc != 0x001DF1D0u) [[unlikely]] return; }
L_001DF1D0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001DF220; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF1E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001DF1E0u) [[unlikely]] return; }
L_001DF1E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF1F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 77u, depth + 1u); else { c.pc = 0x001C5F20u; return; } if (c.pc != 0x001DF1F0u) [[unlikely]] return; }
L_001DF1F0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001DF20C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF208u); set32(c.r[5], c.r[5].w[0] - 23151u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DF208u) [[unlikely]] return; }
L_001DF208:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DF20C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF218u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 75u, depth + 1u); else { c.pc = 0x001C5EC0u; return; } if (c.pc != 0x001DF218u) [[unlikely]] return; }
L_001DF218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF230; } }
L_001DF220:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF22Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 75u, depth + 1u); else { c.pc = 0x001C5EC0u; return; } if (c.pc != 0x001DF22Cu) [[unlikely]] return; }
L_001DF22C:
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_001DF230:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DF258; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF244u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 21u, depth + 1u); else { c.pc = 0x001C4730u; return; } if (c.pc != 0x001DF244u) [[unlikely]] return; }
L_001DF244:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF250u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 65u, depth + 1u); else { c.pc = 0x001C5C40u; return; } if (c.pc != 0x001DF250u) [[unlikely]] return; }
L_001DF250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001DF274; } }
L_001DF258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF260u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 21u, depth + 1u); else { c.pc = 0x001C4730u; return; } if (c.pc != 0x001DF260u) [[unlikely]] return; }
L_001DF260:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF270u); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0031(c, 65u, depth + 1u); else { c.pc = 0x001C5C40u; return; } if (c.pc != 0x001DF270u) [[unlikely]] return; }
L_001DF270:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001DF274:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DF290:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF2C0u); set32(c.r[16], 0u + 2u);  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DE600u; return; } if (c.pc != 0x001DF2C0u) [[unlikely]] return; }
L_001DF2C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF2CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DF2CCu) [[unlikely]] return; }
L_001DF2CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF2DCu); set32(c.r[5], c.r[5].w[0] - 23292u);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x001DF2DCu) [[unlikely]] return; }
L_001DF2DC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF2E8u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 17u, depth + 1u); else { c.pc = 0x001C4640u; return; } if (c.pc != 0x001DF2E8u) [[unlikely]] return; }
L_001DF2E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF2F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DF2F4u) [[unlikely]] return; }
L_001DF2F4:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001DF318; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF310u); set32(c.r[5], c.r[5].w[0] - 23124u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DF310u) [[unlikely]] return; }
L_001DF310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001DF654; } }
L_001DF318:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF324u); set32(c.r[5], c.r[5].w[0] - 23099u);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x001DF324u) [[unlikely]] return; }
L_001DF324:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF330u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 17u, depth + 1u); else { c.pc = 0x001C4640u; return; } if (c.pc != 0x001DF330u) [[unlikely]] return; }
L_001DF330:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF33Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x001DF33Cu) [[unlikely]] return; }
L_001DF33C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF34Cu); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DF34Cu) [[unlikely]] return; }
L_001DF34C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001DF35C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001DF364; } }
L_001DF35C:
    set32(c.r[17], c.r[17].w[0] - 23090u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001DF364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF36Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DF36Cu) [[unlikely]] return; }
L_001DF36C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF378u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 15u, depth + 1u); else { c.pc = 0x001C4570u; return; } if (c.pc != 0x001DF378u) [[unlikely]] return; }
L_001DF378:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF384u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 49u, depth + 1u); else { c.pc = 0x001C5160u; return; } if (c.pc != 0x001DF384u) [[unlikely]] return; }
L_001DF384:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_001DF494; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DF650; } }
L_001DF394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF39Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DF39Cu) [[unlikely]] return; }
L_001DF39C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 59u);  goto L_001DF3B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001DF3F0; } }
L_001DF3B0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001DF3C0; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001DF3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF3C8u); set32(c.r[5], 0u + 59u);  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x001DF3C8u) [[unlikely]] return; }
L_001DF3C8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { set32(c.r[6], c.r[19].w[0] - c.r[17].w[0]);  goto L_001DF3E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF3DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001DF3DCu) [[unlikely]] return; }
L_001DF3DC:
    set32(c.r[19], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[19].w[0] - c.r[17].w[0]);
    c.budget -= 2;
L_001DF3E4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF3F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DF3F0u) [[unlikely]] return; }
L_001DF3F0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[17].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001DF49C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF404u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x001DF404u) [[unlikely]] return; }
L_001DF404:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_001DF444; } }
L_001DF410:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF420u); set32(c.r[6], c.r[6].w[0] - 23082u);  if (depth < kMaxDepth) unit_0037(c, 410u, depth + 1u); else { c.pc = 0x001DE970u; return; } if (c.pc != 0x001DF420u) [[unlikely]] return; }
L_001DF420:
    set32(c.r[6], c.r[16].w[0] - c.r[20].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF430u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DF430u) [[unlikely]] return; }
L_001DF430:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF43Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DF43Cu) [[unlikely]] return; }
L_001DF43C:
    set32(c.r[20], c.r[16].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.budget -= 2;
L_001DF444:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF450u); set32(c.r[5], 0u + 63u);  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x001DF450u) [[unlikely]] return; }
L_001DF450:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DF410u | kUnwind; return; } goto L_001DF410; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF468u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x001DF468u) [[unlikely]] return; }
L_001DF468:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF474u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 361u, depth + 1u); else { c.pc = 0x001C3940u; return; } if (c.pc != 0x001DF474u) [[unlikely]] return; }
L_001DF474:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF480u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x001DF480u) [[unlikely]] return; }
L_001DF480:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF48Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 195u, depth + 1u); else { c.pc = 0x001DD340u; return; } if (c.pc != 0x001DF48Cu) [[unlikely]] return; }
L_001DF48C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_001DF494:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DF394u | kUnwind; return; } goto L_001DF394; }
L_001DF49C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001DF5AC; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001DF4B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001DF620; } }
L_001DF4B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF4C4u); set32(c.r[5], c.r[5].w[0] - 23047u);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x001DF4C4u) [[unlikely]] return; }
L_001DF4C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF4D0u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 17u, depth + 1u); else { c.pc = 0x001C4640u; return; } if (c.pc != 0x001DF4D0u) [[unlikely]] return; }
L_001DF4D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF4DCu); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 65u, depth + 1u); else { c.pc = 0x001C5C40u; return; } if (c.pc != 0x001DF4DCu) [[unlikely]] return; }
L_001DF4DC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF4E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DF4E8u) [[unlikely]] return; }
L_001DF4E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF4F8u); set32(c.r[5], c.r[5].w[0] - 23047u);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x001DF4F8u) [[unlikely]] return; }
L_001DF4F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF504u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 65u, depth + 1u); else { c.pc = 0x001C5C40u; return; } if (c.pc != 0x001DF504u) [[unlikely]] return; }
L_001DF504:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF510u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x001DF510u) [[unlikely]] return; }
L_001DF510:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF520u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 382u, depth + 1u); else { c.pc = 0x001C3D80u; return; } if (c.pc != 0x001DF520u) [[unlikely]] return; }
L_001DF520:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF52Cu); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 65u, depth + 1u); else { c.pc = 0x001C5C40u; return; } if (c.pc != 0x001DF52Cu) [[unlikely]] return; }
L_001DF52C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF53Cu); set32(c.r[5], c.r[5].w[0] - 23047u);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x001DF53Cu) [[unlikely]] return; }
L_001DF53C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF548u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 65u, depth + 1u); else { c.pc = 0x001C5C40u; return; } if (c.pc != 0x001DF548u) [[unlikely]] return; }
L_001DF548:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF554u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x001DF554u) [[unlikely]] return; }
L_001DF554:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF560u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DF560u) [[unlikely]] return; }
L_001DF560:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DF584; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF574u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 21u, depth + 1u); else { c.pc = 0x001C4730u; return; } if (c.pc != 0x001DF574u) [[unlikely]] return; }
L_001DF574:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF580u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 64u, depth + 1u); else { c.pc = 0x001C5B90u; return; } if (c.pc != 0x001DF580u) [[unlikely]] return; }
L_001DF580:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DF584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF58Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DF58Cu) [[unlikely]] return; }
L_001DF58C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF598u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DF598u) [[unlikely]] return; }
L_001DF598:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF5A4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 4u, depth + 1u); else { c.pc = 0x001C4050u; return; } if (c.pc != 0x001DF5A4u) [[unlikely]] return; }
L_001DF5A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DF650; } }
L_001DF5AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF5B8u); set32(c.r[5], c.r[5].w[0] - 23099u);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x001DF5B8u) [[unlikely]] return; }
L_001DF5B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF5C4u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 17u, depth + 1u); else { c.pc = 0x001C4640u; return; } if (c.pc != 0x001DF5C4u) [[unlikely]] return; }
L_001DF5C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF5D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x001DF5D0u) [[unlikely]] return; }
L_001DF5D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF5E0u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DF5E0u) [[unlikely]] return; }
L_001DF5E0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001DF5F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001DF5F8; } }
L_001DF5F0:
    set32(c.r[16], c.r[16].w[0] - 23090u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001DF5F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF600u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x001DF600u) [[unlikely]] return; }
L_001DF600:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23033u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF618u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DF618u) [[unlikely]] return; }
L_001DF618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF650; } }
L_001DF620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF628u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x001DF628u) [[unlikely]] return; }
L_001DF628:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF638u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x001DF638u) [[unlikely]] return; }
L_001DF638:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 22990u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF650u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DF650u) [[unlikely]] return; }
L_001DF650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001DF654:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001DF670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF68Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DF68Cu) [[unlikely]] return; }
L_001DF68C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF698u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 358u, depth + 1u); else { c.pc = 0x001C38C0u; return; } if (c.pc != 0x001DF698u) [[unlikely]] return; }
L_001DF698:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF6A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 49u, depth + 1u); else { c.pc = 0x001C5160u; return; } if (c.pc != 0x001DF6A4u) [[unlikely]] return; }
L_001DF6A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001DF6B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DF76C; } }
L_001DF6B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF6BCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DF6BCu) [[unlikely]] return; }
L_001DF6BC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001DF6FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF6D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 10u, depth + 1u); else { c.pc = 0x001C4430u; return; } if (c.pc != 0x001DF6D0u) [[unlikely]] return; }
L_001DF6D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF6DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DF6DCu) [[unlikely]] return; }
L_001DF6DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF6E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 21u, depth + 1u); else { c.pc = 0x001C4730u; return; } if (c.pc != 0x001DF6E8u) [[unlikely]] return; }
L_001DF6E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF6F4u); set32(c.r[5], 0u - 10002u);  if (depth < kMaxDepth) unit_0031(c, 4u, depth + 1u); else { c.pc = 0x001C4050u; return; } if (c.pc != 0x001DF6F4u) [[unlikely]] return; }
L_001DF6F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DF760; } }
L_001DF6FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF704u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 9u, depth + 1u); else { c.pc = 0x001C42E0u; return; } if (c.pc != 0x001DF704u) [[unlikely]] return; }
L_001DF704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF734; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF718u); set32(c.r[5], 0u - 10002u);  if (depth < kMaxDepth) unit_0031(c, 15u, depth + 1u); else { c.pc = 0x001C4570u; return; } if (c.pc != 0x001DF718u) [[unlikely]] return; }
L_001DF718:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF724u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 49u, depth + 1u); else { c.pc = 0x001C5160u; return; } if (c.pc != 0x001DF724u) [[unlikely]] return; }
L_001DF724:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF734u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DF734u) [[unlikely]] return; }
L_001DF734:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001DF754; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF750u); set32(c.r[6], c.r[6].w[0] - 22958u);  if (depth < kMaxDepth) unit_0037(c, 426u, depth + 1u); else { c.pc = 0x001DEB50u; return; } if (c.pc != 0x001DF750u) [[unlikely]] return; }
L_001DF750:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DF754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF75Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 9u, depth + 1u); else { c.pc = 0x001C42E0u; return; } if (c.pc != 0x001DF75Cu) [[unlikely]] return; }
L_001DF75C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DF760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF768u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0030(c, 384u, depth + 1u); else { c.pc = 0x001C3E80u; return; } if (c.pc != 0x001DF768u) [[unlikely]] return; }
L_001DF768:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DF76C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DF780:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF798u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 392u, depth + 1u); else { c.pc = 0x001DE760u; return; } if (c.pc != 0x001DF798u) [[unlikely]] return; }
L_001DF798:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF7ACu); set32(c.r[6], c.r[6].w[0] - 22932u);  if (depth < kMaxDepth) unit_0037(c, 324u, depth + 1u); else { c.pc = 0x001DE010u; return; } if (c.pc != 0x001DF7ACu) [[unlikely]] return; }
L_001DF7AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001DF7BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DF920; } }
L_001DF7BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF7C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DF7C4u) [[unlikely]] return; }
L_001DF7C4:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001DF914; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 23584u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001DC000u < 16384u) { entry = entries_0037[(t - 0x001DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001DF7EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF7F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x001DF7F8u) [[unlikely]] return; }
L_001DF7F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF804u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x001DF804u) [[unlikely]] return; }
L_001DF804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DF920; } }
L_001DF80C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF818u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DF818u) [[unlikely]] return; }
L_001DF818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DF920; } }
L_001DF820:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF82Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 49u, depth + 1u); else { c.pc = 0x001C5160u; return; } if (c.pc != 0x001DF82Cu) [[unlikely]] return; }
L_001DF82C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001DF840; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 22921u);  if (t) { goto L_001DF844; } }
L_001DF840:
    set32(c.r[5], c.r[5].w[0] - 22916u);
    c.budget -= 1;
L_001DF844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF84Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x001DF84Cu) [[unlikely]] return; }
L_001DF84C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DF920; } }
L_001DF854:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF860u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 41u, depth + 1u); else { c.pc = 0x001C4AA0u; return; } if (c.pc != 0x001DF860u) [[unlikely]] return; }
L_001DF860:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF874u); set32(c.r[5], c.r[5].w[0] - 22910u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x001DF874u) [[unlikely]] return; }
L_001DF874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF910; } }
L_001DF87C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF888u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 41u, depth + 1u); else { c.pc = 0x001C4AA0u; return; } if (c.pc != 0x001DF888u) [[unlikely]] return; }
L_001DF888:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF89Cu); set32(c.r[5], c.r[5].w[0] - 22900u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x001DF89Cu) [[unlikely]] return; }
L_001DF89C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF910; } }
L_001DF8A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF8B0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 43u, depth + 1u); else { c.pc = 0x001C4DE0u; return; } if (c.pc != 0x001DF8B0u) [[unlikely]] return; }
L_001DF8B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF8C4u); set32(c.r[5], c.r[5].w[0] - 22887u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x001DF8C4u) [[unlikely]] return; }
L_001DF8C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF910; } }
L_001DF8CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF8D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 42u, depth + 1u); else { c.pc = 0x001C4CF0u; return; } if (c.pc != 0x001DF8D8u) [[unlikely]] return; }
L_001DF8D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF8ECu); set32(c.r[5], c.r[5].w[0] - 22874u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x001DF8ECu) [[unlikely]] return; }
L_001DF8EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF910; } }
L_001DF8F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 22863u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF908u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DF908u) [[unlikely]] return; }
L_001DF908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DF920; } }
L_001DF910:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001DF914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF91Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x001DF91Cu) [[unlikely]] return; }
L_001DF91C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DF920:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001DF930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF948u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 392u, depth + 1u); else { c.pc = 0x001DE760u; return; } if (c.pc != 0x001DF948u) [[unlikely]] return; }
L_001DF948:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF954u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DF954u) [[unlikely]] return; }
L_001DF954:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF960u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 65u, depth + 1u); else { c.pc = 0x001C5C40u; return; } if (c.pc != 0x001DF960u) [[unlikely]] return; }
L_001DF960:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF974u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 379u, depth + 1u); else { c.pc = 0x001C3C90u; return; } if (c.pc != 0x001DF974u) [[unlikely]] return; }
L_001DF974:
    c.r[5].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF984u); c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0031(c, 21u, depth + 1u); else { c.pc = 0x001C4730u; return; } if (c.pc != 0x001DF984u) [[unlikely]] return; }
L_001DF984:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF990u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 64u, depth + 1u); else { c.pc = 0x001C5B90u; return; } if (c.pc != 0x001DF990u) [[unlikely]] return; }
L_001DF990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF998u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001DF998u) [[unlikely]] return; }
L_001DF998:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DF9B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF9C8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 392u, depth + 1u); else { c.pc = 0x001DE760u; return; } if (c.pc != 0x001DF9C8u) [[unlikely]] return; }
L_001DF9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF9D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001DF9D0u) [[unlikely]] return; }
L_001DF9D0:
    set32(c.r[5], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF9E4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 379u, depth + 1u); else { c.pc = 0x001C3C90u; return; } if (c.pc != 0x001DF9E4u) [[unlikely]] return; }
L_001DF9E4:
    c.r[5].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF9F4u); c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0031(c, 21u, depth + 1u); else { c.pc = 0x001C4730u; return; } if (c.pc != 0x001DF9F4u) [[unlikely]] return; }
L_001DF9F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA00u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 65u, depth + 1u); else { c.pc = 0x001C5C40u; return; } if (c.pc != 0x001DFA00u) [[unlikely]] return; }
L_001DFA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001DFA08u) [[unlikely]] return; }
L_001DFA08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DFA20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], 0u + 5u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA44u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 399u, depth + 1u); else { c.pc = 0x001DE840u; return; } if (c.pc != 0x001DFA44u) [[unlikely]] return; }
L_001DFA44:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA50u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 254u, depth + 1u); else { c.pc = 0x001DDAC0u; return; } if (c.pc != 0x001DFA50u) [[unlikely]] return; }
L_001DFA50:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA68u); set32(c.r[6], c.r[6].w[0] - 22859u);  if (depth < kMaxDepth) unit_0037(c, 410u, depth + 1u); else { c.pc = 0x001DE970u; return; } if (c.pc != 0x001DFA68u) [[unlikely]] return; }
L_001DFA68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001DFA80; } }
L_001DFA70:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA7Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DFA7Cu) [[unlikely]] return; }
L_001DFA7C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001DFA80:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DFA70u | kUnwind; return; } goto L_001DFA70; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DFAB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFAC8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 392u, depth + 1u); else { c.pc = 0x001DE760u; return; } if (c.pc != 0x001DFAC8u) [[unlikely]] return; }
L_001DFAC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFAD4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 49u, depth + 1u); else { c.pc = 0x001C5160u; return; } if (c.pc != 0x001DFAD4u) [[unlikely]] return; }
L_001DFAD4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001DFB10; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] - 22832u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFAF4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 366u, depth + 1u); else { c.pc = 0x001DE460u; return; } if (c.pc != 0x001DFAF4u) [[unlikely]] return; }
L_001DFAF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 22835u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB08u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001DFB08u) [[unlikely]] return; }
L_001DFB08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001DFB20; } }
L_001DFB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB18u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DFB18u) [[unlikely]] return; }
L_001DFB18:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_001DFB20:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DFB30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB54u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 366u, depth + 1u); else { c.pc = 0x001DE460u; return; } if (c.pc != 0x001DFB54u) [[unlikely]] return; }
L_001DFB54:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001DFB60u) [[unlikely]] return; }
L_001DFB60:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB70u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 195u, depth + 1u); else { c.pc = 0x001DD340u; return; } if (c.pc != 0x001DFB70u) [[unlikely]] return; }
L_001DFB70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001DFB84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 367u, depth + 1u); else { c.pc = 0x001C3AF0u; return; } if (c.pc != 0x001DFB80u) [[unlikely]] return; }
L_001DFB80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DFB84:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB90u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 382u, depth + 1u); else { c.pc = 0x001C3D80u; return; } if (c.pc != 0x001DFB90u) [[unlikely]] return; }
L_001DFB90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001DFB98u) [[unlikely]] return; }
L_001DFB98:
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DFBB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFBD0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 366u, depth + 1u); else { c.pc = 0x001DE460u; return; } if (c.pc != 0x001DFBD0u) [[unlikely]] return; }
L_001DFBD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFBDCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 195u, depth + 1u); else { c.pc = 0x001DD340u; return; } if (c.pc != 0x001DFBDCu) [[unlikely]] return; }
L_001DFBDC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001DFBEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DFC04; } }
L_001DFBEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFBF4u);  if (depth < kMaxDepth) unit_0031(c, 40u, depth + 1u); else { c.pc = 0x001C4A80u; return; } if (c.pc != 0x001DFBF4u) [[unlikely]] return; }
L_001DFBF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC00u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 65u, depth + 1u); else { c.pc = 0x001C5C40u; return; } if (c.pc != 0x001DFC00u) [[unlikely]] return; }
L_001DFC00:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001DFC04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DFC20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 60u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC40u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DE600u; return; } if (c.pc != 0x001DFC40u) [[unlikely]] return; }
L_001DFC40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC58u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 366u, depth + 1u); else { c.pc = 0x001DE460u; return; } if (c.pc != 0x001DFC58u) [[unlikely]] return; }
L_001DFC58:
    set32(c.r[6], ld32((c.r[29].w[0] + 60u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC6Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 192u, depth + 1u); else { c.pc = 0x001DD2E0u; return; } if (c.pc != 0x001DFC6Cu) [[unlikely]] return; }
L_001DFC6C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001DFC7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DFC94; } }
L_001DFC7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC84u);  if (depth < kMaxDepth) unit_0031(c, 40u, depth + 1u); else { c.pc = 0x001C4A80u; return; } if (c.pc != 0x001DFC84u) [[unlikely]] return; }
L_001DFC84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC90u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 65u, depth + 1u); else { c.pc = 0x001C5C40u; return; } if (c.pc != 0x001DFC90u) [[unlikely]] return; }
L_001DFC90:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001DFC94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DFCB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFCCCu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x001DFCCCu) [[unlikely]] return; }
L_001DFCCC:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFCE0u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 399u, depth + 1u); else { c.pc = 0x001DE840u; return; } if (c.pc != 0x001DFCE0u) [[unlikely]] return; }
L_001DFCE0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_001DFD50; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD00u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DFD00u) [[unlikely]] return; }
L_001DFD00:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001DFD4C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23483u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD20u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DFD20u) [[unlikely]] return; }
L_001DFD20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD2Cu); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 15u, depth + 1u); else { c.pc = 0x001C4570u; return; } if (c.pc != 0x001DFD2Cu) [[unlikely]] return; }
L_001DFD2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD38u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DFD38u) [[unlikely]] return; }
L_001DFD38:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001DFD44u) [[unlikely]] return; }
L_001DFD44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001DFD98; } }
L_001DFD4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_001DFD50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD68u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001DFD68u) [[unlikely]] return; }
L_001DFD68:
    c.f[0] = fp::cvt_w_s(c.f[20]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD7Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 13u, depth + 1u); else { c.pc = 0x001C44A0u; return; } if (c.pc != 0x001DFD7Cu) [[unlikely]] return; }
L_001DFD7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD88u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DFD88u) [[unlikely]] return; }
L_001DFD88:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 2u);  goto L_001DFD98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DFD98; } }
L_001DFD98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DFDB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 5u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFDCCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 399u, depth + 1u); else { c.pc = 0x001DE840u; return; } if (c.pc != 0x001DFDCCu) [[unlikely]] return; }
L_001DFDCC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFDE0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001DFDE0u) [[unlikely]] return; }
L_001DFDE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFDECu); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 15u, depth + 1u); else { c.pc = 0x001C4570u; return; } if (c.pc != 0x001DFDECu) [[unlikely]] return; }
L_001DFDEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFDF8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001DFDF8u) [[unlikely]] return; }
L_001DFDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 40u, depth + 1u); else { c.pc = 0x001C4A80u; return; } if (c.pc != 0x001DFE00u) [[unlikely]] return; }
L_001DFE00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 3u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DFE20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 5u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 399u, depth + 1u); else { c.pc = 0x001DE840u; return; } if (c.pc != 0x001DFE3Cu) [[unlikely]] return; }
L_001DFE3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE48u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001DFE48u) [[unlikely]] return; }
L_001DFE48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE54u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 365u, depth + 1u); else { c.pc = 0x001C3A10u; return; } if (c.pc != 0x001DFE54u) [[unlikely]] return; }
L_001DFE54:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001DFE64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001DFE70; } }
L_001DFE64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE6Cu);  if (depth < kMaxDepth) unit_0031(c, 40u, depth + 1u); else { c.pc = 0x001C4A80u; return; } if (c.pc != 0x001DFE6Cu) [[unlikely]] return; }
L_001DFE6C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DFE70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DFE80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE98u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 392u, depth + 1u); else { c.pc = 0x001DE760u; return; } if (c.pc != 0x001DFE98u) [[unlikely]] return; }
L_001DFE98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFEA4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001DFEA4u) [[unlikely]] return; }
L_001DFEA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFEB0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 61u, depth + 1u); else { c.pc = 0x001C59D0u; return; } if (c.pc != 0x001DFEB0u) [[unlikely]] return; }
L_001DFEB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFEBCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x001DFEBCu) [[unlikely]] return; }
L_001DFEBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DFED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFEECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 341u, depth + 1u); else { c.pc = 0x001DE1A0u; return; } if (c.pc != 0x001DFEECu) [[unlikely]] return; }
L_001DFEEC:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFEFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 369u, depth + 1u); else { c.pc = 0x001C3B10u; return; } if (c.pc != 0x001DFEFCu) [[unlikely]] return; }
L_001DFEFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DFF10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 371u, depth + 1u); else { c.pc = 0x001C3B80u; return; } if (c.pc != 0x001DFF24u) [[unlikely]] return; }
L_001DFF24:
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF34u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001DFF34u) [[unlikely]] return; }
L_001DFF34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 372u, depth + 1u); else { c.pc = 0x001C3BA0u; return; } if (c.pc != 0x001DFF3Cu) [[unlikely]] return; }
L_001DFF3C:
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF4Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001DFF4Cu) [[unlikely]] return; }
L_001DFF4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 2u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DFF60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 5u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF7Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 399u, depth + 1u); else { c.pc = 0x001DE840u; return; } if (c.pc != 0x001DFF7Cu) [[unlikely]] return; }
L_001DFF7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF88u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0037(c, 392u, depth + 1u); else { c.pc = 0x001DE760u; return; } if (c.pc != 0x001DFF88u) [[unlikely]] return; }
L_001DFF88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF94u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0037(c, 392u, depth + 1u); else { c.pc = 0x001DE760u; return; } if (c.pc != 0x001DFF94u) [[unlikely]] return; }
L_001DFF94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFFA0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 4u, depth + 1u); else { c.pc = 0x001C4050u; return; } if (c.pc != 0x001DFFA0u) [[unlikely]] return; }
L_001DFFA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DFFC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 5u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFFDCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 399u, depth + 1u); else { c.pc = 0x001DE840u; return; } if (c.pc != 0x001DFFDCu) [[unlikely]] return; }
L_001DFFDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFFE8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0037(c, 392u, depth + 1u); else { c.pc = 0x001DE760u; return; } if (c.pc != 0x001DFFE8u) [[unlikely]] return; }
L_001DFFE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFFF4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 15u, depth + 1u); else { c.pc = 0x001C4570u; return; } if (c.pc != 0x001DFFF4u) [[unlikely]] return; }
L_001DFFF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    [[clang::musttail]] return unit_0038(c, 1u, depth);
}

}
