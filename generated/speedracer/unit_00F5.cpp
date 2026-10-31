#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00F5[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 29,
    0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 51,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0,
    0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0,
    0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0,
    0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167,
    0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 179, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 185,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0,
    0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0,
    0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0,
    0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248,
    0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0,
    0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259,
    0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0,
    0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287,
    0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0,
    0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0,
    0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0,
    0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0,
    315, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 321, 0,
    0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326,
    0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0,
    332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0,
    0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0,
    343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0,
    0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0,
    355, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 361, 0,
    0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0,
    0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0,
    372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 0,
    0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0,
    0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0,
    0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395,
    0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0,
    401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 406,
    0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412,
    0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0,
    0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0,
    0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0,
    0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0,
    435, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 441, 0,
    0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0,
    0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 452, 0, 0, 0,
    0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 459, 0, 0,
    460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0,
    0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0,
    470, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 476, 0,
    0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 481,
    0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0,
    487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 0,
    0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0,
    0, 0, 499, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0,
    0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 510,
    0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 516, 0, 0,
    0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0,
    0, 522, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 0, 528,
    0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0,
    0, 0, 0, 534, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 538,
    0, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 555, 0, 556, 0, 0,
    0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 563, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0,
    0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 570, 0, 0, 0, 571, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0,
    579, 0, 0, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 582, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0,
    0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0,
};

void unit_00F5(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004D4000;
    case 2u: goto L_004D4008;
    case 3u: goto L_004D4050;
    case 4u: goto L_004D4060;
    case 5u: goto L_004D4084;
    case 6u: goto L_004D4098;
    case 7u: goto L_004D40D8;
    case 8u: goto L_004D413C;
    case 9u: goto L_004D41B0;
    case 10u: goto L_004D41D4;
    case 11u: goto L_004D41EC;
    case 12u: goto L_004D4204;
    case 13u: goto L_004D421C;
    case 14u: goto L_004D4234;
    case 15u: goto L_004D4248;
    case 16u: goto L_004D4264;
    case 17u: goto L_004D4280;
    case 18u: goto L_004D4298;
    case 19u: goto L_004D42B0;
    case 20u: goto L_004D42BC;
    case 21u: goto L_004D42DC;
    case 22u: goto L_004D42E8;
    case 23u: goto L_004D42F0;
    case 24u: goto L_004D431C;
    case 25u: goto L_004D4324;
    case 26u: goto L_004D434C;
    case 27u: goto L_004D436C;
    case 28u: goto L_004D4374;
    case 29u: goto L_004D437C;
    case 30u: goto L_004D438C;
    case 31u: goto L_004D43A4;
    case 32u: goto L_004D4400;
    case 33u: goto L_004D440C;
    case 34u: goto L_004D4414;
    case 35u: goto L_004D4440;
    case 36u: goto L_004D4448;
    case 37u: goto L_004D4454;
    case 38u: goto L_004D445C;
    case 39u: goto L_004D4484;
    case 40u: goto L_004D4498;
    case 41u: goto L_004D44C4;
    case 42u: goto L_004D44E0;
    case 43u: goto L_004D4500;
    case 44u: goto L_004D450C;
    case 45u: goto L_004D452C;
    case 46u: goto L_004D453C;
    case 47u: goto L_004D4548;
    case 48u: goto L_004D4558;
    case 49u: goto L_004D4564;
    case 50u: goto L_004D4570;
    case 51u: goto L_004D457C;
    case 52u: goto L_004D45BC;
    case 53u: goto L_004D45EC;
    case 54u: goto L_004D4618;
    case 55u: goto L_004D4648;
    case 56u: goto L_004D465C;
    case 57u: goto L_004D4684;
    case 58u: goto L_004D4690;
    case 59u: goto L_004D469C;
    case 60u: goto L_004D46A8;
    case 61u: goto L_004D46B4;
    case 62u: goto L_004D46E8;
    case 63u: goto L_004D4708;
    case 64u: goto L_004D4724;
    case 65u: goto L_004D4734;
    case 66u: goto L_004D4744;
    case 67u: goto L_004D478C;
    case 68u: goto L_004D4798;
    case 69u: goto L_004D47A4;
    case 70u: goto L_004D47B4;
    case 71u: goto L_004D47C4;
    case 72u: goto L_004D480C;
    case 73u: goto L_004D4818;
    case 74u: goto L_004D4824;
    case 75u: goto L_004D4830;
    case 76u: goto L_004D4848;
    case 77u: goto L_004D4850;
    case 78u: goto L_004D4868;
    case 79u: goto L_004D4894;
    case 80u: goto L_004D48A0;
    case 81u: goto L_004D48C0;
    case 82u: goto L_004D48CC;
    case 83u: goto L_004D48F0;
    case 84u: goto L_004D490C;
    case 85u: goto L_004D4914;
    case 86u: goto L_004D4938;
    case 87u: goto L_004D49AC;
    case 88u: goto L_004D49C0;
    case 89u: goto L_004D49CC;
    case 90u: goto L_004D49E8;
    case 91u: goto L_004D4A10;
    case 92u: goto L_004D4A50;
    case 93u: goto L_004D4A64;
    case 94u: goto L_004D4A88;
    case 95u: goto L_004D4AA0;
    case 96u: goto L_004D4AB4;
    case 97u: goto L_004D4AC0;
    case 98u: goto L_004D4AE4;
    case 99u: goto L_004D4AF8;
    case 100u: goto L_004D4B0C;
    case 101u: goto L_004D4B18;
    case 102u: goto L_004D4B3C;
    case 103u: goto L_004D4B50;
    case 104u: goto L_004D4B64;
    case 105u: goto L_004D4B80;
    case 106u: goto L_004D4B90;
    case 107u: goto L_004D4B9C;
    case 108u: goto L_004D4BD8;
    case 109u: goto L_004D4BEC;
    case 110u: goto L_004D4C10;
    case 111u: goto L_004D4C28;
    case 112u: goto L_004D4C3C;
    case 113u: goto L_004D4C50;
    case 114u: goto L_004D4C74;
    case 115u: goto L_004D4C8C;
    case 116u: goto L_004D4CA0;
    case 117u: goto L_004D4CB4;
    case 118u: goto L_004D4CD8;
    case 119u: goto L_004D4CF0;
    case 120u: goto L_004D4D04;
    case 121u: goto L_004D4D18;
    case 122u: goto L_004D4D3C;
    case 123u: goto L_004D4D54;
    case 124u: goto L_004D4D68;
    case 125u: goto L_004D4D74;
    case 126u: goto L_004D4D98;
    case 127u: goto L_004D4DAC;
    case 128u: goto L_004D4DC0;
    case 129u: goto L_004D4DD4;
    case 130u: goto L_004D4DF8;
    case 131u: goto L_004D4E10;
    case 132u: goto L_004D4E24;
    case 133u: goto L_004D4E38;
    case 134u: goto L_004D4E5C;
    case 135u: goto L_004D4E74;
    case 136u: goto L_004D4E88;
    case 137u: goto L_004D4E9C;
    case 138u: goto L_004D4EC0;
    case 139u: goto L_004D4ED8;
    case 140u: goto L_004D4EEC;
    case 141u: goto L_004D4F00;
    case 142u: goto L_004D4F24;
    case 143u: goto L_004D4F3C;
    case 144u: goto L_004D4F50;
    case 145u: goto L_004D4F64;
    case 146u: goto L_004D4F88;
    case 147u: goto L_004D4FA0;
    case 148u: goto L_004D4FB4;
    case 149u: goto L_004D4FC8;
    case 150u: goto L_004D4FEC;
    case 151u: goto L_004D5004;
    case 152u: goto L_004D5018;
    case 153u: goto L_004D502C;
    case 154u: goto L_004D5050;
    case 155u: goto L_004D5068;
    case 156u: goto L_004D507C;
    case 157u: goto L_004D5090;
    case 158u: goto L_004D50B4;
    case 159u: goto L_004D50CC;
    case 160u: goto L_004D50E0;
    case 161u: goto L_004D50EC;
    case 162u: goto L_004D5110;
    case 163u: goto L_004D5124;
    case 164u: goto L_004D5138;
    case 165u: goto L_004D5144;
    case 166u: goto L_004D5168;
    case 167u: goto L_004D517C;
    case 168u: goto L_004D5190;
    case 169u: goto L_004D519C;
    case 170u: goto L_004D51C0;
    case 171u: goto L_004D51D4;
    case 172u: goto L_004D51E8;
    case 173u: goto L_004D51F4;
    case 174u: goto L_004D5218;
    case 175u: goto L_004D522C;
    case 176u: goto L_004D5240;
    case 177u: goto L_004D524C;
    case 178u: goto L_004D5270;
    case 179u: goto L_004D5284;
    case 180u: goto L_004D5298;
    case 181u: goto L_004D52A4;
    case 182u: goto L_004D52C8;
    case 183u: goto L_004D52DC;
    case 184u: goto L_004D52F0;
    case 185u: goto L_004D52FC;
    case 186u: goto L_004D5320;
    case 187u: goto L_004D5334;
    case 188u: goto L_004D5348;
    case 189u: goto L_004D5354;
    case 190u: goto L_004D5378;
    case 191u: goto L_004D538C;
    case 192u: goto L_004D53A0;
    case 193u: goto L_004D53AC;
    case 194u: goto L_004D53D0;
    case 195u: goto L_004D53E4;
    case 196u: goto L_004D53F8;
    case 197u: goto L_004D5404;
    case 198u: goto L_004D5428;
    case 199u: goto L_004D543C;
    case 200u: goto L_004D5450;
    case 201u: goto L_004D5464;
    case 202u: goto L_004D5488;
    case 203u: goto L_004D54A0;
    case 204u: goto L_004D54B4;
    case 205u: goto L_004D54C0;
    case 206u: goto L_004D54E4;
    case 207u: goto L_004D54F8;
    case 208u: goto L_004D550C;
    case 209u: goto L_004D5518;
    case 210u: goto L_004D553C;
    case 211u: goto L_004D5550;
    case 212u: goto L_004D5564;
    case 213u: goto L_004D5570;
    case 214u: goto L_004D5594;
    case 215u: goto L_004D55A8;
    case 216u: goto L_004D55BC;
    case 217u: goto L_004D55C8;
    case 218u: goto L_004D55EC;
    case 219u: goto L_004D5600;
    case 220u: goto L_004D5614;
    case 221u: goto L_004D5620;
    case 222u: goto L_004D5644;
    case 223u: goto L_004D5658;
    case 224u: goto L_004D566C;
    case 225u: goto L_004D5678;
    case 226u: goto L_004D569C;
    case 227u: goto L_004D56B0;
    case 228u: goto L_004D56C4;
    case 229u: goto L_004D56D0;
    case 230u: goto L_004D56F4;
    case 231u: goto L_004D5708;
    case 232u: goto L_004D571C;
    case 233u: goto L_004D5728;
    case 234u: goto L_004D574C;
    case 235u: goto L_004D5760;
    case 236u: goto L_004D5774;
    case 237u: goto L_004D5780;
    case 238u: goto L_004D57A4;
    case 239u: goto L_004D57B8;
    case 240u: goto L_004D57CC;
    case 241u: goto L_004D57D8;
    case 242u: goto L_004D57FC;
    case 243u: goto L_004D5810;
    case 244u: goto L_004D5824;
    case 245u: goto L_004D5830;
    case 246u: goto L_004D5854;
    case 247u: goto L_004D5868;
    case 248u: goto L_004D587C;
    case 249u: goto L_004D5888;
    case 250u: goto L_004D58AC;
    case 251u: goto L_004D58C0;
    case 252u: goto L_004D58D4;
    case 253u: goto L_004D58E8;
    case 254u: goto L_004D590C;
    case 255u: goto L_004D5924;
    case 256u: goto L_004D5938;
    case 257u: goto L_004D5944;
    case 258u: goto L_004D5968;
    case 259u: goto L_004D597C;
    case 260u: goto L_004D5990;
    case 261u: goto L_004D599C;
    case 262u: goto L_004D59C0;
    case 263u: goto L_004D59D4;
    case 264u: goto L_004D59E8;
    case 265u: goto L_004D59F4;
    case 266u: goto L_004D5A18;
    case 267u: goto L_004D5A2C;
    case 268u: goto L_004D5A40;
    case 269u: goto L_004D5A54;
    case 270u: goto L_004D5A78;
    case 271u: goto L_004D5A90;
    case 272u: goto L_004D5AA4;
    case 273u: goto L_004D5AB0;
    case 274u: goto L_004D5AD4;
    case 275u: goto L_004D5AE8;
    case 276u: goto L_004D5AFC;
    case 277u: goto L_004D5B08;
    case 278u: goto L_004D5B2C;
    case 279u: goto L_004D5B40;
    case 280u: goto L_004D5B54;
    case 281u: goto L_004D5B68;
    case 282u: goto L_004D5B8C;
    case 283u: goto L_004D5BA4;
    case 284u: goto L_004D5BB8;
    case 285u: goto L_004D5BC4;
    case 286u: goto L_004D5BE8;
    case 287u: goto L_004D5BFC;
    case 288u: goto L_004D5C10;
    case 289u: goto L_004D5C1C;
    case 290u: goto L_004D5C40;
    case 291u: goto L_004D5C54;
    case 292u: goto L_004D5C68;
    case 293u: goto L_004D5C74;
    case 294u: goto L_004D5C98;
    case 295u: goto L_004D5CAC;
    case 296u: goto L_004D5CC0;
    case 297u: goto L_004D5CCC;
    case 298u: goto L_004D5CF0;
    case 299u: goto L_004D5D04;
    case 300u: goto L_004D5D34;
    case 301u: goto L_004D5D40;
    case 302u: goto L_004D5D64;
    case 303u: goto L_004D5D78;
    case 304u: goto L_004D5D8C;
    case 305u: goto L_004D5D98;
    case 306u: goto L_004D5DBC;
    case 307u: goto L_004D5DD0;
    case 308u: goto L_004D5DE4;
    case 309u: goto L_004D5DF0;
    case 310u: goto L_004D5E14;
    case 311u: goto L_004D5E28;
    case 312u: goto L_004D5E3C;
    case 313u: goto L_004D5E48;
    case 314u: goto L_004D5E6C;
    case 315u: goto L_004D5E80;
    case 316u: goto L_004D5E94;
    case 317u: goto L_004D5EA0;
    case 318u: goto L_004D5EC4;
    case 319u: goto L_004D5ED8;
    case 320u: goto L_004D5EEC;
    case 321u: goto L_004D5EF8;
    case 322u: goto L_004D5F1C;
    case 323u: goto L_004D5F30;
    case 324u: goto L_004D5F44;
    case 325u: goto L_004D5F58;
    case 326u: goto L_004D5F7C;
    case 327u: goto L_004D5F94;
    case 328u: goto L_004D5FA8;
    case 329u: goto L_004D5FB4;
    case 330u: goto L_004D5FD8;
    case 331u: goto L_004D5FEC;
    case 332u: goto L_004D6000;
    case 333u: goto L_004D600C;
    case 334u: goto L_004D6030;
    case 335u: goto L_004D6044;
    case 336u: goto L_004D6058;
    case 337u: goto L_004D6064;
    case 338u: goto L_004D6088;
    case 339u: goto L_004D609C;
    case 340u: goto L_004D60C8;
    case 341u: goto L_004D60E4;
    case 342u: goto L_004D60F4;
    case 343u: goto L_004D6100;
    case 344u: goto L_004D618C;
    case 345u: goto L_004D6198;
    case 346u: goto L_004D61BC;
    case 347u: goto L_004D61D0;
    case 348u: goto L_004D61E4;
    case 349u: goto L_004D61F0;
    case 350u: goto L_004D6214;
    case 351u: goto L_004D6228;
    case 352u: goto L_004D623C;
    case 353u: goto L_004D6248;
    case 354u: goto L_004D626C;
    case 355u: goto L_004D6280;
    case 356u: goto L_004D6294;
    case 357u: goto L_004D62A0;
    case 358u: goto L_004D62C4;
    case 359u: goto L_004D62D8;
    case 360u: goto L_004D62EC;
    case 361u: goto L_004D62F8;
    case 362u: goto L_004D631C;
    case 363u: goto L_004D6330;
    case 364u: goto L_004D6344;
    case 365u: goto L_004D6350;
    case 366u: goto L_004D6374;
    case 367u: goto L_004D6388;
    case 368u: goto L_004D639C;
    case 369u: goto L_004D63B0;
    case 370u: goto L_004D63D4;
    case 371u: goto L_004D63EC;
    case 372u: goto L_004D6400;
    case 373u: goto L_004D640C;
    case 374u: goto L_004D6430;
    case 375u: goto L_004D6444;
    case 376u: goto L_004D6458;
    case 377u: goto L_004D6464;
    case 378u: goto L_004D6488;
    case 379u: goto L_004D649C;
    case 380u: goto L_004D64B0;
    case 381u: goto L_004D64BC;
    case 382u: goto L_004D64E0;
    case 383u: goto L_004D64F4;
    case 384u: goto L_004D6508;
    case 385u: goto L_004D6514;
    case 386u: goto L_004D6538;
    case 387u: goto L_004D654C;
    case 388u: goto L_004D6560;
    case 389u: goto L_004D656C;
    case 390u: goto L_004D6590;
    case 391u: goto L_004D65A4;
    case 392u: goto L_004D65B8;
    case 393u: goto L_004D65C4;
    case 394u: goto L_004D65E8;
    case 395u: goto L_004D65FC;
    case 396u: goto L_004D6610;
    case 397u: goto L_004D6624;
    case 398u: goto L_004D6648;
    case 399u: goto L_004D6660;
    case 400u: goto L_004D6674;
    case 401u: goto L_004D6680;
    case 402u: goto L_004D66A4;
    case 403u: goto L_004D66B8;
    case 404u: goto L_004D66CC;
    case 405u: goto L_004D66D8;
    case 406u: goto L_004D66FC;
    case 407u: goto L_004D6710;
    case 408u: goto L_004D6724;
    case 409u: goto L_004D6730;
    case 410u: goto L_004D6754;
    case 411u: goto L_004D6768;
    case 412u: goto L_004D677C;
    case 413u: goto L_004D6788;
    case 414u: goto L_004D67AC;
    case 415u: goto L_004D67C0;
    case 416u: goto L_004D67D4;
    case 417u: goto L_004D67E0;
    case 418u: goto L_004D6804;
    case 419u: goto L_004D6818;
    case 420u: goto L_004D682C;
    case 421u: goto L_004D6838;
    case 422u: goto L_004D685C;
    case 423u: goto L_004D6870;
    case 424u: goto L_004D6884;
    case 425u: goto L_004D6890;
    case 426u: goto L_004D68B4;
    case 427u: goto L_004D68C8;
    case 428u: goto L_004D68E4;
    case 429u: goto L_004D68F0;
    case 430u: goto L_004D6914;
    case 431u: goto L_004D6928;
    case 432u: goto L_004D693C;
    case 433u: goto L_004D6948;
    case 434u: goto L_004D696C;
    case 435u: goto L_004D6980;
    case 436u: goto L_004D6994;
    case 437u: goto L_004D69A0;
    case 438u: goto L_004D69C4;
    case 439u: goto L_004D69D8;
    case 440u: goto L_004D69EC;
    case 441u: goto L_004D69F8;
    case 442u: goto L_004D6A1C;
    case 443u: goto L_004D6A30;
    case 444u: goto L_004D6A44;
    case 445u: goto L_004D6A50;
    case 446u: goto L_004D6A74;
    case 447u: goto L_004D6A88;
    case 448u: goto L_004D6A9C;
    case 449u: goto L_004D6AB0;
    case 450u: goto L_004D6AD4;
    case 451u: goto L_004D6AEC;
    case 452u: goto L_004D6AF0;
    case 453u: goto L_004D6B08;
    case 454u: goto L_004D6B28;
    case 455u: goto L_004D6B34;
    case 456u: goto L_004D6B40;
    case 457u: goto L_004D6B58;
    case 458u: goto L_004D6B68;
    case 459u: goto L_004D6B74;
    case 460u: goto L_004D6B80;
    case 461u: goto L_004D6B9C;
    case 462u: goto L_004D6BBC;
    case 463u: goto L_004D6BC8;
    case 464u: goto L_004D6BEC;
    case 465u: goto L_004D6C0C;
    case 466u: goto L_004D6C18;
    case 467u: goto L_004D6C3C;
    case 468u: goto L_004D6C48;
    case 469u: goto L_004D6C6C;
    case 470u: goto L_004D6C80;
    case 471u: goto L_004D6C94;
    case 472u: goto L_004D6CA0;
    case 473u: goto L_004D6CC4;
    case 474u: goto L_004D6CD8;
    case 475u: goto L_004D6CEC;
    case 476u: goto L_004D6CF8;
    case 477u: goto L_004D6D1C;
    case 478u: goto L_004D6D30;
    case 479u: goto L_004D6D44;
    case 480u: goto L_004D6D58;
    case 481u: goto L_004D6D7C;
    case 482u: goto L_004D6D94;
    case 483u: goto L_004D6DA8;
    case 484u: goto L_004D6DB4;
    case 485u: goto L_004D6DD8;
    case 486u: goto L_004D6DEC;
    case 487u: goto L_004D6E00;
    case 488u: goto L_004D6E0C;
    case 489u: goto L_004D6E30;
    case 490u: goto L_004D6E44;
    case 491u: goto L_004D6E58;
    case 492u: goto L_004D6E64;
    case 493u: goto L_004D6E88;
    case 494u: goto L_004D6E9C;
    case 495u: goto L_004D6EB0;
    case 496u: goto L_004D6EBC;
    case 497u: goto L_004D6EE0;
    case 498u: goto L_004D6EF4;
    case 499u: goto L_004D6F08;
    case 500u: goto L_004D6F14;
    case 501u: goto L_004D6F38;
    case 502u: goto L_004D6F4C;
    case 503u: goto L_004D6F60;
    case 504u: goto L_004D6F6C;
    case 505u: goto L_004D6F90;
    case 506u: goto L_004D6FA4;
    case 507u: goto L_004D6FB8;
    case 508u: goto L_004D6FC4;
    case 509u: goto L_004D6FE8;
    case 510u: goto L_004D6FFC;
    case 511u: goto L_004D7010;
    case 512u: goto L_004D701C;
    case 513u: goto L_004D7040;
    case 514u: goto L_004D7054;
    case 515u: goto L_004D7068;
    case 516u: goto L_004D7074;
    case 517u: goto L_004D7098;
    case 518u: goto L_004D70AC;
    case 519u: goto L_004D70C0;
    case 520u: goto L_004D70CC;
    case 521u: goto L_004D70F0;
    case 522u: goto L_004D7104;
    case 523u: goto L_004D7118;
    case 524u: goto L_004D7124;
    case 525u: goto L_004D7148;
    case 526u: goto L_004D715C;
    case 527u: goto L_004D7170;
    case 528u: goto L_004D717C;
    case 529u: goto L_004D71A0;
    case 530u: goto L_004D71B4;
    case 531u: goto L_004D71C8;
    case 532u: goto L_004D71D4;
    case 533u: goto L_004D71F8;
    case 534u: goto L_004D720C;
    case 535u: goto L_004D7224;
    case 536u: goto L_004D7244;
    case 537u: goto L_004D7258;
    case 538u: goto L_004D727C;
    case 539u: goto L_004D7294;
    case 540u: goto L_004D72A0;
    case 541u: goto L_004D72B4;
    case 542u: goto L_004D72E8;
    case 543u: goto L_004D7320;
    case 544u: goto L_004D73B0;
    case 545u: goto L_004D73C8;
    case 546u: goto L_004D7418;
    case 547u: goto L_004D742C;
    case 548u: goto L_004D750C;
    case 549u: goto L_004D7514;
    case 550u: goto L_004D7650;
    case 551u: goto L_004D7658;
    case 552u: goto L_004D76D8;
    case 553u: goto L_004D7700;
    case 554u: goto L_004D7760;
    case 555u: goto L_004D776C;
    case 556u: goto L_004D7774;
    case 557u: goto L_004D778C;
    case 558u: goto L_004D77BC;
    case 559u: goto L_004D77D0;
    case 560u: goto L_004D77F0;
    case 561u: goto L_004D7830;
    case 562u: goto L_004D785C;
    case 563u: goto L_004D7888;
    case 564u: goto L_004D78A0;
    case 565u: goto L_004D78C0;
    case 566u: goto L_004D78EC;
    case 567u: goto L_004D7910;
    case 568u: goto L_004D7AA8;
    case 569u: goto L_004D7AB4;
    case 570u: goto L_004D7AC0;
    case 571u: goto L_004D7AD0;
    case 572u: goto L_004D7ADC;
    case 573u: goto L_004D7AE8;
    case 574u: goto L_004D7BB0;
    case 575u: goto L_004D7BC8;
    case 576u: goto L_004D7BD4;
    case 577u: goto L_004D7BDC;
    case 578u: goto L_004D7BF0;
    case 579u: goto L_004D7C00;
    case 580u: goto L_004D7C10;
    case 581u: goto L_004D7C28;
    case 582u: goto L_004D7C34;
    case 583u: goto L_004D7C3C;
    case 584u: goto L_004D7C50;
    case 585u: goto L_004D7C60;
    case 586u: goto L_004D7C78;
    case 587u: goto L_004D7C90;
    case 588u: goto L_004D7CA8;
    case 589u: goto L_004D7CC0;
    case 590u: goto L_004D7CD0;
    case 591u: goto L_004D7D04;
    case 592u: goto L_004D7EB0;
    case 593u: goto L_004D7F20;
    case 594u: goto L_004D7F8C;
    case 595u: goto L_004D7FE8;
    default: bad_entry(c, 0x004D4000u); return;
    }
