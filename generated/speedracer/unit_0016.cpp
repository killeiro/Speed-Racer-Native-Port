#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0016[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0,
    0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74,
    0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0,
    78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0,
    101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0,
    107, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0,
    0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 124, 0,
    125, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0,
    134, 135, 0, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0,
    0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0,
    187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0,
    193, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 201, 0,
    0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205,
    206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 0, 211,
    0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 0,
    0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0,
    247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 253,
    0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0,
    0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303,
    0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0,
    0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0,
    0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333,
    0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0,
    0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0,
    344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0,
    349, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0,
    0, 357, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 0, 0, 366, 0, 0, 0,
    367, 0, 0, 368, 0, 369, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0,
    0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 387, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0,
    398, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 406, 0,
    0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0,
    414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 417, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0,
    427, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 434, 0,
    0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 439, 0, 440, 0, 0, 0, 441, 0, 0, 442, 0, 0,
    0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0,
    0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458,
    0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0,
    463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 467, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0,
    0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0,
    0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0,
    0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0,
    491, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0,
    496, 0, 0, 0, 0, 497, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0,
    503, 0, 0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0,
    509, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517,
    0, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 524, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0,
    539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0, 0, 544, 0, 0, 545, 0,
    0, 546, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0,
    0, 0, 0, 0, 0, 553, 0, 554, 0, 555, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 0,
    0, 560, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566,
    0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 0,
    572, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0,
    0, 582, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0,
    0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0,
    0, 591, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0,
    597, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0,
    0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0,
    607, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 609, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0,
    612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0,
    614, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 618, 0, 619, 0, 0, 0, 0, 620, 0,
    0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 623, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 626, 0, 627,
    0, 0, 628, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0016(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00158000;
    case 2u: goto L_00158024;
    case 3u: goto L_0015803C;
    case 4u: goto L_00158040;
    case 5u: goto L_00158070;
    case 6u: goto L_00158080;
    case 7u: goto L_00158090;
    case 8u: goto L_001580B0;
    case 9u: goto L_001580C0;
    case 10u: goto L_001580D0;
    case 11u: goto L_00158100;
    case 12u: goto L_00158118;
    case 13u: goto L_00158124;
    case 14u: goto L_00158134;
    case 15u: goto L_0015813C;
    case 16u: goto L_00158154;
    case 17u: goto L_00158164;
    case 18u: goto L_00158170;
    case 19u: goto L_00158184;
    case 20u: goto L_00158198;
    case 21u: goto L_001581A8;
    case 22u: goto L_001581E8;
    case 23u: goto L_00158210;
    case 24u: goto L_00158230;
    case 25u: goto L_00158240;
    case 26u: goto L_0015824C;
    case 27u: goto L_00158280;
    case 28u: goto L_001582B0;
    case 29u: goto L_00158300;
    case 30u: goto L_00158310;
    case 31u: goto L_00158320;
    case 32u: goto L_0015833C;
    case 33u: goto L_0015836C;
    case 34u: goto L_001583B0;
    case 35u: goto L_001583D0;
    case 36u: goto L_00158428;
    case 37u: goto L_0015843C;
    case 38u: goto L_00158450;
    case 39u: goto L_00158470;
    case 40u: goto L_001584A0;
    case 41u: goto L_001584E0;
    case 42u: goto L_001584FC;
    case 43u: goto L_0015858C;
    case 44u: goto L_001585A8;
    case 45u: goto L_001585C0;
    case 46u: goto L_001585F0;
    case 47u: goto L_00158620;
    case 48u: goto L_00158630;
    case 49u: goto L_00158654;
    case 50u: goto L_00158670;
    case 51u: goto L_00158688;
    case 52u: goto L_001586A0;
    case 53u: goto L_001586E4;
    case 54u: goto L_00158740;
    case 55u: goto L_001587A0;
    case 56u: goto L_001587A8;
    case 57u: goto L_001587F4;
    case 58u: goto L_00158834;
    case 59u: goto L_00158880;
    case 60u: goto L_001588EC;
    case 61u: goto L_0015891C;
    case 62u: goto L_00158978;
    case 63u: goto L_001589A4;
    case 64u: goto L_001589C4;
    case 65u: goto L_00158A04;
    case 66u: goto L_00158A40;
    case 67u: goto L_00158AE0;
    case 68u: goto L_00158B00;
    case 69u: goto L_00158B10;
    case 70u: goto L_00158B20;
    case 71u: goto L_00158B30;
    case 72u: goto L_00158B40;
    case 73u: goto L_00158B6C;
    case 74u: goto L_00158B7C;
    case 75u: goto L_00158B8C;
    case 76u: goto L_00158BA0;
    case 77u: goto L_00158BEC;
    case 78u: goto L_00158C00;
    case 79u: goto L_00158C10;
    case 80u: goto L_00158C20;
    case 81u: goto L_00158C30;
    case 82u: goto L_00158C40;
    case 83u: goto L_00158C50;
    case 84u: goto L_00158C80;
    case 85u: goto L_00158C90;
    case 86u: goto L_00158CAC;
    case 87u: goto L_00158CC0;
    case 88u: goto L_00158D04;
    case 89u: goto L_00158D20;
    case 90u: goto L_00158D34;
    case 91u: goto L_00158D44;
    case 92u: goto L_00158D60;
    case 93u: goto L_00158D74;
    case 94u: goto L_00158DA0;
    case 95u: goto L_00158DD8;
    case 96u: goto L_00158DF0;
    case 97u: goto L_00158E3C;
    case 98u: goto L_00158E50;
    case 99u: goto L_00158E60;
    case 100u: goto L_00158E70;
    case 101u: goto L_00158E80;
    case 102u: goto L_00158E90;
    case 103u: goto L_00158EB0;
    case 104u: goto L_00158ED4;
    case 105u: goto L_00158EDC;
    case 106u: goto L_00158EF4;
    case 107u: goto L_00158F00;
    case 108u: goto L_00158F0C;
    case 109u: goto L_00158F20;
    case 110u: goto L_00158F2C;
    case 111u: goto L_00158F38;
    case 112u: goto L_00158F4C;
    case 113u: goto L_00158F58;
    case 114u: goto L_00158F64;
    case 115u: goto L_00158F78;
    case 116u: goto L_00158F84;
    case 117u: goto L_00158F90;
    case 118u: goto L_00158FB0;
    case 119u: goto L_00158FFC;
    case 120u: goto L_00159010;
    case 121u: goto L_00159050;
    case 122u: goto L_0015905C;
    case 123u: goto L_00159068;
    case 124u: goto L_00159078;
    case 125u: goto L_00159080;
    case 126u: goto L_0015908C;
    case 127u: goto L_00159098;
    case 128u: goto L_001590A4;
    case 129u: goto L_001590B4;
    case 130u: goto L_001590C8;
    case 131u: goto L_001590D4;
    case 132u: goto L_001590E0;
    case 133u: goto L_001590F0;
    case 134u: goto L_00159100;
    case 135u: goto L_00159104;
    case 136u: goto L_00159110;
    case 137u: goto L_0015911C;
    case 138u: goto L_0015912C;
    case 139u: goto L_00159150;
    case 140u: goto L_0015919C;
    case 141u: goto L_001591B0;
    case 142u: goto L_001591C0;
    case 143u: goto L_001591D0;
    case 144u: goto L_001591E0;
    case 145u: goto L_001591F0;
    case 146u: goto L_00159200;
    case 147u: goto L_0015922C;
    case 148u: goto L_00159240;
    case 149u: goto L_00159254;
    case 150u: goto L_00159270;
    case 151u: goto L_001592B8;
    case 152u: goto L_001592D4;
    case 153u: goto L_001592EC;
    case 154u: goto L_00159300;
    case 155u: goto L_00159320;
    case 156u: goto L_0015936C;
    case 157u: goto L_00159380;
    case 158u: goto L_00159390;
    case 159u: goto L_001593A0;
    case 160u: goto L_001593B0;
    case 161u: goto L_001593C0;
    case 162u: goto L_001593EC;
    case 163u: goto L_00159408;
    case 164u: goto L_00159420;
    case 165u: goto L_00159434;
    case 166u: goto L_00159450;
    case 167u: goto L_00159498;
    case 168u: goto L_001594B0;
    case 169u: goto L_001594D0;
    case 170u: goto L_0015951C;
    case 171u: goto L_00159530;
    case 172u: goto L_00159540;
    case 173u: goto L_00159550;
    case 174u: goto L_00159560;
    case 175u: goto L_00159570;
    case 176u: goto L_0015959C;
    case 177u: goto L_001595B0;
    case 178u: goto L_001595C8;
    case 179u: goto L_001595E0;
    case 180u: goto L_00159628;
    case 181u: goto L_00159640;
    case 182u: goto L_00159670;
    case 183u: goto L_001596BC;
    case 184u: goto L_001596D0;
    case 185u: goto L_001596E0;
    case 186u: goto L_001596F0;
    case 187u: goto L_00159700;
    case 188u: goto L_00159710;
    case 189u: goto L_00159730;
    case 190u: goto L_00159754;
    case 191u: goto L_0015975C;
    case 192u: goto L_00159774;
    case 193u: goto L_00159780;
    case 194u: goto L_0015978C;
    case 195u: goto L_001597A0;
    case 196u: goto L_001597AC;
    case 197u: goto L_001597B8;
    case 198u: goto L_001597CC;
    case 199u: goto L_001597D8;
    case 200u: goto L_001597E4;
    case 201u: goto L_001597F8;
    case 202u: goto L_00159804;
    case 203u: goto L_00159810;
    case 204u: goto L_00159830;
    case 205u: goto L_0015987C;
    case 206u: goto L_00159880;
    case 207u: goto L_00159890;
    case 208u: goto L_001598D4;
    case 209u: goto L_001598E0;
    case 210u: goto L_001598EC;
    case 211u: goto L_001598FC;
    case 212u: goto L_00159910;
    case 213u: goto L_0015991C;
    case 214u: goto L_00159928;
    case 215u: goto L_00159938;
    case 216u: goto L_0015994C;
    case 217u: goto L_00159958;
    case 218u: goto L_00159964;
    case 219u: goto L_00159974;
    case 220u: goto L_00159988;
    case 221u: goto L_00159994;
    case 222u: goto L_001599A0;
    case 223u: goto L_001599B0;
    case 224u: goto L_001599D0;
    case 225u: goto L_00159A1C;
    case 226u: goto L_00159A30;
    case 227u: goto L_00159A40;
    case 228u: goto L_00159A50;
    case 229u: goto L_00159A68;
    case 230u: goto L_00159A80;
    case 231u: goto L_00159A90;
    case 232u: goto L_00159AA0;
    case 233u: goto L_00159ACC;
    case 234u: goto L_00159AE0;
    case 235u: goto L_00159B2C;
    case 236u: goto L_00159B40;
    case 237u: goto L_00159B88;
    case 238u: goto L_00159BA0;
    case 239u: goto L_00159BB0;
    case 240u: goto L_00159BC0;
    case 241u: goto L_00159BE0;
    case 242u: goto L_00159C2C;
    case 243u: goto L_00159C40;
    case 244u: goto L_00159C50;
    case 245u: goto L_00159C60;
    case 246u: goto L_00159C70;
    case 247u: goto L_00159C80;
    case 248u: goto L_00159CA0;
    case 249u: goto L_00159CC4;
    case 250u: goto L_00159CCC;
    case 251u: goto L_00159CE4;
    case 252u: goto L_00159CF0;
    case 253u: goto L_00159CFC;
    case 254u: goto L_00159D10;
    case 255u: goto L_00159D1C;
    case 256u: goto L_00159D28;
    case 257u: goto L_00159D3C;
    case 258u: goto L_00159D48;
    case 259u: goto L_00159D54;
    case 260u: goto L_00159D70;
    case 261u: goto L_00159DBC;
    case 262u: goto L_00159DD0;
    case 263u: goto L_00159E0C;
    case 264u: goto L_00159E18;
    case 265u: goto L_00159E24;
    case 266u: goto L_00159E34;
    case 267u: goto L_00159E48;
    case 268u: goto L_00159E54;
    case 269u: goto L_00159E60;
    case 270u: goto L_00159E70;
    case 271u: goto L_00159E84;
    case 272u: goto L_00159E90;
    case 273u: goto L_00159E9C;
    case 274u: goto L_00159EAC;
    case 275u: goto L_00159ED0;
    case 276u: goto L_00159F1C;
    case 277u: goto L_00159F30;
    case 278u: goto L_00159F40;
    case 279u: goto L_00159F50;
    case 280u: goto L_00159F60;
    case 281u: goto L_00159F70;
    case 282u: goto L_00159F9C;
    case 283u: goto L_00159FB0;
    case 284u: goto L_00159FD4;
    case 285u: goto L_00159FE8;
    case 286u: goto L_00159FF8;
    case 287u: goto L_0015A010;
    case 288u: goto L_0015A058;
    case 289u: goto L_0015A070;
    case 290u: goto L_0015A080;
    case 291u: goto L_0015A09C;
    case 292u: goto L_0015A0B0;
    case 293u: goto L_0015A0C0;
    case 294u: goto L_0015A0D0;
    case 295u: goto L_0015A0E0;
    case 296u: goto L_0015A0F0;
    case 297u: goto L_0015A100;
    case 298u: goto L_0015A120;
    case 299u: goto L_0015A12C;
    case 300u: goto L_0015A138;
    case 301u: goto L_0015A150;
    case 302u: goto L_0015A170;
    case 303u: goto L_0015A17C;
    case 304u: goto L_0015A188;
    case 305u: goto L_0015A1A0;
    case 306u: goto L_0015A1C0;
    case 307u: goto L_0015A1D0;
    case 308u: goto L_0015A1DC;
    case 309u: goto L_0015A1F0;
    case 310u: goto L_0015A214;
    case 311u: goto L_0015A220;
    case 312u: goto L_0015A22C;
    case 313u: goto L_0015A240;
    case 314u: goto L_0015A250;
    case 315u: goto L_0015A260;
    case 316u: goto L_0015A2A0;
    case 317u: goto L_0015A2B8;
    case 318u: goto L_0015A2C0;
    case 319u: goto L_0015A2E0;
    case 320u: goto L_0015A304;
    case 321u: goto L_0015A310;
    case 322u: goto L_0015A328;
    case 323u: goto L_0015A338;
    case 324u: goto L_0015A344;
    case 325u: goto L_0015A358;
    case 326u: goto L_0015A378;
    case 327u: goto L_0015A384;
    case 328u: goto L_0015A390;
    case 329u: goto L_0015A3A8;
    case 330u: goto L_0015A3BC;
    case 331u: goto L_0015A3C8;
    case 332u: goto L_0015A3DC;
    case 333u: goto L_0015A3FC;
    case 334u: goto L_0015A408;
    case 335u: goto L_0015A414;
    case 336u: goto L_0015A440;
    case 337u: goto L_0015A450;
    case 338u: goto L_0015A474;
    case 339u: goto L_0015A484;
    case 340u: goto L_0015A494;
    case 341u: goto L_0015A4D4;
    case 342u: goto L_0015A4DC;
    case 343u: goto L_0015A4E4;
    case 344u: goto L_0015A500;
    case 345u: goto L_0015A52C;
    case 346u: goto L_0015A550;
    case 347u: goto L_0015A560;
    case 348u: goto L_0015A574;
    case 349u: goto L_0015A580;
    case 350u: goto L_0015A590;
    case 351u: goto L_0015A5A4;
    case 352u: goto L_0015A5B0;
    case 353u: goto L_0015A5C0;
    case 354u: goto L_0015A5D4;
    case 355u: goto L_0015A5E0;
    case 356u: goto L_0015A5F0;
    case 357u: goto L_0015A604;
    case 358u: goto L_0015A610;
    case 359u: goto L_0015A620;
    case 360u: goto L_0015A634;
    case 361u: goto L_0015A640;
    case 362u: goto L_0015A648;
    case 363u: goto L_0015A650;
    case 364u: goto L_0015A658;
    case 365u: goto L_0015A660;
    case 366u: goto L_0015A670;
    case 367u: goto L_0015A680;
    case 368u: goto L_0015A68C;
    case 369u: goto L_0015A694;
    case 370u: goto L_0015A69C;
    case 371u: goto L_0015A6B4;
    case 372u: goto L_0015A6C8;
    case 373u: goto L_0015A6D4;
    case 374u: goto L_0015A6E0;
    case 375u: goto L_0015A700;
    case 376u: goto L_0015A724;
    case 377u: goto L_0015A73C;
    case 378u: goto L_0015A780;
    case 379u: goto L_0015A798;
    case 380u: goto L_0015A7B0;
    case 381u: goto L_0015A7CC;
    case 382u: goto L_0015A7E0;
    case 383u: goto L_0015A7F4;
    case 384u: goto L_0015A804;
    case 385u: goto L_0015A824;
    case 386u: goto L_0015A830;
    case 387u: goto L_0015A83C;
    case 388u: goto L_0015A840;
    case 389u: goto L_0015A850;
    case 390u: goto L_0015A888;
    case 391u: goto L_0015A8A4;
    case 392u: goto L_0015A8BC;
    case 393u: goto L_0015A8E0;
    case 394u: goto L_0015A910;
    case 395u: goto L_0015A930;
    case 396u: goto L_0015A960;
    case 397u: goto L_0015A96C;
    case 398u: goto L_0015A980;
    case 399u: goto L_0015A988;
    case 400u: goto L_0015A994;
    case 401u: goto L_0015A9A0;
    case 402u: goto L_0015A9B4;
    case 403u: goto L_0015A9C8;
    case 404u: goto L_0015A9D8;
    case 405u: goto L_0015A9E4;
    case 406u: goto L_0015A9F8;
    case 407u: goto L_0015AA18;
    case 408u: goto L_0015AA24;
    case 409u: goto L_0015AA2C;
    case 410u: goto L_0015AA38;
    case 411u: goto L_0015AA50;
    case 412u: goto L_0015AA60;
    case 413u: goto L_0015AA6C;
    case 414u: goto L_0015AA80;
    case 415u: goto L_0015AAA0;
    case 416u: goto L_0015AAAC;
    case 417u: goto L_0015AAB4;
    case 418u: goto L_0015AAC0;
    case 419u: goto L_0015AAD0;
    case 420u: goto L_0015AB00;
    case 421u: goto L_0015AB20;
    case 422u: goto L_0015AB30;
    case 423u: goto L_0015AB40;
    case 424u: goto L_0015AB4C;
    case 425u: goto L_0015AB58;
    case 426u: goto L_0015AB68;
    case 427u: goto L_0015AB80;
    case 428u: goto L_0015AB8C;
    case 429u: goto L_0015ABA0;
    case 430u: goto L_0015ABBC;
    case 431u: goto L_0015ABC0;
    case 432u: goto L_0015ABDC;
    case 433u: goto L_0015ABE8;
    case 434u: goto L_0015ABF8;
    case 435u: goto L_0015AC14;
    case 436u: goto L_0015AC24;
    case 437u: goto L_0015AC3C;
    case 438u: goto L_0015AC44;
    case 439u: goto L_0015AC50;
    case 440u: goto L_0015AC58;
    case 441u: goto L_0015AC68;
    case 442u: goto L_0015AC74;
    case 443u: goto L_0015AC90;
    case 444u: goto L_0015ACA8;
    case 445u: goto L_0015ACBC;
    case 446u: goto L_0015ACD0;
    case 447u: goto L_0015ACE0;
    case 448u: goto L_0015ACF8;
    case 449u: goto L_0015AD10;
    case 450u: goto L_0015AD20;
    case 451u: goto L_0015AD30;
    case 452u: goto L_0015AD48;
    case 453u: goto L_0015AD54;
    case 454u: goto L_0015AD84;
    case 455u: goto L_0015AD90;
    case 456u: goto L_0015ADC0;
    case 457u: goto L_0015ADCC;
    case 458u: goto L_0015ADFC;
    case 459u: goto L_0015AE08;
    case 460u: goto L_0015AE38;
    case 461u: goto L_0015AE44;
    case 462u: goto L_0015AE74;
    case 463u: goto L_0015AE80;
    case 464u: goto L_0015AEB0;
    case 465u: goto L_0015AEBC;
    case 466u: goto L_0015AEEC;
    case 467u: goto L_0015AEF8;
    case 468u: goto L_0015AF28;
    case 469u: goto L_0015AF34;
    case 470u: goto L_0015AF64;
    case 471u: goto L_0015AF74;
    case 472u: goto L_0015AF94;
    case 473u: goto L_0015AFE0;
    case 474u: goto L_0015B004;
    case 475u: goto L_0015B034;
    case 476u: goto L_0015B050;
    case 477u: goto L_0015B0A8;
    case 478u: goto L_0015B0C0;
    case 479u: goto L_0015B0E0;
    case 480u: goto L_0015B120;
    case 481u: goto L_0015B130;
    case 482u: goto L_0015B168;
    case 483u: goto L_0015B178;
    case 484u: goto L_0015B190;
    case 485u: goto L_0015B1A4;
    case 486u: goto L_0015B1B8;
    case 487u: goto L_0015B1C4;
    case 488u: goto L_0015B1D4;
    case 489u: goto L_0015B1E0;
    case 490u: goto L_0015B1F0;
    case 491u: goto L_0015B200;
    case 492u: goto L_0015B208;
    case 493u: goto L_0015B22C;
    case 494u: goto L_0015B240;
    case 495u: goto L_0015B268;
    case 496u: goto L_0015B280;
    case 497u: goto L_0015B294;
    case 498u: goto L_0015B2A0;
    case 499u: goto L_0015B2B8;
    case 500u: goto L_0015B2C4;
    case 501u: goto L_0015B2D0;
    case 502u: goto L_0015B2DC;
    case 503u: goto L_0015B300;
    case 504u: goto L_0015B31C;
    case 505u: goto L_0015B328;
    case 506u: goto L_0015B344;
    case 507u: goto L_0015B354;
    case 508u: goto L_0015B374;
    case 509u: goto L_0015B380;
    case 510u: goto L_0015B38C;
    case 511u: goto L_0015B3A0;
    case 512u: goto L_0015B3AC;
    case 513u: goto L_0015B3B8;
    case 514u: goto L_0015B3D0;
    case 515u: goto L_0015B420;
    case 516u: goto L_0015B44C;
    case 517u: goto L_0015B47C;
    case 518u: goto L_0015B488;
    case 519u: goto L_0015B4A0;
    case 520u: goto L_0015B4C0;
    case 521u: goto L_0015B4F0;
    case 522u: goto L_0015B534;
    case 523u: goto L_0015B560;
    case 524u: goto L_0015B590;
    case 525u: goto L_0015B59C;
    case 526u: goto L_0015B5B4;
    case 527u: goto L_0015B5D8;
    case 528u: goto L_0015B600;
    case 529u: goto L_0015B620;
    case 530u: goto L_0015B630;
    case 531u: goto L_0015B65C;
    case 532u: goto L_0015B670;
    case 533u: goto L_0015B6A4;
    case 534u: goto L_0015B6B0;
    case 535u: goto L_0015B6C0;
    case 536u: goto L_0015B6D0;
    case 537u: goto L_0015B6DC;
    case 538u: goto L_0015B6F0;
    case 539u: goto L_0015B700;
    case 540u: goto L_0015B718;
    case 541u: goto L_0015B734;
    case 542u: goto L_0015B750;
    case 543u: goto L_0015B75C;
    case 544u: goto L_0015B76C;
    case 545u: goto L_0015B778;
    case 546u: goto L_0015B784;
    case 547u: goto L_0015B794;
    case 548u: goto L_0015B7A4;
    case 549u: goto L_0015B7C0;
    case 550u: goto L_0015B7C8;
    case 551u: goto L_0015B7D8;
    case 552u: goto L_0015B7F4;
    case 553u: goto L_0015B814;
    case 554u: goto L_0015B81C;
    case 555u: goto L_0015B824;
    case 556u: goto L_0015B834;
    case 557u: goto L_0015B848;
    case 558u: goto L_0015B860;
    case 559u: goto L_0015B874;
    case 560u: goto L_0015B884;
    case 561u: goto L_0015B890;
    case 562u: goto L_0015B8B0;
    case 563u: goto L_0015B8C4;
    case 564u: goto L_0015B8D4;
    case 565u: goto L_0015B8E8;
    case 566u: goto L_0015B8FC;
    case 567u: goto L_0015B920;
    case 568u: goto L_0015B93C;
    case 569u: goto L_0015B948;
    case 570u: goto L_0015B958;
    case 571u: goto L_0015B974;
    case 572u: goto L_0015B980;
    case 573u: goto L_0015B98C;
    case 574u: goto L_0015B998;
    case 575u: goto L_0015B9C0;
    case 576u: goto L_0015B9E0;
    case 577u: goto L_0015BA14;
    case 578u: goto L_0015BA20;
    case 579u: goto L_0015BA38;
    case 580u: goto L_0015BA50;
    case 581u: goto L_0015BA70;
    case 582u: goto L_0015BA84;
    case 583u: goto L_0015BA90;
    case 584u: goto L_0015BAB0;
    case 585u: goto L_0015BAD4;
    case 586u: goto L_0015BAF0;
    case 587u: goto L_0015BB14;
    case 588u: goto L_0015BB2C;
    case 589u: goto L_0015BB50;
    case 590u: goto L_0015BB60;
    case 591u: goto L_0015BB84;
    case 592u: goto L_0015BB90;
    case 593u: goto L_0015BBA0;
    case 594u: goto L_0015BBB0;
    case 595u: goto L_0015BBDC;
    case 596u: goto L_0015BBF4;
    case 597u: goto L_0015BC00;
    case 598u: goto L_0015BC10;
    case 599u: goto L_0015BC18;
    case 600u: goto L_0015BC30;
    case 601u: goto L_0015BC40;
    case 602u: goto L_0015BC4C;
    case 603u: goto L_0015BC60;
    case 604u: goto L_0015BC74;
    case 605u: goto L_0015BC84;
    case 606u: goto L_0015BCE0;
    case 607u: goto L_0015BD00;
    case 608u: goto L_0015BD20;
    case 609u: goto L_0015BD30;
    case 610u: goto L_0015BD3C;
    case 611u: goto L_0015BD70;
    case 612u: goto L_0015BD80;
    case 613u: goto L_0015BDE4;
    case 614u: goto L_0015BE00;
    case 615u: goto L_0015BE1C;
    case 616u: goto L_0015BE30;
    case 617u: goto L_0015BE50;
    case 618u: goto L_0015BE5C;
    case 619u: goto L_0015BE64;
    case 620u: goto L_0015BE78;
    case 621u: goto L_0015BE90;
    case 622u: goto L_0015BEA4;
    case 623u: goto L_0015BEAC;
    case 624u: goto L_0015BEB4;
    case 625u: goto L_0015BED8;
    case 626u: goto L_0015BEF4;
    case 627u: goto L_0015BEFC;
    case 628u: goto L_0015BF08;
    case 629u: goto L_0015BF10;
    case 630u: goto L_0015BF60;
    case 631u: goto L_0015BF98;
    case 632u: goto L_0015BFE0;
    default: bad_entry(c, 0x00158000u); return;
    }