L_004D4000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_004D4050; } }
L_004D4008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    c.f[2] = fp::sub(c.f[2], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);  goto L_004D4030; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004D4050; } }
L_004D4030:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 4u);  goto L_004D4050; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004D4050; } }
L_004D4050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004D4060:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[17].w[0] + 1316u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4084u); set32(c.r[5], c.r[17].w[0] + 1288u);  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x004D4084u) [[unlikely]] return; }
L_004D4084:
    set32(c.r[6], ld32((c.r[17].w[0] + 1316u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[16], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4098u); set32(c.r[5], c.r[17].w[0] + 1288u);  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x004D4098u) [[unlikely]] return; }
L_004D4098:
    set32(c.r[7], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[5], c.r[17].w[0] + 1288u);
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 208u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 212u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    st32((c.r[29].w[0] + 220u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D40D8u); st32((c.r[29].w[0] + 228u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x004D40D8u) [[unlikely]] return; }
L_004D40D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    st32((c.r[29].w[0] + 248u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st32((c.r[29].w[0] + 240u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 244u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    st32((c.r[29].w[0] + 260u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    st32((c.r[29].w[0] + 252u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 256u), c.r[4].w[0]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[5]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[3]);
    c.r[3].d[0] = ld64((c.r[29].w[0] + 224u));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 256u));
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[5]);
    st64((c.r[29].w[0] + 128u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[4].d[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 25;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004D4174; } }
L_004D413C:
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 160u), c.r[6].w[0]);  if (t) { goto L_004D4174; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; st32((c.r[29].w[0] + 144u), c.r[3].w[0]);  if (t) { goto L_004D4160; } }
    st32((c.r[29].w[0] + 144u), c.r[4].w[0]);
    c.budget -= 1;
L_004D4160:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 512u);
    st32((c.r[29].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 5;
L_004D4174:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[7].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 160u)));  goto L_004D4190; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[6], ld32((c.r[29].w[0] + 160u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D413Cu | kUnwind; return; } goto L_004D413C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 1;
L_004D4190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[16].d[0];
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_004D41B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_004D41D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D41D4u);  if (depth < kMaxDepth) unit_008A(c, 33u, depth + 1u); else { c.pc = 0x003296B0u; return; } if (c.pc != 0x004D41D4u) [[unlikely]] return; }
L_004D41D4:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_004D41D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 116u), 0u);  goto L_004D41F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D41ECu);  if (depth < kMaxDepth) unit_008A(c, 33u, depth + 1u); else { c.pc = 0x003296B0u; return; } if (c.pc != 0x004D41ECu) [[unlikely]] return; }
L_004D41EC:
    st32((c.r[16].w[0] + 116u), 0u);
    c.budget -= 1;
L_004D41F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 1876u), 0u);  goto L_004D4208; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4204u);  if (depth < kMaxDepth) unit_008E(c, 217u, depth + 1u); else { c.pc = 0x0033B260u; return; } if (c.pc != 0x004D4204u) [[unlikely]] return; }
L_004D4204:
    st32((c.r[16].w[0] + 1876u), 0u);
    c.budget -= 1;
L_004D4208:
    set32(c.r[4], ld32((c.r[16].w[0] + 1880u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 1880u), 0u);  goto L_004D4220; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D421Cu);  if (depth < kMaxDepth) unit_008E(c, 217u, depth + 1u); else { c.pc = 0x0033B260u; return; } if (c.pc != 0x004D421Cu) [[unlikely]] return; }
L_004D421C:
    st32((c.r[16].w[0] + 1880u), 0u);
    c.budget -= 1;
L_004D4220:
    set32(c.r[4], ld32((c.r[16].w[0] + 1908u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1912u)));  goto L_004D4238; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4234u);  if (depth < kMaxDepth) unit_0089(c, 220u, depth + 1u); else { c.pc = 0x00327990u; return; } if (c.pc != 0x004D4234u) [[unlikely]] return; }
L_004D4234:
    set32(c.r[4], ld32((c.r[16].w[0] + 1912u)));
    c.budget -= 1;
L_004D4238:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 1912u), 0u);  goto L_004D424C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4248u);  if (depth < kMaxDepth) unit_0089(c, 220u, depth + 1u); else { c.pc = 0x00327990u; return; } if (c.pc != 0x004D4248u) [[unlikely]] return; }
L_004D4248:
    st32((c.r[16].w[0] + 1912u), 0u);
    c.budget -= 1;
L_004D424C:
    st32((c.r[16].w[0] + 1908u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1916u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 1916u), 0u);  goto L_004D4268; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4264u);  if (depth < kMaxDepth) unit_0089(c, 220u, depth + 1u); else { c.pc = 0x00327990u; return; } if (c.pc != 0x004D4264u) [[unlikely]] return; }
L_004D4264:
    st32((c.r[16].w[0] + 1916u), 0u);
    c.budget -= 1;
L_004D4268:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004D4280:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4298u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_008E(c, 50u, depth + 1u); else { c.pc = 0x003396A0u; return; } if (c.pc != 0x004D4298u) [[unlikely]] return; }
L_004D4298:
    c.f[12] = ld32((c.r[16].w[0] + 1392u));
    c.f[13] = ld32((c.r[16].w[0] + 1444u));
    c.f[14] = ld32((c.r[16].w[0] + 1452u));
    c.f[15] = ld32((c.r[16].w[0] + 1448u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D42B0u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_008E(c, 37u, depth + 1u); else { c.pc = 0x00339360u; return; } if (c.pc != 0x004D42B0u) [[unlikely]] return; }
L_004D42B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D42BCu); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_008E(c, 187u, depth + 1u); else { c.pc = 0x0033B010u; return; } if (c.pc != 0x004D42BCu) [[unlikely]] return; }
L_004D42BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    st32((c.r[16].w[0] + 1436u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[16].w[0] + 1436u));
    c.f[13] = ld32((c.r[16].w[0] + 1444u));
    c.f[14] = ld32((c.r[16].w[0] + 1452u));
    c.f[15] = ld32((c.r[16].w[0] + 1448u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D42DCu); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_008E(c, 37u, depth + 1u); else { c.pc = 0x00339360u; return; } if (c.pc != 0x004D42DCu) [[unlikely]] return; }
L_004D42DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 1880u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D42E8u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_008E(c, 187u, depth + 1u); else { c.pc = 0x0033B010u; return; } if (c.pc != 0x004D42E8u) [[unlikely]] return; }
L_004D42E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D42F0u); set32(c.r[4], ld32((c.r[16].w[0] + 1884u)));  if (depth < kMaxDepth) unit_008A(c, 146u, depth + 1u); else { c.pc = 0x0032B080u; return; } if (c.pc != 0x004D42F0u) [[unlikely]] return; }
L_004D42F0:
    c.f[2] = ld32((c.r[16].w[0] + 1444u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 1440u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[14] = 0u;
    c.f[13] = ld32((c.r[16].w[0] + 1456u));
    c.f[1] = c.r[2].w[0];
    c.f[2] = c.f[2] ^ fp::kSign;
    c.facc = fp::add(c.f[14], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D431Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[2]));  if (depth < kMaxDepth) unit_0089(c, 204u, depth + 1u); else { c.pc = 0x003276B0u; return; } if (c.pc != 0x004D431Cu) [[unlikely]] return; }
L_004D431C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4324u); set32(c.r[4], ld32((c.r[16].w[0] + 1888u)));  if (depth < kMaxDepth) unit_008A(c, 146u, depth + 1u); else { c.pc = 0x0032B080u; return; } if (c.pc != 0x004D4324u) [[unlikely]] return; }
L_004D4324:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[16].w[0] + 1444u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 1440u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[13] = ld32((c.r[16].w[0] + 1456u));
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D434Cu); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0089(c, 204u, depth + 1u); else { c.pc = 0x003276B0u; return; } if (c.pc != 0x004D434Cu) [[unlikely]] return; }
L_004D434C:
    set32(c.r[2], ld32((c.r[16].w[0] + 1872u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 2304u)));  goto L_004D4488; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D436Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x004D436Cu) [[unlikely]] return; }
L_004D436C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4374u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x004D4374u) [[unlikely]] return; }
L_004D4374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D437Cu); c.f[12] = ld32((c.r[28].w[0] - 32028u));  if (depth < kMaxDepth) unit_0009(c, 316u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x004D437Cu) [[unlikely]] return; }
L_004D437C:
    c.f[12] = ld32((c.r[28].w[0] - 32028u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D438Cu); st32((c.r[29].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 315u, depth + 1u); else { c.pc = 0x00127570u; return; } if (c.pc != 0x004D438Cu) [[unlikely]] return; }
L_004D438C:
    st32((c.r[29].w[0] + 64u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D43A4u); st32((c.r[29].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 313u, depth + 1u); else { c.pc = 0x001274E0u; return; } if (c.pc != 0x004D43A4u) [[unlikely]] return; }
L_004D43A4:
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 112u), c.f[1]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[29].w[0] + 104u), c.f[2]);
    st32((c.r[29].w[0] + 120u), c.f[1]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    st32((c.r[29].w[0] + 108u), 0u);
    st32((c.r[29].w[0] + 124u), 0u);
    st32((c.r[29].w[0] + 140u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4400u); set32(c.r[4], ld32((c.r[16].w[0] + 1892u)));  if (depth < kMaxDepth) unit_008A(c, 146u, depth + 1u); else { c.pc = 0x0032B080u; return; } if (c.pc != 0x004D4400u) [[unlikely]] return; }
L_004D4400:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D440Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x003275C0u; return; } if (c.pc != 0x004D440Cu) [[unlikely]] return; }
L_004D440C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4414u); set32(c.r[4], ld32((c.r[16].w[0] + 1892u)));  if (depth < kMaxDepth) unit_008A(c, 146u, depth + 1u); else { c.pc = 0x0032B080u; return; } if (c.pc != 0x004D4414u) [[unlikely]] return; }
L_004D4414:
    c.f[2] = ld32((c.r[16].w[0] + 1448u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 1440u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = 0u;
    c.f[13] = ld32((c.r[16].w[0] + 1456u));
    c.f[1] = c.r[2].w[0];
    c.f[2] = c.f[2] ^ fp::kSign;
    c.facc = fp::add(c.f[12], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4440u); c.f[14] = fp::add(c.facc, fp::mul(c.f[1], c.f[2]));  if (depth < kMaxDepth) unit_0089(c, 204u, depth + 1u); else { c.pc = 0x003276B0u; return; } if (c.pc != 0x004D4440u) [[unlikely]] return; }
L_004D4440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4448u); set32(c.r[4], ld32((c.r[16].w[0] + 1896u)));  if (depth < kMaxDepth) unit_008A(c, 146u, depth + 1u); else { c.pc = 0x0032B080u; return; } if (c.pc != 0x004D4448u) [[unlikely]] return; }
L_004D4448:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4454u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x003275C0u; return; } if (c.pc != 0x004D4454u) [[unlikely]] return; }
L_004D4454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D445Cu); set32(c.r[4], ld32((c.r[16].w[0] + 1896u)));  if (depth < kMaxDepth) unit_008A(c, 146u, depth + 1u); else { c.pc = 0x0032B080u; return; } if (c.pc != 0x004D445Cu) [[unlikely]] return; }
L_004D445C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[16].w[0] + 1448u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 1440u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[13] = ld32((c.r[16].w[0] + 1456u));
    c.f[12] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4484u); c.f[14] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0089(c, 204u, depth + 1u); else { c.pc = 0x003276B0u; return; } if (c.pc != 0x004D4484u) [[unlikely]] return; }
L_004D4484:
    set32(c.r[2], ld32((c.r[16].w[0] + 2304u)));
    c.budget -= 1;
L_004D4488:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4498u); set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008A(c, 146u, depth + 1u); else { c.pc = 0x0032B080u; return; } if (c.pc != 0x004D4498u) [[unlikely]] return; }
L_004D4498:
    c.f[2] = ld32((c.r[16].w[0] + 1448u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 1440u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[13] = ld32((c.r[16].w[0] + 1456u));
    c.f[12] = 0u;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D44C4u); c.f[14] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0089(c, 204u, depth + 1u); else { c.pc = 0x003276B0u; return; } if (c.pc != 0x004D44C4u) [[unlikely]] return; }
L_004D44C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_004D44E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4500u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F5(c, 9u, depth + 1u); else { c.pc = 0x004D41B0u; return; } if (c.pc != 0x004D4500u) [[unlikely]] return; }
L_004D4500:
    set32(c.r[2], ld32((c.r[16].w[0] + 1868u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D450Cu); set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (depth < kMaxDepth) unit_008A(c, 37u, depth + 1u); else { c.pc = 0x00329760u; return; } if (c.pc != 0x004D450Cu) [[unlikely]] return; }
L_004D450C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 240u);
    st64((c.r[2].w[0] + 64u), c.r[3].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st64((c.r[2].w[0] + 72u), c.r[3].d[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1872u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D452Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x00327980u; return; } if (c.pc != 0x004D452Cu) [[unlikely]] return; }
L_004D452C:
    set32(c.r[2], ld32((c.r[16].w[0] + 1868u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D453Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 224u, depth + 1u); else { c.pc = 0x0033B350u; return; } if (c.pc != 0x004D453Cu) [[unlikely]] return; }
L_004D453C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4548u); st32((c.r[16].w[0] + 1876u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 224u, depth + 1u); else { c.pc = 0x0033B350u; return; } if (c.pc != 0x004D4548u) [[unlikely]] return; }
L_004D4548:
    st32((c.r[16].w[0] + 1880u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1872u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4558u); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 216u, depth + 1u); else { c.pc = 0x0033B250u; return; } if (c.pc != 0x004D4558u) [[unlikely]] return; }
L_004D4558:
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4564u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 170u, depth + 1u); else { c.pc = 0x0033AAF0u; return; } if (c.pc != 0x004D4564u) [[unlikely]] return; }
L_004D4564:
    set32(c.r[4], ld32((c.r[16].w[0] + 1880u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4570u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 170u, depth + 1u); else { c.pc = 0x0033AAF0u; return; } if (c.pc != 0x004D4570u) [[unlikely]] return; }
L_004D4570:
    set32(c.r[2], ld32((c.r[16].w[0] + 2304u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[2].w[0] - 2u);  if (t) { goto L_004D46C4; } }
L_004D457C:
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004D4638; } }
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_004D45B4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 1872u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D4670; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_004D45B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D45BCu);  if (depth < kMaxDepth) unit_008A(c, 149u, depth + 1u); else { c.pc = 0x0032B0F0u; return; } if (c.pc != 0x004D45BCu) [[unlikely]] return; }
L_004D45BC:
    c.r[1].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004D45F4; } }
    c.f[1] = ld32((c.r[16].w[0] + 1448u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = ld32((c.r[16].w[0] + 1440u));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[0] = 0u;
    c.f[2] = c.r[2].w[0];
    c.facc = fp::add(c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D45ECu); c.f[13] = fp::sub(c.facc, fp::mul(c.f[2], c.f[12]));  if (depth < kMaxDepth) unit_009A(c, 61u, depth + 1u); else { c.pc = 0x00369DE0u; return; } if (c.pc != 0x004D45ECu) [[unlikely]] return; }
L_004D45EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004D461C; } }
L_004D45F4:
    c.f[1] = ld32((c.r[16].w[0] + 1444u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = ld32((c.r[16].w[0] + 1440u));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[0] = 0u;
    c.f[2] = c.r[2].w[0];
    c.facc = fp::add(c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4618u); c.f[13] = fp::sub(c.facc, fp::mul(c.f[2], c.f[12]));  if (depth < kMaxDepth) unit_009A(c, 61u, depth + 1u); else { c.pc = 0x00369DE0u; return; } if (c.pc != 0x004D4618u) [[unlikely]] return; }
L_004D4618:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004D461C:
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[2], 0u + 32u);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 240ull;
    st64((c.r[17].w[0] + 72u), c.r[3].d[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st64((c.r[17].w[0] + 64u), c.r[2].d[0]);  if (t) { goto L_004D4670; } }
L_004D4638:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_004D4670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4648u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008A(c, 149u, depth + 1u); else { c.pc = 0x0032B0F0u; return; } if (c.pc != 0x004D4648u) [[unlikely]] return; }
L_004D4648:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 1872u)));
    c.f[12] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D465Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 19u, depth + 1u); else { c.pc = 0x00370710u; return; } if (c.pc != 0x004D465Cu) [[unlikely]] return; }
L_004D465C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 32u);
    st64((c.r[17].w[0] + 72u), c.r[2].d[0]);
    set32(c.r[2], 0u + 64u);
    st64((c.r[17].w[0] + 64u), c.r[2].d[0]);
    c.budget -= 5;
L_004D4670:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] - 1u);  goto L_004D46C4; }
    set32(c.r[5], ld32((c.r[16].w[0] + 1872u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4684u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x00327980u; return; } if (c.pc != 0x004D4684u) [[unlikely]] return; }
L_004D4684:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4690u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008A(c, 145u, depth + 1u); else { c.pc = 0x0032B070u; return; } if (c.pc != 0x004D4690u) [[unlikely]] return; }
L_004D4690:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D469Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 147u, depth + 1u); else { c.pc = 0x0032B090u; return; } if (c.pc != 0x004D469Cu) [[unlikely]] return; }
L_004D469C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D46A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008A(c, 144u, depth + 1u); else { c.pc = 0x0032B060u; return; } if (c.pc != 0x004D46A8u) [[unlikely]] return; }
L_004D46A8:
    set32(c.r[5], ld32((c.r[16].w[0] + 1876u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D46B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 208u, depth + 1u); else { c.pc = 0x00327770u; return; } if (c.pc != 0x004D46B4u) [[unlikely]] return; }
L_004D46B4:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 1884u), c.r[17].w[0]);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 4;
L_004D46C4:
    c.budget -= 2;
    if (c.r[19].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 2304u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D457Cu | kUnwind; return; } goto L_004D457C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 1872u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[1] = ld32((c.r[3].w[0] + 72u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D46E8u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_009C(c, 19u, depth + 1u); else { c.pc = 0x00370710u; return; } if (c.pc != 0x004D46E8u) [[unlikely]] return; }
L_004D46E8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 2304u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 1880u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1876u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4708u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 208u, depth + 1u); else { c.pc = 0x00327770u; return; } if (c.pc != 0x004D4708u) [[unlikely]] return; }
L_004D4708:
    set32(c.r[3], 0u + 32u);
    set32(c.r[2], 0u + 128u);
    st64((c.r[17].w[0] + 72u), c.r[3].d[0]);
    st64((c.r[17].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1872u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4724u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x00327980u; return; } if (c.pc != 0x004D4724u) [[unlikely]] return; }