L_00158000:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00157FDCu | kUnwind; return; } [[clang::musttail]] return unit_0015(c, 478u, depth); }
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[9], ld32((c.r[4].w[0] + 16u)));
    mmi::divu(c, 0, c.r[11].w[0], c.r[6].w[0]);
    c.r[10].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_00158038; } }
L_00158024:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != c.r[6].d[0];  if (t) { goto L_00158038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_00158038; } }
L_00158038:
    set32(c.r[8], c.r[12].w[0] << 3);
    c.budget -= 1;
L_0015803C:
    set32(c.r[7], c.r[9].w[0] + c.r[8].w[0]);
    c.budget -= 1;
L_00158040:
    c.r[6].d[0] = ld16((c.r[7].w[0] + 6u));
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[4].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00158024u | kUnwind; return; } goto L_00158024; }
    st16((c.r[7].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0]), c.r[11].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[10].w[0]));  c.pc = t; return; }
L_00158070:
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_00158080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_00158090:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 4u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 6u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001580B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_001580C0:
    c.budget -= 2;
    {  goto L_001585C0; }
L_001580D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 20u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158100u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0016(c, 6u, depth + 1u); else { c.pc = 0x00158080u; return; } if (c.pc != 0x00158100u) [[unlikely]] return; }
L_00158100:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[20].w[0] + 16u);  goto L_00158110; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001581BC; } }
L_00158110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158118u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 25u, depth + 1u); else { c.pc = 0x00158240u; return; } if (c.pc != 0x00158118u) [[unlikely]] return; }
L_00158118:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158124u); set32(c.r[4], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_0016(c, 6u, depth + 1u); else { c.pc = 0x00158080u; return; } if (c.pc != 0x00158124u) [[unlikely]] return; }
L_00158124:
    mmi::divu(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[20].w[0] + 20u);  if (t) { goto L_001581A0; } }