L_004D4724:
    set32(c.r[2], ld32((c.r[16].w[0] + 1868u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4734u); c.f[12] = ld32((c.r[16].w[0] + 1440u));  if (depth < kMaxDepth) unit_009C(c, 19u, depth + 1u); else { c.pc = 0x00370710u; return; } if (c.pc != 0x004D4734u) [[unlikely]] return; }
L_004D4734:
    st32((c.r[16].w[0] + 1908u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1876u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4744u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 208u, depth + 1u); else { c.pc = 0x00327770u; return; } if (c.pc != 0x004D4744u) [[unlikely]] return; }
L_004D4744:
    c.r[2].d[0] = 0ull | 61440ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 1908u)));
    c.r[5].d[0] = c.r[2].d[0] << 16;
    set32(c.r[3], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st64((c.r[4].w[0] + 72u), c.r[5].d[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 1908u)));
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    st64((c.r[2].w[0] + 64u), c.r[3].d[0]);
    c.f[2] = ld32((c.r[16].w[0] + 1448u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1908u)));
    c.f[1] = ld32((c.r[16].w[0] + 1444u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D478Cu); c.f[14] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0089(c, 180u, depth + 1u); else { c.pc = 0x00327390u; return; } if (c.pc != 0x004D478Cu) [[unlikely]] return; }
L_004D478C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1908u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4798u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 11u, depth + 1u); else { c.pc = 0x003641F0u; return; } if (c.pc != 0x004D4798u) [[unlikely]] return; }
L_004D4798:
    set32(c.r[5], ld32((c.r[16].w[0] + 1872u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D47A4u); set32(c.r[4], ld32((c.r[16].w[0] + 1908u)));  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x00327980u; return; } if (c.pc != 0x004D47A4u) [[unlikely]] return; }
L_004D47A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 1868u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D47B4u); c.f[12] = ld32((c.r[16].w[0] + 1440u));  if (depth < kMaxDepth) unit_009C(c, 19u, depth + 1u); else { c.pc = 0x00370710u; return; } if (c.pc != 0x004D47B4u) [[unlikely]] return; }
L_004D47B4:
    st32((c.r[16].w[0] + 1912u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1876u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D47C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 208u, depth + 1u); else { c.pc = 0x00327770u; return; } if (c.pc != 0x004D47C4u) [[unlikely]] return; }
L_004D47C4:
    c.r[2].d[0] = 0ull | 61440ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 1912u)));
    c.r[5].d[0] = c.r[2].d[0] << 16;
    set32(c.r[3], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE800000u);
    st64((c.r[4].w[0] + 72u), c.r[5].d[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 1912u)));
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    st64((c.r[2].w[0] + 64u), c.r[3].d[0]);
    c.f[2] = ld32((c.r[16].w[0] + 1448u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1912u)));
    c.f[1] = ld32((c.r[16].w[0] + 1444u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D480Cu); c.f[14] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0089(c, 180u, depth + 1u); else { c.pc = 0x00327390u; return; } if (c.pc != 0x004D480Cu) [[unlikely]] return; }
L_004D480C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1912u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4818u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 11u, depth + 1u); else { c.pc = 0x003641F0u; return; } if (c.pc != 0x004D4818u) [[unlikely]] return; }
L_004D4818:
    set32(c.r[4], ld32((c.r[16].w[0] + 1912u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4824u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x00327980u; return; } if (c.pc != 0x004D4824u) [[unlikely]] return; }
L_004D4824:
    set32(c.r[2], ld32((c.r[16].w[0] + 1868u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4830u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_008A(c, 37u, depth + 1u); else { c.pc = 0x00329760u; return; } if (c.pc != 0x004D4830u) [[unlikely]] return; }
L_004D4830:
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[3], 0u + 16u);
    st64((c.r[2].w[0] + 64u), c.r[3].d[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1872u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4848u); set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x00327980u; return; } if (c.pc != 0x004D4848u) [[unlikely]] return; }
L_004D4848:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 2;
L_004D4850:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4868u); set32(c.r[17], c.r[3].w[0] + 36u);  if (depth < kMaxDepth) unit_009C(c, 49u, depth + 1u); else { c.pc = 0x00371B20u; return; } if (c.pc != 0x004D4868u) [[unlikely]] return; }
L_004D4868:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 16u);
    st64((c.r[2].w[0] + 64u), c.r[3].d[0]);
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = 0ull | 65280ull;
    c.r[3].d[0] = c.r[2].d[0] << 16;
    set32(c.r[2], ld32((c.r[17].w[0])));
    st64((c.r[2].w[0] + 72u), c.r[3].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4894u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 40u, depth + 1u); else { c.pc = 0x00371910u; return; } if (c.pc != 0x004D4894u) [[unlikely]] return; }
L_004D4894:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D48A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 38u, depth + 1u); else { c.pc = 0x003718A0u; return; } if (c.pc != 0x004D48A0u) [[unlikely]] return; }
L_004D48A0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D4850u | kUnwind; return; } goto L_004D4850; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D48C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 19u, depth + 1u); else { c.pc = 0x00370710u; return; } if (c.pc != 0x004D48C0u) [[unlikely]] return; }
L_004D48C0:
    st32((c.r[16].w[0] + 1916u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D48CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F5(c, 17u, depth + 1u); else { c.pc = 0x004D4280u; return; } if (c.pc != 0x004D48CCu) [[unlikely]] return; }
L_004D48CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004D48F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D490Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00F5(c, 9u, depth + 1u); else { c.pc = 0x004D41B0u; return; } if (c.pc != 0x004D490Cu) [[unlikely]] return; }
L_004D490C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004D4948; } }
L_004D4914:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 2296u)));  goto L_004D493C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4938u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D4938u) [[unlikely]] return; }
L_004D4938:
    set32(c.r[2], ld32((c.r[18].w[0] + 2296u)));
    c.budget -= 1;
L_004D493C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 3;
L_004D4948:
    set32(c.r[2], ld32((c.r[18].w[0] + 2300u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 2296u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D4914u | kUnwind; return; } goto L_004D4914; }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1183u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 2296u)));  goto L_004D49C4; }
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D49C0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 320u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004D49C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 1384u), 0u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D49ACu); st8((c.r[18].w[0] + 1183u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0010(c, 349u, depth + 1u); else { c.pc = 0x00142BB0u; return; } if (c.pc != 0x004D49ACu) [[unlikely]] return; }
L_004D49AC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26860u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D49C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D49C0u);  if (depth < kMaxDepth) unit_00B6(c, 131u, depth + 1u); else { c.pc = 0x003D9920u; return; } if (c.pc != 0x004D49C0u) [[unlikely]] return; }
L_004D49C0:
    set32(c.r[4], ld32((c.r[18].w[0] + 2296u)));
    c.budget -= 1;
L_004D49C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D49CCu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004D49CCu) [[unlikely]] return; }
L_004D49CC:
    set32(c.r[4], ld32((c.r[18].w[0] + 2228u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 2228u), 0u);  goto L_004D49EC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D49E8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D49E8u) [[unlikely]] return; }
L_004D49E8:
    st32((c.r[18].w[0] + 2228u), 0u);
    c.budget -= 1;
L_004D49EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004D4A10:
    set32(c.r[29], c.r[29].w[0] - 4080u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 4946u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4A50u); set32(c.r[4], c.r[29].w[0] + 3584u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D4A50u) [[unlikely]] return; }
L_004D4A50:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 3584u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4A64u); set32(c.r[5], c.r[29].w[0] + 4076u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D4A64u) [[unlikely]] return; }
L_004D4A64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 4076u));  goto L_004D4A8C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 3610u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D4A88; } }
    c.f[12] = ld32((c.r[29].w[0] + 4076u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4A88u); set32(c.r[4], c.r[29].w[0] + 3584u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D4A88u) [[unlikely]] return; }
L_004D4A88:
    c.f[0] = ld32((c.r[29].w[0] + 4076u));
    c.budget -= 1;
L_004D4A8C:
    set32(c.r[4], c.r[29].w[0] + 3584u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4AA0u); st32((c.r[18].w[0] + 1392u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D4AA0u) [[unlikely]] return; }
L_004D4AA0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 3552u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4AB4u); set32(c.r[6], c.r[6].w[0] + 4959u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D4AB4u) [[unlikely]] return; }
L_004D4AB4:
    set32(c.r[4], c.r[29].w[0] + 3552u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4AC0u); set32(c.r[5], c.r[29].w[0] + 4072u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D4AC0u) [[unlikely]] return; }
L_004D4AC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 4072u));  goto L_004D4AE8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 3578u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D4AE4; } }
    c.f[12] = ld32((c.r[29].w[0] + 4072u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4AE4u); set32(c.r[4], c.r[29].w[0] + 3552u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D4AE4u) [[unlikely]] return; }
L_004D4AE4:
    c.f[0] = ld32((c.r[29].w[0] + 4072u));
    c.budget -= 1;
L_004D4AE8:
    set32(c.r[4], c.r[29].w[0] + 3552u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4AF8u); st32((c.r[18].w[0] + 1428u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D4AF8u) [[unlikely]] return; }
L_004D4AF8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 3520u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4B0Cu); set32(c.r[6], c.r[6].w[0] + 4972u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D4B0Cu) [[unlikely]] return; }
L_004D4B0C:
    set32(c.r[4], c.r[29].w[0] + 3520u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4B18u); set32(c.r[5], c.r[29].w[0] + 4068u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D4B18u) [[unlikely]] return; }
L_004D4B18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 4068u));  goto L_004D4B40; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 3546u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D4B3C; } }
    c.f[12] = ld32((c.r[29].w[0] + 4068u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4B3Cu); set32(c.r[4], c.r[29].w[0] + 3520u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D4B3Cu) [[unlikely]] return; }
L_004D4B3C:
    c.f[0] = ld32((c.r[29].w[0] + 4068u));
    c.budget -= 1;
L_004D4B40:
    set32(c.r[4], c.r[29].w[0] + 3520u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4B50u); st32((c.r[18].w[0] + 1432u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D4B50u) [[unlikely]] return; }
L_004D4B50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[19], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] + 4989u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4B64u); st32((c.r[29].w[0] + 4064u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004D4B64u) [[unlikely]] return; }
L_004D4B64:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 4060u);  goto L_004D4B78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004D4B9C; } }
L_004D4B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4B80u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004D4B80u) [[unlikely]] return; }
L_004D4B80:
    set32(c.r[5], c.r[19].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 4056u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4B90u); set32(c.r[6], c.r[29].w[0] + 4064u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004D4B90u) [[unlikely]] return; }
L_004D4B90:
    set32(c.r[4], c.r[29].w[0] + 4060u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4B9Cu); set32(c.r[5], c.r[29].w[0] + 4056u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004D4B9Cu) [[unlikely]] return; }
L_004D4B9C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D4BC4; } }
    c.f[0] = ld32((c.r[18].w[0] + 1428u));
    c.f[1] = ld32((c.r[28].w[0] - 31604u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 1428u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1432u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 1432u), c.f[0]);
    c.budget -= 7;
L_004D4BC4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 3488u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4BD8u); set32(c.r[6], c.r[6].w[0] + 5008u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D4BD8u) [[unlikely]] return; }
L_004D4BD8:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 3488u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4BECu); set32(c.r[5], c.r[29].w[0] + 4052u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D4BECu) [[unlikely]] return; }
L_004D4BEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 4052u));  goto L_004D4C14; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 3514u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D4C10; } }
    c.f[12] = ld32((c.r[29].w[0] + 4052u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4C10u); set32(c.r[4], c.r[29].w[0] + 3488u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D4C10u) [[unlikely]] return; }
L_004D4C10:
    c.f[0] = ld32((c.r[29].w[0] + 4052u));
    c.budget -= 1;
L_004D4C14:
    set32(c.r[4], c.r[29].w[0] + 3488u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4C28u); st32((c.r[18].w[0] + 1396u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D4C28u) [[unlikely]] return; }
L_004D4C28:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 3456u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4C3Cu); set32(c.r[6], c.r[6].w[0] + 5021u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D4C3Cu) [[unlikely]] return; }
L_004D4C3C:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 3456u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4C50u); set32(c.r[5], c.r[29].w[0] + 4048u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D4C50u) [[unlikely]] return; }
L_004D4C50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 4048u));  goto L_004D4C78; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 3482u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D4C74; } }
    c.f[12] = ld32((c.r[29].w[0] + 4048u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4C74u); set32(c.r[4], c.r[29].w[0] + 3456u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D4C74u) [[unlikely]] return; }
L_004D4C74:
    c.f[0] = ld32((c.r[29].w[0] + 4048u));
    c.budget -= 1;
L_004D4C78:
    set32(c.r[4], c.r[29].w[0] + 3456u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4C8Cu); st32((c.r[18].w[0] + 1400u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D4C8Cu) [[unlikely]] return; }
L_004D4C8C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 3424u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4CA0u); set32(c.r[6], c.r[6].w[0] + 5036u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D4CA0u) [[unlikely]] return; }
L_004D4CA0:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 3424u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4CB4u); set32(c.r[5], c.r[29].w[0] + 4044u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D4CB4u) [[unlikely]] return; }
L_004D4CB4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 4044u));  goto L_004D4CDC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 3450u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D4CD8; } }
    c.f[12] = ld32((c.r[29].w[0] + 4044u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4CD8u); set32(c.r[4], c.r[29].w[0] + 3424u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D4CD8u) [[unlikely]] return; }
L_004D4CD8:
    c.f[0] = ld32((c.r[29].w[0] + 4044u));
    c.budget -= 1;
L_004D4CDC:
    set32(c.r[4], c.r[29].w[0] + 3424u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4CF0u); st32((c.r[18].w[0] + 1408u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D4CF0u) [[unlikely]] return; }
L_004D4CF0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 3392u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4D04u); set32(c.r[6], c.r[6].w[0] + 5051u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D4D04u) [[unlikely]] return; }
L_004D4D04:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 3392u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4D18u); set32(c.r[5], c.r[29].w[0] + 4040u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D4D18u) [[unlikely]] return; }
L_004D4D18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 4040u));  goto L_004D4D40; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 3418u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D4D3C; } }
    c.f[12] = ld32((c.r[29].w[0] + 4040u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4D3Cu); set32(c.r[4], c.r[29].w[0] + 3392u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D4D3Cu) [[unlikely]] return; }
L_004D4D3C:
    c.f[0] = ld32((c.r[29].w[0] + 4040u));
    c.budget -= 1;
L_004D4D40:
    set32(c.r[4], c.r[29].w[0] + 3392u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4D54u); st32((c.r[18].w[0] + 1404u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D4D54u) [[unlikely]] return; }
L_004D4D54:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 3360u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4D68u); set32(c.r[6], c.r[6].w[0] + 5066u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D4D68u) [[unlikely]] return; }
L_004D4D68:
    set32(c.r[4], c.r[29].w[0] + 3360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4D74u); set32(c.r[5], c.r[29].w[0] + 4036u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D4D74u) [[unlikely]] return; }
L_004D4D74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 4036u));  goto L_004D4D9C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 3386u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D4D98; } }
    c.f[12] = ld32((c.r[29].w[0] + 4036u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4D98u); set32(c.r[4], c.r[29].w[0] + 3360u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D4D98u) [[unlikely]] return; }
L_004D4D98:
    c.f[0] = ld32((c.r[29].w[0] + 4036u));
    c.budget -= 1;
L_004D4D9C:
    set32(c.r[4], c.r[29].w[0] + 3360u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4DACu); st32((c.r[18].w[0] + 1420u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D4DACu) [[unlikely]] return; }
L_004D4DAC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 3328u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4DC0u); set32(c.r[6], c.r[6].w[0] + 5090u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D4DC0u) [[unlikely]] return; }
L_004D4DC0:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 3328u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4DD4u); set32(c.r[5], c.r[29].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D4DD4u) [[unlikely]] return; }
L_004D4DD4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 4032u));  goto L_004D4DFC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 3354u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D4DF8; } }
    c.f[12] = ld32((c.r[29].w[0] + 4032u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4DF8u); set32(c.r[4], c.r[29].w[0] + 3328u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D4DF8u) [[unlikely]] return; }
L_004D4DF8:
    c.f[0] = ld32((c.r[29].w[0] + 4032u));
    c.budget -= 1;
L_004D4DFC:
    set32(c.r[4], c.r[29].w[0] + 3328u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4E10u); st32((c.r[18].w[0] + 1416u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D4E10u) [[unlikely]] return; }
L_004D4E10:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 3296u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4E24u); set32(c.r[6], c.r[6].w[0] + 5108u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D4E24u) [[unlikely]] return; }
L_004D4E24:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 3296u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4E38u); set32(c.r[5], c.r[29].w[0] + 4028u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D4E38u) [[unlikely]] return; }
L_004D4E38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 4028u));  goto L_004D4E60; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 3322u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D4E5C; } }
    c.f[12] = ld32((c.r[29].w[0] + 4028u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4E5Cu); set32(c.r[4], c.r[29].w[0] + 3296u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D4E5Cu) [[unlikely]] return; }
L_004D4E5C:
    c.f[0] = ld32((c.r[29].w[0] + 4028u));
    c.budget -= 1;
L_004D4E60:
    set32(c.r[4], c.r[29].w[0] + 3296u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4E74u); st32((c.r[18].w[0] + 1412u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D4E74u) [[unlikely]] return; }
L_004D4E74:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 3264u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4E88u); set32(c.r[6], c.r[6].w[0] + 5126u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D4E88u) [[unlikely]] return; }
L_004D4E88:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 3264u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4E9Cu); set32(c.r[5], c.r[29].w[0] + 4024u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D4E9Cu) [[unlikely]] return; }
L_004D4E9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 4024u));  goto L_004D4EC4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 3290u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D4EC0; } }
    c.f[12] = ld32((c.r[29].w[0] + 4024u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4EC0u); set32(c.r[4], c.r[29].w[0] + 3264u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D4EC0u) [[unlikely]] return; }
L_004D4EC0:
    c.f[0] = ld32((c.r[29].w[0] + 4024u));
    c.budget -= 1;
L_004D4EC4:
    set32(c.r[4], c.r[29].w[0] + 3264u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4ED8u); st32((c.r[18].w[0] + 1440u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D4ED8u) [[unlikely]] return; }
L_004D4ED8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 3232u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4EECu); set32(c.r[6], c.r[6].w[0] + 5154u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D4EECu) [[unlikely]] return; }
L_004D4EEC:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 3232u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4F00u); set32(c.r[5], c.r[29].w[0] + 4020u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D4F00u) [[unlikely]] return; }
L_004D4F00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 4020u));  goto L_004D4F28; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 3258u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D4F24; } }
    c.f[12] = ld32((c.r[29].w[0] + 4020u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4F24u); set32(c.r[4], c.r[29].w[0] + 3232u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D4F24u) [[unlikely]] return; }
L_004D4F24:
    c.f[0] = ld32((c.r[29].w[0] + 4020u));
    c.budget -= 1;
L_004D4F28:
    set32(c.r[4], c.r[29].w[0] + 3232u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4F3Cu); st32((c.r[18].w[0] + 1444u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D4F3Cu) [[unlikely]] return; }
L_004D4F3C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 3200u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4F50u); set32(c.r[6], c.r[6].w[0] + 5178u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D4F50u) [[unlikely]] return; }
L_004D4F50:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 3200u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4F64u); set32(c.r[5], c.r[29].w[0] + 4016u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D4F64u) [[unlikely]] return; }
L_004D4F64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 4016u));  goto L_004D4F8C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 3226u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D4F88; } }
    c.f[12] = ld32((c.r[29].w[0] + 4016u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4F88u); set32(c.r[4], c.r[29].w[0] + 3200u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D4F88u) [[unlikely]] return; }
L_004D4F88:
    c.f[0] = ld32((c.r[29].w[0] + 4016u));
    c.budget -= 1;
L_004D4F8C:
    set32(c.r[4], c.r[29].w[0] + 3200u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4FA0u); st32((c.r[18].w[0] + 1448u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D4FA0u) [[unlikely]] return; }
L_004D4FA0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 3168u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4FB4u); set32(c.r[6], c.r[6].w[0] + 5203u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D4FB4u) [[unlikely]] return; }
L_004D4FB4:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 3168u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4FC8u); set32(c.r[5], c.r[29].w[0] + 4012u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D4FC8u) [[unlikely]] return; }
L_004D4FC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 4012u));  goto L_004D4FF0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 3194u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D4FEC; } }
    c.f[12] = ld32((c.r[29].w[0] + 4012u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D4FECu); set32(c.r[4], c.r[29].w[0] + 3168u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D4FECu) [[unlikely]] return; }
L_004D4FEC:
    c.f[0] = ld32((c.r[29].w[0] + 4012u));
    c.budget -= 1;
L_004D4FF0:
    set32(c.r[4], c.r[29].w[0] + 3168u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5004u); st32((c.r[18].w[0] + 1452u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5004u) [[unlikely]] return; }
L_004D5004:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 3136u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5018u); set32(c.r[6], c.r[6].w[0] + 5228u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5018u) [[unlikely]] return; }
L_004D5018:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 3136u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D502Cu); set32(c.r[5], c.r[29].w[0] + 4008u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D502Cu) [[unlikely]] return; }
L_004D502C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 4008u));  goto L_004D5054; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 3162u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5050; } }
    c.f[12] = ld32((c.r[29].w[0] + 4008u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5050u); set32(c.r[4], c.r[29].w[0] + 3136u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5050u) [[unlikely]] return; }
L_004D5050:
    c.f[0] = ld32((c.r[29].w[0] + 4008u));
    c.budget -= 1;
L_004D5054:
    set32(c.r[4], c.r[29].w[0] + 3136u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5068u); st32((c.r[18].w[0] + 1456u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5068u) [[unlikely]] return; }
L_004D5068:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 3104u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D507Cu); set32(c.r[6], c.r[6].w[0] + 5258u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D507Cu) [[unlikely]] return; }
L_004D507C:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 3104u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5090u); set32(c.r[5], c.r[29].w[0] + 4004u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5090u) [[unlikely]] return; }
L_004D5090:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 4004u));  goto L_004D50B8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 3130u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D50B4; } }
    c.f[12] = ld32((c.r[29].w[0] + 4004u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D50B4u); set32(c.r[4], c.r[29].w[0] + 3104u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D50B4u) [[unlikely]] return; }
L_004D50B4:
    c.f[0] = ld32((c.r[29].w[0] + 4004u));
    c.budget -= 1;
L_004D50B8:
    set32(c.r[4], c.r[29].w[0] + 3104u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D50CCu); st32((c.r[18].w[0] + 1460u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D50CCu) [[unlikely]] return; }
L_004D50CC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 3072u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D50E0u); set32(c.r[6], c.r[6].w[0] + 5273u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D50E0u) [[unlikely]] return; }
L_004D50E0:
    set32(c.r[4], c.r[29].w[0] + 3072u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D50ECu); set32(c.r[5], c.r[29].w[0] + 4000u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D50ECu) [[unlikely]] return; }
L_004D50EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 4000u));  goto L_004D5114; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 3098u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5110; } }
    c.f[12] = ld32((c.r[29].w[0] + 4000u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5110u); set32(c.r[4], c.r[29].w[0] + 3072u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5110u) [[unlikely]] return; }
L_004D5110:
    c.f[0] = ld32((c.r[29].w[0] + 4000u));
    c.budget -= 1;
L_004D5114:
    set32(c.r[4], c.r[29].w[0] + 3072u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5124u); st32((c.r[18].w[0] + 1464u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5124u) [[unlikely]] return; }
L_004D5124:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 3040u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5138u); set32(c.r[6], c.r[6].w[0] + 5287u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5138u) [[unlikely]] return; }
L_004D5138:
    set32(c.r[4], c.r[29].w[0] + 3040u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5144u); set32(c.r[5], c.r[29].w[0] + 3996u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5144u) [[unlikely]] return; }
L_004D5144:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3996u));  goto L_004D516C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 3066u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5168; } }
    c.f[12] = ld32((c.r[29].w[0] + 3996u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5168u); set32(c.r[4], c.r[29].w[0] + 3040u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5168u) [[unlikely]] return; }
L_004D5168:
    c.f[0] = ld32((c.r[29].w[0] + 3996u));
    c.budget -= 1;
L_004D516C:
    set32(c.r[4], c.r[29].w[0] + 3040u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D517Cu); st32((c.r[18].w[0] + 1468u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D517Cu) [[unlikely]] return; }
L_004D517C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 3008u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5190u); set32(c.r[6], c.r[6].w[0] + 5315u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5190u) [[unlikely]] return; }
L_004D5190:
    set32(c.r[4], c.r[29].w[0] + 3008u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D519Cu); set32(c.r[5], c.r[29].w[0] + 3992u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D519Cu) [[unlikely]] return; }
L_004D519C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3992u));  goto L_004D51C4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 3034u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D51C0; } }
    c.f[12] = ld32((c.r[29].w[0] + 3992u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D51C0u); set32(c.r[4], c.r[29].w[0] + 3008u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D51C0u) [[unlikely]] return; }
L_004D51C0:
    c.f[0] = ld32((c.r[29].w[0] + 3992u));
    c.budget -= 1;
L_004D51C4:
    set32(c.r[4], c.r[29].w[0] + 3008u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D51D4u); st32((c.r[18].w[0] + 1472u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D51D4u) [[unlikely]] return; }
L_004D51D4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2976u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D51E8u); set32(c.r[6], c.r[6].w[0] + 5343u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D51E8u) [[unlikely]] return; }
L_004D51E8:
    set32(c.r[4], c.r[29].w[0] + 2976u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D51F4u); set32(c.r[5], c.r[29].w[0] + 3988u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D51F4u) [[unlikely]] return; }
L_004D51F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3988u));  goto L_004D521C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 3002u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5218; } }
    c.f[12] = ld32((c.r[29].w[0] + 3988u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5218u); set32(c.r[4], c.r[29].w[0] + 2976u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5218u) [[unlikely]] return; }
L_004D5218:
    c.f[0] = ld32((c.r[29].w[0] + 3988u));
    c.budget -= 1;
L_004D521C:
    set32(c.r[4], c.r[29].w[0] + 2976u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D522Cu); st32((c.r[18].w[0] + 1476u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D522Cu) [[unlikely]] return; }
L_004D522C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2944u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5240u); set32(c.r[6], c.r[6].w[0] + 5374u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5240u) [[unlikely]] return; }
L_004D5240:
    set32(c.r[4], c.r[29].w[0] + 2944u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D524Cu); set32(c.r[5], c.r[29].w[0] + 3984u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D524Cu) [[unlikely]] return; }
L_004D524C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3984u));  goto L_004D5274; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2970u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5270; } }
    c.f[12] = ld32((c.r[29].w[0] + 3984u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5270u); set32(c.r[4], c.r[29].w[0] + 2944u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5270u) [[unlikely]] return; }
L_004D5270:
    c.f[0] = ld32((c.r[29].w[0] + 3984u));
    c.budget -= 1;
L_004D5274:
    set32(c.r[4], c.r[29].w[0] + 2944u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5284u); st32((c.r[18].w[0] + 1480u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5284u) [[unlikely]] return; }
L_004D5284:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2912u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5298u); set32(c.r[6], c.r[6].w[0] + 5401u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5298u) [[unlikely]] return; }
L_004D5298:
    set32(c.r[4], c.r[29].w[0] + 2912u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D52A4u); set32(c.r[5], c.r[29].w[0] + 3980u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D52A4u) [[unlikely]] return; }
L_004D52A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3980u));  goto L_004D52CC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2938u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D52C8; } }
    c.f[12] = ld32((c.r[29].w[0] + 3980u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D52C8u); set32(c.r[4], c.r[29].w[0] + 2912u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D52C8u) [[unlikely]] return; }
L_004D52C8:
    c.f[0] = ld32((c.r[29].w[0] + 3980u));
    c.budget -= 1;
L_004D52CC:
    set32(c.r[4], c.r[29].w[0] + 2912u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D52DCu); st32((c.r[18].w[0] + 1484u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D52DCu) [[unlikely]] return; }
L_004D52DC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2880u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D52F0u); set32(c.r[6], c.r[6].w[0] + 5414u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D52F0u) [[unlikely]] return; }
L_004D52F0:
    set32(c.r[4], c.r[29].w[0] + 2880u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D52FCu); set32(c.r[5], c.r[29].w[0] + 3976u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D52FCu) [[unlikely]] return; }
L_004D52FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3976u));  goto L_004D5324; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2906u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5320; } }
    c.f[12] = ld32((c.r[29].w[0] + 3976u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5320u); set32(c.r[4], c.r[29].w[0] + 2880u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5320u) [[unlikely]] return; }
L_004D5320:
    c.f[0] = ld32((c.r[29].w[0] + 3976u));
    c.budget -= 1;
L_004D5324:
    set32(c.r[4], c.r[29].w[0] + 2880u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5334u); st32((c.r[18].w[0] + 1488u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5334u) [[unlikely]] return; }
L_004D5334:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2848u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5348u); set32(c.r[6], c.r[6].w[0] + 5435u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5348u) [[unlikely]] return; }
L_004D5348:
    set32(c.r[4], c.r[29].w[0] + 2848u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5354u); set32(c.r[5], c.r[29].w[0] + 3972u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5354u) [[unlikely]] return; }
L_004D5354:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3972u));  goto L_004D537C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2874u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5378; } }
    c.f[12] = ld32((c.r[29].w[0] + 3972u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5378u); set32(c.r[4], c.r[29].w[0] + 2848u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5378u) [[unlikely]] return; }
L_004D5378:
    c.f[0] = ld32((c.r[29].w[0] + 3972u));
    c.budget -= 1;
L_004D537C:
    set32(c.r[4], c.r[29].w[0] + 2848u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D538Cu); st32((c.r[18].w[0] + 1492u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D538Cu) [[unlikely]] return; }
L_004D538C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2816u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D53A0u); set32(c.r[6], c.r[6].w[0] + 5466u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D53A0u) [[unlikely]] return; }
L_004D53A0:
    set32(c.r[4], c.r[29].w[0] + 2816u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D53ACu); set32(c.r[5], c.r[29].w[0] + 3968u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D53ACu) [[unlikely]] return; }
L_004D53AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3968u));  goto L_004D53D4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2842u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D53D0; } }
    c.f[12] = ld32((c.r[29].w[0] + 3968u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D53D0u); set32(c.r[4], c.r[29].w[0] + 2816u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D53D0u) [[unlikely]] return; }
L_004D53D0:
    c.f[0] = ld32((c.r[29].w[0] + 3968u));
    c.budget -= 1;
L_004D53D4:
    set32(c.r[4], c.r[29].w[0] + 2816u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D53E4u); st32((c.r[18].w[0] + 1496u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D53E4u) [[unlikely]] return; }
L_004D53E4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2784u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D53F8u); set32(c.r[6], c.r[6].w[0] + 5490u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D53F8u) [[unlikely]] return; }
L_004D53F8:
    set32(c.r[4], c.r[29].w[0] + 2784u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5404u); set32(c.r[5], c.r[29].w[0] + 3964u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5404u) [[unlikely]] return; }
L_004D5404:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3964u));  goto L_004D542C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2810u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5428; } }
    c.f[12] = ld32((c.r[29].w[0] + 3964u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5428u); set32(c.r[4], c.r[29].w[0] + 2784u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5428u) [[unlikely]] return; }
L_004D5428:
    c.f[0] = ld32((c.r[29].w[0] + 3964u));
    c.budget -= 1;
L_004D542C:
    set32(c.r[4], c.r[29].w[0] + 2784u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D543Cu); st32((c.r[18].w[0] + 1500u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D543Cu) [[unlikely]] return; }
L_004D543C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2752u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5450u); set32(c.r[6], c.r[6].w[0] + 5515u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5450u) [[unlikely]] return; }
L_004D5450:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 2752u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5464u); set32(c.r[5], c.r[29].w[0] + 3960u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5464u) [[unlikely]] return; }
L_004D5464:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3960u));  goto L_004D548C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2778u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5488; } }
    c.f[12] = ld32((c.r[29].w[0] + 3960u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5488u); set32(c.r[4], c.r[29].w[0] + 2752u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5488u) [[unlikely]] return; }
L_004D5488:
    c.f[0] = ld32((c.r[29].w[0] + 3960u));
    c.budget -= 1;
L_004D548C:
    set32(c.r[4], c.r[29].w[0] + 2752u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D54A0u); st32((c.r[18].w[0] + 1504u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D54A0u) [[unlikely]] return; }
L_004D54A0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2720u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D54B4u); set32(c.r[6], c.r[6].w[0] + 5534u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D54B4u) [[unlikely]] return; }
L_004D54B4:
    set32(c.r[4], c.r[29].w[0] + 2720u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D54C0u); set32(c.r[5], c.r[29].w[0] + 3956u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D54C0u) [[unlikely]] return; }
L_004D54C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3956u));  goto L_004D54E8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2746u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D54E4; } }
    c.f[12] = ld32((c.r[29].w[0] + 3956u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D54E4u); set32(c.r[4], c.r[29].w[0] + 2720u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D54E4u) [[unlikely]] return; }
L_004D54E4:
    c.f[0] = ld32((c.r[29].w[0] + 3956u));
    c.budget -= 1;
L_004D54E8:
    set32(c.r[4], c.r[29].w[0] + 2720u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D54F8u); st32((c.r[18].w[0] + 1508u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D54F8u) [[unlikely]] return; }
L_004D54F8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2688u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D550Cu); set32(c.r[6], c.r[6].w[0] + 5555u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D550Cu) [[unlikely]] return; }
L_004D550C:
    set32(c.r[4], c.r[29].w[0] + 2688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5518u); set32(c.r[5], c.r[29].w[0] + 3952u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5518u) [[unlikely]] return; }
L_004D5518:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3952u));  goto L_004D5540; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2714u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D553C; } }
    c.f[12] = ld32((c.r[29].w[0] + 3952u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D553Cu); set32(c.r[4], c.r[29].w[0] + 2688u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D553Cu) [[unlikely]] return; }
L_004D553C:
    c.f[0] = ld32((c.r[29].w[0] + 3952u));
    c.budget -= 1;
L_004D5540:
    set32(c.r[4], c.r[29].w[0] + 2688u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5550u); st32((c.r[18].w[0] + 1512u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5550u) [[unlikely]] return; }
L_004D5550:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2656u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5564u); set32(c.r[6], c.r[6].w[0] + 5578u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5564u) [[unlikely]] return; }
L_004D5564:
    set32(c.r[4], c.r[29].w[0] + 2656u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5570u); set32(c.r[5], c.r[29].w[0] + 3948u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5570u) [[unlikely]] return; }
L_004D5570:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3948u));  goto L_004D5598; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2682u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5594; } }
    c.f[12] = ld32((c.r[29].w[0] + 3948u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5594u); set32(c.r[4], c.r[29].w[0] + 2656u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5594u) [[unlikely]] return; }
L_004D5594:
    c.f[0] = ld32((c.r[29].w[0] + 3948u));
    c.budget -= 1;
L_004D5598:
    set32(c.r[4], c.r[29].w[0] + 2656u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D55A8u); st32((c.r[18].w[0] + 1532u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D55A8u) [[unlikely]] return; }
L_004D55A8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2624u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D55BCu); set32(c.r[6], c.r[6].w[0] + 5595u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D55BCu) [[unlikely]] return; }
L_004D55BC:
    set32(c.r[4], c.r[29].w[0] + 2624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D55C8u); set32(c.r[5], c.r[29].w[0] + 3944u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D55C8u) [[unlikely]] return; }
L_004D55C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3944u));  goto L_004D55F0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2650u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D55EC; } }
    c.f[12] = ld32((c.r[29].w[0] + 3944u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D55ECu); set32(c.r[4], c.r[29].w[0] + 2624u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D55ECu) [[unlikely]] return; }
L_004D55EC:
    c.f[0] = ld32((c.r[29].w[0] + 3944u));
    c.budget -= 1;
L_004D55F0:
    set32(c.r[4], c.r[29].w[0] + 2624u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5600u); st32((c.r[18].w[0] + 1536u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5600u) [[unlikely]] return; }
L_004D5600:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2592u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5614u); set32(c.r[6], c.r[6].w[0] + 5615u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5614u) [[unlikely]] return; }
L_004D5614:
    set32(c.r[4], c.r[29].w[0] + 2592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5620u); set32(c.r[5], c.r[29].w[0] + 3940u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5620u) [[unlikely]] return; }
L_004D5620:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3940u));  goto L_004D5648; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2618u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5644; } }
    c.f[12] = ld32((c.r[29].w[0] + 3940u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5644u); set32(c.r[4], c.r[29].w[0] + 2592u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5644u) [[unlikely]] return; }
L_004D5644:
    c.f[0] = ld32((c.r[29].w[0] + 3940u));
    c.budget -= 1;
L_004D5648:
    set32(c.r[4], c.r[29].w[0] + 2592u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5658u); st32((c.r[18].w[0] + 1516u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5658u) [[unlikely]] return; }
L_004D5658:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2560u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D566Cu); set32(c.r[6], c.r[6].w[0] + 5645u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D566Cu) [[unlikely]] return; }
L_004D566C:
    set32(c.r[4], c.r[29].w[0] + 2560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5678u); set32(c.r[5], c.r[29].w[0] + 3936u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5678u) [[unlikely]] return; }
L_004D5678:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3936u));  goto L_004D56A0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2586u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D569C; } }
    c.f[12] = ld32((c.r[29].w[0] + 3936u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D569Cu); set32(c.r[4], c.r[29].w[0] + 2560u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D569Cu) [[unlikely]] return; }
L_004D569C:
    c.f[0] = ld32((c.r[29].w[0] + 3936u));
    c.budget -= 1;
L_004D56A0:
    set32(c.r[4], c.r[29].w[0] + 2560u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D56B0u); st32((c.r[18].w[0] + 1520u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D56B0u) [[unlikely]] return; }
L_004D56B0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2528u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D56C4u); set32(c.r[6], c.r[6].w[0] + 5675u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D56C4u) [[unlikely]] return; }
L_004D56C4:
    set32(c.r[4], c.r[29].w[0] + 2528u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D56D0u); set32(c.r[5], c.r[29].w[0] + 3932u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D56D0u) [[unlikely]] return; }
L_004D56D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3932u));  goto L_004D56F8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2554u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D56F4; } }
    c.f[12] = ld32((c.r[29].w[0] + 3932u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D56F4u); set32(c.r[4], c.r[29].w[0] + 2528u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D56F4u) [[unlikely]] return; }
L_004D56F4:
    c.f[0] = ld32((c.r[29].w[0] + 3932u));
    c.budget -= 1;
L_004D56F8:
    set32(c.r[4], c.r[29].w[0] + 2528u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5708u); st32((c.r[18].w[0] + 1524u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5708u) [[unlikely]] return; }
L_004D5708:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2496u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D571Cu); set32(c.r[6], c.r[6].w[0] + 5699u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D571Cu) [[unlikely]] return; }
L_004D571C:
    set32(c.r[4], c.r[29].w[0] + 2496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5728u); set32(c.r[5], c.r[29].w[0] + 3928u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5728u) [[unlikely]] return; }
L_004D5728:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3928u));  goto L_004D5750; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2522u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D574C; } }
    c.f[12] = ld32((c.r[29].w[0] + 3928u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D574Cu); set32(c.r[4], c.r[29].w[0] + 2496u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D574Cu) [[unlikely]] return; }
L_004D574C:
    c.f[0] = ld32((c.r[29].w[0] + 3928u));
    c.budget -= 1;
L_004D5750:
    set32(c.r[4], c.r[29].w[0] + 2496u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5760u); st32((c.r[18].w[0] + 1528u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5760u) [[unlikely]] return; }
L_004D5760:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2464u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5774u); set32(c.r[6], c.r[6].w[0] + 5725u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5774u) [[unlikely]] return; }
L_004D5774:
    set32(c.r[4], c.r[29].w[0] + 2464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5780u); set32(c.r[5], c.r[29].w[0] + 3924u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5780u) [[unlikely]] return; }
L_004D5780:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3924u));  goto L_004D57A8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2490u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D57A4; } }
    c.f[12] = ld32((c.r[29].w[0] + 3924u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D57A4u); set32(c.r[4], c.r[29].w[0] + 2464u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D57A4u) [[unlikely]] return; }
L_004D57A4:
    c.f[0] = ld32((c.r[29].w[0] + 3924u));
    c.budget -= 1;
L_004D57A8:
    set32(c.r[4], c.r[29].w[0] + 2464u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D57B8u); st32((c.r[18].w[0] + 1540u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D57B8u) [[unlikely]] return; }
L_004D57B8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2432u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D57CCu); set32(c.r[6], c.r[6].w[0] + 5753u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D57CCu) [[unlikely]] return; }
L_004D57CC:
    set32(c.r[4], c.r[29].w[0] + 2432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D57D8u); set32(c.r[5], c.r[29].w[0] + 3920u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D57D8u) [[unlikely]] return; }
L_004D57D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3920u));  goto L_004D5800; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2458u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D57FC; } }
    c.f[12] = ld32((c.r[29].w[0] + 3920u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D57FCu); set32(c.r[4], c.r[29].w[0] + 2432u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D57FCu) [[unlikely]] return; }
L_004D57FC:
    c.f[0] = ld32((c.r[29].w[0] + 3920u));
    c.budget -= 1;
L_004D5800:
    set32(c.r[4], c.r[29].w[0] + 2432u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5810u); st32((c.r[18].w[0] + 1544u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5810u) [[unlikely]] return; }
L_004D5810:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2400u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5824u); set32(c.r[6], c.r[6].w[0] + 5773u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5824u) [[unlikely]] return; }
L_004D5824:
    set32(c.r[4], c.r[29].w[0] + 2400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5830u); set32(c.r[5], c.r[29].w[0] + 3916u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5830u) [[unlikely]] return; }
L_004D5830:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3916u));  goto L_004D5858; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2426u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5854; } }
    c.f[12] = ld32((c.r[29].w[0] + 3916u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5854u); set32(c.r[4], c.r[29].w[0] + 2400u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5854u) [[unlikely]] return; }
L_004D5854:
    c.f[0] = ld32((c.r[29].w[0] + 3916u));
    c.budget -= 1;
L_004D5858:
    set32(c.r[4], c.r[29].w[0] + 2400u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5868u); st32((c.r[18].w[0] + 1548u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5868u) [[unlikely]] return; }
L_004D5868:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2368u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D587Cu); set32(c.r[6], c.r[6].w[0] + 5799u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D587Cu) [[unlikely]] return; }
L_004D587C:
    set32(c.r[4], c.r[29].w[0] + 2368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5888u); set32(c.r[5], c.r[29].w[0] + 3912u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5888u) [[unlikely]] return; }
L_004D5888:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3912u));  goto L_004D58B0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2394u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D58AC; } }
    c.f[12] = ld32((c.r[29].w[0] + 3912u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D58ACu); set32(c.r[4], c.r[29].w[0] + 2368u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D58ACu) [[unlikely]] return; }
L_004D58AC:
    c.f[0] = ld32((c.r[29].w[0] + 3912u));
    c.budget -= 1;
L_004D58B0:
    set32(c.r[4], c.r[29].w[0] + 2368u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D58C0u); st32((c.r[18].w[0] + 1552u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D58C0u) [[unlikely]] return; }
L_004D58C0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2336u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D58D4u); set32(c.r[6], c.r[6].w[0] + 5823u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D58D4u) [[unlikely]] return; }
L_004D58D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 2336u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D58E8u); set32(c.r[5], c.r[29].w[0] + 3908u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D58E8u) [[unlikely]] return; }
L_004D58E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3908u));  goto L_004D5910; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2362u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D590C; } }
    c.f[12] = ld32((c.r[29].w[0] + 3908u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D590Cu); set32(c.r[4], c.r[29].w[0] + 2336u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D590Cu) [[unlikely]] return; }
L_004D590C:
    c.f[0] = ld32((c.r[29].w[0] + 3908u));
    c.budget -= 1;
L_004D5910:
    set32(c.r[4], c.r[29].w[0] + 2336u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5924u); st32((c.r[18].w[0] + 1556u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5924u) [[unlikely]] return; }
L_004D5924:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2304u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5938u); set32(c.r[6], c.r[6].w[0] + 5839u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5938u) [[unlikely]] return; }
L_004D5938:
    set32(c.r[4], c.r[29].w[0] + 2304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5944u); set32(c.r[5], c.r[29].w[0] + 3904u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5944u) [[unlikely]] return; }
L_004D5944:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3904u));  goto L_004D596C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2330u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5968; } }
    c.f[12] = ld32((c.r[29].w[0] + 3904u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5968u); set32(c.r[4], c.r[29].w[0] + 2304u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5968u) [[unlikely]] return; }
L_004D5968:
    c.f[0] = ld32((c.r[29].w[0] + 3904u));
    c.budget -= 1;
L_004D596C:
    set32(c.r[4], c.r[29].w[0] + 2304u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D597Cu); st32((c.r[18].w[0] + 1564u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D597Cu) [[unlikely]] return; }
L_004D597C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2272u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5990u); set32(c.r[6], c.r[6].w[0] + 5865u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5990u) [[unlikely]] return; }
L_004D5990:
    set32(c.r[4], c.r[29].w[0] + 2272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D599Cu); set32(c.r[5], c.r[29].w[0] + 3900u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D599Cu) [[unlikely]] return; }