L_00158134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015813Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 24u, depth + 1u); else { c.pc = 0x00158230u; return; } if (c.pc != 0x0015813Cu) [[unlikely]] return; }
L_0015813C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00158190; }
    set32(c.r[4], c.r[20].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158154u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 24u, depth + 1u); else { c.pc = 0x00158230u; return; } if (c.pc != 0x00158154u) [[unlikely]] return; }
L_00158154:
    c.r[6].d[0] = ld16((c.r[2].w[0] + 4u));
    set32(c.r[5], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158164u); set32(c.r[4], c.r[20].w[0] + 36u);  if (depth < kMaxDepth) unit_0016(c, 5u, depth + 1u); else { c.pc = 0x00158070u; return; } if (c.pc != 0x00158164u) [[unlikely]] return; }
L_00158164:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158170u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00158170u) [[unlikely]] return; }
L_00158170:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015818C; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158184u); set32(c.r[4], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_0016(c, 24u, depth + 1u); else { c.pc = 0x00158230u; return; } if (c.pc != 0x00158184u) [[unlikely]] return; }
L_00158184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { goto L_001581BC; } }
L_0015818C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00158190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158198u); set32(c.r[4], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0016(c, 23u, depth + 1u); else { c.pc = 0x00158210u; return; } if (c.pc != 0x00158198u) [[unlikely]] return; }
L_00158198:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 20u);
    c.budget -= 2;
L_001581A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001581A8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 24u, depth + 1u); else { c.pc = 0x00158230u; return; } if (c.pc != 0x001581A8u) [[unlikely]] return; }
L_001581A8:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[20].w[0] + 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00158134u | kUnwind; return; } goto L_00158134; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001581BC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_001581CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001581EC; } }
L_001581CC:
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001581EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001581E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x001581E8u) [[unlikely]] return; }
L_001581E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001581EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00158210:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00158224; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00158224:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00158230:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00158240:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0xF0000000u);  if (t) { goto L_0015826C; } }
L_0015824C:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0015826C; } }
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.budget -= 2;
L_0015826C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015824Cu | kUnwind; return; } goto L_0015824C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00158280:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015828C; } }
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 1;
L_0015828C:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 6;
    { set32(c.r[6], c.r[6].w[0] + 21728u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00102E60u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 231u, depth); }
L_001582B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001583B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 23088u);
    set32(c.r[2], c.r[2].w[0] - 23072u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 16u);  goto L_00158340; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00158324; } }
L_00158300:
    set32(c.r[16], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158310u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x00158310u) [[unlikely]] return; }
L_00158310:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158320u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x00158320u) [[unlikely]] return; }
L_00158320:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00158324:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00158300u | kUnwind; return; } goto L_00158300; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015833Cu); set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x0015833Cu) [[unlikely]] return; }
L_0015833C:
    set32(c.r[2], c.r[19].w[0] + 16u);
    c.budget -= 1;
L_00158340:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 4u);  goto L_00158370; }
    set32(c.r[4], c.r[19].w[0] + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015836C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015836C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015836C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015836Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 48u, depth + 1u); else { c.pc = 0x00158630u; return; } if (c.pc != 0x0015836Cu) [[unlikely]] return; }
L_0015836C:
    set32(c.r[2], c.r[19].w[0] + 4u);
    c.budget -= 1;
L_00158370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00158384; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_00158384:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_0015839C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24624u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 4;
L_0015839C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_001583B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001583B0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001583B0u) [[unlikely]] return; }
L_001583B0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001583B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001583D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 24624u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 23088u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[18], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 23072u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[17], c.r[18].w[0] + 4u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158428u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00158428u) [[unlikely]] return; }
L_00158428:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00158440; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015843Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0015843Cu) [[unlikely]] return; }
L_0015843C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00158440:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_00158454; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158450u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00158450u) [[unlikely]] return; }
L_00158450:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00158454:
    set32(c.r[4], c.r[18].w[0] + 4u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 32u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158470u); st32((c.r[18].w[0]), 0u);  if (depth < kMaxDepth) unit_0016(c, 40u, depth + 1u); else { c.pc = 0x001584A0u; return; } if (c.pc != 0x00158470u) [[unlikely]] return; }
L_00158470:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001584A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001585A8; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[17].w[0] << 3);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001584E0u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x001584E0u) [[unlikely]] return; }
L_001584E0:
    st32((c.r[29].w[0] + 52u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_00158528; } }
L_001584FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_00158518; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 5;
L_00158518:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_00158528:
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001584FCu | kUnwind; return; } goto L_001584FC; } }
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_00158584; }
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 17;
L_00158584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015858Cu);  if (depth < kMaxDepth) unit_0016(c, 68u, depth + 1u); else { c.pc = 0x00158B00u; return; } if (c.pc != 0x0015858Cu) [[unlikely]] return; }
L_0015858C:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001585AC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001585A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001585A8u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x001585A8u) [[unlikely]] return; }
L_001585A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001585AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001585C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001585F8; } }
    set32(c.r[6], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001585F0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0016(c, 54u, depth + 1u); else { c.pc = 0x00158740u; return; } if (c.pc != 0x001585F0u) [[unlikely]] return; }
L_001585F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00158624; } }
L_001585F8:
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00158620; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158620u); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 52u, depth + 1u); else { c.pc = 0x001586A0u; return; } if (c.pc != 0x00158620u) [[unlikely]] return; }
L_00158620:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00158624:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00158630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00158688; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158654u);  if (depth < kMaxDepth) unit_0016(c, 68u, depth + 1u); else { c.pc = 0x00158B00u; return; } if (c.pc != 0x00158654u) [[unlikely]] return; }
L_00158654:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00158674; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00158670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158670u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00158670u) [[unlikely]] return; }
L_00158670:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00158674:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0015868C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158688u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00158688u) [[unlikely]] return; }
L_00158688:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015868C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001586A0:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[6].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_001586B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00158730; } }
L_001586B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_001586D0; } }
    set32(c.r[2], c.r[3].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_001586D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);  goto L_00158710; }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00158700; } }
L_001586E4:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[8].w[0] + 4u));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[8].w[0] + 6u));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 7;
L_00158700:
    c.r[2].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[8].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001586E4u | kUnwind; return; } goto L_001586E4; }
    set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_00158710:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_00158720; } }
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_00158720:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00158730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00158740:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00158AE0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 8u)));  goto L_001587AC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001587A0u); set32(c.r[5], c.r[5].w[0] + 21974u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001587A0u) [[unlikely]] return; }
L_001587A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001587A8u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x001587A8u) [[unlikely]] return; }
L_001587A8:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_001587AC:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_00158948; }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_001587E0; } }
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_001587E0:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] << 3);  goto L_00158874; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00158820; } }
L_001587F4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_00158810; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_00158810:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00158820:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001587F4u | kUnwind; return; } goto L_001587F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00158860; } }
L_00158834:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_00158850; }
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_00158850:
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00158860:
    c.r[3].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158834u | kUnwind; return; } goto L_00158834; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158914; } }
L_00158874:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_001588AC; } }
L_00158880:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_0015889C; }
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[7].w[0]), c.f[1]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_0015889C:
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_001588AC:
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158880u | kUnwind; return; } goto L_00158880; } }
    set32(c.r[3], c.r[4].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);  goto L_00158908; }
    c.r[1].d[0] = c.r[17].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001588E0; } }
    set32(c.r[17], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_001588E0:
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158908; } }
L_001588EC:
    set32(c.r[6], c.r[6].w[0] - 8u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00158908:
    c.r[1].d[0] = c.r[19].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001588ECu | kUnwind; return; } goto L_001588EC; }
L_00158914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158938; } }
L_0015891C:
    set32(c.r[18], c.r[18].w[0] - 1u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 7;
L_00158938:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015891Cu | kUnwind; return; } goto L_0015891C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00158AE4; } }
L_00158948:
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_00158968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00158970; } }
L_00158968:
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00158970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_00158990; } }
L_00158978:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_0015898C; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_0015898C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00158990:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00158978u | kUnwind; return; } goto L_00158978; }
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001589A4u); set32(c.r[4], c.r[16].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x001589A4u) [[unlikely]] return; }
L_001589A4:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    st32((c.r[29].w[0] + 108u), c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_001589F0; } }
L_001589C4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_001589E0; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_001589E0:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_001589F0:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001589C4u | kUnwind; return; } goto L_001589C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158A30; } }
L_00158A04:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_00158A20; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_00158A20:
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_00158A30:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158A04u | kUnwind; return; } goto L_00158A04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_00158A70; } }
L_00158A40:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_00158A5C; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_00158A5C:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_00158A70:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158A40u | kUnwind; return; } goto L_00158A40; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[20].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_00158AC8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[20].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 17;
L_00158AC8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 104u), 0u);  if (t) { goto L_00158AE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00158AE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158AE0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00158AE0u) [[unlikely]] return; }
L_00158AE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00158AE4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00158B00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_00158B10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00157EE0u | kUnwind; return; } [[clang::musttail]] return unit_0015(c, 468u, depth); }
L_00158B20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001582B0u | kUnwind; return; } goto L_001582B0; }
L_00158B30:
    c.budget -= 2;
    { c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00102450u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 160u, depth); }
L_00158B40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[28].w[0] - 31040u)));
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] < 0; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00158B74; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158B6Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 144u, depth + 1u); else { c.pc = 0x00102250u; return; } if (c.pc != 0x00158B6Cu) [[unlikely]] return; }
L_00158B6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00158B90; } }
L_00158B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158B7Cu); set32(c.r[4], ld32((c.r[4].w[0] - 4u)));  if (depth < kMaxDepth) unit_0016(c, 296u, depth + 1u); else { c.pc = 0x0015A0F0u; return; } if (c.pc != 0x00158B7Cu) [[unlikely]] return; }
L_00158B7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158B8Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 144u, depth + 1u); else { c.pc = 0x00102250u; return; } if (c.pc != 0x00158B8Cu) [[unlikely]] return; }
L_00158B8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00158B90:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00158BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00158BF0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 23040u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00158BD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22992u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00158BD4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00158BEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158BECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00158BECu) [[unlikely]] return; }
L_00158BEC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00158BF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00158C00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 22008u);  c.pc = t; return; }
L_00158C10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00158C20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 4u);  c.pc = t; return; }
L_00158C30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_00158C40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_00158C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[3].w[0] + 8u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00158C80u); set32(c.r[6], c.r[29].w[0] + 28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00158C80u) [[unlikely]] return; }
L_00158C80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00158C90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158CACu); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0031(c, 21u, depth + 1u); else { c.pc = 0x001C4730u; return; } if (c.pc != 0x00158CACu) [[unlikely]] return; }
L_00158CAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00158CC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[20], ld32((c.r[8].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00158D04u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00158D04u) [[unlikely]] return; }
L_00158D04:
    c.r[1].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00158D3C; }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00158D20u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00158D20u) [[unlikely]] return; }
L_00158D20:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00158D34u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00158D34u) [[unlikely]] return; }
L_00158D34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00158D78; } }
L_00158D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158D44u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x00158D44u) [[unlikely]] return; }
L_00158D44:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00158D58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00158D74; } }
L_00158D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158D60u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 49u, depth + 1u); else { c.pc = 0x001C5160u; return; } if (c.pc != 0x00158D60u) [[unlikely]] return; }
L_00158D60:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00158D74u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00158D74u) [[unlikely]] return; }
L_00158D74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00158D78:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00158DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00158DDC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 22992u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00158DD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158DD8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00158DD8u) [[unlikely]] return; }
L_00158DD8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00158DDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00158DF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00158E40; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22944u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00158E24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22992u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00158E24:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00158E3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158E3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00158E3Cu) [[unlikely]] return; }
L_00158E3C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00158E40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00158E50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 22016u);  c.pc = t; return; }
L_00158E60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_00158E70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00158E80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 16u);  c.pc = t; return; }
L_00158E90:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[3].w[0] + 8u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00158000u < 16384u) { entry = entries_0016[(t - 0x00158000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00158EB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158ED4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0031(c, 10u, depth + 1u); else { c.pc = 0x001C4430u; return; } if (c.pc != 0x00158ED4u) [[unlikely]] return; }
L_00158ED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158EDCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x00158EDCu) [[unlikely]] return; }
L_00158EDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22024u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158EF4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x00158EF4u) [[unlikely]] return; }
L_00158EF4:
    c.f[12] = ld32((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F00u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x00158F00u) [[unlikely]] return; }
L_00158F00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F0Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x00158F0Cu) [[unlikely]] return; }
L_00158F0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22026u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F20u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x00158F20u) [[unlikely]] return; }
L_00158F20:
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F2Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x00158F2Cu) [[unlikely]] return; }
L_00158F2C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F38u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x00158F38u) [[unlikely]] return; }
L_00158F38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22028u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F4Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x00158F4Cu) [[unlikely]] return; }
L_00158F4C:
    c.f[12] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F58u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x00158F58u) [[unlikely]] return; }
L_00158F58:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F64u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x00158F64u) [[unlikely]] return; }
L_00158F64:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22030u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F78u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x00158F78u) [[unlikely]] return; }
L_00158F78:
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x00158F84u) [[unlikely]] return; }
L_00158F84:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F90u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x00158F90u) [[unlikely]] return; }
L_00158F90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00158FB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00158FEC; } }
    set32(c.r[3], 0u + 16u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.r[3].w[0]);  if (t) { goto L_00159130; } }
L_00158FEC:
    c.budget -= 2;
    if (c.r[17].sd[0] >= 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00159008; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158FFCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x00158FFCu) [[unlikely]] return; }
L_00158FFC:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_00159008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159010u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x00159010u) [[unlikely]] return; }
L_00159010:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00159024; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00159130; } }
L_00159024:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0015903C; } }
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 4;
L_0015903C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159050u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x00159050u) [[unlikely]] return; }
L_00159050:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015905Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 17u, depth + 1u); else { c.pc = 0x001C4640u; return; } if (c.pc != 0x0015905Cu) [[unlikely]] return; }
L_0015905C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159068u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x00159068u) [[unlikely]] return; }
L_00159068:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159078u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x00159078u) [[unlikely]] return; }
L_00159078:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_00159080:
    set32(c.r[5], c.r[5].w[0] + 22026u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015908Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x0015908Cu) [[unlikely]] return; }
L_0015908C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159098u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 17u, depth + 1u); else { c.pc = 0x001C4640u; return; } if (c.pc != 0x00159098u) [[unlikely]] return; }
L_00159098:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001590A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x001590A4u) [[unlikely]] return; }
L_001590A4:
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001590B4u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001590B4u) [[unlikely]] return; }
L_001590B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22028u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001590C8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001590C8u) [[unlikely]] return; }
L_001590C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001590D4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 17u, depth + 1u); else { c.pc = 0x001C4640u; return; } if (c.pc != 0x001590D4u) [[unlikely]] return; }
L_001590D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001590E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x001590E0u) [[unlikely]] return; }
L_001590E0:
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001590F0u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001590F0u) [[unlikely]] return; }
L_001590F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22030u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159104u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x00159104u) [[unlikely]] return; }
    goto L_00159104;
L_00159100:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00159104:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159110u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 17u, depth + 1u); else { c.pc = 0x001C4640u; return; } if (c.pc != 0x00159110u) [[unlikely]] return; }
L_00159110:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015911Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x0015911Cu) [[unlikely]] return; }
L_0015911C:
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015912Cu); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x0015912Cu) [[unlikely]] return; }
L_0015912C:
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_00159130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00159150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001591A0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22896u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00159184; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22992u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00159184:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0015919C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015919Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0015919Cu) [[unlikely]] return; }
L_0015919C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001591A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001591B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_001591C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 4u);  c.pc = t; return; }
L_001591D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 22032u);  c.pc = t; return; }
L_001591E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_001591F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_00159200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[3].w[0] + 8u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015922Cu); set32(c.r[6], c.r[29].w[0] + 28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015922Cu) [[unlikely]] return; }
L_0015922C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00159240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159254u); set32(c.r[5], ld32((c.r[6].w[0])));  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x00159254u) [[unlikely]] return; }
L_00159254:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00159270:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001592AC; } }
    set32(c.r[3], 0u + 4u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.r[3].w[0]);  if (t) { goto L_00159304; } }
L_001592AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001592B8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001592B8u) [[unlikely]] return; }
L_001592B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001592CC; }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00159304; } }
L_001592CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001592D4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 57u, depth + 1u); else { c.pc = 0x001C56F0u; return; } if (c.pc != 0x001592D4u) [[unlikely]] return; }
L_001592D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001592E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00159304; } }
L_001592E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001592ECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x001592ECu) [[unlikely]] return; }
L_001592EC:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159300u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00159300u) [[unlikely]] return; }
L_00159300:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00159304:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00159320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00159370; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22848u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00159354; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22992u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00159354:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0015936C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015936Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0015936Cu) [[unlikely]] return; }
L_0015936C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00159370:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00159380:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 4u);  c.pc = t; return; }
L_00159390:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 22040u);  c.pc = t; return; }
L_001593A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 3u);  c.pc = t; return; }
L_001593B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 3u);  c.pc = t; return; }
L_001593C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[3].w[0] + 8u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld64((c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001593ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001593ECu) [[unlikely]] return; }
L_001593EC:
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00159408u); set32(c.r[6], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00159408u) [[unlikely]] return; }
L_00159408:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00159420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[12] = ld32((c.r[6].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159434u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x00159434u) [[unlikely]] return; }
L_00159434:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00159450:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0015948C; } }
    set32(c.r[3], 0u + 4u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.r[3].w[0]);  if (t) { goto L_001594B8; } }
L_0015948C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159498u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 58u, depth + 1u); else { c.pc = 0x001C57E0u; return; } if (c.pc != 0x00159498u) [[unlikely]] return; }
L_00159498:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001594A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001594B8; } }
L_001594A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001594B0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x001594B0u) [[unlikely]] return; }
L_001594B0:
    st32((c.r[16].w[0]), c.f[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 2;
L_001594B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001594D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00159520; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22800u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00159504; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22992u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00159504:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0015951C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015951Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0015951Cu) [[unlikely]] return; }
L_0015951C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00159520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00159530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 4u);  c.pc = t; return; }
L_00159540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 22048u);  c.pc = t; return; }
L_00159550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_00159560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_00159570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[3].w[0] + 8u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015959Cu); set32(c.r[6], c.r[29].w[0] + 28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015959Cu) [[unlikely]] return; }
L_0015959C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001595B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001595C8u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001595C8u) [[unlikely]] return; }
L_001595C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001595E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0015961C; } }
    set32(c.r[3], 0u + 4u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.r[3].w[0]);  if (t) { goto L_00159654; } }
L_0015961C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159628u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 58u, depth + 1u); else { c.pc = 0x001C57E0u; return; } if (c.pc != 0x00159628u) [[unlikely]] return; }
L_00159628:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00159638; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00159654; } }
L_00159638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159640u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x00159640u) [[unlikely]] return; }
L_00159640:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_00159654:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00159670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001596C0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22752u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_001596A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22992u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001596A4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001596BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001596BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001596BCu) [[unlikely]] return; }
L_001596BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001596C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001596D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 22056u);  c.pc = t; return; }
L_001596E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_001596F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00159700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 16u);  c.pc = t; return; }
L_00159710:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[3].w[0] + 8u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00158000u < 16384u) { entry = entries_0016[(t - 0x00158000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00159730:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159754u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0031(c, 10u, depth + 1u); else { c.pc = 0x001C4430u; return; } if (c.pc != 0x00159754u) [[unlikely]] return; }
L_00159754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015975Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x0015975Cu) [[unlikely]] return; }
L_0015975C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22072u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159774u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x00159774u) [[unlikely]] return; }
L_00159774:
    c.f[12] = ld32((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159780u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x00159780u) [[unlikely]] return; }
L_00159780:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015978Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x0015978Cu) [[unlikely]] return; }
L_0015978C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22074u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001597A0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001597A0u) [[unlikely]] return; }
L_001597A0:
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001597ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001597ACu) [[unlikely]] return; }
L_001597AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001597B8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x001597B8u) [[unlikely]] return; }
L_001597B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22076u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001597CCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001597CCu) [[unlikely]] return; }
L_001597CC:
    c.f[12] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001597D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001597D8u) [[unlikely]] return; }
L_001597D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001597E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x001597E4u) [[unlikely]] return; }
L_001597E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22078u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001597F8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001597F8u) [[unlikely]] return; }
L_001597F8:
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159804u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x00159804u) [[unlikely]] return; }
L_00159804:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159810u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x00159810u) [[unlikely]] return; }
L_00159810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00159830:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015986C; } }
    set32(c.r[3], 0u + 16u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.r[3].w[0]);  if (t) { goto L_001599B4; } }
L_0015986C:
    c.budget -= 2;
    if (c.r[18].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00159888; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015987Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x0015987Cu) [[unlikely]] return; }
L_0015987C:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00159880:
    set32(c.r[18], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00159888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159890u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x00159890u) [[unlikely]] return; }
L_00159890:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001598A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001599B4; } }
L_001598A4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001598C0; } }
    st32((c.r[17].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
L_001598C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001598D4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001598D4u) [[unlikely]] return; }
L_001598D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001598E0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 17u, depth + 1u); else { c.pc = 0x001C4640u; return; } if (c.pc != 0x001598E0u) [[unlikely]] return; }
L_001598E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001598ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x001598ECu) [[unlikely]] return; }
L_001598EC:
    st32((c.r[17].w[0]), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001598FCu); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001598FCu) [[unlikely]] return; }
L_001598FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22074u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159910u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x00159910u) [[unlikely]] return; }
L_00159910:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015991Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 17u, depth + 1u); else { c.pc = 0x001C4640u; return; } if (c.pc != 0x0015991Cu) [[unlikely]] return; }
L_0015991C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159928u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x00159928u) [[unlikely]] return; }
L_00159928:
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159938u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x00159938u) [[unlikely]] return; }
L_00159938:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22076u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015994Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x0015994Cu) [[unlikely]] return; }
L_0015994C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159958u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 17u, depth + 1u); else { c.pc = 0x001C4640u; return; } if (c.pc != 0x00159958u) [[unlikely]] return; }
L_00159958:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159964u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x00159964u) [[unlikely]] return; }
L_00159964:
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159974u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x00159974u) [[unlikely]] return; }
L_00159974:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22078u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159988u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x00159988u) [[unlikely]] return; }
L_00159988:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159994u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 17u, depth + 1u); else { c.pc = 0x001C4640u; return; } if (c.pc != 0x00159994u) [[unlikely]] return; }
L_00159994:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001599A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x001599A0u) [[unlikely]] return; }
L_001599A0:
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001599B0u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001599B0u) [[unlikely]] return; }
L_001599B0:
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_001599B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001599D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00159A20; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22704u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00159A04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22992u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00159A04:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00159A1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159A1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00159A1Cu) [[unlikely]] return; }
L_00159A1C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00159A20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00159A30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 22080u);  c.pc = t; return; }
L_00159A40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 16u);  c.pc = t; return; }
L_00159A50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00159A68; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159A68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00159A68u) [[unlikely]] return; }
L_00159A68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00159A80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_00159A90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00159AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[3].w[0] + 8u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00159ACCu); set32(c.r[6], c.r[29].w[0] + 28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00159ACCu) [[unlikely]] return; }
L_00159ACC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00159AE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[6].w[0] + 4u)));  goto L_00159B10; }
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_00159B10:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 8u)));  goto L_00159B1C; }
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00159B1C:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159B2Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x00159B2Cu) [[unlikely]] return; }
L_00159B2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00159B40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00159B7C; } }
    set32(c.r[3], 0u + 4u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.r[3].w[0]);  if (t) { goto L_00159BC4; } }
L_00159B7C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159B88u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 57u, depth + 1u); else { c.pc = 0x001C56F0u; return; } if (c.pc != 0x00159B88u) [[unlikely]] return; }
L_00159B88:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00159B98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00159BC4; } }
L_00159B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159BA0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x00159BA0u) [[unlikely]] return; }
L_00159BA0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00159BB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159BB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00159BB0u) [[unlikely]] return; }
L_00159BB0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00159BB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159BC0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00159BC0u) [[unlikely]] return; }
L_00159BC0:
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_00159BC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00159BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00159C30; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22656u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00159C14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22992u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00159C14:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00159C2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159C2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00159C2Cu) [[unlikely]] return; }
L_00159C2C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00159C30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00159C40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 22088u);  c.pc = t; return; }
L_00159C50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_00159C60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00159C70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 12u);  c.pc = t; return; }
L_00159C80:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[3].w[0] + 8u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00158000u < 16384u) { entry = entries_0016[(t - 0x00158000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00159CA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159CC4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0031(c, 10u, depth + 1u); else { c.pc = 0x001C4430u; return; } if (c.pc != 0x00159CC4u) [[unlikely]] return; }
L_00159CC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159CCCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x00159CCCu) [[unlikely]] return; }
L_00159CCC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22104u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159CE4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x00159CE4u) [[unlikely]] return; }
L_00159CE4:
    c.f[12] = ld32((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159CF0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x00159CF0u) [[unlikely]] return; }
L_00159CF0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159CFCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x00159CFCu) [[unlikely]] return; }
L_00159CFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22106u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159D10u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x00159D10u) [[unlikely]] return; }
L_00159D10:
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159D1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x00159D1Cu) [[unlikely]] return; }
L_00159D1C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159D28u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x00159D28u) [[unlikely]] return; }
L_00159D28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22108u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159D3Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x00159D3Cu) [[unlikely]] return; }
L_00159D3C:
    c.f[12] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159D48u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x00159D48u) [[unlikely]] return; }