L_004D599C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3900u));  goto L_004D59C4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2298u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D59C0; } }
    c.f[12] = ld32((c.r[29].w[0] + 3900u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D59C0u); set32(c.r[4], c.r[29].w[0] + 2272u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D59C0u) [[unlikely]] return; }
L_004D59C0:
    c.f[0] = ld32((c.r[29].w[0] + 3900u));
    c.budget -= 1;
L_004D59C4:
    set32(c.r[4], c.r[29].w[0] + 2272u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D59D4u); st32((c.r[18].w[0] + 1560u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D59D4u) [[unlikely]] return; }
L_004D59D4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2240u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D59E8u); set32(c.r[6], c.r[6].w[0] + 5887u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D59E8u) [[unlikely]] return; }
L_004D59E8:
    set32(c.r[4], c.r[29].w[0] + 2240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D59F4u); set32(c.r[5], c.r[29].w[0] + 3896u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D59F4u) [[unlikely]] return; }
L_004D59F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3896u));  goto L_004D5A1C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2266u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5A18; } }
    c.f[12] = ld32((c.r[29].w[0] + 3896u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5A18u); set32(c.r[4], c.r[29].w[0] + 2240u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5A18u) [[unlikely]] return; }
L_004D5A18:
    c.f[0] = ld32((c.r[29].w[0] + 3896u));
    c.budget -= 1;
L_004D5A1C:
    set32(c.r[4], c.r[29].w[0] + 2240u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5A2Cu); st32((c.r[18].w[0] + 1568u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5A2Cu) [[unlikely]] return; }
L_004D5A2C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2208u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5A40u); set32(c.r[6], c.r[6].w[0] + 5902u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5A40u) [[unlikely]] return; }
L_004D5A40:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 2208u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5A54u); set32(c.r[5], c.r[29].w[0] + 3892u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5A54u) [[unlikely]] return; }
L_004D5A54:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3892u));  goto L_004D5A7C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2234u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5A78; } }
    c.f[12] = ld32((c.r[29].w[0] + 3892u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5A78u); set32(c.r[4], c.r[29].w[0] + 2208u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5A78u) [[unlikely]] return; }
L_004D5A78:
    c.f[0] = ld32((c.r[29].w[0] + 3892u));
    c.budget -= 1;
L_004D5A7C:
    set32(c.r[4], c.r[29].w[0] + 2208u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5A90u); st32((c.r[18].w[0] + 1572u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5A90u) [[unlikely]] return; }
L_004D5A90:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2176u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5AA4u); set32(c.r[6], c.r[6].w[0] + 5916u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5AA4u) [[unlikely]] return; }
L_004D5AA4:
    set32(c.r[4], c.r[29].w[0] + 2176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5AB0u); set32(c.r[5], c.r[29].w[0] + 3888u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5AB0u) [[unlikely]] return; }
L_004D5AB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3888u));  goto L_004D5AD8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2202u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5AD4; } }
    c.f[12] = ld32((c.r[29].w[0] + 3888u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5AD4u); set32(c.r[4], c.r[29].w[0] + 2176u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5AD4u) [[unlikely]] return; }
L_004D5AD4:
    c.f[0] = ld32((c.r[29].w[0] + 3888u));
    c.budget -= 1;
L_004D5AD8:
    set32(c.r[4], c.r[29].w[0] + 2176u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5AE8u); st32((c.r[18].w[0] + 1576u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5AE8u) [[unlikely]] return; }
L_004D5AE8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2144u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5AFCu); set32(c.r[6], c.r[6].w[0] + 5943u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5AFCu) [[unlikely]] return; }
L_004D5AFC:
    set32(c.r[4], c.r[29].w[0] + 2144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5B08u); set32(c.r[5], c.r[29].w[0] + 3884u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5B08u) [[unlikely]] return; }
L_004D5B08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3884u));  goto L_004D5B30; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2170u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5B2C; } }
    c.f[12] = ld32((c.r[29].w[0] + 3884u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5B2Cu); set32(c.r[4], c.r[29].w[0] + 2144u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5B2Cu) [[unlikely]] return; }
L_004D5B2C:
    c.f[0] = ld32((c.r[29].w[0] + 3884u));
    c.budget -= 1;
L_004D5B30:
    set32(c.r[4], c.r[29].w[0] + 2144u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5B40u); st32((c.r[18].w[0] + 1580u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5B40u) [[unlikely]] return; }
L_004D5B40:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2112u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5B54u); set32(c.r[6], c.r[6].w[0] + 5972u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5B54u) [[unlikely]] return; }
L_004D5B54:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 2112u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5B68u); set32(c.r[5], c.r[29].w[0] + 3880u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5B68u) [[unlikely]] return; }
L_004D5B68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3880u));  goto L_004D5B90; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2138u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5B8C; } }
    c.f[12] = ld32((c.r[29].w[0] + 3880u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5B8Cu); set32(c.r[4], c.r[29].w[0] + 2112u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5B8Cu) [[unlikely]] return; }
L_004D5B8C:
    c.f[0] = ld32((c.r[29].w[0] + 3880u));
    c.budget -= 1;
L_004D5B90:
    set32(c.r[4], c.r[29].w[0] + 2112u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5BA4u); st32((c.r[18].w[0] + 1584u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5BA4u) [[unlikely]] return; }
L_004D5BA4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2080u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5BB8u); set32(c.r[6], c.r[6].w[0] + 6004u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5BB8u) [[unlikely]] return; }
L_004D5BB8:
    set32(c.r[4], c.r[29].w[0] + 2080u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5BC4u); set32(c.r[5], c.r[29].w[0] + 3876u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5BC4u) [[unlikely]] return; }
L_004D5BC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3876u));  goto L_004D5BEC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2106u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5BE8; } }
    c.f[12] = ld32((c.r[29].w[0] + 3876u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5BE8u); set32(c.r[4], c.r[29].w[0] + 2080u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5BE8u) [[unlikely]] return; }
L_004D5BE8:
    c.f[0] = ld32((c.r[29].w[0] + 3876u));
    c.budget -= 1;
L_004D5BEC:
    set32(c.r[4], c.r[29].w[0] + 2080u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5BFCu); st32((c.r[18].w[0] + 1588u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5BFCu) [[unlikely]] return; }
L_004D5BFC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2048u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5C10u); set32(c.r[6], c.r[6].w[0] + 6031u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5C10u) [[unlikely]] return; }
L_004D5C10:
    set32(c.r[4], c.r[29].w[0] + 2048u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5C1Cu); set32(c.r[5], c.r[29].w[0] + 3872u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5C1Cu) [[unlikely]] return; }
L_004D5C1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3872u));  goto L_004D5C44; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2074u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5C40; } }
    c.f[12] = ld32((c.r[29].w[0] + 3872u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5C40u); set32(c.r[4], c.r[29].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5C40u) [[unlikely]] return; }
L_004D5C40:
    c.f[0] = ld32((c.r[29].w[0] + 3872u));
    c.budget -= 1;
L_004D5C44:
    set32(c.r[4], c.r[29].w[0] + 2048u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5C54u); st32((c.r[18].w[0] + 1592u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5C54u) [[unlikely]] return; }
L_004D5C54:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 2016u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5C68u); set32(c.r[6], c.r[6].w[0] + 6059u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5C68u) [[unlikely]] return; }
L_004D5C68:
    set32(c.r[4], c.r[29].w[0] + 2016u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5C74u); set32(c.r[5], c.r[29].w[0] + 3868u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5C74u) [[unlikely]] return; }
L_004D5C74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3868u));  goto L_004D5C9C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2042u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5C98; } }
    c.f[12] = ld32((c.r[29].w[0] + 3868u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5C98u); set32(c.r[4], c.r[29].w[0] + 2016u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5C98u) [[unlikely]] return; }
L_004D5C98:
    c.f[0] = ld32((c.r[29].w[0] + 3868u));
    c.budget -= 1;
L_004D5C9C:
    set32(c.r[4], c.r[29].w[0] + 2016u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5CACu); st32((c.r[18].w[0] + 1596u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5CACu) [[unlikely]] return; }
L_004D5CAC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1984u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5CC0u); set32(c.r[6], c.r[6].w[0] + 6092u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5CC0u) [[unlikely]] return; }
L_004D5CC0:
    set32(c.r[4], c.r[29].w[0] + 1984u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5CCCu); set32(c.r[5], c.r[29].w[0] + 3864u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5CCCu) [[unlikely]] return; }
L_004D5CCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3864u));  goto L_004D5CF4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2010u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5CF0; } }
    c.f[12] = ld32((c.r[29].w[0] + 3864u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5CF0u); set32(c.r[4], c.r[29].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5CF0u) [[unlikely]] return; }
L_004D5CF0:
    c.f[0] = ld32((c.r[29].w[0] + 3864u));
    c.budget -= 1;
L_004D5CF4:
    set32(c.r[4], c.r[29].w[0] + 1984u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5D04u); st32((c.r[18].w[0] + 1600u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5D04u) [[unlikely]] return; }
L_004D5D04:
    c.f[0] = ld32((c.r[18].w[0] + 1600u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1952u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 6116u);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    st32((c.r[18].w[0] + 1600u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1588u));
    st32((c.r[18].w[0] + 1200u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1592u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5D34u); st32((c.r[18].w[0] + 1204u), c.f[0]);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5D34u) [[unlikely]] return; }
L_004D5D34:
    set32(c.r[4], c.r[29].w[0] + 1952u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5D40u); set32(c.r[5], c.r[29].w[0] + 3860u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5D40u) [[unlikely]] return; }
L_004D5D40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3860u));  goto L_004D5D68; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1978u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5D64; } }
    c.f[12] = ld32((c.r[29].w[0] + 3860u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5D64u); set32(c.r[4], c.r[29].w[0] + 1952u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5D64u) [[unlikely]] return; }
L_004D5D64:
    c.f[0] = ld32((c.r[29].w[0] + 3860u));
    c.budget -= 1;
L_004D5D68:
    set32(c.r[4], c.r[29].w[0] + 1952u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5D78u); st32((c.r[18].w[0] + 1604u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5D78u) [[unlikely]] return; }
L_004D5D78:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1920u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5D8Cu); set32(c.r[6], c.r[6].w[0] + 6143u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5D8Cu) [[unlikely]] return; }
L_004D5D8C:
    set32(c.r[4], c.r[29].w[0] + 1920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5D98u); set32(c.r[5], c.r[29].w[0] + 3856u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5D98u) [[unlikely]] return; }
L_004D5D98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3856u));  goto L_004D5DC0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1946u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5DBC; } }
    c.f[12] = ld32((c.r[29].w[0] + 3856u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5DBCu); set32(c.r[4], c.r[29].w[0] + 1920u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5DBCu) [[unlikely]] return; }
L_004D5DBC:
    c.f[0] = ld32((c.r[29].w[0] + 3856u));
    c.budget -= 1;
L_004D5DC0:
    set32(c.r[4], c.r[29].w[0] + 1920u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5DD0u); st32((c.r[18].w[0] + 1608u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5DD0u) [[unlikely]] return; }
L_004D5DD0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1888u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5DE4u); set32(c.r[6], c.r[6].w[0] + 6174u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5DE4u) [[unlikely]] return; }
L_004D5DE4:
    set32(c.r[4], c.r[29].w[0] + 1888u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5DF0u); set32(c.r[5], c.r[29].w[0] + 3852u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5DF0u) [[unlikely]] return; }
L_004D5DF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3852u));  goto L_004D5E18; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1914u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5E14; } }
    c.f[12] = ld32((c.r[29].w[0] + 3852u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5E14u); set32(c.r[4], c.r[29].w[0] + 1888u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5E14u) [[unlikely]] return; }
L_004D5E14:
    c.f[0] = ld32((c.r[29].w[0] + 3852u));
    c.budget -= 1;
L_004D5E18:
    set32(c.r[4], c.r[29].w[0] + 1888u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5E28u); st32((c.r[18].w[0] + 1612u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5E28u) [[unlikely]] return; }
L_004D5E28:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1856u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5E3Cu); set32(c.r[6], c.r[6].w[0] + 6198u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5E3Cu) [[unlikely]] return; }
L_004D5E3C:
    set32(c.r[4], c.r[29].w[0] + 1856u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5E48u); set32(c.r[5], c.r[29].w[0] + 3848u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5E48u) [[unlikely]] return; }
L_004D5E48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3848u));  goto L_004D5E70; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1882u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5E6C; } }
    c.f[12] = ld32((c.r[29].w[0] + 3848u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5E6Cu); set32(c.r[4], c.r[29].w[0] + 1856u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5E6Cu) [[unlikely]] return; }
L_004D5E6C:
    c.f[0] = ld32((c.r[29].w[0] + 3848u));
    c.budget -= 1;
L_004D5E70:
    set32(c.r[4], c.r[29].w[0] + 1856u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5E80u); st32((c.r[18].w[0] + 1616u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5E80u) [[unlikely]] return; }
L_004D5E80:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1824u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5E94u); set32(c.r[6], c.r[6].w[0] + 6225u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5E94u) [[unlikely]] return; }
L_004D5E94:
    set32(c.r[4], c.r[29].w[0] + 1824u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5EA0u); set32(c.r[5], c.r[29].w[0] + 3844u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5EA0u) [[unlikely]] return; }
L_004D5EA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3844u));  goto L_004D5EC8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1850u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5EC4; } }
    c.f[12] = ld32((c.r[29].w[0] + 3844u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5EC4u); set32(c.r[4], c.r[29].w[0] + 1824u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5EC4u) [[unlikely]] return; }
L_004D5EC4:
    c.f[0] = ld32((c.r[29].w[0] + 3844u));
    c.budget -= 1;
L_004D5EC8:
    set32(c.r[4], c.r[29].w[0] + 1824u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5ED8u); st32((c.r[18].w[0] + 1620u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5ED8u) [[unlikely]] return; }
L_004D5ED8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1792u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5EECu); set32(c.r[6], c.r[6].w[0] + 6253u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5EECu) [[unlikely]] return; }
L_004D5EEC:
    set32(c.r[4], c.r[29].w[0] + 1792u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5EF8u); set32(c.r[5], c.r[29].w[0] + 3840u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5EF8u) [[unlikely]] return; }
L_004D5EF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3840u));  goto L_004D5F20; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1818u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5F1C; } }
    c.f[12] = ld32((c.r[29].w[0] + 3840u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5F1Cu); set32(c.r[4], c.r[29].w[0] + 1792u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5F1Cu) [[unlikely]] return; }
L_004D5F1C:
    c.f[0] = ld32((c.r[29].w[0] + 3840u));
    c.budget -= 1;
L_004D5F20:
    set32(c.r[4], c.r[29].w[0] + 1792u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5F30u); st32((c.r[18].w[0] + 1624u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5F30u) [[unlikely]] return; }
L_004D5F30:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1760u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5F44u); set32(c.r[6], c.r[6].w[0] + 6279u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5F44u) [[unlikely]] return; }
L_004D5F44:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 1760u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5F58u); set32(c.r[5], c.r[29].w[0] + 3836u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5F58u) [[unlikely]] return; }
L_004D5F58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3836u));  goto L_004D5F80; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1786u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5F7C; } }
    c.f[12] = ld32((c.r[29].w[0] + 3836u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5F7Cu); set32(c.r[4], c.r[29].w[0] + 1760u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5F7Cu) [[unlikely]] return; }
L_004D5F7C:
    c.f[0] = ld32((c.r[29].w[0] + 3836u));
    c.budget -= 1;
L_004D5F80:
    set32(c.r[4], c.r[29].w[0] + 1760u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5F94u); st32((c.r[18].w[0] + 1748u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5F94u) [[unlikely]] return; }
L_004D5F94:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1728u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5FA8u); set32(c.r[6], c.r[6].w[0] + 6307u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D5FA8u) [[unlikely]] return; }
L_004D5FA8:
    set32(c.r[4], c.r[29].w[0] + 1728u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5FB4u); set32(c.r[5], c.r[29].w[0] + 3832u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D5FB4u) [[unlikely]] return; }
L_004D5FB4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3832u));  goto L_004D5FDC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1754u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D5FD8; } }
    c.f[12] = ld32((c.r[29].w[0] + 3832u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5FD8u); set32(c.r[4], c.r[29].w[0] + 1728u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D5FD8u) [[unlikely]] return; }
L_004D5FD8:
    c.f[0] = ld32((c.r[29].w[0] + 3832u));
    c.budget -= 1;
L_004D5FDC:
    set32(c.r[4], c.r[29].w[0] + 1728u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D5FECu); st32((c.r[18].w[0] + 1752u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D5FECu) [[unlikely]] return; }
L_004D5FEC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1696u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6000u); set32(c.r[6], c.r[6].w[0] + 6338u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6000u) [[unlikely]] return; }
L_004D6000:
    set32(c.r[4], c.r[29].w[0] + 1696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D600Cu); set32(c.r[5], c.r[29].w[0] + 3828u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D600Cu) [[unlikely]] return; }
L_004D600C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3828u));  goto L_004D6034; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1722u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6030; } }
    c.f[12] = ld32((c.r[29].w[0] + 3828u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6030u); set32(c.r[4], c.r[29].w[0] + 1696u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6030u) [[unlikely]] return; }
L_004D6030:
    c.f[0] = ld32((c.r[29].w[0] + 3828u));
    c.budget -= 1;
L_004D6034:
    set32(c.r[4], c.r[29].w[0] + 1696u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6044u); st32((c.r[18].w[0] + 1756u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6044u) [[unlikely]] return; }
L_004D6044:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1664u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6058u); set32(c.r[6], c.r[6].w[0] + 6368u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6058u) [[unlikely]] return; }
L_004D6058:
    set32(c.r[4], c.r[29].w[0] + 1664u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6064u); set32(c.r[5], c.r[29].w[0] + 3824u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6064u) [[unlikely]] return; }
L_004D6064:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3824u));  goto L_004D608C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1690u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6088; } }
    c.f[12] = ld32((c.r[29].w[0] + 3824u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6088u); set32(c.r[4], c.r[29].w[0] + 1664u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6088u) [[unlikely]] return; }
L_004D6088:
    c.f[0] = ld32((c.r[29].w[0] + 3824u));
    c.budget -= 1;
L_004D608C:
    set32(c.r[4], c.r[29].w[0] + 1664u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D609Cu); st32((c.r[18].w[0] + 1760u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D609Cu) [[unlikely]] return; }
L_004D609C:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D6178; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[19], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] + 6397u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D60C8u); st32((c.r[29].w[0] + 3820u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004D60C8u) [[unlikely]] return; }
L_004D60C8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 3816u);  goto L_004D60DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004D6100; } }
L_004D60DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D60E4u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004D60E4u) [[unlikely]] return; }
L_004D60E4:
    set32(c.r[5], c.r[19].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 3812u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D60F4u); set32(c.r[6], c.r[29].w[0] + 3820u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004D60F4u) [[unlikely]] return; }
L_004D60F4:
    set32(c.r[4], c.r[29].w[0] + 3816u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6100u); set32(c.r[5], c.r[29].w[0] + 3812u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004D6100u) [[unlikely]] return; }
L_004D6100:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D6178; } }
    c.f[0] = ld32((c.r[18].w[0] + 1748u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[3] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[18].w[0] + 1748u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1752u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 1752u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1756u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 1756u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1416u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 1416u), c.f[0]);
    st32((c.r[18].w[0] + 1456u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1440u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 1440u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1444u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 1444u), c.f[0]);
    c.budget -= 27;
L_004D6178:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1632u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D618Cu); set32(c.r[6], c.r[6].w[0] + 6417u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D618Cu) [[unlikely]] return; }
L_004D618C:
    set32(c.r[4], c.r[29].w[0] + 1632u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6198u); set32(c.r[5], c.r[29].w[0] + 3808u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6198u) [[unlikely]] return; }
L_004D6198:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3808u));  goto L_004D61C0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1658u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D61BC; } }
    c.f[12] = ld32((c.r[29].w[0] + 3808u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D61BCu); set32(c.r[4], c.r[29].w[0] + 1632u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D61BCu) [[unlikely]] return; }
L_004D61BC:
    c.f[0] = ld32((c.r[29].w[0] + 3808u));
    c.budget -= 1;
L_004D61C0:
    set32(c.r[4], c.r[29].w[0] + 1632u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D61D0u); st32((c.r[18].w[0] + 1764u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D61D0u) [[unlikely]] return; }
L_004D61D0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1600u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D61E4u); set32(c.r[6], c.r[6].w[0] + 6429u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D61E4u) [[unlikely]] return; }
L_004D61E4:
    set32(c.r[4], c.r[29].w[0] + 1600u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D61F0u); set32(c.r[5], c.r[29].w[0] + 3804u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D61F0u) [[unlikely]] return; }
L_004D61F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3804u));  goto L_004D6218; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1626u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6214; } }
    c.f[12] = ld32((c.r[29].w[0] + 3804u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6214u); set32(c.r[4], c.r[29].w[0] + 1600u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6214u) [[unlikely]] return; }
L_004D6214:
    c.f[0] = ld32((c.r[29].w[0] + 3804u));
    c.budget -= 1;
L_004D6218:
    set32(c.r[4], c.r[29].w[0] + 1600u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6228u); st32((c.r[18].w[0] + 1768u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6228u) [[unlikely]] return; }
L_004D6228:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1568u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D623Cu); set32(c.r[6], c.r[6].w[0] + 6441u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D623Cu) [[unlikely]] return; }
L_004D623C:
    set32(c.r[4], c.r[29].w[0] + 1568u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6248u); set32(c.r[5], c.r[29].w[0] + 3800u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6248u) [[unlikely]] return; }
L_004D6248:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3800u));  goto L_004D6270; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1594u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D626C; } }
    c.f[12] = ld32((c.r[29].w[0] + 3800u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D626Cu); set32(c.r[4], c.r[29].w[0] + 1568u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D626Cu) [[unlikely]] return; }
L_004D626C:
    c.f[0] = ld32((c.r[29].w[0] + 3800u));
    c.budget -= 1;
L_004D6270:
    set32(c.r[4], c.r[29].w[0] + 1568u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6280u); st32((c.r[18].w[0] + 1772u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6280u) [[unlikely]] return; }
L_004D6280:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1536u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6294u); set32(c.r[6], c.r[6].w[0] + 6465u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6294u) [[unlikely]] return; }
L_004D6294:
    set32(c.r[4], c.r[29].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D62A0u); set32(c.r[5], c.r[29].w[0] + 3796u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D62A0u) [[unlikely]] return; }