L_00159D48:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159D54u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x00159D54u) [[unlikely]] return; }
L_00159D54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00159D70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00159DAC; } }
    set32(c.r[3], 0u + 12u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.r[3].w[0]);  if (t) { goto L_00159EB0; } }
L_00159DAC:
    c.budget -= 2;
    if (c.r[17].sd[0] >= 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00159DC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159DBCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x00159DBCu) [[unlikely]] return; }
L_00159DBC:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_00159DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159DD0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x00159DD0u) [[unlikely]] return; }
L_00159DD0:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00159DE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00159EB0; } }
L_00159DE4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00159DF8; } }
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 3;
L_00159DF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159E0Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x00159E0Cu) [[unlikely]] return; }
L_00159E0C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159E18u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 17u, depth + 1u); else { c.pc = 0x001C4640u; return; } if (c.pc != 0x00159E18u) [[unlikely]] return; }
L_00159E18:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159E24u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x00159E24u) [[unlikely]] return; }
L_00159E24:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159E34u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x00159E34u) [[unlikely]] return; }
L_00159E34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22106u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159E48u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x00159E48u) [[unlikely]] return; }
L_00159E48:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159E54u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 17u, depth + 1u); else { c.pc = 0x001C4640u; return; } if (c.pc != 0x00159E54u) [[unlikely]] return; }
L_00159E54:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159E60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x00159E60u) [[unlikely]] return; }
L_00159E60:
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159E70u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x00159E70u) [[unlikely]] return; }
L_00159E70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22108u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159E84u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x00159E84u) [[unlikely]] return; }
L_00159E84:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159E90u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 17u, depth + 1u); else { c.pc = 0x001C4640u; return; } if (c.pc != 0x00159E90u) [[unlikely]] return; }
L_00159E90:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159E9Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x00159E9Cu) [[unlikely]] return; }
L_00159E9C:
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159EACu); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x00159EACu) [[unlikely]] return; }
L_00159EAC:
    set32(c.r[2], 0u + 12u);
    c.budget -= 1;
L_00159EB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00159ED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00159F20; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22608u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00159F04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22992u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00159F04:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00159F1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159F1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00159F1Cu) [[unlikely]] return; }
L_00159F1C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00159F20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00159F30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 4u);  c.pc = t; return; }
L_00159F40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 22112u);  c.pc = t; return; }
L_00159F50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_00159F60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_00159F70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[3].w[0] + 8u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00159F9Cu); set32(c.r[6], c.r[29].w[0] + 28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00159F9Cu) [[unlikely]] return; }
L_00159F9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00159FB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), 0u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159FD4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00159FD4u) [[unlikely]] return; }
L_00159FD4:
    set32(c.r[5], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00159FF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159FE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 40u, depth + 1u); else { c.pc = 0x001C4A80u; return; } if (c.pc != 0x00159FE8u) [[unlikely]] return; }
L_00159FE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00159FFC; } }
L_00159FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159FF8u);  if (depth < kMaxDepth) unit_0031(c, 20u, depth + 1u); else { c.pc = 0x001C4710u; return; } if (c.pc != 0x00159FF8u) [[unlikely]] return; }
L_00159FF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00159FFC:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015A010:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0015A04C; } }
    set32(c.r[3], 0u + 4u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.r[3].w[0]);  if (t) { goto L_0015A0B4; } }
L_0015A04C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A058u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x0015A058u) [[unlikely]] return; }
L_0015A058:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0015A078; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A070u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0015A070u) [[unlikely]] return; }
L_0015A070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0015A0B4; } }
L_0015A078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A080u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x0015A080u) [[unlikely]] return; }
L_0015A080:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0015A094; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015A0B4; } }
L_0015A094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A09Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 41u, depth + 1u); else { c.pc = 0x001C4AA0u; return; } if (c.pc != 0x0015A09Cu) [[unlikely]] return; }
L_0015A09C:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A0B0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0015A0B0u) [[unlikely]] return; }
L_0015A0B0:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0015A0B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 3;
L_0015A0C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015A0D0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  [[clang::musttail]] return unit_0030(c, 369u, depth); }
L_0015A0E0:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { set32(c.r[4], 0u + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012FFE0u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 416u, depth); }
L_0015A0F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  c.pc = t; return; }
L_0015A100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A120u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x0015A120u) [[unlikely]] return; }
L_0015A120:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A12Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 20u, depth + 1u); else { c.pc = 0x001C4710u; return; } if (c.pc != 0x0015A12Cu) [[unlikely]] return; }
L_0015A12C:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A138u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x0015A138u) [[unlikely]] return; }
L_0015A138:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015A150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A170u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x0015A170u) [[unlikely]] return; }
L_0015A170:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A17Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x0015A17Cu) [[unlikely]] return; }
L_0015A17C:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A188u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x0015A188u) [[unlikely]] return; }
L_0015A188:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015A1A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A1C0u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x0015A1C0u) [[unlikely]] return; }
L_0015A1C0:
    c.f[0] = c.r[16].w[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A1D0u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x0015A1D0u) [[unlikely]] return; }
L_0015A1D0:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A1DCu); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x0015A1DCu) [[unlikely]] return; }
L_0015A1DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015A1F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A214u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x0015A214u) [[unlikely]] return; }
L_0015A214:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A220u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 17u, depth + 1u); else { c.pc = 0x001C4640u; return; } if (c.pc != 0x0015A220u) [[unlikely]] return; }
L_0015A220:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A22Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 58u, depth + 1u); else { c.pc = 0x001C57E0u; return; } if (c.pc != 0x0015A22Cu) [[unlikely]] return; }
L_0015A22C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0015A248; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A240u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x0015A240u) [[unlikely]] return; }
L_0015A240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015A264; } }
L_0015A248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A250u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x0015A250u) [[unlikely]] return; }
L_0015A250:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A260u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x0015A260u) [[unlikely]] return; }
L_0015A260:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0015A264:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0015A280; }
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 5;
L_0015A280:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015A2A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A2B8u); set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x0015A2B8u) [[unlikely]] return; }
L_0015A2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A2C0u); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0016(c, 395u, depth + 1u); else { c.pc = 0x0015A930u; return; } if (c.pc != 0x0015A2C0u) [[unlikely]] return; }
L_0015A2C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015A2E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A304u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x0015A304u) [[unlikely]] return; }
L_0015A304:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A310u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0015A310u) [[unlikely]] return; }
L_0015A310:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A328u); set32(c.r[7], c.r[7].w[0] + 22360u);  if (depth < kMaxDepth) unit_0037(c, 192u, depth + 1u); else { c.pc = 0x001DD2E0u; return; } if (c.pc != 0x0015A328u) [[unlikely]] return; }
L_0015A328:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  goto L_0015A398; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A338u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0015A338u) [[unlikely]] return; }
L_0015A338:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A344u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x0015A344u) [[unlikely]] return; }
L_0015A344:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A358u); set32(c.r[5], c.r[5].w[0] + 22376u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0015A358u) [[unlikely]] return; }
L_0015A358:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 81u);  goto L_0015A36C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0015A36C:
    set32(c.r[2], ld32((c.r[16].w[0] + 1028u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A378u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015A378u) [[unlikely]] return; }
L_0015A378:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A384u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x0015A384u) [[unlikely]] return; }
L_0015A384:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A390u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015A390u) [[unlikely]] return; }
L_0015A390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015A41C; } }
L_0015A398:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A3A8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 379u, depth + 1u); else { c.pc = 0x001C3C90u; return; } if (c.pc != 0x0015A3A8u) [[unlikely]] return; }
L_0015A3A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] ^ 0ull;  goto L_0015A418; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A3BCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0015A3BCu) [[unlikely]] return; }
L_0015A3BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A3C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x0015A3C8u) [[unlikely]] return; }
L_0015A3C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A3DCu); set32(c.r[5], c.r[5].w[0] + 22403u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0015A3DCu) [[unlikely]] return; }
L_0015A3DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 65u);  goto L_0015A3F0; }
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0015A3F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 1028u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A3FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015A3FCu) [[unlikely]] return; }
L_0015A3FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A408u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x0015A408u) [[unlikely]] return; }
L_0015A408:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A414u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015A414u) [[unlikely]] return; }
L_0015A414:
    c.r[2].d[0] = c.r[17].d[0] ^ 0ull;
    c.budget -= 1;
L_0015A418:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0015A41C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0015A440:
    set32(c.r[2], ld32((c.r[4].w[0] + 1028u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1028u), c.r[5].w[0]);  c.pc = t; return; }
L_0015A450:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + 12u);  if (t) { goto L_0015A4A0; } }
L_0015A474:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A484u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0017(c, 39u, depth + 1u); else { c.pc = 0x0015C600u; return; } if (c.pc != 0x0015A484u) [[unlikely]] return; }
L_0015A484:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A494u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0015A494u) [[unlikely]] return; }
L_0015A494:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
L_0015A4A0:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[16].d[0]) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A474u | kUnwind; return; } goto L_0015A474; }
    set32(c.r[2], c.r[17].w[0] + 12u);
    set32(c.r[4], c.r[29].w[0] + 72u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[6], c.r[29].w[0] + 68u);
    set32(c.r[7], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A4D4u); st32((c.r[29].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 31u, depth + 1u); else { c.pc = 0x001103E0u; return; } if (c.pc != 0x0015A4D4u) [[unlikely]] return; }
L_0015A4D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A4DCu); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0017(c, 39u, depth + 1u); else { c.pc = 0x0015C600u; return; } if (c.pc != 0x0015A4DCu) [[unlikely]] return; }
L_0015A4DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A4E4u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0035(c, 148u, depth + 1u); else { c.pc = 0x001D5980u; return; } if (c.pc != 0x0015A4E4u) [[unlikely]] return; }
L_0015A4E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015A500:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00160000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 24352u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 1028u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A52Cu); st32((c.r[28].w[0] - 31040u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0035(c, 162u, depth + 1u); else { c.pc = 0x001D5AC0u; return; } if (c.pc != 0x0015A52Cu) [[unlikely]] return; }
L_0015A52C:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 60u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[6], 0u + 4u);
    st32((c.r[28].w[0] - 31040u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] - 4u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A550u); st32((c.r[29].w[0] + 60u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0015A550u) [[unlikely]] return; }
L_0015A550:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A560u); set32(c.r[5], c.r[5].w[0] + 22442u);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x0015A560u) [[unlikely]] return; }
L_0015A560:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[5], c.r[5].w[0] - 21232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A574u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 22u, depth + 1u); else { c.pc = 0x001C4760u; return; } if (c.pc != 0x0015A574u) [[unlikely]] return; }
L_0015A574:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A580u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x0015A580u) [[unlikely]] return; }
L_0015A580:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A590u); set32(c.r[5], c.r[5].w[0] + 22448u);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x0015A590u) [[unlikely]] return; }
L_0015A590:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[5], c.r[5].w[0] - 21360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A5A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 22u, depth + 1u); else { c.pc = 0x001C4760u; return; } if (c.pc != 0x0015A5A4u) [[unlikely]] return; }
L_0015A5A4:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A5B0u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x0015A5B0u) [[unlikely]] return; }
L_0015A5B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A5C0u); set32(c.r[5], c.r[5].w[0] + 22455u);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x0015A5C0u) [[unlikely]] return; }
L_0015A5C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[5], c.r[5].w[0] - 21568u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A5D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 22u, depth + 1u); else { c.pc = 0x001C4760u; return; } if (c.pc != 0x0015A5D4u) [[unlikely]] return; }
L_0015A5D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A5E0u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x0015A5E0u) [[unlikely]] return; }
L_0015A5E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A5F0u); set32(c.r[5], c.r[5].w[0] + 22467u);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x0015A5F0u) [[unlikely]] return; }
L_0015A5F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[5], c.r[5].w[0] - 22224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A604u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 22u, depth + 1u); else { c.pc = 0x001C4760u; return; } if (c.pc != 0x0015A604u) [[unlikely]] return; }
L_0015A604:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A610u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x0015A610u) [[unlikely]] return; }
L_0015A610:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A620u); set32(c.r[5], c.r[5].w[0] + 22483u);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x0015A620u) [[unlikely]] return; }
L_0015A620:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[5], c.r[5].w[0] - 21296u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A634u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 22u, depth + 1u); else { c.pc = 0x001C4760u; return; } if (c.pc != 0x0015A634u) [[unlikely]] return; }
L_0015A634:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A640u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x0015A640u) [[unlikely]] return; }
L_0015A640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A648u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0037(c, 432u, depth + 1u); else { c.pc = 0x001DEC20u; return; } if (c.pc != 0x0015A648u) [[unlikely]] return; }
L_0015A648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A650u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0038(c, 95u, depth + 1u); else { c.pc = 0x001E0810u; return; } if (c.pc != 0x0015A650u) [[unlikely]] return; }
L_0015A650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A658u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0038(c, 265u, depth + 1u); else { c.pc = 0x001E1300u; return; } if (c.pc != 0x0015A658u) [[unlikely]] return; }
L_0015A658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A660u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0037(c, 37u, depth + 1u); else { c.pc = 0x001DC710u; return; } if (c.pc != 0x0015A660u) [[unlikely]] return; }
L_0015A660:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A670u); set32(c.r[5], c.r[5].w[0] + 22430u);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x0015A670u) [[unlikely]] return; }
L_0015A670:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A680u); set32(c.r[5], c.r[5].w[0] + 22436u);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x0015A680u) [[unlikely]] return; }
L_0015A680:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A68Cu); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x0015A68Cu) [[unlikely]] return; }
L_0015A68C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A694u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0031(c, 10u, depth + 1u); else { c.pc = 0x001C4430u; return; } if (c.pc != 0x0015A694u) [[unlikely]] return; }
L_0015A694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A69Cu); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x0015A69Cu) [[unlikely]] return; }
L_0015A69C:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22487u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A6B4u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x0015A6B4u) [[unlikely]] return; }
L_0015A6B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[5], c.r[5].w[0] - 21760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A6C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 22u, depth + 1u); else { c.pc = 0x001C4760u; return; } if (c.pc != 0x0015A6C8u) [[unlikely]] return; }
L_0015A6C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A6D4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x0015A6D4u) [[unlikely]] return; }
L_0015A6D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A6E0u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0030(c, 384u, depth + 1u); else { c.pc = 0x001C3E80u; return; } if (c.pc != 0x0015A6E0u) [[unlikely]] return; }
L_0015A6E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015A700:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015A798; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A724u);  if (depth < kMaxDepth) unit_0016(c, 337u, depth + 1u); else { c.pc = 0x0015A450u; return; } if (c.pc != 0x0015A724u) [[unlikely]] return; }
L_0015A724:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[4], c.r[17].w[0] + 28u);
    set32(c.r[5], c.r[5].w[0] - 22448u);
    set32(c.r[6], 0u + 200u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A73Cu); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x0015A73Cu) [[unlikely]] return; }
L_0015A73C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0015A784; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0015A780; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0015A780; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0015A780; } }
    set32(c.r[2], c.r[17].w[0] + 12u);
    set32(c.r[4], c.r[29].w[0] + 60u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[6], c.r[29].w[0] + 56u);
    set32(c.r[7], c.r[29].w[0] + 52u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A780u); st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 31u, depth + 1u); else { c.pc = 0x001103E0u; return; } if (c.pc != 0x0015A780u) [[unlikely]] return; }
L_0015A780:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0015A784:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0015A79C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A798u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0015A798u) [[unlikely]] return; }
L_0015A798:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015A79C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015A7B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A7CCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0015A7CCu) [[unlikely]] return; }
L_0015A7CC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0015A7E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A7E0u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0015A7E0u) [[unlikely]] return; }
L_0015A7E0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0015A7E4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  goto L_0015A7F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A7F4u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0015A7F4u) [[unlikely]] return; }
L_0015A7F4:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_0015A7F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A804u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0004(c, 39u, depth + 1u); else { c.pc = 0x001105D0u; return; } if (c.pc != 0x0015A804u) [[unlikely]] return; }
L_0015A804:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[4], c.r[17].w[0] + 28u);
    set32(c.r[5], c.r[5].w[0] - 22304u);
    set32(c.r[6], c.r[6].w[0] - 22448u);
    set32(c.r[7], 0u + 200u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A824u); set32(c.r[8], 0u + 5u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x0015A824u) [[unlikely]] return; }
L_0015A824:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A830u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 344u, depth + 1u); else { c.pc = 0x0015A500u; return; } if (c.pc != 0x0015A830u) [[unlikely]] return; }
L_0015A830:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 3;
L_0015A83C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_0015A840:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015A850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015A8BC; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[17].w[0] + 8u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_0015A88C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A888u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x0015A888u) [[unlikely]] return; }
L_0015A888:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_0015A88C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 72u);
    set32(c.r[5], c.r[5].w[0] + 22349u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A8A4u); st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0015A8A4u) [[unlikely]] return; }
L_0015A8A4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0015A8C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A8BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0015A8BCu) [[unlikely]] return; }
L_0015A8BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015A8C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015A8E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 22349u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[16].w[0] + 8u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A910u); set32(c.r[4], c.r[16].w[0] + 72u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0015A910u) [[unlikely]] return; }
L_0015A910:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015A930:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[5], 0u - 1u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A960u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x0015A960u) [[unlikely]] return; }
L_0015A960:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A96Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x0015A96Cu) [[unlikely]] return; }
L_0015A96C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[21].w[0] - 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A980u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x0015A980u) [[unlikely]] return; }
L_0015A980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A988u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x0015A988u) [[unlikely]] return; }
L_0015A988:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A994u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 529u, depth + 1u); else { c.pc = 0x0015B620u; return; } if (c.pc != 0x0015A994u) [[unlikely]] return; }
L_0015A994:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A9A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 65u, depth + 1u); else { c.pc = 0x0013CA00u; return; } if (c.pc != 0x0015A9A0u) [[unlikely]] return; }
L_0015A9A0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A9B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015A9B4u) [[unlikely]] return; }
L_0015A9B4:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A9C8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 192u, depth + 1u); else { c.pc = 0x001DD2E0u; return; } if (c.pc != 0x0015A9C8u) [[unlikely]] return; }
L_0015A9C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0015AA40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A9D8u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0015A9D8u) [[unlikely]] return; }
L_0015A9D8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A9E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x0015A9E4u) [[unlikely]] return; }
L_0015A9E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A9F8u); set32(c.r[5], c.r[5].w[0] + 22376u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0015A9F8u) [[unlikely]] return; }
L_0015A9F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 145u);  goto L_0015AA0C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_0015AA0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 1028u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015AA18u) [[unlikely]] return; }
L_0015AA18:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA24u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x0015AA24u) [[unlikely]] return; }
L_0015AA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA2Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x0015AA2Cu) [[unlikely]] return; }
L_0015AA2C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015AA38u) [[unlikely]] return; }
L_0015AA38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015AAD4; } }
L_0015AA40:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA50u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 379u, depth + 1u); else { c.pc = 0x001C3C90u; return; } if (c.pc != 0x0015AA50u) [[unlikely]] return; }
L_0015AA50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0015AAC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA60u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0015AA60u) [[unlikely]] return; }
L_0015AA60:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA6Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x0015AA6Cu) [[unlikely]] return; }
L_0015AA6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA80u); set32(c.r[5], c.r[5].w[0] + 22403u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0015AA80u) [[unlikely]] return; }
L_0015AA80:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 129u);  goto L_0015AA94; }
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0015AA94:
    set32(c.r[2], ld32((c.r[16].w[0] + 1028u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AAA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015AAA0u) [[unlikely]] return; }
L_0015AAA0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AAACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x0015AAACu) [[unlikely]] return; }
L_0015AAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AAB4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x0015AAB4u) [[unlikely]] return; }
L_0015AAB4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AAC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015AAC0u) [[unlikely]] return; }
L_0015AAC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015AAD4; } }
L_0015AAC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AAD0u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x0015AAD0u) [[unlikely]] return; }
L_0015AAD0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0015AAD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0015AB00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[5], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 124u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AB20u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DE600u; return; } if (c.pc != 0x0015AB20u) [[unlikely]] return; }
L_0015AB20:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AB30u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0015AB30u) [[unlikely]] return; }
L_0015AB30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AB40u); st8((c.r[29].w[0] + 111u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x0015AB40u) [[unlikely]] return; }
L_0015AB40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AB4Cu); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 15u, depth + 1u); else { c.pc = 0x001C4570u; return; } if (c.pc != 0x0015AB4Cu) [[unlikely]] return; }
L_0015AB4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AB58u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x0015AB58u) [[unlikely]] return; }
L_0015AB58:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0015ABA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AB68u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0016(c, 594u, depth + 1u); else { c.pc = 0x0015BBB0u; return; } if (c.pc != 0x0015AB68u) [[unlikely]] return; }
L_0015AB68:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0015ABA0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AB80u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x0015AB80u) [[unlikely]] return; }
L_0015AB80:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AB8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 20u, depth + 1u); else { c.pc = 0x001C4710u; return; } if (c.pc != 0x0015AB8Cu) [[unlikely]] return; }
L_0015AB8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ABA0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 22u, depth + 1u); else { c.pc = 0x001C4760u; return; } if (c.pc != 0x0015ABA0u) [[unlikely]] return; }
L_0015ABA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0015ABA4:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0015ABBC:
    c.budget -= 1;
L_0015ABC0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[5], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ABDCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x0015ABDCu) [[unlikely]] return; }
L_0015ABDC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ABE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x0015ABE8u) [[unlikely]] return; }
L_0015ABE8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] - 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ABF8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x0015ABF8u) [[unlikely]] return; }
L_0015ABF8:
    c.r[6].d[0] = ld16((c.r[28].w[0] - 28948u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 22350u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AC14u); st16((c.r[28].w[0] - 28948u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0015AC14u) [[unlikely]] return; }
L_0015AC14:
    set32(c.r[17], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AC24u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0015AC24u) [[unlikely]] return; }
L_0015AC24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0015AC48; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[7], c.r[29].w[0] + 112u);
    c.budget -= 4;
L_0015AC3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AC44u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 580u, depth + 1u); else { c.pc = 0x0015BA50u; return; } if (c.pc != 0x0015AC44u) [[unlikely]] return; }
L_0015AC44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015AC48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AC50u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x0015AC50u) [[unlikely]] return; }
L_0015AC50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AC58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 395u, depth + 1u); else { c.pc = 0x0015A930u; return; } if (c.pc != 0x0015AC58u) [[unlikely]] return; }
L_0015AC58:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AC68u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x0015AC68u) [[unlikely]] return; }
L_0015AC68:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AC74u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0015AC74u) [[unlikely]] return; }
L_0015AC74:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0015AC90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ACA8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x0015ACA8u) [[unlikely]] return; }
L_0015ACA8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] - 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1028u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ACBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015ACBCu) [[unlikely]] return; }
L_0015ACBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015ACD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ACE0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x0015ACE0u) [[unlikely]] return; }
L_0015ACE0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ACF8u); set32(c.r[6], c.r[6].w[0] + 22495u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0015ACF8u) [[unlikely]] return; }
L_0015ACF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015AD10:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0032(c, 140u, depth); }
L_0015AD20:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0017(c, 101u, depth); }
L_0015AD30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AD48u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 103u, depth + 1u); else { c.pc = 0x0015CD60u; return; } if (c.pc != 0x0015AD48u) [[unlikely]] return; }
L_0015AD48:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AD54u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0015AD54u) [[unlikely]] return; }
L_0015AD54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015AD74; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 22992u);
    set32(c.r[3], c.r[3].w[0] - 22800u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0015AD74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AD84u); set32(c.r[4], c.r[4].w[0] + 22560u);  if (depth < kMaxDepth) unit_0017(c, 98u, depth + 1u); else { c.pc = 0x0015CCB0u; return; } if (c.pc != 0x0015AD84u) [[unlikely]] return; }
L_0015AD84:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AD90u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0015AD90u) [[unlikely]] return; }
L_0015AD90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015ADB0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 22992u);
    set32(c.r[3], c.r[3].w[0] - 22896u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0015ADB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ADC0u); set32(c.r[4], c.r[4].w[0] + 22564u);  if (depth < kMaxDepth) unit_0017(c, 98u, depth + 1u); else { c.pc = 0x0015CCB0u; return; } if (c.pc != 0x0015ADC0u) [[unlikely]] return; }
L_0015ADC0:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ADCCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0015ADCCu) [[unlikely]] return; }
L_0015ADCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015ADEC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 22992u);
    set32(c.r[3], c.r[3].w[0] - 22848u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0015ADEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ADFCu); set32(c.r[4], c.r[4].w[0] + 22570u);  if (depth < kMaxDepth) unit_0017(c, 98u, depth + 1u); else { c.pc = 0x0015CCB0u; return; } if (c.pc != 0x0015ADFCu) [[unlikely]] return; }
L_0015ADFC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AE08u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0015AE08u) [[unlikely]] return; }
L_0015AE08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015AE28; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 22992u);
    set32(c.r[3], c.r[3].w[0] - 22608u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0015AE28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AE38u); set32(c.r[4], c.r[4].w[0] + 22576u);  if (depth < kMaxDepth) unit_0017(c, 98u, depth + 1u); else { c.pc = 0x0015CCB0u; return; } if (c.pc != 0x0015AE38u) [[unlikely]] return; }
L_0015AE38:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AE44u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0015AE44u) [[unlikely]] return; }
L_0015AE44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015AE64; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 22992u);
    set32(c.r[3], c.r[3].w[0] - 23040u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0015AE64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AE74u); set32(c.r[4], c.r[4].w[0] + 22582u);  if (depth < kMaxDepth) unit_0017(c, 98u, depth + 1u); else { c.pc = 0x0015CCB0u; return; } if (c.pc != 0x0015AE74u) [[unlikely]] return; }
L_0015AE74:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AE80u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0015AE80u) [[unlikely]] return; }
L_0015AE80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015AEA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 22992u);
    set32(c.r[3], c.r[3].w[0] - 22656u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0015AEA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AEB0u); set32(c.r[4], c.r[4].w[0] + 22587u);  if (depth < kMaxDepth) unit_0017(c, 98u, depth + 1u); else { c.pc = 0x0015CCB0u; return; } if (c.pc != 0x0015AEB0u) [[unlikely]] return; }
L_0015AEB0:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AEBCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0015AEBCu) [[unlikely]] return; }
L_0015AEBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015AEDC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 22992u);
    set32(c.r[3], c.r[3].w[0] - 22752u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0015AEDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AEECu); set32(c.r[4], c.r[4].w[0] + 22598u);  if (depth < kMaxDepth) unit_0017(c, 98u, depth + 1u); else { c.pc = 0x0015CCB0u; return; } if (c.pc != 0x0015AEECu) [[unlikely]] return; }