L_004D62A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3796u));  goto L_004D62C8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1562u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D62C4; } }
    c.f[12] = ld32((c.r[29].w[0] + 3796u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D62C4u); set32(c.r[4], c.r[29].w[0] + 1536u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D62C4u) [[unlikely]] return; }
L_004D62C4:
    c.f[0] = ld32((c.r[29].w[0] + 3796u));
    c.budget -= 1;
L_004D62C8:
    set32(c.r[4], c.r[29].w[0] + 1536u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D62D8u); st32((c.r[18].w[0] + 1776u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D62D8u) [[unlikely]] return; }
L_004D62D8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1504u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D62ECu); set32(c.r[6], c.r[6].w[0] + 6486u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D62ECu) [[unlikely]] return; }
L_004D62EC:
    set32(c.r[4], c.r[29].w[0] + 1504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D62F8u); set32(c.r[5], c.r[29].w[0] + 3792u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D62F8u) [[unlikely]] return; }
L_004D62F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3792u));  goto L_004D6320; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1530u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D631C; } }
    c.f[12] = ld32((c.r[29].w[0] + 3792u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D631Cu); set32(c.r[4], c.r[29].w[0] + 1504u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D631Cu) [[unlikely]] return; }
L_004D631C:
    c.f[0] = ld32((c.r[29].w[0] + 3792u));
    c.budget -= 1;
L_004D6320:
    set32(c.r[4], c.r[29].w[0] + 1504u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6330u); st32((c.r[18].w[0] + 1780u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6330u) [[unlikely]] return; }
L_004D6330:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1472u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6344u); set32(c.r[6], c.r[6].w[0] + 6517u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6344u) [[unlikely]] return; }
L_004D6344:
    set32(c.r[4], c.r[29].w[0] + 1472u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6350u); set32(c.r[5], c.r[29].w[0] + 3788u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6350u) [[unlikely]] return; }
L_004D6350:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3788u));  goto L_004D6378; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1498u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6374; } }
    c.f[12] = ld32((c.r[29].w[0] + 3788u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6374u); set32(c.r[4], c.r[29].w[0] + 1472u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6374u) [[unlikely]] return; }
L_004D6374:
    c.f[0] = ld32((c.r[29].w[0] + 3788u));
    c.budget -= 1;
L_004D6378:
    set32(c.r[4], c.r[29].w[0] + 1472u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6388u); st32((c.r[18].w[0] + 1784u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6388u) [[unlikely]] return; }
L_004D6388:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1440u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D639Cu); set32(c.r[6], c.r[6].w[0] + 6539u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D639Cu) [[unlikely]] return; }
L_004D639C:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 1440u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D63B0u); set32(c.r[5], c.r[29].w[0] + 3784u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D63B0u) [[unlikely]] return; }
L_004D63B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3784u));  goto L_004D63D8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1466u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D63D4; } }
    c.f[12] = ld32((c.r[29].w[0] + 3784u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D63D4u); set32(c.r[4], c.r[29].w[0] + 1440u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D63D4u) [[unlikely]] return; }
L_004D63D4:
    c.f[0] = ld32((c.r[29].w[0] + 3784u));
    c.budget -= 1;
L_004D63D8:
    set32(c.r[4], c.r[29].w[0] + 1440u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D63ECu); st32((c.r[18].w[0] + 1788u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D63ECu) [[unlikely]] return; }
L_004D63EC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1408u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6400u); set32(c.r[6], c.r[6].w[0] + 6555u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6400u) [[unlikely]] return; }
L_004D6400:
    set32(c.r[4], c.r[29].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D640Cu); set32(c.r[5], c.r[29].w[0] + 3780u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D640Cu) [[unlikely]] return; }
L_004D640C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3780u));  goto L_004D6434; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1434u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6430; } }
    c.f[12] = ld32((c.r[29].w[0] + 3780u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6430u); set32(c.r[4], c.r[29].w[0] + 1408u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6430u) [[unlikely]] return; }
L_004D6430:
    c.f[0] = ld32((c.r[29].w[0] + 3780u));
    c.budget -= 1;
L_004D6434:
    set32(c.r[4], c.r[29].w[0] + 1408u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6444u); st32((c.r[18].w[0] + 1792u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6444u) [[unlikely]] return; }
L_004D6444:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1376u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6458u); set32(c.r[6], c.r[6].w[0] + 6577u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6458u) [[unlikely]] return; }
L_004D6458:
    set32(c.r[4], c.r[29].w[0] + 1376u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6464u); set32(c.r[5], c.r[29].w[0] + 3776u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6464u) [[unlikely]] return; }
L_004D6464:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3776u));  goto L_004D648C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1402u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6488; } }
    c.f[12] = ld32((c.r[29].w[0] + 3776u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6488u); set32(c.r[4], c.r[29].w[0] + 1376u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6488u) [[unlikely]] return; }
L_004D6488:
    c.f[0] = ld32((c.r[29].w[0] + 3776u));
    c.budget -= 1;
L_004D648C:
    set32(c.r[4], c.r[29].w[0] + 1376u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D649Cu); st32((c.r[18].w[0] + 1796u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D649Cu) [[unlikely]] return; }
L_004D649C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1344u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D64B0u); set32(c.r[6], c.r[6].w[0] + 6607u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D64B0u) [[unlikely]] return; }
L_004D64B0:
    set32(c.r[4], c.r[29].w[0] + 1344u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D64BCu); set32(c.r[5], c.r[29].w[0] + 3772u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D64BCu) [[unlikely]] return; }
L_004D64BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3772u));  goto L_004D64E4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1370u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D64E0; } }
    c.f[12] = ld32((c.r[29].w[0] + 3772u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D64E0u); set32(c.r[4], c.r[29].w[0] + 1344u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D64E0u) [[unlikely]] return; }
L_004D64E0:
    c.f[0] = ld32((c.r[29].w[0] + 3772u));
    c.budget -= 1;
L_004D64E4:
    set32(c.r[4], c.r[29].w[0] + 1344u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D64F4u); st32((c.r[18].w[0] + 1800u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D64F4u) [[unlikely]] return; }
L_004D64F4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1312u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6508u); set32(c.r[6], c.r[6].w[0] + 6631u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6508u) [[unlikely]] return; }
L_004D6508:
    set32(c.r[4], c.r[29].w[0] + 1312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6514u); set32(c.r[5], c.r[29].w[0] + 3768u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6514u) [[unlikely]] return; }
L_004D6514:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3768u));  goto L_004D653C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1338u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6538; } }
    c.f[12] = ld32((c.r[29].w[0] + 3768u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6538u); set32(c.r[4], c.r[29].w[0] + 1312u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6538u) [[unlikely]] return; }
L_004D6538:
    c.f[0] = ld32((c.r[29].w[0] + 3768u));
    c.budget -= 1;
L_004D653C:
    set32(c.r[4], c.r[29].w[0] + 1312u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D654Cu); st32((c.r[18].w[0] + 1804u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D654Cu) [[unlikely]] return; }
L_004D654C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1280u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6560u); set32(c.r[6], c.r[6].w[0] + 6656u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6560u) [[unlikely]] return; }
L_004D6560:
    set32(c.r[4], c.r[29].w[0] + 1280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D656Cu); set32(c.r[5], c.r[29].w[0] + 3764u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D656Cu) [[unlikely]] return; }
L_004D656C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3764u));  goto L_004D6594; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1306u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6590; } }
    c.f[12] = ld32((c.r[29].w[0] + 3764u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6590u); set32(c.r[4], c.r[29].w[0] + 1280u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6590u) [[unlikely]] return; }
L_004D6590:
    c.f[0] = ld32((c.r[29].w[0] + 3764u));
    c.budget -= 1;
L_004D6594:
    set32(c.r[4], c.r[29].w[0] + 1280u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D65A4u); st32((c.r[18].w[0] + 1808u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D65A4u) [[unlikely]] return; }
L_004D65A4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1248u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D65B8u); set32(c.r[6], c.r[6].w[0] + 6683u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D65B8u) [[unlikely]] return; }
L_004D65B8:
    set32(c.r[4], c.r[29].w[0] + 1248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D65C4u); set32(c.r[5], c.r[29].w[0] + 3760u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D65C4u) [[unlikely]] return; }
L_004D65C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3760u));  goto L_004D65EC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1274u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D65E8; } }
    c.f[12] = ld32((c.r[29].w[0] + 3760u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D65E8u); set32(c.r[4], c.r[29].w[0] + 1248u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D65E8u) [[unlikely]] return; }
L_004D65E8:
    c.f[0] = ld32((c.r[29].w[0] + 3760u));
    c.budget -= 1;
L_004D65EC:
    set32(c.r[4], c.r[29].w[0] + 1248u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D65FCu); st32((c.r[18].w[0] + 1812u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D65FCu) [[unlikely]] return; }
L_004D65FC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1216u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6610u); set32(c.r[6], c.r[6].w[0] + 6709u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6610u) [[unlikely]] return; }
L_004D6610:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 1216u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6624u); set32(c.r[5], c.r[29].w[0] + 3756u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6624u) [[unlikely]] return; }
L_004D6624:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3756u));  goto L_004D664C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1242u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6648; } }
    c.f[12] = ld32((c.r[29].w[0] + 3756u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6648u); set32(c.r[4], c.r[29].w[0] + 1216u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6648u) [[unlikely]] return; }
L_004D6648:
    c.f[0] = ld32((c.r[29].w[0] + 3756u));
    c.budget -= 1;
L_004D664C:
    set32(c.r[4], c.r[29].w[0] + 1216u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6660u); st32((c.r[18].w[0] + 1628u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6660u) [[unlikely]] return; }
L_004D6660:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1184u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6674u); set32(c.r[6], c.r[6].w[0] + 6728u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6674u) [[unlikely]] return; }
L_004D6674:
    set32(c.r[4], c.r[29].w[0] + 1184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6680u); set32(c.r[5], c.r[29].w[0] + 3752u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6680u) [[unlikely]] return; }
L_004D6680:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3752u));  goto L_004D66A8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1210u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D66A4; } }
    c.f[12] = ld32((c.r[29].w[0] + 3752u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D66A4u); set32(c.r[4], c.r[29].w[0] + 1184u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D66A4u) [[unlikely]] return; }
L_004D66A4:
    c.f[0] = ld32((c.r[29].w[0] + 3752u));
    c.budget -= 1;
L_004D66A8:
    set32(c.r[4], c.r[29].w[0] + 1184u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D66B8u); st32((c.r[18].w[0] + 1632u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D66B8u) [[unlikely]] return; }
L_004D66B8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1152u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D66CCu); set32(c.r[6], c.r[6].w[0] + 6749u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D66CCu) [[unlikely]] return; }
L_004D66CC:
    set32(c.r[4], c.r[29].w[0] + 1152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D66D8u); set32(c.r[5], c.r[29].w[0] + 3748u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D66D8u) [[unlikely]] return; }
L_004D66D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3748u));  goto L_004D6700; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1178u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D66FC; } }
    c.f[12] = ld32((c.r[29].w[0] + 3748u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D66FCu); set32(c.r[4], c.r[29].w[0] + 1152u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D66FCu) [[unlikely]] return; }
L_004D66FC:
    c.f[0] = ld32((c.r[29].w[0] + 3748u));
    c.budget -= 1;
L_004D6700:
    set32(c.r[4], c.r[29].w[0] + 1152u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6710u); st32((c.r[18].w[0] + 1636u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6710u) [[unlikely]] return; }
L_004D6710:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1120u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6724u); set32(c.r[6], c.r[6].w[0] + 6768u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6724u) [[unlikely]] return; }
L_004D6724:
    set32(c.r[4], c.r[29].w[0] + 1120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6730u); set32(c.r[5], c.r[29].w[0] + 3744u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6730u) [[unlikely]] return; }
L_004D6730:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3744u));  goto L_004D6758; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1146u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6754; } }
    c.f[12] = ld32((c.r[29].w[0] + 3744u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6754u); set32(c.r[4], c.r[29].w[0] + 1120u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6754u) [[unlikely]] return; }
L_004D6754:
    c.f[0] = ld32((c.r[29].w[0] + 3744u));
    c.budget -= 1;
L_004D6758:
    set32(c.r[4], c.r[29].w[0] + 1120u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6768u); st32((c.r[18].w[0] + 1640u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6768u) [[unlikely]] return; }
L_004D6768:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1088u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D677Cu); set32(c.r[6], c.r[6].w[0] + 6798u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D677Cu) [[unlikely]] return; }
L_004D677C:
    set32(c.r[4], c.r[29].w[0] + 1088u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6788u); set32(c.r[5], c.r[29].w[0] + 3740u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6788u) [[unlikely]] return; }
L_004D6788:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3740u));  goto L_004D67B0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1114u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D67AC; } }
    c.f[12] = ld32((c.r[29].w[0] + 3740u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D67ACu); set32(c.r[4], c.r[29].w[0] + 1088u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D67ACu) [[unlikely]] return; }
L_004D67AC:
    c.f[0] = ld32((c.r[29].w[0] + 3740u));
    c.budget -= 1;
L_004D67B0:
    set32(c.r[4], c.r[29].w[0] + 1088u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D67C0u); st32((c.r[18].w[0] + 1644u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D67C0u) [[unlikely]] return; }
L_004D67C0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1056u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D67D4u); set32(c.r[6], c.r[6].w[0] + 6821u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D67D4u) [[unlikely]] return; }
L_004D67D4:
    set32(c.r[4], c.r[29].w[0] + 1056u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D67E0u); set32(c.r[5], c.r[29].w[0] + 3736u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D67E0u) [[unlikely]] return; }
L_004D67E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3736u));  goto L_004D6808; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1082u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6804; } }
    c.f[12] = ld32((c.r[29].w[0] + 3736u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6804u); set32(c.r[4], c.r[29].w[0] + 1056u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6804u) [[unlikely]] return; }
L_004D6804:
    c.f[0] = ld32((c.r[29].w[0] + 3736u));
    c.budget -= 1;
L_004D6808:
    set32(c.r[4], c.r[29].w[0] + 1056u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6818u); st32((c.r[18].w[0] + 1648u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6818u) [[unlikely]] return; }
L_004D6818:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1024u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D682Cu); set32(c.r[6], c.r[6].w[0] + 6841u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D682Cu) [[unlikely]] return; }
L_004D682C:
    set32(c.r[4], c.r[29].w[0] + 1024u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6838u); set32(c.r[5], c.r[29].w[0] + 3732u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6838u) [[unlikely]] return; }
L_004D6838:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3732u));  goto L_004D6860; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1050u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D685C; } }
    c.f[12] = ld32((c.r[29].w[0] + 3732u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D685Cu); set32(c.r[4], c.r[29].w[0] + 1024u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D685Cu) [[unlikely]] return; }
L_004D685C:
    c.f[0] = ld32((c.r[29].w[0] + 3732u));
    c.budget -= 1;
L_004D6860:
    set32(c.r[4], c.r[29].w[0] + 1024u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6870u); st32((c.r[18].w[0] + 1652u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6870u) [[unlikely]] return; }
L_004D6870:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 992u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6884u); set32(c.r[6], c.r[6].w[0] + 6866u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6884u) [[unlikely]] return; }
L_004D6884:
    set32(c.r[4], c.r[29].w[0] + 992u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6890u); set32(c.r[5], c.r[29].w[0] + 3728u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6890u) [[unlikely]] return; }
L_004D6890:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3728u));  goto L_004D68B8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1018u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D68B4; } }
    c.f[12] = ld32((c.r[29].w[0] + 3728u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D68B4u); set32(c.r[4], c.r[29].w[0] + 992u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D68B4u) [[unlikely]] return; }
L_004D68B4:
    c.f[0] = ld32((c.r[29].w[0] + 3728u));
    c.budget -= 1;
L_004D68B8:
    set32(c.r[4], c.r[29].w[0] + 992u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D68C8u); st32((c.r[18].w[0] + 1656u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D68C8u) [[unlikely]] return; }
L_004D68C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 960u);
    st32((c.r[18].w[0] + 1672u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D68E4u); set32(c.r[6], c.r[6].w[0] + 6884u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D68E4u) [[unlikely]] return; }
L_004D68E4:
    set32(c.r[4], c.r[29].w[0] + 960u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D68F0u); set32(c.r[5], c.r[29].w[0] + 3724u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D68F0u) [[unlikely]] return; }
L_004D68F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3724u));  goto L_004D6918; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 986u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6914; } }
    c.f[12] = ld32((c.r[29].w[0] + 3724u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6914u); set32(c.r[4], c.r[29].w[0] + 960u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6914u) [[unlikely]] return; }
L_004D6914:
    c.f[0] = ld32((c.r[29].w[0] + 3724u));
    c.budget -= 1;
L_004D6918:
    set32(c.r[4], c.r[29].w[0] + 960u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6928u); st32((c.r[18].w[0] + 1660u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6928u) [[unlikely]] return; }
L_004D6928:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 928u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D693Cu); set32(c.r[6], c.r[6].w[0] + 6901u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D693Cu) [[unlikely]] return; }
L_004D693C:
    set32(c.r[4], c.r[29].w[0] + 928u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6948u); set32(c.r[5], c.r[29].w[0] + 3720u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6948u) [[unlikely]] return; }
L_004D6948:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3720u));  goto L_004D6970; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 954u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D696C; } }
    c.f[12] = ld32((c.r[29].w[0] + 3720u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D696Cu); set32(c.r[4], c.r[29].w[0] + 928u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D696Cu) [[unlikely]] return; }
L_004D696C:
    c.f[0] = ld32((c.r[29].w[0] + 3720u));
    c.budget -= 1;
L_004D6970:
    set32(c.r[4], c.r[29].w[0] + 928u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6980u); st32((c.r[18].w[0] + 1664u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6980u) [[unlikely]] return; }
L_004D6980:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6994u); set32(c.r[6], c.r[6].w[0] + 6924u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6994u) [[unlikely]] return; }
L_004D6994:
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D69A0u); set32(c.r[5], c.r[29].w[0] + 3716u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D69A0u) [[unlikely]] return; }
L_004D69A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3716u));  goto L_004D69C8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 922u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D69C4; } }
    c.f[12] = ld32((c.r[29].w[0] + 3716u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D69C4u); set32(c.r[4], c.r[29].w[0] + 896u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D69C4u) [[unlikely]] return; }
L_004D69C4:
    c.f[0] = ld32((c.r[29].w[0] + 3716u));
    c.budget -= 1;
L_004D69C8:
    set32(c.r[4], c.r[29].w[0] + 896u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D69D8u); st32((c.r[18].w[0] + 1676u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D69D8u) [[unlikely]] return; }
L_004D69D8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 864u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D69ECu); set32(c.r[6], c.r[6].w[0] + 6942u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D69ECu) [[unlikely]] return; }
L_004D69EC:
    set32(c.r[4], c.r[29].w[0] + 864u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D69F8u); set32(c.r[5], c.r[29].w[0] + 3712u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D69F8u) [[unlikely]] return; }
L_004D69F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3712u));  goto L_004D6A20; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 890u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6A1C; } }
    c.f[12] = ld32((c.r[29].w[0] + 3712u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6A1Cu); set32(c.r[4], c.r[29].w[0] + 864u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6A1Cu) [[unlikely]] return; }
L_004D6A1C:
    c.f[0] = ld32((c.r[29].w[0] + 3712u));
    c.budget -= 1;
L_004D6A20:
    set32(c.r[4], c.r[29].w[0] + 864u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6A30u); st32((c.r[18].w[0] + 1684u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6A30u) [[unlikely]] return; }
L_004D6A30:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 832u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6A44u); set32(c.r[6], c.r[6].w[0] + 6962u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6A44u) [[unlikely]] return; }
L_004D6A44:
    set32(c.r[4], c.r[29].w[0] + 832u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6A50u); set32(c.r[5], c.r[29].w[0] + 3708u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6A50u) [[unlikely]] return; }
L_004D6A50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3708u));  goto L_004D6A78; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 858u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6A74; } }
    c.f[12] = ld32((c.r[29].w[0] + 3708u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6A74u); set32(c.r[4], c.r[29].w[0] + 832u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6A74u) [[unlikely]] return; }
L_004D6A74:
    c.f[0] = ld32((c.r[29].w[0] + 3708u));
    c.budget -= 1;
L_004D6A78:
    set32(c.r[4], c.r[29].w[0] + 832u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6A88u); st32((c.r[18].w[0] + 1680u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6A88u) [[unlikely]] return; }
L_004D6A88:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 800u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6A9Cu); set32(c.r[6], c.r[6].w[0] + 6976u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6A9Cu) [[unlikely]] return; }
L_004D6A9C:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 800u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6AB0u); set32(c.r[5], c.r[29].w[0] + 3704u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6AB0u) [[unlikely]] return; }
L_004D6AB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3704u));  goto L_004D6AD8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 826u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6AD4; } }
    c.f[12] = ld32((c.r[29].w[0] + 3704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6AD4u); set32(c.r[4], c.r[29].w[0] + 800u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6AD4u) [[unlikely]] return; }
L_004D6AD4:
    c.f[0] = ld32((c.r[29].w[0] + 3704u));
    c.budget -= 1;
L_004D6AD8:
    set32(c.r[4], c.r[29].w[0] + 800u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6AECu); st32((c.r[18].w[0] + 1688u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6AECu) [[unlikely]] return; }
L_004D6AEC:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D6AF0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 784u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6B08u); set32(c.r[6], c.r[6].w[0] + 7001u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004D6B08u) [[unlikely]] return; }
L_004D6B08:
    set32(c.r[2], ld32((c.r[29].w[0] + 784u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 785u);  goto L_004D6B1C; }
    set32(c.r[6], ld32((c.r[29].w[0] + 792u)));
    c.budget -= 1;
L_004D6B1C:
    set32(c.r[4], c.r[29].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6B28u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6B28u) [[unlikely]] return; }
L_004D6B28:
    set32(c.r[4], c.r[29].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6B34u); set32(c.r[5], c.r[29].w[0] + 3700u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6B34u) [[unlikely]] return; }
L_004D6B34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3700u));  goto L_004D6B5C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 778u)));
    c.budget -= 1;
L_004D6B40:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6B58; } }
    c.f[12] = ld32((c.r[29].w[0] + 3700u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6B58u); set32(c.r[4], c.r[29].w[0] + 752u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6B58u) [[unlikely]] return; }