L_0015AEEC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AEF8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0015AEF8u) [[unlikely]] return; }
L_0015AEF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015AF18; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 22992u);
    set32(c.r[3], c.r[3].w[0] - 22944u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0015AF18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AF28u); set32(c.r[4], c.r[4].w[0] + 22612u);  if (depth < kMaxDepth) unit_0017(c, 98u, depth + 1u); else { c.pc = 0x0015CCB0u; return; } if (c.pc != 0x0015AF28u) [[unlikely]] return; }
L_0015AF28:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AF34u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0015AF34u) [[unlikely]] return; }
L_0015AF34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015AF54; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 22992u);
    set32(c.r[3], c.r[3].w[0] - 22704u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0015AF54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AF64u); set32(c.r[4], c.r[4].w[0] + 22622u);  if (depth < kMaxDepth) unit_0017(c, 98u, depth + 1u); else { c.pc = 0x0015CCB0u; return; } if (c.pc != 0x0015AF64u) [[unlikely]] return; }
L_0015AF64:
    set32(c.r[17], ld32((c.r[28].w[0] - 29076u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AF74u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0015AF74u) [[unlikely]] return; }
L_0015AF74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 808u)));  goto L_0015AFB4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AF94u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0015AF94u) [[unlikely]] return; }
L_0015AF94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 27696u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22560u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 8;
L_0015AFB4:
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0015B010; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 22544u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AFE0u); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x0015AFE0u) [[unlikely]] return; }
L_0015AFE0:
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B004u); set32(c.r[4], c.r[17].w[0] + 812u);  if (depth < kMaxDepth) unit_0006(c, 256u, depth + 1u); else { c.pc = 0x00119F20u; return; } if (c.pc != 0x0015B004u) [[unlikely]] return; }
L_0015B004:
    set32(c.r[2], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 808u), c.r[2].w[0]);
    c.budget -= 3;
L_0015B010:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 22629u);
    set32(c.r[7], c.r[7].w[0] + 22660u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B034u); set32(c.r[8], c.r[8].w[0] + 22664u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0015B034u) [[unlikely]] return; }
L_0015B034:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015B050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015B0C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22560u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0015B0A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27696u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0015B0A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0015B0A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B0A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015B0A8u) [[unlikely]] return; }
L_0015B0A8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0015B0C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B0C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0015B0C0u) [[unlikely]] return; }
L_0015B0C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015B0C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015B0E0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0015B108; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_0015B100; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0015B100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015B10C; } }
L_0015B108:
    set32(c.r[2], c.r[2].w[0] + 22784u);
    c.budget -= 1;
L_0015B10C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015B120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 22960u);  c.pc = t; return; }
L_0015B130:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], c.r[6].w[0] + 22992u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B168u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x0015B168u) [[unlikely]] return; }
L_0015B168:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B178u); set32(c.r[5], c.r[5].w[0] + 22994u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0015B178u) [[unlikely]] return; }
L_0015B178:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_0015B19C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B190u); set32(c.r[5], c.r[5].w[0] + 22999u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0015B190u) [[unlikely]] return; }
L_0015B190:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0015B1AC; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_0015B19C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B1A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0015B1A4u) [[unlikely]] return; }
L_0015B1A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015B2E0; } }
L_0015B1AC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B1B8u); set32(c.r[5], c.r[5].w[0] + 22994u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0015B1B8u) [[unlikely]] return; }
L_0015B1B8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B1C4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x0015B1C4u) [[unlikely]] return; }
L_0015B1C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B1D4u); set32(c.r[5], c.r[5].w[0] + 22999u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0015B1D4u) [[unlikely]] return; }
L_0015B1D4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B1E0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x0015B1E0u) [[unlikely]] return; }
L_0015B1E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B1F0u); set32(c.r[5], c.r[5].w[0] + 23004u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0015B1F0u) [[unlikely]] return; }
L_0015B1F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0015B230; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015B200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B208u); set32(c.r[5], c.r[29].w[0] + 207u);  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x0015B208u) [[unlikely]] return; }
L_0015B208:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = ld8((c.r[29].w[0] + 207u));  goto L_0015B230; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0015B22C; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 207u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B22Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0015B22Cu) [[unlikely]] return; }
L_0015B22C:
    c.r[19].d[0] = ld8((c.r[29].w[0] + 207u));
    c.budget -= 1;
L_0015B230:
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B240u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0015B240u) [[unlikely]] return; }
L_0015B240:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0015B2A4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[29].w[0] + 129u);  goto L_0015B25C; }
    set32(c.r[18], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0015B25C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B268u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x0015B268u) [[unlikely]] return; }
L_0015B268:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B280u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 74u, depth + 1u); else { c.pc = 0x00138F30u; return; } if (c.pc != 0x0015B280u) [[unlikely]] return; }
L_0015B280:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] - 22528u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B294u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 395u, depth + 1u); else { c.pc = 0x0012B2D0u; return; } if (c.pc != 0x0015B294u) [[unlikely]] return; }
L_0015B294:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B2A0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000A(c, 320u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x0015B2A0u) [[unlikely]] return; }
L_0015B2A0:
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 1;
L_0015B2A4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_0015B2BC; }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B2B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0015B2B8u) [[unlikely]] return; }
L_0015B2B8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_0015B2BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B2C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015B2C4u) [[unlikely]] return; }
L_0015B2C4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B2D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015B2D0u) [[unlikely]] return; }
L_0015B2D0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B2DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0015B2DCu) [[unlikely]] return; }
L_0015B2DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015B2E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0015B300:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B31Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 36u, depth + 1u); else { c.pc = 0x00138A30u; return; } if (c.pc != 0x0015B31Cu) [[unlikely]] return; }
L_0015B31C:
    set32(c.r[5], c.r[17].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B328u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0015B328u) [[unlikely]] return; }
L_0015B328:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_0015B33C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0015B33C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B344u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0015B344u) [[unlikely]] return; }
L_0015B344:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B354u); set32(c.r[5], c.r[5].w[0] + 22999u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x0015B354u) [[unlikely]] return; }
L_0015B354:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0015B394; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 22999u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B374u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0016(c, 520u, depth + 1u); else { c.pc = 0x0015B4C0u; return; } if (c.pc != 0x0015B374u) [[unlikely]] return; }
L_0015B374:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B380u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0015B380u) [[unlikely]] return; }
L_0015B380:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B38Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0015B38Cu) [[unlikely]] return; }
L_0015B38C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_0015B3A4; } }
L_0015B394:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B3A0u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0016(c, 514u, depth + 1u); else { c.pc = 0x0015B3D0u; return; } if (c.pc != 0x0015B3A0u) [[unlikely]] return; }
L_0015B3A0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_0015B3A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B3ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015B3ACu) [[unlikely]] return; }
L_0015B3AC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B3B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015B3B8u) [[unlikely]] return; }
L_0015B3B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0015B3D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], c.r[5].w[0] << 5);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], 0u + 256u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 15;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[6].w[0] + 1u);  goto L_0015B410; }
    set32(c.r[18], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 1;
L_0015B410:
    set32(c.r[2], 0u + 512u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B420u); st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0015B420u) [[unlikely]] return; }
L_0015B420:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[19], 0u + 16u);  if (t) { goto L_0015B454; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[19], ld32((c.r[17].w[0] + 4u)));  goto L_0015B454; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B44Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0015B44Cu) [[unlikely]] return; }
L_0015B44C:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0015B454:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0015B498; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));  goto L_0015B480; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B47Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0015B47Cu) [[unlikely]] return; }
L_0015B47C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0015B480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B488u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0015B488u) [[unlikely]] return; }
L_0015B488:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
L_0015B498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B4A0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0015B4A0u) [[unlikely]] return; }
L_0015B4A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015B4C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B4F0u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x0015B4F0u) [[unlikely]] return; }
L_0015B4F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[20].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st16((c.r[20].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 256u);
    st32((c.r[20].w[0] + 20u), c.r[4].w[0]);
    st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[16].w[0] + 1u);  goto L_0015B524; }
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0015B524:
    set32(c.r[2], 0u + 512u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B534u); st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0015B534u) [[unlikely]] return; }
L_0015B534:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 16u);  if (t) { goto L_0015B568; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], ld32((c.r[20].w[0] + 4u)));  goto L_0015B568; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B560u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0015B560u) [[unlikely]] return; }
L_0015B560:
    set32(c.r[2], c.r[20].w[0] + 4u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0015B568:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  goto L_0015B5AC; }
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));  goto L_0015B594; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B590u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0015B590u) [[unlikely]] return; }
L_0015B590:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    c.budget -= 1;
L_0015B594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B59Cu); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0015B59Cu) [[unlikely]] return; }
L_0015B59C:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 4;
L_0015B5AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B5B4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0015B5B4u) [[unlikely]] return; }
L_0015B5B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B5D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015B5D8u) [[unlikely]] return; }
L_0015B5D8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0015B600:
    set32(c.r[25], ld32((c.r[7].w[0])));
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00158000u < 16384u) { entry = entries_0016[(t - 0x00158000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0015B620:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  c.pc = t; return; }
L_0015B630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 32u), 0u);  goto L_0015B660; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B65Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015B65Cu) [[unlikely]] return; }
L_0015B65C:
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 1;
L_0015B660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015B670:
    set32(c.r[29], c.r[29].w[0] - 2800u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 2768u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[21].w[0] + 36u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B6A4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000A(c, 387u, depth + 1u); else { c.pc = 0x0012B1E0u; return; } if (c.pc != 0x0015B6A4u) [[unlikely]] return; }
L_0015B6A4:
    set32(c.r[4], c.r[29].w[0] + 2736u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B6B0u); set32(c.r[5], c.r[21].w[0] + 36u);  if (depth < kMaxDepth) unit_000A(c, 387u, depth + 1u); else { c.pc = 0x0012B1E0u; return; } if (c.pc != 0x0015B6B0u) [[unlikely]] return; }
L_0015B6B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 2768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B6C0u); set32(c.r[5], c.r[5].w[0] + 23016u);  if (depth < kMaxDepth) unit_000A(c, 328u, depth + 1u); else { c.pc = 0x0012AC80u; return; } if (c.pc != 0x0015B6C0u) [[unlikely]] return; }
L_0015B6C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 2736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B6D0u); set32(c.r[5], c.r[5].w[0] + 23020u);  if (depth < kMaxDepth) unit_000A(c, 328u, depth + 1u); else { c.pc = 0x0012AC80u; return; } if (c.pc != 0x0015B6D0u) [[unlikely]] return; }
L_0015B6D0:
    set32(c.r[4], c.r[29].w[0] + 2736u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B6DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 489u, depth + 1u); else { c.pc = 0x0012BF10u; return; } if (c.pc != 0x0015B6DCu) [[unlikely]] return; }
L_0015B6DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015B6F0; } }
    set32(c.r[4], c.r[21].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B6F0u); set32(c.r[5], c.r[29].w[0] + 2736u);  if (depth < kMaxDepth) unit_000A(c, 320u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x0015B6F0u) [[unlikely]] return; }
L_0015B6F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[21].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B700u); set32(c.r[5], c.r[5].w[0] + 23024u);  if (depth < kMaxDepth) unit_000B(c, 4u, depth + 1u); else { c.pc = 0x0012C060u; return; } if (c.pc != 0x0015B700u) [[unlikely]] return; }
L_0015B700:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0015B78C; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B718u); set32(c.r[5], c.r[21].w[0] + 36u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0015B718u) [[unlikely]] return; }
L_0015B718:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[29].w[0] + 145u);  goto L_0015B72C; }
    set32(c.r[16], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_0015B72C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B734u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x0015B734u) [[unlikely]] return; }
L_0015B734:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 2480u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B750u); set32(c.r[6], c.r[6].w[0] + 23027u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x0015B750u) [[unlikely]] return; }
L_0015B750:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B75Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015B75Cu) [[unlikely]] return; }
L_0015B75C:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B76Cu); set32(c.r[6], c.r[29].w[0] + 2480u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0015B76Cu) [[unlikely]] return; }
L_0015B76C:
    set32(c.r[4], c.r[29].w[0] + 2736u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B778u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0015B778u) [[unlikely]] return; }
L_0015B778:
    set32(c.r[4], c.r[29].w[0] + 2768u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B784u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0015B784u) [[unlikely]] return; }
L_0015B784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015B99C; } }
L_0015B78C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B794u);  if (depth < kMaxDepth) unit_000A(c, 494u, depth + 1u); else { c.pc = 0x0012BFB0u; return; } if (c.pc != 0x0015B794u) [[unlikely]] return; }
L_0015B794:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B7A4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0015B7A4u) [[unlikely]] return; }
L_0015B7A4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0015B7C4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B7C0u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 130u, depth + 1u); else { c.pc = 0x0013D9B0u; return; } if (c.pc != 0x0015B7C0u) [[unlikely]] return; }
L_0015B7C0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0015B7C4:
    set32(c.r[4], c.r[29].w[0] + 1456u);
    c.budget -= 1;