L_004D6B58:
    c.f[0] = ld32((c.r[29].w[0] + 3700u));
    c.budget -= 1;
L_004D6B5C:
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 752u);
    c.budget -= 3;
L_004D6B68:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6B74u); st32((c.r[19].w[0] + 1692u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6B74u) [[unlikely]] return; }
L_004D6B74:
    set32(c.r[4], c.r[29].w[0] + 784u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6B80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004D6B80u) [[unlikely]] return; }
L_004D6B80:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[8], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 736u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 7019u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6B9Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004D6B9Cu) [[unlikely]] return; }
L_004D6B9C:
    set32(c.r[2], ld32((c.r[29].w[0] + 736u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 737u);  goto L_004D6BB0; }
    set32(c.r[6], ld32((c.r[29].w[0] + 744u)));
    c.budget -= 1;
L_004D6BB0:
    set32(c.r[4], c.r[29].w[0] + 704u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6BBCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6BBCu) [[unlikely]] return; }
L_004D6BBC:
    set32(c.r[4], c.r[29].w[0] + 704u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6BC8u); set32(c.r[5], c.r[29].w[0] + 3696u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6BC8u) [[unlikely]] return; }
L_004D6BC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3696u));  goto L_004D6BF0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 730u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6BEC; } }
    c.f[12] = ld32((c.r[29].w[0] + 3696u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6BECu); set32(c.r[4], c.r[29].w[0] + 704u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6BECu) [[unlikely]] return; }
L_004D6BEC:
    c.f[0] = ld32((c.r[29].w[0] + 3696u));
    c.budget -= 1;
L_004D6BF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 704u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6C0Cu); st32((c.r[19].w[0] + 1708u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6C0Cu) [[unlikely]] return; }
L_004D6C0C:
    set32(c.r[4], c.r[29].w[0] + 736u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6C18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004D6C18u) [[unlikely]] return; }
L_004D6C18:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D6AF0u | kUnwind; return; } goto L_004D6AF0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6C3Cu); set32(c.r[6], c.r[6].w[0] + 7041u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6C3Cu) [[unlikely]] return; }
L_004D6C3C:
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6C48u); set32(c.r[5], c.r[29].w[0] + 3692u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6C48u) [[unlikely]] return; }
L_004D6C48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3692u));  goto L_004D6C70; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 698u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6C6C; } }
    c.f[12] = ld32((c.r[29].w[0] + 3692u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6C6Cu); set32(c.r[4], c.r[29].w[0] + 672u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6C6Cu) [[unlikely]] return; }
L_004D6C6C:
    c.f[0] = ld32((c.r[29].w[0] + 3692u));
    c.budget -= 1;
L_004D6C70:
    set32(c.r[4], c.r[29].w[0] + 672u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6C80u); st32((c.r[18].w[0] + 1724u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6C80u) [[unlikely]] return; }
L_004D6C80:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6C94u); set32(c.r[6], c.r[6].w[0] + 7069u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6C94u) [[unlikely]] return; }
L_004D6C94:
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6CA0u); set32(c.r[5], c.r[29].w[0] + 3688u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6CA0u) [[unlikely]] return; }
L_004D6CA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3688u));  goto L_004D6CC8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 666u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6CC4; } }
    c.f[12] = ld32((c.r[29].w[0] + 3688u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6CC4u); set32(c.r[4], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6CC4u) [[unlikely]] return; }
L_004D6CC4:
    c.f[0] = ld32((c.r[29].w[0] + 3688u));
    c.budget -= 1;
L_004D6CC8:
    set32(c.r[4], c.r[29].w[0] + 640u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6CD8u); st32((c.r[18].w[0] + 1728u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6CD8u) [[unlikely]] return; }
L_004D6CD8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 608u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6CECu); set32(c.r[6], c.r[6].w[0] + 7100u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6CECu) [[unlikely]] return; }
L_004D6CEC:
    set32(c.r[4], c.r[29].w[0] + 608u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6CF8u); set32(c.r[5], c.r[29].w[0] + 3684u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6CF8u) [[unlikely]] return; }
L_004D6CF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3684u));  goto L_004D6D20; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 634u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6D1C; } }
    c.f[12] = ld32((c.r[29].w[0] + 3684u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6D1Cu); set32(c.r[4], c.r[29].w[0] + 608u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6D1Cu) [[unlikely]] return; }
L_004D6D1C:
    c.f[0] = ld32((c.r[29].w[0] + 3684u));
    c.budget -= 1;
L_004D6D20:
    set32(c.r[4], c.r[29].w[0] + 608u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6D30u); st32((c.r[18].w[0] + 1736u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6D30u) [[unlikely]] return; }
L_004D6D30:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 576u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6D44u); set32(c.r[6], c.r[6].w[0] + 7124u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6D44u) [[unlikely]] return; }
L_004D6D44:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 576u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6D58u); set32(c.r[5], c.r[29].w[0] + 3680u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6D58u) [[unlikely]] return; }
L_004D6D58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3680u));  goto L_004D6D80; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 602u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6D7C; } }
    c.f[12] = ld32((c.r[29].w[0] + 3680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6D7Cu); set32(c.r[4], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6D7Cu) [[unlikely]] return; }
L_004D6D7C:
    c.f[0] = ld32((c.r[29].w[0] + 3680u));
    c.budget -= 1;
L_004D6D80:
    set32(c.r[4], c.r[29].w[0] + 576u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6D94u); st32((c.r[18].w[0] + 1740u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6D94u) [[unlikely]] return; }
L_004D6D94:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6DA8u); set32(c.r[6], c.r[6].w[0] + 7152u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6DA8u) [[unlikely]] return; }
L_004D6DA8:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6DB4u); set32(c.r[5], c.r[29].w[0] + 3676u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6DB4u) [[unlikely]] return; }
L_004D6DB4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3676u));  goto L_004D6DDC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 570u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6DD8; } }
    c.f[12] = ld32((c.r[29].w[0] + 3676u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6DD8u); set32(c.r[4], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6DD8u) [[unlikely]] return; }
L_004D6DD8:
    c.f[0] = ld32((c.r[29].w[0] + 3676u));
    c.budget -= 1;
L_004D6DDC:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6DECu); st32((c.r[18].w[0] + 1744u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6DECu) [[unlikely]] return; }
L_004D6DEC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6E00u); set32(c.r[6], c.r[6].w[0] + 7176u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6E00u) [[unlikely]] return; }
L_004D6E00:
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6E0Cu); set32(c.r[5], c.r[29].w[0] + 3672u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6E0Cu) [[unlikely]] return; }
L_004D6E0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3672u));  goto L_004D6E34; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 538u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6E30; } }
    c.f[12] = ld32((c.r[29].w[0] + 3672u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6E30u); set32(c.r[4], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6E30u) [[unlikely]] return; }
L_004D6E30:
    c.f[0] = ld32((c.r[29].w[0] + 3672u));
    c.budget -= 1;
L_004D6E34:
    set32(c.r[4], c.r[29].w[0] + 512u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6E44u); st32((c.r[18].w[0] + 1828u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6E44u) [[unlikely]] return; }
L_004D6E44:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6E58u); set32(c.r[6], c.r[6].w[0] + 7192u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6E58u) [[unlikely]] return; }
L_004D6E58:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6E64u); set32(c.r[5], c.r[29].w[0] + 3668u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6E64u) [[unlikely]] return; }
L_004D6E64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3668u));  goto L_004D6E8C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 506u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6E88; } }
    c.f[12] = ld32((c.r[29].w[0] + 3668u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6E88u); set32(c.r[4], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6E88u) [[unlikely]] return; }
L_004D6E88:
    c.f[0] = ld32((c.r[29].w[0] + 3668u));
    c.budget -= 1;
L_004D6E8C:
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6E9Cu); st32((c.r[18].w[0] + 1832u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6E9Cu) [[unlikely]] return; }
L_004D6E9C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6EB0u); set32(c.r[6], c.r[6].w[0] + 7212u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6EB0u) [[unlikely]] return; }
L_004D6EB0:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6EBCu); set32(c.r[5], c.r[29].w[0] + 3664u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6EBCu) [[unlikely]] return; }
L_004D6EBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3664u));  goto L_004D6EE4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 474u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6EE0; } }
    c.f[12] = ld32((c.r[29].w[0] + 3664u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6EE0u); set32(c.r[4], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6EE0u) [[unlikely]] return; }
L_004D6EE0:
    c.f[0] = ld32((c.r[29].w[0] + 3664u));
    c.budget -= 1;
L_004D6EE4:
    set32(c.r[4], c.r[29].w[0] + 448u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6EF4u); st32((c.r[18].w[0] + 1836u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6EF4u) [[unlikely]] return; }
L_004D6EF4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6F08u); set32(c.r[6], c.r[6].w[0] + 7235u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6F08u) [[unlikely]] return; }
L_004D6F08:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6F14u); set32(c.r[5], c.r[29].w[0] + 3660u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6F14u) [[unlikely]] return; }
L_004D6F14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3660u));  goto L_004D6F3C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 442u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6F38; } }
    c.f[12] = ld32((c.r[29].w[0] + 3660u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6F38u); set32(c.r[4], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6F38u) [[unlikely]] return; }
L_004D6F38:
    c.f[0] = ld32((c.r[29].w[0] + 3660u));
    c.budget -= 1;
L_004D6F3C:
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6F4Cu); st32((c.r[18].w[0] + 1840u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6F4Cu) [[unlikely]] return; }
L_004D6F4C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6F60u); set32(c.r[6], c.r[6].w[0] + 7257u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6F60u) [[unlikely]] return; }
L_004D6F60:
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6F6Cu); set32(c.r[5], c.r[29].w[0] + 3656u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6F6Cu) [[unlikely]] return; }
L_004D6F6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3656u));  goto L_004D6F94; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 410u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6F90; } }
    c.f[12] = ld32((c.r[29].w[0] + 3656u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6F90u); set32(c.r[4], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6F90u) [[unlikely]] return; }
L_004D6F90:
    c.f[0] = ld32((c.r[29].w[0] + 3656u));
    c.budget -= 1;
L_004D6F94:
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6FA4u); st32((c.r[18].w[0] + 1844u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6FA4u) [[unlikely]] return; }
L_004D6FA4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6FB8u); set32(c.r[6], c.r[6].w[0] + 7273u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D6FB8u) [[unlikely]] return; }
L_004D6FB8:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6FC4u); set32(c.r[5], c.r[29].w[0] + 3652u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D6FC4u) [[unlikely]] return; }
L_004D6FC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3652u));  goto L_004D6FEC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 378u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D6FE8; } }
    c.f[12] = ld32((c.r[29].w[0] + 3652u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6FE8u); set32(c.r[4], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D6FE8u) [[unlikely]] return; }
L_004D6FE8:
    c.f[0] = ld32((c.r[29].w[0] + 3652u));
    c.budget -= 1;
L_004D6FEC:
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D6FFCu); st32((c.r[18].w[0] + 1848u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D6FFCu) [[unlikely]] return; }
L_004D6FFC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7010u); set32(c.r[6], c.r[6].w[0] + 7298u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D7010u) [[unlikely]] return; }
L_004D7010:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D701Cu); set32(c.r[5], c.r[29].w[0] + 3648u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D701Cu) [[unlikely]] return; }
L_004D701C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3648u));  goto L_004D7044; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 346u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D7040; } }
    c.f[12] = ld32((c.r[29].w[0] + 3648u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7040u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D7040u) [[unlikely]] return; }
L_004D7040:
    c.f[0] = ld32((c.r[29].w[0] + 3648u));
    c.budget -= 1;
L_004D7044:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7054u); st32((c.r[18].w[0] + 1852u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D7054u) [[unlikely]] return; }
L_004D7054:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7068u); set32(c.r[6], c.r[6].w[0] + 7314u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D7068u) [[unlikely]] return; }
L_004D7068:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7074u); set32(c.r[5], c.r[29].w[0] + 3644u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D7074u) [[unlikely]] return; }
L_004D7074:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3644u));  goto L_004D709C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 314u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D7098; } }
    c.f[12] = ld32((c.r[29].w[0] + 3644u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7098u); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D7098u) [[unlikely]] return; }
L_004D7098:
    c.f[0] = ld32((c.r[29].w[0] + 3644u));
    c.budget -= 1;
L_004D709C:
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D70ACu); st32((c.r[18].w[0] + 1856u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D70ACu) [[unlikely]] return; }
L_004D70AC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D70C0u); set32(c.r[6], c.r[6].w[0] + 7332u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D70C0u) [[unlikely]] return; }
L_004D70C0:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D70CCu); set32(c.r[5], c.r[29].w[0] + 3640u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D70CCu) [[unlikely]] return; }
L_004D70CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3640u));  goto L_004D70F4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 282u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D70F0; } }
    c.f[12] = ld32((c.r[29].w[0] + 3640u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D70F0u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D70F0u) [[unlikely]] return; }
L_004D70F0:
    c.f[0] = ld32((c.r[29].w[0] + 3640u));
    c.budget -= 1;
L_004D70F4:
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7104u); st32((c.r[18].w[0] + 1860u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D7104u) [[unlikely]] return; }
L_004D7104:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7118u); set32(c.r[6], c.r[6].w[0] + 7363u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D7118u) [[unlikely]] return; }
L_004D7118:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7124u); set32(c.r[5], c.r[29].w[0] + 3636u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D7124u) [[unlikely]] return; }
L_004D7124:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3636u));  goto L_004D714C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 250u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D7148; } }
    c.f[12] = ld32((c.r[29].w[0] + 3636u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7148u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D7148u) [[unlikely]] return; }
L_004D7148:
    c.f[0] = ld32((c.r[29].w[0] + 3636u));
    c.budget -= 1;
L_004D714C:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D715Cu); st32((c.r[18].w[0] + 1816u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D715Cu) [[unlikely]] return; }
L_004D715C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7170u); set32(c.r[6], c.r[6].w[0] + 7388u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D7170u) [[unlikely]] return; }
L_004D7170:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D717Cu); set32(c.r[5], c.r[29].w[0] + 3632u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D717Cu) [[unlikely]] return; }
L_004D717C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3632u));  goto L_004D71A4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D71A0; } }
    c.f[12] = ld32((c.r[29].w[0] + 3632u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D71A0u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D71A0u) [[unlikely]] return; }
L_004D71A0:
    c.f[0] = ld32((c.r[29].w[0] + 3632u));
    c.budget -= 1;
L_004D71A4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D71B4u); st32((c.r[18].w[0] + 1820u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D71B4u) [[unlikely]] return; }
L_004D71B4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D71C8u); set32(c.r[6], c.r[6].w[0] + 7410u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D71C8u) [[unlikely]] return; }
L_004D71C8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D71D4u); set32(c.r[5], c.r[29].w[0] + 3628u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D71D4u) [[unlikely]] return; }
L_004D71D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3628u));  goto L_004D71FC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 186u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D71F8; } }
    c.f[12] = ld32((c.r[29].w[0] + 3628u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D71F8u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D71F8u) [[unlikely]] return; }
L_004D71F8:
    c.f[0] = ld32((c.r[29].w[0] + 3628u));
    c.budget -= 1;
L_004D71FC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D720Cu); st32((c.r[18].w[0] + 1824u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D720Cu) [[unlikely]] return; }
L_004D720C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7224u); set32(c.r[6], c.r[6].w[0] + 7430u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004D7224u) [[unlikely]] return; }
L_004D7224:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 145u);  goto L_004D7238; }
    set32(c.r[6], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_004D7238:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7244u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004D7244u) [[unlikely]] return; }
L_004D7244:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[20] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7258u); set32(c.r[5], c.r[29].w[0] + 3624u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004D7258u) [[unlikely]] return; }
L_004D7258:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 3624u));  goto L_004D7280; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D727C; } }
    c.f[12] = ld32((c.r[29].w[0] + 3624u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D727Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004D727Cu) [[unlikely]] return; }
L_004D727C:
    c.f[0] = ld32((c.r[29].w[0] + 3624u));
    c.budget -= 1;
L_004D7280:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7294u); st32((c.r[18].w[0] + 1424u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004D7294u) [[unlikely]] return; }
L_004D7294:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D72A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004D72A0u) [[unlikely]] return; }
L_004D72A0:
    set32(c.r[4], ld32((c.r[18].w[0] + 2228u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0] + 1177u));  goto L_004D72EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D72B4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F1(c, 146u, depth + 1u); else { c.pc = 0x004C5330u; return; } if (c.pc != 0x004D72B4u) [[unlikely]] return; }
L_004D72B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    c.f[1] = ld32((c.r[18].w[0] + 1424u));
    c.f[0] = ld32((c.r[18].w[0] + 1396u));
    set32(c.r[4], ld32((c.r[18].w[0] + 2228u)));
    c.f[2] = ld32((c.r[2].w[0] + 72u));
    fpu_div(c, 12u, c.f[1], c.f[2]);
    fpu_div(c, 13u, c.f[0], c.f[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D72E8u);  if (depth < kMaxDepth) unit_00F1(c, 142u, depth + 1u); else { c.pc = 0x004C4FC0u; return; } if (c.pc != 0x004D72E8u) [[unlikely]] return; }
L_004D72E8:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1177u));
    c.budget -= 1;
L_004D72EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[18].w[0] + 1177u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004D7308; } }
    c.f[0] = ld32((c.r[18].w[0] + 1604u));
    st32((c.r[18].w[0] + 1200u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1608u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1204u), c.f[0]);  if (t) { goto L_004D7318; } }
L_004D7308:
    c.f[0] = ld32((c.r[18].w[0] + 1588u));
    st32((c.r[18].w[0] + 1200u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1592u));
    st32((c.r[18].w[0] + 1204u), c.f[0]);
    c.budget -= 4;
L_004D7318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7320u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F5(c, 42u, depth + 1u); else { c.pc = 0x004D44E0u; return; } if (c.pc != 0x004D7320u) [[unlikely]] return; }
L_004D7320:
    c.f[1] = ld32((c.r[18].w[0] + 1452u));
    c.f[3] = ld32((c.r[28].w[0] - 31600u));
    c.f[0] = ld32((c.r[18].w[0] + 1444u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 1392u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 2280u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 1392u));
    c.f[2] = ld32((c.r[18].w[0] + 1448u));
    c.f[0] = ld32((c.r[18].w[0] + 1452u));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 2288u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 1392u));
    c.f[2] = ld32((c.r[18].w[0] + 1448u));
    c.f[0] = ld32((c.r[18].w[0] + 1444u));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 2284u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 4080u);  c.pc = t; return; }
L_004D73B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D73C8u); set32(c.r[4], ld32((c.r[4].w[0] + 2228u)));  if (depth < kMaxDepth) unit_00F1(c, 141u, depth + 1u); else { c.pc = 0x004C4FA0u; return; } if (c.pc != 0x004D73C8u) [[unlikely]] return; }
L_004D73C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 2228u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1872u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { st8((c.r[16].w[0] + 1156u), static_cast<std::uint8_t>(0u));  goto L_004D7430; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_004D742C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 1384u), 0u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7418u); st8((c.r[16].w[0] + 1183u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0010(c, 349u, depth + 1u); else { c.pc = 0x00142BB0u; return; } if (c.pc != 0x004D7418u) [[unlikely]] return; }
L_004D7418:
    set32(c.r[4], ld32((c.r[28].w[0] - 26860u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D742C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D742Cu);  if (depth < kMaxDepth) unit_00B6(c, 131u, depth + 1u); else { c.pc = 0x003D9920u; return; } if (c.pc != 0x004D742Cu) [[unlikely]] return; }
L_004D742C:
    st8((c.r[16].w[0] + 1156u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004D7430:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1157u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 1288u);
    st8((c.r[16].w[0] + 1158u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1159u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1160u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1161u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1162u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1163u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1164u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1165u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1166u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1167u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1168u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1170u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1172u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1173u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1174u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1175u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1176u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1177u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1179u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1178u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1180u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1181u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1182u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1183u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1184u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1185u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1186u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1187u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1188u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1190u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1191u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1169u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1192u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1193u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1194u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1195u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1196u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1197u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1198u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1120u), 0u);
    st32((c.r[16].w[0] + 1128u), 0u);
    st32((c.r[16].w[0] + 1232u), 0u);
    st32((c.r[16].w[0] + 1208u), 0u);
    st32((c.r[16].w[0] + 1212u), 0u);
    st32((c.r[16].w[0] + 1332u), 0u);
    st32((c.r[16].w[0] + 1224u), 0u);
    st32((c.r[16].w[0] + 1228u), 0u);
    st8((c.r[16].w[0] + 1240u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1244u), 0u);
    st32((c.r[16].w[0] + 1248u), 0u);
    c.budget -= 55;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D750Cu); st32((c.r[16].w[0] + 1252u), 0u);  if (depth < kMaxDepth) unit_0009(c, 148u, depth + 1u); else { c.pc = 0x001258C0u; return; } if (c.pc != 0x004D750Cu) [[unlikely]] return; }
L_004D750C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7514u); set32(c.r[4], c.r[16].w[0] + 1256u);  if (depth < kMaxDepth) unit_0009(c, 148u, depth + 1u); else { c.pc = 0x001258C0u; return; } if (c.pc != 0x004D7514u) [[unlikely]] return; }
L_004D7514:
    st32((c.r[16].w[0] + 1324u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 1328u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[16].w[0] + 1336u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1340u), 0u);
    st32((c.r[16].w[0] + 1348u), 0u);
    st32((c.r[16].w[0] + 1352u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1356u), 0u);
    st32((c.r[16].w[0] + 1364u), 0u);
    st32((c.r[16].w[0] + 1216u), 0u);
    st32((c.r[16].w[0] + 1052u), 0u);
    st32((c.r[16].w[0] + 1368u), 0u);
    st32((c.r[16].w[0] + 1376u), 0u);
    st32((c.r[16].w[0] + 1372u), 0u);
    st32((c.r[16].w[0] + 852u), 0u);
    st32((c.r[16].w[0] + 856u), 0u);
    st32((c.r[16].w[0] + 1380u), 0u);
    st32((c.r[16].w[0] + 1384u), 0u);
    st32((c.r[16].w[0] + 796u), 0u);
    st32((c.r[16].w[0] + 728u), 0u);
    st32((c.r[16].w[0] + 1388u), 0u);
    st32((c.r[16].w[0] + 1124u), 0u);
    st32((c.r[16].w[0] + 1116u), 0u);
    st32((c.r[16].w[0] + 1000u), 0u);
    st32((c.r[16].w[0] + 1148u), 0u);
    st32((c.r[16].w[0] + 2336u), 0u);
    st32((c.r[16].w[0] + 1344u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1064u), 0u);
    st32((c.r[16].w[0] + 1144u), 0u);
    st32((c.r[16].w[0] + 1100u), 0u);
    st32((c.r[16].w[0] + 1360u), 0u);
    st32((c.r[16].w[0] + 1152u), 0u);
    st32((c.r[16].w[0] + 352u), 0u);
    st32((c.r[16].w[0] + 1320u), 0u);
    st32((c.r[16].w[0] + 800u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1220u), 0u);
    st32((c.r[16].w[0] + 848u), 0u);
    st32((c.r[16].w[0] + 944u), 0u);
    st32((c.r[16].w[0] + 948u), 0u);
    st32((c.r[16].w[0] + 936u), 0u);
    st32((c.r[16].w[0] + 1108u), 0u);
    st32((c.r[16].w[0] + 1112u), 0u);
    st32((c.r[16].w[0] + 1968u), 0u);
    st32((c.r[16].w[0] + 1076u), 0u);
    st32((c.r[16].w[0] + 2312u), 0u);
    st32((c.r[16].w[0] + 1072u), 0u);
    st32((c.r[16].w[0] + 1080u), 0u);
    st32((c.r[16].w[0] + 1096u), 0u);
    st32((c.r[16].w[0] + 1084u), 0u);
    st32((c.r[16].w[0] + 1088u), 0u);
    st32((c.r[16].w[0] + 1092u), 0u);
    st32((c.r[16].w[0] + 832u), 0u);
    st8((c.r[16].w[0] + 1955u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1954u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1953u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1952u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1959u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1958u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1957u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1956u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1963u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1962u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1961u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1960u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1932u), 0u);
    st32((c.r[16].w[0] + 1928u), 0u);
    st32((c.r[16].w[0] + 1924u), 0u);
    st32((c.r[16].w[0] + 1920u), 0u);
    st32((c.r[16].w[0] + 1948u), 0u);
    st32((c.r[16].w[0] + 1944u), 0u);
    st32((c.r[16].w[0] + 1940u), 0u);
    st32((c.r[16].w[0] + 1936u), 0u);
    st8((c.r[16].w[0] + 1967u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1966u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1965u), static_cast<std::uint8_t>(0u));
    c.budget -= 79;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7650u); st8((c.r[16].w[0] + 1964u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00F7(c, 20u, depth + 1u); else { c.pc = 0x004DC500u; return; } if (c.pc != 0x004D7650u) [[unlikely]] return; }
L_004D7650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7658u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F7(c, 7u, depth + 1u); else { c.pc = 0x004DC220u; return; } if (c.pc != 0x004D7658u) [[unlikely]] return; }
L_004D7658:
    c.f[0] = ld32((c.r[16].w[0] + 500u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 640u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 504u));
    st32((c.r[16].w[0] + 644u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 508u));
    st32((c.r[16].w[0] + 648u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 356u));
    st32((c.r[16].w[0] + 652u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 656u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 364u));
    st32((c.r[16].w[0] + 660u), c.f[0]);
    st32((c.r[16].w[0] + 804u), 0u);
    st32((c.r[16].w[0] + 808u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 812u), 0u);
    st32((c.r[16].w[0] + 816u), 0u);
    st32((c.r[16].w[0] + 820u), 0u);
    st32((c.r[16].w[0] + 824u), 0u);
    st32((c.r[16].w[0] + 828u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 2316u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 2340u), 0u);
    st8((c.r[16].w[0] + 2344u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 2308u)));
    c.budget -= 26;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 2308u), 0u);  goto L_004D76DC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_004D76D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D76D8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004D76D8u) [[unlikely]] return; }
L_004D76D8:
    st32((c.r[16].w[0] + 2308u), 0u);
    c.budget -= 1;
L_004D76DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004D76F4; }
    set32(c.r[3], 0u + 32u);
    st64((c.r[4].w[0] + 72u), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
L_004D76F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004D7700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 1868u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1872u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004D7740; } }
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], 0u + 6u);
    st32((c.r[17].w[0] + 2300u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2304u), c.r[2].w[0]);  if (t) { goto L_004D7750; } }
L_004D7740:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[17].w[0] + 2300u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 2304u), c.r[2].w[0]);
    c.budget -= 4;
L_004D7750:
    set32(c.r[2], ld32((c.r[17].w[0] + 2300u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 1864u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7760u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004D7760u) [[unlikely]] return; }
L_004D7760:
    st32((c.r[17].w[0] + 2296u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004D77A0; } }
L_004D776C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7774u); set32(c.r[4], 0u + 432u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004D7774u) [[unlikely]] return; }
L_004D7774:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 2296u)));  goto L_004D7790; }
    set32(c.r[5], ld32((c.r[17].w[0] + 1864u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 1868u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D778Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 8u, depth + 1u); else { c.pc = 0x004740A0u; return; } if (c.pc != 0x004D778Cu) [[unlikely]] return; }
L_004D778C:
    set32(c.r[3], ld32((c.r[17].w[0] + 2296u)));
    c.budget -= 1;
L_004D7790:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_004D77A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 2300u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 1864u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D776Cu | kUnwind; return; } goto L_004D776C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 1864u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D77BCu); set32(c.r[4], 0u + 148u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004D77BCu) [[unlikely]] return; }
L_004D77BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 2228u), c.r[4].w[0]);  goto L_004D77D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D77D0u);  if (depth < kMaxDepth) unit_00F1(c, 222u, depth + 1u); else { c.pc = 0x004C5A10u; return; } if (c.pc != 0x004D77D0u) [[unlikely]] return; }
L_004D77D0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 2228u), c.r[4].w[0]);
    c.budget -= 2;
L_004D77D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004D77F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004D78A0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2308u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 1288u);  goto L_004D7834; }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004D7830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7830u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004D7830u) [[unlikely]] return; }
L_004D7830:
    set32(c.r[4], c.r[17].w[0] + 1288u);
    c.budget -= 1;
L_004D7834:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 1256u);  goto L_004D7860; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D785C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D785C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D785C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D785Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 120u, depth + 1u); else { c.pc = 0x001251B0u; return; } if (c.pc != 0x004D785Cu) [[unlikely]] return; }
L_004D785C:
    set32(c.r[4], c.r[17].w[0] + 1256u);
    c.budget -= 1;
L_004D7860:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004D788C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D7888; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D7888; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D7888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7888u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 120u, depth + 1u); else { c.pc = 0x001251B0u; return; } if (c.pc != 0x004D7888u) [[unlikely]] return; }
L_004D7888:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004D788C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004D78A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D78A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004D78A0u) [[unlikely]] return; }
L_004D78A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004D78A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004D78C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], c.r[18].w[0] + 152u);
    set32(c.r[4], c.r[18].w[0] + 248u);
    c.budget -= 11;
L_004D78EC:
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D78ECu | kUnwind; return; } goto L_004D78EC; } }
    c.f[0] = 0u;
    set32(c.r[3], c.r[18].w[0] + 344u);
    c.budget -= 2;
L_004D7910:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[4], c.r[4].w[0] + 12u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D7910u | kUnwind; return; } goto L_004D7910; } }
    st32((c.r[18].w[0] + 356u), c.f[0]);
    set32(c.r[19], c.r[18].w[0] + 1256u);
    st32((c.r[18].w[0] + 360u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 364u), c.f[0]);
    set32(c.r[4], 0u - 1u);
    st32((c.r[18].w[0] + 476u), c.f[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[18].w[0] + 480u), c.f[0]);
    st32((c.r[18].w[0] + 484u), c.f[0]);
    st32((c.r[18].w[0] + 488u), c.f[0]);
    st32((c.r[18].w[0] + 492u), c.f[0]);
    st32((c.r[18].w[0] + 496u), c.f[0]);
    st32((c.r[18].w[0] + 500u), c.f[0]);
    st32((c.r[18].w[0] + 504u), c.f[0]);
    st32((c.r[18].w[0] + 508u), c.f[0]);
    st32((c.r[18].w[0] + 640u), c.f[0]);
    st32((c.r[18].w[0] + 644u), c.f[0]);
    st32((c.r[18].w[0] + 648u), c.f[0]);
    st32((c.r[18].w[0] + 652u), c.f[0]);
    st32((c.r[18].w[0] + 656u), c.f[0]);
    st32((c.r[18].w[0] + 660u), c.f[0]);
    st32((c.r[18].w[0] + 664u), c.f[0]);
    st32((c.r[18].w[0] + 668u), c.f[0]);
    st32((c.r[18].w[0] + 672u), c.f[0]);
    st32((c.r[18].w[0] + 676u), c.f[0]);
    st32((c.r[18].w[0] + 680u), c.f[0]);
    st32((c.r[18].w[0] + 684u), c.f[0]);
    st32((c.r[18].w[0] + 688u), c.f[0]);
    st32((c.r[18].w[0] + 692u), c.f[0]);
    st32((c.r[18].w[0] + 696u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 704u), c.f[0]);
    st32((c.r[18].w[0] + 708u), c.f[0]);
    st32((c.r[18].w[0] + 712u), c.f[0]);
    st32((c.r[18].w[0] + 716u), c.f[0]);
    st32((c.r[18].w[0] + 720u), c.f[0]);
    st32((c.r[18].w[0] + 724u), c.f[0]);
    st32((c.r[18].w[0] + 736u), c.f[0]);
    st32((c.r[18].w[0] + 740u), c.f[0]);
    st32((c.r[18].w[0] + 744u), c.f[0]);
    st32((c.r[18].w[0] + 748u), c.f[0]);
    st32((c.r[18].w[0] + 752u), c.f[0]);
    st32((c.r[18].w[0] + 756u), c.f[0]);
    st32((c.r[18].w[0] + 760u), c.f[0]);
    st32((c.r[18].w[0] + 764u), c.f[0]);
    st32((c.r[18].w[0] + 768u), c.f[0]);
    st32((c.r[18].w[0] + 772u), c.f[0]);
    st32((c.r[18].w[0] + 776u), c.f[0]);
    st32((c.r[18].w[0] + 780u), c.f[0]);
    st32((c.r[18].w[0] + 784u), c.f[0]);
    st32((c.r[18].w[0] + 788u), c.f[0]);
    st32((c.r[18].w[0] + 792u), c.f[0]);
    st32((c.r[18].w[0] + 804u), c.f[0]);
    st32((c.r[18].w[0] + 808u), c.f[0]);
    st32((c.r[18].w[0] + 812u), c.f[0]);
    st32((c.r[18].w[0] + 816u), c.f[0]);
    st32((c.r[18].w[0] + 820u), c.f[0]);
    st32((c.r[18].w[0] + 824u), c.f[0]);
    st32((c.r[18].w[0] + 836u), c.f[0]);
    st32((c.r[18].w[0] + 840u), c.f[0]);
    st32((c.r[18].w[0] + 844u), c.f[0]);
    st32((c.r[18].w[0] + 900u), c.f[0]);
    st32((c.r[18].w[0] + 904u), c.f[0]);
    st32((c.r[18].w[0] + 908u), c.f[0]);
    st32((c.r[18].w[0] + 912u), c.f[0]);
    st32((c.r[18].w[0] + 916u), c.f[0]);
    st32((c.r[18].w[0] + 920u), c.f[0]);
    st32((c.r[18].w[0] + 924u), c.f[0]);
    st32((c.r[18].w[0] + 928u), c.f[0]);
    st32((c.r[18].w[0] + 932u), c.f[0]);
    st32((c.r[18].w[0] + 964u), c.f[0]);
    st32((c.r[18].w[0] + 968u), c.f[0]);
    st32((c.r[18].w[0] + 972u), c.f[0]);
    st32((c.r[18].w[0] + 976u), c.f[0]);
    st32((c.r[18].w[0] + 980u), c.f[0]);
    st32((c.r[18].w[0] + 984u), c.f[0]);
    st32((c.r[18].w[0] + 988u), c.f[0]);
    st32((c.r[18].w[0] + 992u), c.f[0]);
    st32((c.r[18].w[0] + 996u), c.f[0]);
    st32((c.r[18].w[0] + 1004u), c.f[0]);
    st32((c.r[18].w[0] + 1008u), c.f[0]);
    st32((c.r[18].w[0] + 1012u), c.f[0]);
    st32((c.r[18].w[0] + 1016u), c.f[0]);
    st32((c.r[18].w[0] + 1020u), c.f[0]);
    st32((c.r[18].w[0] + 1024u), c.f[0]);
    st32((c.r[18].w[0] + 1028u), c.f[0]);
    st32((c.r[18].w[0] + 1032u), c.f[0]);
    st32((c.r[18].w[0] + 1036u), c.f[0]);
    st32((c.r[18].w[0] + 1040u), c.f[0]);
    st32((c.r[18].w[0] + 1044u), c.f[0]);
    st32((c.r[18].w[0] + 1048u), c.f[0]);
    st32((c.r[18].w[0] + 1132u), c.f[0]);
    st32((c.r[18].w[0] + 1136u), c.f[0]);
    c.budget -= 95;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7AA8u); st32((c.r[18].w[0] + 1140u), c.f[0]);  if (depth < kMaxDepth) unit_00F5(c, 585u, depth + 1u); else { c.pc = 0x004D7C60u; return; } if (c.pc != 0x004D7AA8u) [[unlikely]] return; }
L_004D7AA8:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7AB4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 321u, depth + 1u); else { c.pc = 0x001137B0u; return; } if (c.pc != 0x004D7AB4u) [[unlikely]] return; }
L_004D7AB4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7AC0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F5(c, 580u, depth + 1u); else { c.pc = 0x004D7C10u; return; } if (c.pc != 0x004D7AC0u) [[unlikely]] return; }
L_004D7AC0:
    set32(c.r[19], c.r[18].w[0] + 1288u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7AD0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F5(c, 585u, depth + 1u); else { c.pc = 0x004D7C60u; return; } if (c.pc != 0x004D7AD0u) [[unlikely]] return; }
L_004D7AD0:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7ADCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F5(c, 579u, depth + 1u); else { c.pc = 0x004D7C00u; return; } if (c.pc != 0x004D7ADCu) [[unlikely]] return; }
L_004D7ADC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7AE8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F5(c, 574u, depth + 1u); else { c.pc = 0x004D7BB0u; return; } if (c.pc != 0x004D7AE8u) [[unlikely]] return; }
L_004D7AE8:
    st32((c.r[18].w[0] + 2320u), 0u);
    set32(c.r[3], 0u + 4u);
    st32((c.r[18].w[0] + 2324u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 2328u), 0u);
    st8((c.r[18].w[0] + 2344u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 2348u), 0u);
    st32((c.r[18].w[0] + 1864u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 1872u), c.r[16].w[0]);
    st32((c.r[18].w[0]), 0u);
    st32((c.r[18].w[0] + 116u), 0u);
    st32((c.r[18].w[0] + 1876u), 0u);
    st32((c.r[18].w[0] + 1880u), 0u);
    st32((c.r[18].w[0] + 1908u), 0u);
    st32((c.r[18].w[0] + 1912u), 0u);
    st32((c.r[18].w[0] + 1916u), 0u);
    st32((c.r[18].w[0] + 2292u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 1968u), 0u);
    st8((c.r[18].w[0] + 1177u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 464u), 0u);
    st32((c.r[18].w[0] + 952u), 0u);
    st32((c.r[18].w[0] + 376u), 0u);
    st32((c.r[18].w[0] + 372u), 0u);
    st32((c.r[18].w[0] + 368u), 0u);
    st32((c.r[18].w[0] + 392u), 0u);
    st32((c.r[18].w[0] + 388u), 0u);
    st32((c.r[18].w[0] + 384u), 0u);
    st32((c.r[18].w[0] + 408u), 0u);
    st32((c.r[18].w[0] + 404u), 0u);
    st32((c.r[18].w[0] + 400u), 0u);
    st32((c.r[18].w[0] + 424u), 0u);
    st32((c.r[18].w[0] + 420u), 0u);
    st32((c.r[18].w[0] + 416u), 0u);
    st32((c.r[18].w[0] + 440u), 0u);
    st32((c.r[18].w[0] + 436u), 0u);
    st32((c.r[18].w[0] + 432u), 0u);
    st32((c.r[18].w[0] + 348u), 0u);
    st8((c.r[18].w[0] + 2316u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 2340u), 0u);
    st32((c.r[18].w[0] + 2308u), 0u);
    st8((c.r[18].w[0] + 2344u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 1056u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 49;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004D7BB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7BC8u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00F5(c, 578u, depth + 1u); else { c.pc = 0x004D7BF0u; return; } if (c.pc != 0x004D7BC8u) [[unlikely]] return; }
L_004D7BC8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7BD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 461u, depth + 1u); else { c.pc = 0x001238F0u; return; } if (c.pc != 0x004D7BD4u) [[unlikely]] return; }
L_004D7BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7BDCu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0008(c, 460u, depth + 1u); else { c.pc = 0x001238E0u; return; } if (c.pc != 0x004D7BDCu) [[unlikely]] return; }
L_004D7BDC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004D7BF0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_004D7C00:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004D7C10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7C28u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00F5(c, 584u, depth + 1u); else { c.pc = 0x004D7C50u; return; } if (c.pc != 0x004D7C28u) [[unlikely]] return; }
L_004D7C28:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7C34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 461u, depth + 1u); else { c.pc = 0x001238F0u; return; } if (c.pc != 0x004D7C34u) [[unlikely]] return; }
L_004D7C34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7C3Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0008(c, 460u, depth + 1u); else { c.pc = 0x001238E0u; return; } if (c.pc != 0x004D7C3Cu) [[unlikely]] return; }
L_004D7C3C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004D7C50:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_004D7C60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004D7CAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7C78u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004D7C78u) [[unlikely]] return; }
L_004D7C78:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_004D7C98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7C90u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004D7C90u) [[unlikely]] return; }
L_004D7C90:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_004D7C98:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004D7CB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7CA8u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004D7CA8u) [[unlikely]] return; }
L_004D7CA8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004D7CAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004D7CB0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004D7CC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 2292u), c.r[5].w[0]);  c.pc = t; return; }
L_004D7CD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[5].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004D7E98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7D04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004D7D04u) [[unlikely]] return; }
L_004D7D04:
    c.f[3] = ld32((c.r[17].w[0] + 356u));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 360u));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[5] = fp::sub(c.f[3], c.f[2]);
    c.f[6] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 364u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = ld32((c.r[16].w[0] + 108u));
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.f[7] = fp::sub(c.f[2], c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 116u));
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[2] = fp::sqrt(c.f[2]);
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 21;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[29].w[0] + 48u), 0u);  goto L_004D7D88; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[4], c.f[2]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 56u), c.f[0]);  if (t) { goto L_004D7D94; } }
L_004D7D88:
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.budget -= 3;
L_004D7D94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[8] = c.r[3].w[0];
    c.facc = fp::mul(c.f[5], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[6]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[7], c.f[7]));
    fpu_rsqrt(c, 0u, c.f[8], c.f[0]);
    c.f[4] = fp::mul(c.f[6], c.f[0]);
    fpu_div(c, 6u, c.f[8], c.f[0]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[5] = fp::mul(c.f[5], c.f[0]);
    c.f[3] = fp::mul(c.f[7], c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[2] = ld32((c.r[3].w[0] + 4824u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[3].w[0] + 4824u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 26;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004D7E04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D7E14; } }
L_004D7E04:
    c.f[0] = ld32((c.r[3].w[0] + 4816u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_div(c, 8u, c.f[1], c.f[0]);
    c.budget -= 4;
L_004D7E14:
    c.f[0] = 0u;
    c.f[1] = fp::max(c.f[8], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::min(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[1]));
    c.budget -= 13;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);  goto L_004D7E50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D7E60; } }
L_004D7E50:
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[6]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 4;
L_004D7E60:
    c.f[1] = 0u;
    c.f[2] = fp::max(c.f[0], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::min(c.f[2], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 1068u), c.f[0]);  if (t) { goto L_004D7E98; } }
    st32((c.r[17].w[0] + 1072u), c.r[16].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 1184u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004D7E98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004D7EB0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1163u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[3] = ld32((c.r[4].w[0] + 1392u));  goto L_004D7ED0; }
    st8((c.r[4].w[0] + 1163u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 1173u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 1356u), 0u);
    c.f[3] = ld32((c.r[4].w[0] + 1392u));
    c.budget -= 5;
L_004D7ED0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[12] = 0u;
    set32(c.r[3], ld32((c.r[4].w[0] + 1872u)));
    c.f[4] = c.r[2].w[0];
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[3].w[0] + 72u));
    c.f[0] = ld32((c.r[4].w[0] + 1448u));
    c.f[1] = c.r[2].w[0];
    c.f[13] = fp::mul(c.f[3], c.f[2]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));
    c.f[17] = fp::mul(c.f[1], c.f[0]);
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 17;
    { c.f[16] = c.f[12];  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033ADC0u | kUnwind; return; } [[clang::musttail]] return unit_008E(c, 182u, depth); }
L_004D7F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1872u)));
    c.f[1] = ld32((c.r[4].w[0] + 1184u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 10;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[4].w[0] + 420u)));  goto L_004D7F6C; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1188u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004D7FF4; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1201u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D7FF0; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 420u)));
    c.budget -= 1;
L_004D7F6C:
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004D7FF0; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7F8Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00F9(c, 45u, depth + 1u); else { c.pc = 0x004E4A50u; return; } if (c.pc != 0x004D7F8Cu) [[unlikely]] return; }
L_004D7F8C:
    st8((c.r[16].w[0] + 1188u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1240u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st8((c.r[16].w[0] + 1185u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = 0u;
    st8((c.r[16].w[0] + 1166u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1232u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1124u));
    st32((c.r[16].w[0] + 1236u), c.f[1]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1872u)));
    c.f[1] = ld32((c.r[2].w[0] + 1184u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 15;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[16].w[0] + 1872u)));  goto L_004D7FD0; }
    st32((c.r[16].w[0] + 1236u), c.f[1]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1872u)));
    c.budget -= 2;
L_004D7FD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] + 1096u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 1052u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D7FE8u); st32((c.r[16].w[0] + 1052u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00F6(c, 22u, depth + 1u); else { c.pc = 0x004D85A0u; return; } if (c.pc != 0x004D7FE8u) [[unlikely]] return; }
L_004D7FE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);
    c.budget -= 2;
L_004D7FF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004D7FF4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
}

}