L_0015B7C8:
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B7D8u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x0015B7D8u) [[unlikely]] return; }
L_0015B7D8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 1456u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B7F4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015B7F4u) [[unlikely]] return; }
L_0015B7F4:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 1456u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015B7C8u | kUnwind; return; } goto L_0015B7C8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23049u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B814u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 80u, depth + 1u); else { c.pc = 0x0013CD70u; return; } if (c.pc != 0x0015B814u) [[unlikely]] return; }
L_0015B814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B81Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 487u, depth + 1u); else { c.pc = 0x0012BEC0u; return; } if (c.pc != 0x0015B81Cu) [[unlikely]] return; }
L_0015B81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B824u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 65u, depth + 1u); else { c.pc = 0x0013CA00u; return; } if (c.pc != 0x0015B824u) [[unlikely]] return; }
L_0015B824:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B834u); set32(c.r[4], c.r[4].w[0] + 23051u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0015B834u) [[unlikely]] return; }
L_0015B834:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23051u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B848u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x0015B848u) [[unlikely]] return; }
L_0015B848:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 16u);  goto L_0015B858; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 32u), c.r[17].w[0]);  if (t) { goto L_0015B980; } }
L_0015B858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B860u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0015B860u) [[unlikely]] return; }
L_0015B860:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[21].w[0] + 32u), c.r[2].w[0]);  goto L_0015B878; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B874u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 133u, depth + 1u); else { c.pc = 0x0013DA70u; return; } if (c.pc != 0x0015B874u) [[unlikely]] return; }
L_0015B874:
    st32((c.r[21].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 1;
L_0015B878:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B884u); set32(c.r[4], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_0016(c, 380u, depth + 1u); else { c.pc = 0x0015A7B0u; return; } if (c.pc != 0x0015B884u) [[unlikely]] return; }
L_0015B884:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B890u); set32(c.r[5], c.r[21].w[0] + 36u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0015B890u) [[unlikely]] return; }
L_0015B890:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[29].w[0] + 129u);  goto L_0015B8A4; }
    set32(c.r[16], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0015B8A4:
    set32(c.r[19], ld32((c.r[29].w[0] + 436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B8B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 65u, depth + 1u); else { c.pc = 0x0013CA00u; return; } if (c.pc != 0x0015B8B0u) [[unlikely]] return; }
L_0015B8B0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B8C4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 192u, depth + 1u); else { c.pc = 0x001DD2E0u; return; } if (c.pc != 0x0015B8C4u) [[unlikely]] return; }
L_0015B8C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B8D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015B8D4u) [[unlikely]] return; }
L_0015B8D4:
    set32(c.r[4], ld32((c.r[29].w[0] + 436u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B8E8u); set32(c.r[5], c.r[5].w[0] - 18944u);  if (depth < kMaxDepth) unit_0030(c, 373u, depth + 1u); else { c.pc = 0x001C3BC0u; return; } if (c.pc != 0x0015B8E8u) [[unlikely]] return; }
L_0015B8E8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0015B958; } }
    set32(c.r[5], c.r[21].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B8FCu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0015B8FCu) [[unlikely]] return; }
L_0015B8FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 436u)));  if (t) { goto L_0015B914; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 120u)));  if (t) { goto L_0015B918; } }
L_0015B914:
    set32(c.r[16], c.r[29].w[0] + 113u);
    c.budget -= 1;
L_0015B918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B920u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x0015B920u) [[unlikely]] return; }
L_0015B920:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B93Cu); set32(c.r[6], c.r[6].w[0] + 23056u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x0015B93Cu) [[unlikely]] return; }
L_0015B93C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B948u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015B948u) [[unlikely]] return; }
L_0015B948:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B958u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0015B958u) [[unlikely]] return; }
L_0015B958:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 416u);  goto L_0015B978; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B974u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015B974u) [[unlikely]] return; }
L_0015B974:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 1;
L_0015B978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B980u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0016(c, 375u, depth + 1u); else { c.pc = 0x0015A700u; return; } if (c.pc != 0x0015B980u) [[unlikely]] return; }
L_0015B980:
    set32(c.r[4], c.r[29].w[0] + 2736u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B98Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0015B98Cu) [[unlikely]] return; }
L_0015B98C:
    set32(c.r[4], c.r[29].w[0] + 2768u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B998u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0015B998u) [[unlikely]] return; }
L_0015B998:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0015B99C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2800u);  c.pc = t; return; }
L_0015B9C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 22544u);
    set32(c.r[5], c.r[5].w[0] + 23079u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[7].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011CFB0u | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 125u, depth); }
L_0015B9E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015BA38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] - 22528u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BA14u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0015BA14u) [[unlikely]] return; }
L_0015BA14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BA20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 69u, depth + 1u); else { c.pc = 0x00138E80u; return; } if (c.pc != 0x0015BA20u) [[unlikely]] return; }
L_0015BA20:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0015BA3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BA38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0015BA38u) [[unlikely]] return; }
L_0015BA38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015BA3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015BA50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BA70u); c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 74u, depth + 1u); else { c.pc = 0x00138F30u; return; } if (c.pc != 0x0015BA70u) [[unlikely]] return; }
L_0015BA70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] - 22528u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BA84u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 395u, depth + 1u); else { c.pc = 0x0012B2D0u; return; } if (c.pc != 0x0015BA84u) [[unlikely]] return; }
L_0015BA84:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BA90u); set32(c.r[4], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_000A(c, 320u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x0015BA90u) [[unlikely]] return; }
L_0015BA90:
    st32((c.r[17].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015BAB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31036u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0015BACC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0015BADC; } }
L_0015BACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BAD4u);  if (depth < kMaxDepth) unit_000E(c, 80u, depth + 1u); else { c.pc = 0x00138FF0u; return; } if (c.pc != 0x0015BAD4u) [[unlikely]] return; }
L_0015BAD4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0015BADC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015BAF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BB14u); set32(c.r[4], c.r[4].w[0] + 22544u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0015BB14u) [[unlikely]] return; }
L_0015BB14:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0015BB24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015BB34; } }
L_0015BB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BB2Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 82u, depth + 1u); else { c.pc = 0x00139030u; return; } if (c.pc != 0x0015BB2Cu) [[unlikely]] return; }
L_0015BB2C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0015BB34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015BB50:
    set32(c.r[2], ld32((c.r[28].w[0] - 31208u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0015BB60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31036u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0015BB7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0015BB84; } }
L_0015BB7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BB84u);  if (depth < kMaxDepth) unit_000E(c, 89u, depth + 1u); else { c.pc = 0x001390A0u; return; } if (c.pc != 0x0015BB84u) [[unlikely]] return; }
L_0015BB84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015BB90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 31036u)));  c.pc = t; return; }
L_0015BBA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 22976u);  c.pc = t; return; }
L_0015BBB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28944u)));
    set32(c.r[18], c.r[2].w[0] + 44u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BBDCu); set32(c.r[4], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0016(c, 611u, depth + 1u); else { c.pc = 0x0015BD70u; return; } if (c.pc != 0x0015BBDCu) [[unlikely]] return; }
L_0015BBDC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0015BBEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0015BC98; } }
L_0015BBEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BBF4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 609u, depth + 1u); else { c.pc = 0x0015BD30u; return; } if (c.pc != 0x0015BBF4u) [[unlikely]] return; }
L_0015BBF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BC00u); set32(c.r[4], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0016(c, 611u, depth + 1u); else { c.pc = 0x0015BD70u; return; } if (c.pc != 0x0015BC00u) [[unlikely]] return; }
L_0015BC00:
    mmi::divu(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[18].w[0] + 4u);  if (t) { goto L_0015BC7C; } }
L_0015BC10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BC18u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 608u, depth + 1u); else { c.pc = 0x0015BD20u; return; } if (c.pc != 0x0015BC18u) [[unlikely]] return; }
L_0015BC18:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_0015BC6C; }
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BC30u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 608u, depth + 1u); else { c.pc = 0x0015BD20u; return; } if (c.pc != 0x0015BC30u) [[unlikely]] return; }
L_0015BC30:
    c.r[6].d[0] = ld16((c.r[2].w[0] + 4u));
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BC40u); set32(c.r[4], c.r[18].w[0] + 20u);  if (depth < kMaxDepth) unit_0016(c, 607u, depth + 1u); else { c.pc = 0x0015BD00u; return; } if (c.pc != 0x0015BC40u) [[unlikely]] return; }
L_0015BC40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BC4Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0015BC4Cu) [[unlikely]] return; }
L_0015BC4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015BC68; } }
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BC60u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 608u, depth + 1u); else { c.pc = 0x0015BD20u; return; } if (c.pc != 0x0015BC60u) [[unlikely]] return; }
L_0015BC60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { goto L_0015BC98; } }
L_0015BC68:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015BC6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BC74u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 606u, depth + 1u); else { c.pc = 0x0015BCE0u; return; } if (c.pc != 0x0015BC74u) [[unlikely]] return; }
L_0015BC74:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 2;
L_0015BC7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BC84u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 608u, depth + 1u); else { c.pc = 0x0015BD20u; return; } if (c.pc != 0x0015BC84u) [[unlikely]] return; }
L_0015BC84:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[18].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015BC10u | kUnwind; return; } goto L_0015BC10; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0015BC98:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_0015BCB8; }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[4], ld32((c.r[28].w[0] - 28944u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_0015BCB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015BCE0:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0015BCF4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015BCF4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015BD00:
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 24u)));  c.pc = t; return; }
L_0015BD20:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0015BD30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0xF0000000u);  if (t) { goto L_0015BD5C; } }
L_0015BD3C:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0015BD5C; } }
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.budget -= 2;
L_0015BD5C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015BD3Cu | kUnwind; return; } goto L_0015BD3C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015BD70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_0015BD80:
    set32(c.r[29], c.r[29].w[0] - 1936u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[29].w[0] + 896u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0] + 12u)));
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015BDCC; } }
    set32(c.r[16], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0015BDCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0015BE70; }
    set32(c.r[21], 0u - c.r[16].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BDE4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x0015BDE4u) [[unlikely]] return; }
L_0015BDE4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[5].d[0] = c.r[21].d[0] + 0ull;  goto L_0015BDF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0015BE04; } }
L_0015BDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE00u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 41u, depth + 1u); else { c.pc = 0x001C4AA0u; return; } if (c.pc != 0x0015BE00u) [[unlikely]] return; }
L_0015BE00:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0015BE04:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_0015BE6C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE1Cu); set32(c.r[6], c.r[29].w[0] + 752u);  if (depth < kMaxDepth) unit_0032(c, 119u, depth + 1u); else { c.pc = 0x001CA610u; return; } if (c.pc != 0x0015BE1Cu) [[unlikely]] return; }
L_0015BE1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE30u); set32(c.r[6], c.r[29].w[0] + 752u);  if (depth < kMaxDepth) unit_0032(c, 106u, depth + 1u); else { c.pc = 0x001CA130u; return; } if (c.pc != 0x0015BE30u) [[unlikely]] return; }
L_0015BE30:
    set32(c.r[9], ld32((c.r[19].w[0] + 24u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[8], ld32((c.r[29].w[0] + 772u)));
    set32(c.r[4], c.r[29].w[0] + 496u);
    set32(c.r[5], 0u + 256u);
    set32(c.r[6], c.r[6].w[0] + 23171u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE50u); set32(c.r[7], c.r[29].w[0] + 784u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x0015BE50u) [[unlikely]] return; }
L_0015BE50:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE5Cu); set32(c.r[5], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x0015BE5Cu) [[unlikely]] return; }
L_0015BE5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE64u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 367u, depth + 1u); else { c.pc = 0x001C3AF0u; return; } if (c.pc != 0x0015BE64u) [[unlikely]] return; }
L_0015BE64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0017(c, 17u, depth); } }
L_0015BE6C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0015BE70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE78u);  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x0015BE78u) [[unlikely]] return; }
L_0015BE78:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0017(c, 10u, depth); }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE90u); set32(c.r[6], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0032(c, 119u, depth + 1u); else { c.pc = 0x001CA610u; return; } if (c.pc != 0x0015BE90u) [[unlikely]] return; }
L_0015BE90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BEA4u); set32(c.r[6], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0032(c, 106u, depth + 1u); else { c.pc = 0x001CA130u; return; } if (c.pc != 0x0015BEA4u) [[unlikely]] return; }
L_0015BEA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BEACu); set32(c.r[4], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0015BEACu) [[unlikely]] return; }
L_0015BEAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BEB4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x0015BEB4u) [[unlikely]] return; }
L_0015BEB4:
    set32(c.r[8], ld32((c.r[19].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 420u)));
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[5], c.r[5].w[0] + 23237u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BED8u); set32(c.r[6], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0015BED8u) [[unlikely]] return; }
L_0015BED8:
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 385u);  goto L_0015BEEC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 392u)));
    c.budget -= 1;
L_0015BEEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BEF4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x0015BEF4u) [[unlikely]] return; }
L_0015BEF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BEFCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 367u, depth + 1u); else { c.pc = 0x001C3AF0u; return; } if (c.pc != 0x0015BEFCu) [[unlikely]] return; }
L_0015BEFC:
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015BF08u) [[unlikely]] return; }
L_0015BF08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0017(c, 17u, depth); } }
L_0015BF10:
    set32(c.r[3], 0u + 1024u);
    set32(c.r[2], c.r[18].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 1932u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[21], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 11;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0015BF74; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[17].w[0] - c.r[16].w[0]);
    set32(c.r[6], 0u - c.r[2].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF60u); set32(c.r[8], c.r[29].w[0] + 1932u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015BF60u) [[unlikely]] return; }
L_0015BF60:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    st32((c.r[3].w[0] + 848u), c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_0015BFF0; } }
L_0015BF74:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] - c.r[16].w[0]);  goto L_0015BF88; }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0015BFF0; }
    set32(c.r[2], c.r[17].w[0] - c.r[16].w[0]);
    c.budget -= 1;
L_0015BF88:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[23], 0u - c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF98u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x0015BF98u) [[unlikely]] return; }
L_0015BF98:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[21].w[0])));  goto L_0015BFC4; }
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0015BFF0; }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 848u), 0u);  if (t) { goto L_0015BFF0; } }
L_0015BFC4:
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BFE0u); set32(c.r[8], c.r[29].w[0] + 1932u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015BFE0u) [[unlikely]] return; }
L_0015BFE0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    st32((c.r[3].w[0] + 848u), c.r[18].w[0]);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0015BFF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  [[clang::musttail]] return unit_0017(c, 10u, depth); }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
    [[clang::musttail]] return unit_0017(c, 1u, depth);
}

}
