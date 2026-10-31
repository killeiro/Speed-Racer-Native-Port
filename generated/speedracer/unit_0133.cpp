#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0133[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0,
    0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0,
    0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0,
    0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 67, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0,
    158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0,
    171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 0, 204, 0, 0, 0,
    205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 0,
    221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 229, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 285, 0, 286, 0, 0, 0, 287, 0, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0,
    0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    312, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 318, 0, 319, 0, 320, 0,
    321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0,
    0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0,
    354, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0,
    368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0,
    374, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 380, 0, 381, 0, 382, 0, 383, 0, 384, 0,
    385, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391, 0, 392, 0, 393, 0, 394, 0, 395, 0, 396, 0, 397, 0, 398, 0, 399, 0, 0, 400,
    0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 407, 0,
    0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0,
    413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0,
    419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 422, 0, 423, 0, 0, 0,
    0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0,
    0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0,
    0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 440, 0,
    0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0,
    448, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0,
    455, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0,
    462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 465, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0,
    469, 0, 0, 0, 470, 0, 471, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 477, 0,
    478, 0, 479, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0,
    484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0,
    489, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0,
    498, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0,
    502, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0,
    506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0,
    511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0,
    0, 520, 0, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0,
    528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0,
    533, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0,
    0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0,
    542, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0,
    0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0,
    0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0,
    0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0,
    0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0,
    570, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0,
    0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0,
    579, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0,
    584, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0,
    589, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0,
    593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0133(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_005CC000;
    case 2u: goto L_005CC010;
    case 3u: goto L_005CC024;
    case 4u: goto L_005CC050;
    case 5u: goto L_005CC060;
    case 6u: goto L_005CC074;
    case 7u: goto L_005CC088;
    case 8u: goto L_005CC0A8;
    case 9u: goto L_005CC0C4;
    case 10u: goto L_005CC0E0;
    case 11u: goto L_005CC0FC;
    case 12u: goto L_005CC110;
    case 13u: goto L_005CC124;
    case 14u: goto L_005CC150;
    case 15u: goto L_005CC160;
    case 16u: goto L_005CC174;
    case 17u: goto L_005CC188;
    case 18u: goto L_005CC1B4;
    case 19u: goto L_005CC1C4;
    case 20u: goto L_005CC1D0;
    case 21u: goto L_005CC1E4;
    case 22u: goto L_005CC200;
    case 23u: goto L_005CC210;
    case 24u: goto L_005CC224;
    case 25u: goto L_005CC238;
    case 26u: goto L_005CC264;
    case 27u: goto L_005CC274;
    case 28u: goto L_005CC288;
    case 29u: goto L_005CC29C;
    case 30u: goto L_005CC2C8;
    case 31u: goto L_005CC2D8;
    case 32u: goto L_005CC2EC;
    case 33u: goto L_005CC300;
    case 34u: goto L_005CC32C;
    case 35u: goto L_005CC33C;
    case 36u: goto L_005CC350;
    case 37u: goto L_005CC364;
    case 38u: goto L_005CC384;
    case 39u: goto L_005CC3A0;
    case 40u: goto L_005CC3B0;
    case 41u: goto L_005CC3C0;
    case 42u: goto L_005CC3C8;
    case 43u: goto L_005CC3E0;
    case 44u: goto L_005CC3F0;
    case 45u: goto L_005CC404;
    case 46u: goto L_005CC41C;
    case 47u: goto L_005CC42C;
    case 48u: goto L_005CC448;
    case 49u: goto L_005CC460;
    case 50u: goto L_005CC470;
    case 51u: goto L_005CC48C;
    case 52u: goto L_005CC4A4;
    case 53u: goto L_005CC4B4;
    case 54u: goto L_005CC4D0;
    case 55u: goto L_005CC5A0;
    case 56u: goto L_005CC670;
    case 57u: goto L_005CC740;
    case 58u: goto L_005CC830;
    case 59u: goto L_005CC840;
    case 60u: goto L_005CC89C;
    case 61u: goto L_005CC8D0;
    case 62u: goto L_005CC910;
    case 63u: goto L_005CC920;
    case 64u: goto L_005CC940;
    case 65u: goto L_005CC960;
    case 66u: goto L_005CC970;
    case 67u: goto L_005CC978;
    case 68u: goto L_005CC980;
    case 69u: goto L_005CC9A8;
    case 70u: goto L_005CC9C0;
    case 71u: goto L_005CC9E0;
    case 72u: goto L_005CCA00;
    case 73u: goto L_005CCA20;
    case 74u: goto L_005CCA40;
    case 75u: goto L_005CCA64;
    case 76u: goto L_005CCA90;
    case 77u: goto L_005CCAB0;
    case 78u: goto L_005CCAD0;
    case 79u: goto L_005CCAF0;
    case 80u: goto L_005CCB10;
    case 81u: goto L_005CCB30;
    case 82u: goto L_005CCB50;
    case 83u: goto L_005CCB60;
    case 84u: goto L_005CCB80;
    case 85u: goto L_005CCB90;
    case 86u: goto L_005CCBB0;
    case 87u: goto L_005CCBD0;
    case 88u: goto L_005CCBF0;
    case 89u: goto L_005CCC10;
    case 90u: goto L_005CCC30;
    case 91u: goto L_005CCC40;
    case 92u: goto L_005CCC48;
    case 93u: goto L_005CCC68;
    case 94u: goto L_005CCC80;
    case 95u: goto L_005CCC90;
    case 96u: goto L_005CCC98;
    case 97u: goto L_005CCCB8;
    case 98u: goto L_005CCCD0;
    case 99u: goto L_005CCCF0;
    case 100u: goto L_005CCD10;
    case 101u: goto L_005CCD30;
    case 102u: goto L_005CCD50;
    case 103u: goto L_005CCD70;
    case 104u: goto L_005CCD90;
    case 105u: goto L_005CCDA0;
    case 106u: goto L_005CCDC0;
    case 107u: goto L_005CCDD0;
    case 108u: goto L_005CCDF0;
    case 109u: goto L_005CCE10;
    case 110u: goto L_005CCE30;
    case 111u: goto L_005CCE50;
    case 112u: goto L_005CCE70;
    case 113u: goto L_005CCE90;
    case 114u: goto L_005CCEB0;
    case 115u: goto L_005CCED0;
    case 116u: goto L_005CCEF0;
    case 117u: goto L_005CCF10;
    case 118u: goto L_005CCF30;
    case 119u: goto L_005CCF50;
    case 120u: goto L_005CCF70;
    case 121u: goto L_005CCF90;
    case 122u: goto L_005CCFB0;
    case 123u: goto L_005CCFC0;
    case 124u: goto L_005CCFE0;
    case 125u: goto L_005CCFF0;
    case 126u: goto L_005CD000;
    case 127u: goto L_005CD020;
    case 128u: goto L_005CD030;
    case 129u: goto L_005CD050;
    case 130u: goto L_005CD060;
    case 131u: goto L_005CD080;
    case 132u: goto L_005CD090;
    case 133u: goto L_005CD0B0;
    case 134u: goto L_005CD0D0;
    case 135u: goto L_005CD0F0;
    case 136u: goto L_005CD110;
    case 137u: goto L_005CD130;
    case 138u: goto L_005CD150;
    case 139u: goto L_005CD170;
    case 140u: goto L_005CD190;
    case 141u: goto L_005CD1B0;
    case 142u: goto L_005CD1D0;
    case 143u: goto L_005CD1F4;
    case 144u: goto L_005CD200;
    case 145u: goto L_005CD21C;
    case 146u: goto L_005CD230;
    case 147u: goto L_005CD250;
    case 148u: goto L_005CD270;
    case 149u: goto L_005CD298;
    case 150u: goto L_005CD2A8;
    case 151u: goto L_005CD2CC;
    case 152u: goto L_005CD2E0;
    case 153u: goto L_005CD310;
    case 154u: goto L_005CD330;
    case 155u: goto L_005CD344;
    case 156u: goto L_005CD360;
    case 157u: goto L_005CD370;
    case 158u: goto L_005CD380;
    case 159u: goto L_005CD390;
    case 160u: goto L_005CD3AC;
    case 161u: goto L_005CD3B8;
    case 162u: goto L_005CD3D4;
    case 163u: goto L_005CD3E0;
    case 164u: goto L_005CD3F0;
    case 165u: goto L_005CD404;
    case 166u: goto L_005CD420;
    case 167u: goto L_005CD434;
    case 168u: goto L_005CD444;
    case 169u: goto L_005CD45C;
    case 170u: goto L_005CD470;
    case 171u: goto L_005CD480;
    case 172u: goto L_005CD490;
    case 173u: goto L_005CD4A0;
    case 174u: goto L_005CD4B0;
    case 175u: goto L_005CD4DC;
    case 176u: goto L_005CD4F4;
    case 177u: goto L_005CD528;
    case 178u: goto L_005CD540;
    case 179u: goto L_005CD550;
    case 180u: goto L_005CD560;
    case 181u: goto L_005CD570;
    case 182u: goto L_005CD58C;
    case 183u: goto L_005CD598;
    case 184u: goto L_005CD5C0;
    case 185u: goto L_005CD5D0;
    case 186u: goto L_005CD5E0;
    case 187u: goto L_005CD5F0;
    case 188u: goto L_005CD610;
    case 189u: goto L_005CD630;
    case 190u: goto L_005CD640;
    case 191u: goto L_005CD650;
    case 192u: goto L_005CD660;
    case 193u: goto L_005CD690;
    case 194u: goto L_005CD6AC;
    case 195u: goto L_005CD6C4;
    case 196u: goto L_005CD6E0;
    case 197u: goto L_005CD700;
    case 198u: goto L_005CD710;
    case 199u: goto L_005CD730;
    case 200u: goto L_005CD740;
    case 201u: goto L_005CD750;
    case 202u: goto L_005CD758;
    case 203u: goto L_005CD760;
    case 204u: goto L_005CD770;
    case 205u: goto L_005CD780;
    case 206u: goto L_005CD788;
    case 207u: goto L_005CD790;
    case 208u: goto L_005CD798;
    case 209u: goto L_005CD7A0;
    case 210u: goto L_005CD7A8;
    case 211u: goto L_005CD7B0;
    case 212u: goto L_005CD7B8;
    case 213u: goto L_005CD7C0;
    case 214u: goto L_005CD7C8;
    case 215u: goto L_005CD7D0;
    case 216u: goto L_005CD7D8;
    case 217u: goto L_005CD7E0;
    case 218u: goto L_005CD7E8;
    case 219u: goto L_005CD7F0;
    case 220u: goto L_005CD7F8;
    case 221u: goto L_005CD800;
    case 222u: goto L_005CD808;
    case 223u: goto L_005CD810;
    case 224u: goto L_005CD818;
    case 225u: goto L_005CD820;
    case 226u: goto L_005CD848;
    case 227u: goto L_005CD860;
    case 228u: goto L_005CD870;
    case 229u: goto L_005CD878;
    case 230u: goto L_005CD890;
    case 231u: goto L_005CD8A0;
    case 232u: goto L_005CD8A8;
    case 233u: goto L_005CD8C0;
    case 234u: goto L_005CD8D0;
    case 235u: goto L_005CD8D8;
    case 236u: goto L_005CD8F0;
    case 237u: goto L_005CD910;
    case 238u: goto L_005CD930;
    case 239u: goto L_005CD950;
    case 240u: goto L_005CD970;
    case 241u: goto L_005CD990;
    case 242u: goto L_005CD9B0;
    case 243u: goto L_005CD9D0;
    case 244u: goto L_005CD9F0;
    case 245u: goto L_005CDA10;
    case 246u: goto L_005CDA20;
    case 247u: goto L_005CDA40;
    case 248u: goto L_005CDA50;
    case 249u: goto L_005CDA60;
    case 250u: goto L_005CDA80;
    case 251u: goto L_005CDA90;
    case 252u: goto L_005CDAA0;
    case 253u: goto L_005CDAC0;
    case 254u: goto L_005CDAD0;
    case 255u: goto L_005CDAE0;
    case 256u: goto L_005CDAF0;
    case 257u: goto L_005CDB00;
    case 258u: goto L_005CDB20;
    case 259u: goto L_005CDB30;
    case 260u: goto L_005CDB50;
    case 261u: goto L_005CDB70;
    case 262u: goto L_005CDB90;
    case 263u: goto L_005CDBB0;
    case 264u: goto L_005CDBD0;
    case 265u: goto L_005CDBF0;
    case 266u: goto L_005CDC10;
    case 267u: goto L_005CDC30;
    case 268u: goto L_005CDC50;
    case 269u: goto L_005CDC70;
    case 270u: goto L_005CDC90;
    case 271u: goto L_005CDCA0;
    case 272u: goto L_005CDCC0;
    case 273u: goto L_005CDCD0;
    case 274u: goto L_005CDCE0;
    case 275u: goto L_005CDD00;
    case 276u: goto L_005CDD10;
    case 277u: goto L_005CDD20;
    case 278u: goto L_005CDD40;
    case 279u: goto L_005CDD50;
    case 280u: goto L_005CDD60;
    case 281u: goto L_005CDD80;
    case 282u: goto L_005CDDA0;
    case 283u: goto L_005CDDC0;
    case 284u: goto L_005CDDD0;
    case 285u: goto L_005CDDD8;
    case 286u: goto L_005CDDE0;
    case 287u: goto L_005CDDF0;
    case 288u: goto L_005CDE10;
    case 289u: goto L_005CDE20;
    case 290u: goto L_005CDE28;
    case 291u: goto L_005CDE48;
    case 292u: goto L_005CDE60;
    case 293u: goto L_005CDE70;
    case 294u: goto L_005CDE90;
    case 295u: goto L_005CDEA0;
    case 296u: goto L_005CDEB0;
    case 297u: goto L_005CDED0;
    case 298u: goto L_005CDEE0;
    case 299u: goto L_005CDEF0;
    case 300u: goto L_005CDF10;
    case 301u: goto L_005CDF20;
    case 302u: goto L_005CDF30;
    case 303u: goto L_005CDF50;
    case 304u: goto L_005CDF60;
    case 305u: goto L_005CDF70;
    case 306u: goto L_005CDF90;
    case 307u: goto L_005CDFA0;
    case 308u: goto L_005CDFB0;
    case 309u: goto L_005CDFC0;
    case 310u: goto L_005CDFD0;
    case 311u: goto L_005CDFF0;
    case 312u: goto L_005CE000;
    case 313u: goto L_005CE010;
    case 314u: goto L_005CE018;
    case 315u: goto L_005CE038;
    case 316u: goto L_005CE050;
    case 317u: goto L_005CE060;
    case 318u: goto L_005CE068;
    case 319u: goto L_005CE070;
    case 320u: goto L_005CE078;
    case 321u: goto L_005CE080;
    case 322u: goto L_005CE088;
    case 323u: goto L_005CE090;
    case 324u: goto L_005CE098;
    case 325u: goto L_005CE0A0;
    case 326u: goto L_005CE0A8;
    case 327u: goto L_005CE0B0;
    case 328u: goto L_005CE0B8;
    case 329u: goto L_005CE0C0;
    case 330u: goto L_005CE0C8;
    case 331u: goto L_005CE0D0;
    case 332u: goto L_005CE0D8;
    case 333u: goto L_005CE0F8;
    case 334u: goto L_005CE110;
    case 335u: goto L_005CE134;
    case 336u: goto L_005CE140;
    case 337u: goto L_005CE15C;
    case 338u: goto L_005CE170;
    case 339u: goto L_005CE190;
    case 340u: goto L_005CE1B4;
    case 341u: goto L_005CE1D0;
    case 342u: goto L_005CE220;
    case 343u: goto L_005CE230;
    case 344u: goto L_005CE238;
    case 345u: goto L_005CE240;
    case 346u: goto L_005CE260;
    case 347u: goto L_005CE270;
    case 348u: goto L_005CE280;
    case 349u: goto L_005CE2A0;
    case 350u: goto L_005CE2B0;
    case 351u: goto L_005CE2C0;
    case 352u: goto L_005CE2E0;
    case 353u: goto L_005CE2F0;
    case 354u: goto L_005CE300;
    case 355u: goto L_005CE308;
    case 356u: goto L_005CE320;
    case 357u: goto L_005CE330;
    case 358u: goto L_005CE338;
    case 359u: goto L_005CE350;
    case 360u: goto L_005CE360;
    case 361u: goto L_005CE368;
    case 362u: goto L_005CE380;
    case 363u: goto L_005CE390;
    case 364u: goto L_005CE398;
    case 365u: goto L_005CE3B0;
    case 366u: goto L_005CE3D0;
    case 367u: goto L_005CE3F0;
    case 368u: goto L_005CE400;
    case 369u: goto L_005CE420;
    case 370u: goto L_005CE430;
    case 371u: goto L_005CE440;
    case 372u: goto L_005CE460;
    case 373u: goto L_005CE470;
    case 374u: goto L_005CE480;
    case 375u: goto L_005CE488;
    case 376u: goto L_005CE490;
    case 377u: goto L_005CE4B0;
    case 378u: goto L_005CE4C0;
    case 379u: goto L_005CE4D0;
    case 380u: goto L_005CE4D8;
    case 381u: goto L_005CE4E0;
    case 382u: goto L_005CE4E8;
    case 383u: goto L_005CE4F0;
    case 384u: goto L_005CE4F8;
    case 385u: goto L_005CE500;
    case 386u: goto L_005CE508;
    case 387u: goto L_005CE510;
    case 388u: goto L_005CE518;
    case 389u: goto L_005CE520;
    case 390u: goto L_005CE528;
    case 391u: goto L_005CE530;
    case 392u: goto L_005CE538;
    case 393u: goto L_005CE540;
    case 394u: goto L_005CE548;
    case 395u: goto L_005CE550;
    case 396u: goto L_005CE558;
    case 397u: goto L_005CE560;
    case 398u: goto L_005CE568;
    case 399u: goto L_005CE570;
    case 400u: goto L_005CE57C;
    case 401u: goto L_005CE590;
    case 402u: goto L_005CE5A0;
    case 403u: goto L_005CE5A8;
    case 404u: goto L_005CE5C8;
    case 405u: goto L_005CE5E0;
    case 406u: goto L_005CE5F0;
    case 407u: goto L_005CE5F8;
    case 408u: goto L_005CE618;
    case 409u: goto L_005CE630;
    case 410u: goto L_005CE640;
    case 411u: goto L_005CE660;
    case 412u: goto L_005CE670;
    case 413u: goto L_005CE680;
    case 414u: goto L_005CE6A0;
    case 415u: goto L_005CE6B0;
    case 416u: goto L_005CE6C0;
    case 417u: goto L_005CE6E0;
    case 418u: goto L_005CE6F0;
    case 419u: goto L_005CE700;
    case 420u: goto L_005CE750;
    case 421u: goto L_005CE760;
    case 422u: goto L_005CE768;
    case 423u: goto L_005CE770;
    case 424u: goto L_005CE790;
    case 425u: goto L_005CE7A0;
    case 426u: goto L_005CE7E0;
    case 427u: goto L_005CE7F0;
    case 428u: goto L_005CE810;
    case 429u: goto L_005CE820;
    case 430u: goto L_005CE830;
    case 431u: goto L_005CE850;
    case 432u: goto L_005CE860;
    case 433u: goto L_005CE870;
    case 434u: goto L_005CE890;
    case 435u: goto L_005CE8B0;
    case 436u: goto L_005CE8C0;
    case 437u: goto L_005CE8C8;
    case 438u: goto L_005CE8E0;
    case 439u: goto L_005CE8F0;
    case 440u: goto L_005CE8F8;
    case 441u: goto L_005CE910;
    case 442u: goto L_005CE920;
    case 443u: goto L_005CE928;
    case 444u: goto L_005CE940;
    case 445u: goto L_005CE950;
    case 446u: goto L_005CE958;
    case 447u: goto L_005CE970;
    case 448u: goto L_005CE980;
    case 449u: goto L_005CE988;
    case 450u: goto L_005CE9A0;
    case 451u: goto L_005CE9C0;
    case 452u: goto L_005CE9D0;
    case 453u: goto L_005CE9D8;
    case 454u: goto L_005CE9F0;
    case 455u: goto L_005CEA00;
    case 456u: goto L_005CEA08;
    case 457u: goto L_005CEA20;
    case 458u: goto L_005CEA30;
    case 459u: goto L_005CEA38;
    case 460u: goto L_005CEA50;
    case 461u: goto L_005CEA70;
    case 462u: goto L_005CEA80;
    case 463u: goto L_005CEAA0;
    case 464u: goto L_005CEAB0;
    case 465u: goto L_005CEAC0;
    case 466u: goto L_005CEAC8;
    case 467u: goto L_005CEAD0;
    case 468u: goto L_005CEAF0;
    case 469u: goto L_005CEB00;
    case 470u: goto L_005CEB10;
    case 471u: goto L_005CEB18;
    case 472u: goto L_005CEB20;
    case 473u: goto L_005CEB28;
    case 474u: goto L_005CEB48;
    case 475u: goto L_005CEB60;
    case 476u: goto L_005CEB70;
    case 477u: goto L_005CEB78;
    case 478u: goto L_005CEB80;
    case 479u: goto L_005CEB88;
    case 480u: goto L_005CEBA8;
    case 481u: goto L_005CEBC0;
    case 482u: goto L_005CEBD0;
    case 483u: goto L_005CEBF0;
    case 484u: goto L_005CEC00;
    case 485u: goto L_005CEC20;
    case 486u: goto L_005CECF0;
    case 487u: goto L_005CED40;
    case 488u: goto L_005CED60;
    case 489u: goto L_005CED80;
    case 490u: goto L_005CEDA0;
    case 491u: goto L_005CEDC0;
    case 492u: goto L_005CEDE0;
    case 493u: goto L_005CEE08;
    case 494u: goto L_005CEE1C;
    case 495u: goto L_005CEE2C;
    case 496u: goto L_005CEE44;
    case 497u: goto L_005CEE60;
    case 498u: goto L_005CEE80;
    case 499u: goto L_005CEEA0;
    case 500u: goto L_005CEEC0;
    case 501u: goto L_005CEEE0;
    case 502u: goto L_005CEF00;
    case 503u: goto L_005CEF20;
    case 504u: goto L_005CEF40;
    case 505u: goto L_005CEF60;
    case 506u: goto L_005CEF80;
    case 507u: goto L_005CEFA0;
    case 508u: goto L_005CF020;
    case 509u: goto L_005CF040;
    case 510u: goto L_005CF060;
    case 511u: goto L_005CF080;
    case 512u: goto L_005CF0A0;
    case 513u: goto L_005CF0C0;
    case 514u: goto L_005CF0E0;
    case 515u: goto L_005CF108;
    case 516u: goto L_005CF11C;
    case 517u: goto L_005CF12C;
    case 518u: goto L_005CF144;
    case 519u: goto L_005CF160;
    case 520u: goto L_005CF184;
    case 521u: goto L_005CF190;
    case 522u: goto L_005CF1AC;
    case 523u: goto L_005CF1C0;
    case 524u: goto L_005CF1E4;
    case 525u: goto L_005CF220;
    case 526u: goto L_005CF240;
    case 527u: goto L_005CF260;
    case 528u: goto L_005CF280;
    case 529u: goto L_005CF2A8;
    case 530u: goto L_005CF2BC;
    case 531u: goto L_005CF2CC;
    case 532u: goto L_005CF2E4;
    case 533u: goto L_005CF300;
    case 534u: goto L_005CF320;
    case 535u: goto L_005CF340;
    case 536u: goto L_005CF360;
    case 537u: goto L_005CF384;
    case 538u: goto L_005CF390;
    case 539u: goto L_005CF3AC;
    case 540u: goto L_005CF3C0;
    case 541u: goto L_005CF3E0;
    case 542u: goto L_005CF400;
    case 543u: goto L_005CF410;
    case 544u: goto L_005CF428;
    case 545u: goto L_005CF440;
    case 546u: goto L_005CF450;
    case 547u: goto L_005CF470;
    case 548u: goto L_005CF490;
    case 549u: goto L_005CF4B0;
    case 550u: goto L_005CF4D0;
    case 551u: goto L_005CF4F0;
    case 552u: goto L_005CF510;
    case 553u: goto L_005CF530;
    case 554u: goto L_005CF550;
    case 555u: goto L_005CF570;
    case 556u: goto L_005CF5B0;
    case 557u: goto L_005CF5D0;
    case 558u: goto L_005CF5F8;
    case 559u: goto L_005CF60C;
    case 560u: goto L_005CF61C;
    case 561u: goto L_005CF634;
    case 562u: goto L_005CF640;
    case 563u: goto L_005CF65C;
    case 564u: goto L_005CF670;
    case 565u: goto L_005CF690;
    case 566u: goto L_005CF6B0;
    case 567u: goto L_005CF71C;
    case 568u: goto L_005CF73C;
    case 569u: goto L_005CF770;
    case 570u: goto L_005CF780;
    case 571u: goto L_005CF7A4;
    case 572u: goto L_005CF7C0;
    case 573u: goto L_005CF7E0;
    case 574u: goto L_005CF7F0;
    case 575u: goto L_005CF808;
    case 576u: goto L_005CF820;
    case 577u: goto L_005CF840;
    case 578u: goto L_005CF864;
    case 579u: goto L_005CF880;
    case 580u: goto L_005CF89C;
    case 581u: goto L_005CF8B8;
    case 582u: goto L_005CF8D0;
    case 583u: goto L_005CF8F4;
    case 584u: goto L_005CF900;
    case 585u: goto L_005CF91C;
    case 586u: goto L_005CF930;
    case 587u: goto L_005CF954;
    case 588u: goto L_005CF970;
    case 589u: goto L_005CF980;
    case 590u: goto L_005CF9A0;
    case 591u: goto L_005CF9C0;
    case 592u: goto L_005CF9E0;
    case 593u: goto L_005CFA00;
    case 594u: goto L_005CFA78;
    case 595u: goto L_005CFAE4;
    case 596u: goto L_005CFB54;
    case 597u: goto L_005CFBC0;
    case 598u: goto L_005CFC30;
    case 599u: goto L_005CFCA4;
    case 600u: goto L_005CFD14;
    case 601u: goto L_005CFD80;
    case 602u: goto L_005CFDEC;
    case 603u: goto L_005CFE58;
    case 604u: goto L_005CFEC8;
    case 605u: goto L_005CFF3C;
    case 606u: goto L_005CFFA8;
    default: bad_entry(c, 0x005CC000u); return;
    }
L_005CC000:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_005CC014; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC010u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x005CC010u) [[unlikely]] return; }
L_005CC010:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_005CC014:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_005CC024; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC024u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x005CC024u) [[unlikely]] return; }
L_005CC024:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 6192u);
    set32(c.r[5], c.r[5].w[0] + 7648u);
    set32(c.r[6], c.r[6].w[0] + 6176u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC050u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CC050u) [[unlikely]] return; }
L_005CC050:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[16], c.r[16].w[0] + 6224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC060u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x005CC060u) [[unlikely]] return; }
L_005CC060:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_005CC078; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC074u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x005CC074u) [[unlikely]] return; }
L_005CC074:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_005CC078:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 40u), c.r[2].w[0]);  goto L_005CC08C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC088u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x005CC088u) [[unlikely]] return; }
L_005CC088:
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 1;
L_005CC08C:
    set32(c.r[5], c.r[29].w[0] + 36u);
    set32(c.r[2], c.r[29].w[0] + 44u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 40u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC0A8u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0018(c, 196u, depth + 1u); else { c.pc = 0x00161CE0u; return; } if (c.pc != 0x005CC0A8u) [[unlikely]] return; }
L_005CC0A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 6224u);
    set32(c.r[5], c.r[5].w[0] + 7536u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC0C4u); set32(c.r[6], c.r[6].w[0] + 6208u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CC0C4u) [[unlikely]] return; }
L_005CC0C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_005CC0E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[16], c.r[16].w[0] + 6272u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC0FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x005CC0FCu) [[unlikely]] return; }
L_005CC0FC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_005CC114; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC110u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x005CC110u) [[unlikely]] return; }
L_005CC110:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_005CC114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_005CC124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC124u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x005CC124u) [[unlikely]] return; }
L_005CC124:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 6272u);
    set32(c.r[5], c.r[5].w[0] + 19440u);
    set32(c.r[6], c.r[6].w[0] + 6248u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC150u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CC150u) [[unlikely]] return; }
L_005CC150:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[16], c.r[16].w[0] + 6304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC160u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x005CC160u) [[unlikely]] return; }
L_005CC160:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_005CC178; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC174u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x005CC174u) [[unlikely]] return; }
L_005CC174:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_005CC178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_005CC188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC188u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x005CC188u) [[unlikely]] return; }
L_005CC188:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 6304u);
    set32(c.r[5], c.r[5].w[0] + 28720u);
    set32(c.r[6], c.r[6].w[0] + 6288u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC1B4u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CC1B4u) [[unlikely]] return; }
L_005CC1B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC1C4u); set32(c.r[5], c.r[5].w[0] + 6336u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x00166430u; return; } if (c.pc != 0x005CC1C4u) [[unlikely]] return; }
L_005CC1C4:
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC1D0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 326u, depth + 1u); else { c.pc = 0x00167020u; return; } if (c.pc != 0x005CC1D0u) [[unlikely]] return; }
L_005CC1D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 6336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC1E4u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0019(c, 325u, depth + 1u); else { c.pc = 0x00166FF0u; return; } if (c.pc != 0x005CC1E4u) [[unlikely]] return; }
L_005CC1E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 6336u);
    set32(c.r[5], c.r[5].w[0] + 14272u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC200u); set32(c.r[6], c.r[6].w[0] + 6320u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CC200u) [[unlikely]] return; }
L_005CC200:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[16], c.r[16].w[0] + 6384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC210u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x005CC210u) [[unlikely]] return; }
L_005CC210:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_005CC228; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC224u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x005CC224u) [[unlikely]] return; }
L_005CC224:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_005CC228:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_005CC238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC238u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x005CC238u) [[unlikely]] return; }
L_005CC238:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 6384u);
    set32(c.r[5], c.r[5].w[0] + 19440u);
    set32(c.r[6], c.r[6].w[0] + 6360u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC264u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CC264u) [[unlikely]] return; }
L_005CC264:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[16], c.r[16].w[0] + 6416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC274u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x005CC274u) [[unlikely]] return; }
L_005CC274:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_005CC28C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC288u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x005CC288u) [[unlikely]] return; }
L_005CC288:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_005CC28C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_005CC29C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC29Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x005CC29Cu) [[unlikely]] return; }
L_005CC29C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 6416u);
    set32(c.r[5], c.r[5].w[0] + 28560u);
    set32(c.r[6], c.r[6].w[0] + 6400u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC2C8u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CC2C8u) [[unlikely]] return; }
L_005CC2C8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[16], c.r[16].w[0] + 6448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC2D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x005CC2D8u) [[unlikely]] return; }
L_005CC2D8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_005CC2F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC2ECu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x005CC2ECu) [[unlikely]] return; }
L_005CC2EC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_005CC2F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_005CC300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC300u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x005CC300u) [[unlikely]] return; }
L_005CC300:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 6448u);
    set32(c.r[5], c.r[5].w[0] + 19440u);
    set32(c.r[6], c.r[6].w[0] + 6432u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC32Cu); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CC32Cu) [[unlikely]] return; }
L_005CC32C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[16], c.r[16].w[0] + 6480u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC33Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x005CC33Cu) [[unlikely]] return; }
L_005CC33C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_005CC354; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC350u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x005CC350u) [[unlikely]] return; }
L_005CC350:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_005CC354:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  goto L_005CC368; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC364u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x005CC364u) [[unlikely]] return; }
L_005CC364:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_005CC368:
    set32(c.r[5], c.r[29].w[0] + 52u);
    set32(c.r[2], c.r[29].w[0] + 60u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 56u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC384u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0018(c, 196u, depth + 1u); else { c.pc = 0x00161CE0u; return; } if (c.pc != 0x005CC384u) [[unlikely]] return; }
L_005CC384:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 6480u);
    set32(c.r[5], c.r[5].w[0] + 7536u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC3A0u); set32(c.r[6], c.r[6].w[0] + 6464u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CC3A0u) [[unlikely]] return; }
L_005CC3A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_005CC3B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC3C0u); set32(c.r[4], c.r[28].w[0] - 28800u);  if (depth < kMaxDepth) unit_004C(c, 184u, depth + 1u); else { c.pc = 0x002323C0u; return; } if (c.pc != 0x005CC3C0u) [[unlikely]] return; }
L_005CC3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC3C8u); set32(c.r[4], c.r[28].w[0] - 28796u);  if (depth < kMaxDepth) unit_002D(c, 103u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x005CC3C8u) [[unlikely]] return; }
L_005CC3C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 28796u);
    set32(c.r[5], c.r[5].w[0] + 17120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC3E0u); set32(c.r[6], c.r[6].w[0] + 6504u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CC3E0u) [[unlikely]] return; }
L_005CC3E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CC3F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], c.r[28].w[0] - 28784u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC404u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_004C(c, 184u, depth + 1u); else { c.pc = 0x002323C0u; return; } if (c.pc != 0x005CC404u) [[unlikely]] return; }
L_005CC404:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[2].w[0] + 6692u), 0u);  if (t) { goto L_005CC42C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC41Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005CC41Cu) [[unlikely]] return; }
L_005CC41C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC42Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005CC42Cu) [[unlikely]] return; }
L_005CC42C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 6608u);
    set32(c.r[5], c.r[5].w[0] - 10624u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC448u); set32(c.r[6], c.r[6].w[0] + 6592u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CC448u) [[unlikely]] return; }
L_005CC448:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[2].w[0] + 6820u), 0u);  if (t) { goto L_005CC470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC460u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005CC460u) [[unlikely]] return; }
L_005CC460:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC470u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005CC470u) [[unlikely]] return; }
L_005CC470:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 6736u);
    set32(c.r[5], c.r[5].w[0] - 10624u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC48Cu); set32(c.r[6], c.r[6].w[0] + 6712u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CC48Cu) [[unlikely]] return; }
L_005CC48C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[2].w[0] + 6948u), 0u);  if (t) { goto L_005CC4B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC4A4u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005CC4A4u) [[unlikely]] return; }
L_005CC4A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC4B4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005CC4B4u) [[unlikely]] return; }
L_005CC4B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 6864u);
    set32(c.r[5], c.r[5].w[0] - 10624u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC4D0u); set32(c.r[6], c.r[6].w[0] + 6840u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CC4D0u) [[unlikely]] return; }
L_005CC4D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7010u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7076u), 0u);
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 6992u);
    st32((c.r[3].w[0] + 7072u), 0u);
    set32(c.r[5], c.r[5].w[0] - 10720u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], c.r[6].w[0] + 6968u);
    st8((c.r[3].w[0] + 7085u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7083u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7084u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7048u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7040u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7032u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7036u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[3].w[0] + 7024u), 0ull);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7056u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7060u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7064u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7081u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7080u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7068u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7082u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7016u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7052u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7086u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 52;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC5A0u); st32((c.r[3].w[0] + 7044u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CC5A0u) [[unlikely]] return; }
L_005CC5A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7122u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7188u), 0u);
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 7104u);
    st32((c.r[3].w[0] + 7184u), 0u);
    set32(c.r[5], c.r[5].w[0] - 10720u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], c.r[6].w[0] + 7088u);
    st8((c.r[3].w[0] + 7197u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7195u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7196u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7160u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7152u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7144u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7148u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[3].w[0] + 7136u), 0ull);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7168u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7172u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7176u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7193u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7192u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7180u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7194u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7128u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7164u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7198u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 52;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC670u); st32((c.r[3].w[0] + 7156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CC670u) [[unlikely]] return; }
L_005CC670:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7234u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7300u), 0u);
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 7216u);
    st32((c.r[3].w[0] + 7296u), 0u);
    set32(c.r[5], c.r[5].w[0] - 10720u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], c.r[6].w[0] + 7200u);
    st8((c.r[3].w[0] + 7309u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7307u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7308u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7272u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7264u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7256u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7260u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[3].w[0] + 7248u), 0ull);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7280u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7284u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7288u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7305u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7304u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7292u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7306u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7240u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 7276u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 7310u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 52;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC740u); st32((c.r[3].w[0] + 7268u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CC740u) [[unlikely]] return; }
L_005CC740:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DE00000u);
    st32((c.r[4].w[0] - 28460u), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3EC80000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] - 28456u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[28].w[0] - 32624u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] - 28448u), 0u);
    c.f[1] = ld32((c.r[28].w[0] - 32620u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] - 28444u), c.r[7].w[0]);
    st32((c.r[5].w[0] - 28464u), c.f[3]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] - 28432u), c.r[7].w[0]);
    c.f[2] = ld32((c.r[28].w[0] - 32616u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] - 28424u), 0u);
    c.f[0] = ld32((c.r[28].w[0] - 32612u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] - 28420u), c.r[3].w[0]);
    st32((c.r[5].w[0] - 28452u), c.f[2]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] - 28412u), c.f[3]);
    st32((c.r[5].w[0] - 28436u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] - 28408u), c.r[3].w[0]);
    st32((c.r[5].w[0] - 28428u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] - 28400u), c.f[2]);
    st32((c.r[5].w[0] - 28416u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] - 28396u), c.r[7].w[0]);
    st32((c.r[6].w[0] - 28440u), c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[5].w[0] - 28404u), 0u);
    st32((c.r[4].w[0] - 28388u), c.f[1]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[5].w[0] - 28392u), 0u);
    st32((c.r[4].w[0] - 28384u), c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[5].w[0] - 28380u), 0u);
    st32((c.r[4].w[0] - 28376u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] - 28372u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 58;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005CC830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC840u); set32(c.r[4], c.r[28].w[0] - 28756u);  if (depth < kMaxDepth) unit_004C(c, 184u, depth + 1u); else { c.pc = 0x002323C0u; return; } if (c.pc != 0x005CC840u) [[unlikely]] return; }
L_005CC840:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 11468u), c.r[4].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 11448u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 11452u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 11428u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    ld128((c.r[4].w[0] - 28144u) & ~15u, c.r[5]);
    c.f[0] = ld32((c.r[3].w[0] - 28128u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[7], c.r[7].w[0] - 28120u);
    set32(c.r[6], c.r[6].w[0] + 11432u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[4].w[0] + 11408u) & ~15u, c.r[5]);
    st32((c.r[3].w[0] + 11424u), c.f[0]);
    set32(c.r[5], 0u + 8u);
    c.budget -= 23;
L_005CC89C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005CC89Cu | kUnwind; return; } goto L_005CC89C; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[7], c.r[7].w[0] - 28096u);
    set32(c.r[6], c.r[6].w[0] + 11456u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
L_005CC8D0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005CC8D0u | kUnwind; return; } goto L_005CC8D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = ld16((c.r[4].w[0] - 28080u));
    st16((c.r[3].w[0] + 11472u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CC910:
    c.budget -= 2;
    { set32(c.r[4], c.r[28].w[0] - 28752u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002323C0u | kUnwind; return; } [[clang::musttail]] return unit_004C(c, 184u, depth); }
L_005CC920:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 14648u);
    set32(c.r[5], c.r[5].w[0] - 14640u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 13368u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CC940:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 14616u);
    set32(c.r[5], c.r[5].w[0] - 14608u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 12488u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CC960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC970u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005CC970u) [[unlikely]] return; }
L_005CC970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC978u); st32((c.r[28].w[0] - 28748u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CC978u) [[unlikely]] return; }
L_005CC978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC980u); st32((c.r[28].w[0] - 28744u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005CC980u) [[unlikely]] return; }
L_005CC980:
    set32(c.r[4], ld32((c.r[28].w[0] - 28732u)));
    st32((c.r[28].w[0] - 28740u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[28].w[0] - 28732u), c.r[3].w[0]);  if (t) { goto L_005CC9A8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[4], c.r[4].w[0] + 30128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CC9A8u); set32(c.r[5], c.r[5].w[0] + 29472u);  if (depth < kMaxDepth) unit_0047(c, 186u, depth + 1u); else { c.pc = 0x0021DB80u; return; } if (c.pc != 0x005CC9A8u) [[unlikely]] return; }
L_005CC9A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CC9C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 13368u);
    set32(c.r[5], c.r[5].w[0] - 13348u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 24280u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CC9E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 13328u);
    set32(c.r[5], c.r[5].w[0] - 13277u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCA00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 13248u);
    set32(c.r[5], c.r[5].w[0] - 13232u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCA20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 13200u);
    set32(c.r[5], c.r[5].w[0] - 13184u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCA40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 13144u);
    set32(c.r[5], c.r[5].w[0] - 13029u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CCA64u); set32(c.r[6], c.r[6].w[0] - 11376u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CCA64u) [[unlikely]] return; }
L_005CCA64:
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[5].w[0] + 11480u), c.f[0]);
    st32((c.r[4].w[0] + 11484u), c.f[0]);
    st32((c.r[3].w[0] + 11488u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CCA90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 13000u);
    set32(c.r[5], c.r[5].w[0] - 12992u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCAB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 12960u);
    set32(c.r[5], c.r[5].w[0] - 12818u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCAD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 12792u);
    set32(c.r[5], c.r[5].w[0] - 12772u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCAF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 12744u);
    set32(c.r[5], c.r[5].w[0] - 12717u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 9256u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCB10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 12696u);
    set32(c.r[5], c.r[5].w[0] - 12621u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCB30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 12600u);
    set32(c.r[5], c.r[5].w[0] - 12592u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCB50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CCB60u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005CCB60u) [[unlikely]] return; }
L_005CCB60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28724u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 12568u);
    set32(c.r[5], c.r[5].w[0] - 12560u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CCB80u); set32(c.r[6], c.r[6].w[0] - 10288u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CCB80u) [[unlikely]] return; }
L_005CCB80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CCB90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 12536u);
    set32(c.r[5], c.r[5].w[0] - 12514u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 9256u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCBB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 12488u);
    set32(c.r[5], c.r[5].w[0] - 12391u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 24304u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCBD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 12376u);
    set32(c.r[5], c.r[5].w[0] - 12344u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 11376u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCBF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 12320u);
    set32(c.r[5], c.r[5].w[0] - 12247u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCC10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 12224u);
    set32(c.r[5], c.r[5].w[0] - 12040u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCC30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CCC40u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CCC40u) [[unlikely]] return; }
L_005CCC40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CCC48u); st32((c.r[28].w[0] - 28720u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005CCC48u) [[unlikely]] return; }
L_005CCC48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28716u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 12024u);
    set32(c.r[5], c.r[5].w[0] - 11992u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CCC68u); set32(c.r[6], c.r[6].w[0] - 10152u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CCC68u) [[unlikely]] return; }
L_005CCC68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CCC80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CCC90u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CCC90u) [[unlikely]] return; }
L_005CCC90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CCC98u); st32((c.r[28].w[0] - 28712u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005CCC98u) [[unlikely]] return; }
L_005CCC98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28708u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 11968u);
    set32(c.r[5], c.r[5].w[0] - 11859u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CCCB8u); set32(c.r[6], c.r[6].w[0] + 23872u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CCCB8u) [[unlikely]] return; }
L_005CCCB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CCCD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 11832u);
    set32(c.r[5], c.r[5].w[0] - 11824u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCCF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 11792u);
    set32(c.r[5], c.r[5].w[0] - 11776u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCD10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 11744u);
    set32(c.r[5], c.r[5].w[0] - 11728u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCD30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 11696u);
    set32(c.r[5], c.r[5].w[0] - 11680u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCD50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 11648u);
    set32(c.r[5], c.r[5].w[0] - 11632u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCD70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 11600u);
    set32(c.r[5], c.r[5].w[0] - 11584u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCD90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CCDA0u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CCDA0u) [[unlikely]] return; }
L_005CCDA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28704u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 11552u);
    set32(c.r[5], c.r[5].w[0] - 11536u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CCDC0u); set32(c.r[6], c.r[6].w[0] - 10104u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CCDC0u) [[unlikely]] return; }
L_005CCDC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CCDD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 11512u);
    set32(c.r[5], c.r[5].w[0] - 11504u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCDF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 11472u);
    set32(c.r[5], c.r[5].w[0] - 11456u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCE10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 11424u);
    set32(c.r[5], c.r[5].w[0] - 11408u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCE30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 11376u);
    set32(c.r[5], c.r[5].w[0] - 11290u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCE50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 11264u);
    set32(c.r[5], c.r[5].w[0] - 11238u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 11376u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCE70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 11208u);
    set32(c.r[5], c.r[5].w[0] - 11077u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCE90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 11048u);
    set32(c.r[5], c.r[5].w[0] - 11040u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCEB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 11008u);
    set32(c.r[5], c.r[5].w[0] - 10940u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCED0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 10912u);
    set32(c.r[5], c.r[5].w[0] - 10896u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCEF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 10864u);
    set32(c.r[5], c.r[5].w[0] - 10848u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCF10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 10816u);
    set32(c.r[5], c.r[5].w[0] - 10800u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCF30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 10768u);
    set32(c.r[5], c.r[5].w[0] - 10752u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCF50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 10720u);
    set32(c.r[5], c.r[5].w[0] - 10359u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 12224u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCF70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 10336u);
    set32(c.r[5], c.r[5].w[0] - 10320u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCF90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    set32(c.r[5], c.r[5].w[0] - 10254u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CCFB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CCFC0u);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005CCFC0u) [[unlikely]] return; }
L_005CCFC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28700u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 10232u);
    set32(c.r[5], c.r[5].w[0] - 10224u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CCFE0u); set32(c.r[6], c.r[6].w[0] - 10192u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CCFE0u) [[unlikely]] return; }
L_005CCFE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CCFF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD000u);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005CD000u) [[unlikely]] return; }
L_005CD000:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28696u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 10192u);
    set32(c.r[5], c.r[5].w[0] - 10176u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD020u); set32(c.r[6], c.r[6].w[0] - 10152u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CD020u) [[unlikely]] return; }
L_005CD020:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CD030:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 10152u);
    set32(c.r[5], c.r[5].w[0] - 10130u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 14568u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD060u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CD060u) [[unlikely]] return; }
L_005CD060:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28692u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 10104u);
    set32(c.r[5], c.r[5].w[0] - 10096u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD080u); set32(c.r[6], c.r[6].w[0] - 10152u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CD080u) [[unlikely]] return; }
L_005CD080:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CD090:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 10072u);
    set32(c.r[5], c.r[5].w[0] - 10000u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 12696u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD0B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 9976u);
    set32(c.r[5], c.r[5].w[0] - 9968u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD0D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 9944u);
    set32(c.r[5], c.r[5].w[0] - 9925u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 11376u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD0F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 9896u);
    set32(c.r[5], c.r[5].w[0] - 9888u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 18368u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD110:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 9864u);
    set32(c.r[5], c.r[5].w[0] - 9689u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD130:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 9664u);
    set32(c.r[5], c.r[5].w[0] - 9509u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 10288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD150:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 9488u);
    set32(c.r[5], c.r[5].w[0] - 9465u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 9256u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD170:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 9440u);
    set32(c.r[5], c.r[5].w[0] - 9396u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 12696u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD190:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 9368u);
    set32(c.r[5], c.r[5].w[0] - 9350u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 11376u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD1B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 9320u);
    set32(c.r[5], c.r[5].w[0] - 9312u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 18368u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD1D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 9288u);
    set32(c.r[5], c.r[5].w[0] - 9280u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD1F4u); set32(c.r[6], c.r[6].w[0] - 19832u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CD1F4u) [[unlikely]] return; }
L_005CD1F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD200u); set32(c.r[4], c.r[4].w[0] + 11520u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x005CD200u) [[unlikely]] return; }
L_005CD200:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 11520u);
    set32(c.r[5], c.r[5].w[0] - 25552u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD21Cu); set32(c.r[6], c.r[6].w[0] + 11496u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CD21Cu) [[unlikely]] return; }
L_005CD21C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CD230:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 9256u);
    set32(c.r[5], c.r[5].w[0] - 9233u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 12224u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD250:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 9208u);
    set32(c.r[5], c.r[5].w[0] - 9190u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 11376u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 11536u);
    set32(c.r[5], c.r[5].w[0] - 13024u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD298u); set32(c.r[8], 0u + 32u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x005CD298u) [[unlikely]] return; }
L_005CD298:
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD2A8u); st32((c.r[29].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x005CD2A8u) [[unlikely]] return; }
L_005CD2A8:
    st32((c.r[28].w[0] - 28672u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[28].w[0] - 28668u), c.r[2].w[0]);
    set32(c.r[4], c.r[28].w[0] - 28672u);
    set32(c.r[5], c.r[5].w[0] - 12992u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD2CCu); set32(c.r[6], c.r[6].w[0] + 11920u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CD2CCu) [[unlikely]] return; }
L_005CD2CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_005CD2E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] + 7440u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 9112u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] - 9108u), c.r[5].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 9104u), 0u);  c.pc = t; return; }
L_005CD310:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 28624u);
    set32(c.r[5], c.r[5].w[0] - 8864u);
    c.budget -= 6;
    { set32(c.r[6], c.r[6].w[0] + 12336u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003981B0u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 13u, depth); }
L_005CD330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD344u); set32(c.r[4], c.r[4].w[0] + 12368u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x005CD344u) [[unlikely]] return; }
L_005CD344:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 12368u);
    set32(c.r[5], c.r[5].w[0] - 25552u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD360u); set32(c.r[6], c.r[6].w[0] + 12352u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CD360u) [[unlikely]] return; }
L_005CD360:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CD370:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 6256u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 28604u), c.r[3].w[0]);  c.pc = t; return; }
L_005CD380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD390u); set32(c.r[4], c.r[28].w[0] - 28596u);  if (depth < kMaxDepth) unit_004C(c, 184u, depth + 1u); else { c.pc = 0x002323C0u; return; } if (c.pc != 0x005CD390u) [[unlikely]] return; }
L_005CD390:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 7472u);
    set32(c.r[5], c.r[5].w[0] + 7480u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD3ACu); set32(c.r[6], c.r[6].w[0] + 23872u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CD3ACu) [[unlikely]] return; }
L_005CD3AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD3B8u); set32(c.r[4], c.r[4].w[0] + 12400u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x005CD3B8u) [[unlikely]] return; }
L_005CD3B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 12400u);
    set32(c.r[5], c.r[5].w[0] - 25552u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD3D4u); set32(c.r[6], c.r[6].w[0] + 12384u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CD3D4u) [[unlikely]] return; }
L_005CD3D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CD3E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[28].w[0] - 28584u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002323C0u | kUnwind; return; } [[clang::musttail]] return unit_004C(c, 184u, depth); }
L_005CD3F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], c.r[28].w[0] - 28580u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD404u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_004C(c, 184u, depth + 1u); else { c.pc = 0x002323C0u; return; } if (c.pc != 0x005CD404u) [[unlikely]] return; }
L_005CD404:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 7952u);
    set32(c.r[5], c.r[5].w[0] + 7968u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD420u); set32(c.r[6], c.r[6].w[0] + 23872u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CD420u) [[unlikely]] return; }
L_005CD420:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 28576u), 0u);  if (t) { goto L_005CD444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD434u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005CD434u) [[unlikely]] return; }
L_005CD434:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD444u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005CD444u) [[unlikely]] return; }
L_005CD444:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 28576u);
    set32(c.r[5], c.r[5].w[0] + 5088u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD45Cu); set32(c.r[6], c.r[6].w[0] + 12416u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CD45Cu) [[unlikely]] return; }
L_005CD45C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005CD470:
    c.budget -= 2;
    { set32(c.r[4], c.r[28].w[0] - 28572u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002323C0u | kUnwind; return; } [[clang::musttail]] return unit_004C(c, 184u, depth); }
L_005CD480:
    c.budget -= 2;
    { set32(c.r[4], c.r[28].w[0] - 28568u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002323C0u | kUnwind; return; } [[clang::musttail]] return unit_004C(c, 184u, depth); }
L_005CD490:
    c.budget -= 2;
    { set32(c.r[4], c.r[28].w[0] - 28564u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002323C0u | kUnwind; return; } [[clang::musttail]] return unit_004C(c, 184u, depth); }
L_005CD4A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[28].w[0] - 28560u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002323C0u | kUnwind; return; } [[clang::musttail]] return unit_004C(c, 184u, depth); }
L_005CD4B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 12448u);
    set32(c.r[5], c.r[5].w[0] + 13248u);
    set32(c.r[6], c.r[6].w[0] + 13136u);
    set32(c.r[7], 0u + 12u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD4DCu); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x005CD4DCu) [[unlikely]] return; }
L_005CD4DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13104u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD4F4u); set32(c.r[6], c.r[6].w[0] + 12432u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CD4F4u) [[unlikely]] return; }
L_005CD4F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 12488u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 12492u), 0u);
    set32(c.r[4], c.r[4].w[0] + 12488u);
    st32((c.r[2].w[0] + 12496u), 0u);
    set32(c.r[5], c.r[5].w[0] + 12992u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD528u); set32(c.r[6], c.r[6].w[0] + 12472u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CD528u) [[unlikely]] return; }
L_005CD528:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CD540:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] + 12512u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002257D0u | kUnwind; return; } [[clang::musttail]] return unit_0049(c, 43u, depth); }
L_005CD550:
    c.budget -= 2;
    { set32(c.r[4], c.r[28].w[0] - 28552u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002323C0u | kUnwind; return; } [[clang::musttail]] return unit_004C(c, 184u, depth); }
L_005CD560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD570u); set32(c.r[4], c.r[28].w[0] - 28548u);  if (depth < kMaxDepth) unit_004C(c, 184u, depth + 1u); else { c.pc = 0x002323C0u; return; } if (c.pc != 0x005CD570u) [[unlikely]] return; }
L_005CD570:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 8064u);
    set32(c.r[5], c.r[5].w[0] + 8160u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD58Cu); set32(c.r[6], c.r[6].w[0] + 31640u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CD58Cu) [[unlikely]] return; }
L_005CD58C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD598u); set32(c.r[4], c.r[4].w[0] + 12624u);  if (depth < kMaxDepth) unit_004C(c, 164u, depth + 1u); else { c.pc = 0x00232120u; return; } if (c.pc != 0x005CD598u) [[unlikely]] return; }
L_005CD598:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 12716u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 12732u), 0u);
    st32((c.r[3].w[0] + 12748u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CD5C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[28].w[0] - 28524u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002323C0u | kUnwind; return; } [[clang::musttail]] return unit_004C(c, 184u, depth); }
L_005CD5D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[28].w[0] - 28520u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002323C0u | kUnwind; return; } [[clang::musttail]] return unit_004C(c, 184u, depth); }
L_005CD5E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD5F0u); set32(c.r[4], c.r[28].w[0] - 28516u);  if (depth < kMaxDepth) unit_004C(c, 184u, depth + 1u); else { c.pc = 0x002323C0u; return; } if (c.pc != 0x005CD5F0u) [[unlikely]] return; }
L_005CD5F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 8208u);
    set32(c.r[6], 0u + 31u);
    set32(c.r[7], 0u + 992u);
    set32(c.r[8], 0u + 31744u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD610u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0071(c, 340u, depth + 1u); else { c.pc = 0x002C7960u; return; } if (c.pc != 0x005CD610u) [[unlikely]] return; }
L_005CD610:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 8288u);
    set32(c.r[6], 0u + 31u);
    set32(c.r[7], 0u + 992u);
    set32(c.r[8], 0u + 31744u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD630u); c.r[9].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0071(c, 340u, depth + 1u); else { c.pc = 0x002C7960u; return; } if (c.pc != 0x005CD630u) [[unlikely]] return; }
L_005CD630:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CD640:
    c.budget -= 2;
    { set32(c.r[4], c.r[28].w[0] - 28512u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002323C0u | kUnwind; return; } [[clang::musttail]] return unit_004C(c, 184u, depth); }
L_005CD650:
    c.budget -= 2;
    { set32(c.r[4], c.r[28].w[0] - 28500u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002323C0u | kUnwind; return; } [[clang::musttail]] return unit_004C(c, 184u, depth); }
L_005CD660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    set32(c.r[4], c.r[28].w[0] - 28472u);
    set32(c.r[5], c.r[5].w[0] + 6944u);
    set32(c.r[6], c.r[6].w[0] + 13168u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD690u); st32((c.r[28].w[0] - 28472u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CD690u) [[unlikely]] return; }
L_005CD690:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 28468u);
    set32(c.r[5], c.r[5].w[0] + 6944u);
    set32(c.r[6], c.r[6].w[0] + 13184u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD6ACu); st32((c.r[28].w[0] - 28468u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CD6ACu) [[unlikely]] return; }
L_005CD6AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 28456u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_005CD6EC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD6C4u); set32(c.r[4], c.r[4].w[0] + 13216u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x005CD6C4u) [[unlikely]] return; }
L_005CD6C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 13216u);
    set32(c.r[5], c.r[5].w[0] - 25552u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD6E0u); set32(c.r[6], c.r[6].w[0] + 13200u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CD6E0u) [[unlikely]] return; }
L_005CD6E0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 28456u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
L_005CD6EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005CD700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD710u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CD710u) [[unlikely]] return; }
L_005CD710:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28452u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8520u);
    set32(c.r[5], c.r[5].w[0] + 8528u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD730u); set32(c.r[6], c.r[6].w[0] + 13184u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CD730u) [[unlikely]] return; }
L_005CD730:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CD740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD750u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CD750u) [[unlikely]] return; }
L_005CD750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD758u); st32((c.r[28].w[0] - 28448u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 249u, depth + 1u); else { c.pc = 0x00272A40u; return; } if (c.pc != 0x005CD758u) [[unlikely]] return; }
L_005CD758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD760u); st32((c.r[28].w[0] - 28444u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 172u, depth + 1u); else { c.pc = 0x00259610u; return; } if (c.pc != 0x005CD760u) [[unlikely]] return; }
L_005CD760:
    st32((c.r[28].w[0] - 28440u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CD770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD780u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CD780u) [[unlikely]] return; }
L_005CD780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD788u); st32((c.r[28].w[0] - 28436u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004E(c, 453u, depth + 1u); else { c.pc = 0x0023BDD0u; return; } if (c.pc != 0x005CD788u) [[unlikely]] return; }
L_005CD788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD790u); st32((c.r[28].w[0] - 28432u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005CD790u) [[unlikely]] return; }
L_005CD790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD798u); st32((c.r[28].w[0] - 28428u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 32u, depth + 1u); else { c.pc = 0x0023CA50u; return; } if (c.pc != 0x005CD798u) [[unlikely]] return; }
L_005CD798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD7A0u); st32((c.r[28].w[0] - 28424u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 249u, depth + 1u); else { c.pc = 0x00272A40u; return; } if (c.pc != 0x005CD7A0u) [[unlikely]] return; }
L_005CD7A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD7A8u); st32((c.r[28].w[0] - 28420u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 69u, depth + 1u); else { c.pc = 0x0023D220u; return; } if (c.pc != 0x005CD7A8u) [[unlikely]] return; }
L_005CD7A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD7B0u); st32((c.r[28].w[0] - 28416u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005CD7B0u) [[unlikely]] return; }
L_005CD7B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD7B8u); st32((c.r[28].w[0] - 28412u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005CD7B8u) [[unlikely]] return; }
L_005CD7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD7C0u); st32((c.r[28].w[0] - 28408u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 172u, depth + 1u); else { c.pc = 0x00259610u; return; } if (c.pc != 0x005CD7C0u) [[unlikely]] return; }
L_005CD7C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD7C8u); st32((c.r[28].w[0] - 28404u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 406u, depth + 1u); else { c.pc = 0x002636D0u; return; } if (c.pc != 0x005CD7C8u) [[unlikely]] return; }
L_005CD7C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD7D0u); st32((c.r[28].w[0] - 28400u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 435u, depth + 1u); else { c.pc = 0x00263B50u; return; } if (c.pc != 0x005CD7D0u) [[unlikely]] return; }
L_005CD7D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD7D8u); st32((c.r[28].w[0] - 28396u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0059(c, 9u, depth + 1u); else { c.pc = 0x002640C0u; return; } if (c.pc != 0x005CD7D8u) [[unlikely]] return; }
L_005CD7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD7E0u); st32((c.r[28].w[0] - 28392u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0059(c, 40u, depth + 1u); else { c.pc = 0x00264600u; return; } if (c.pc != 0x005CD7E0u) [[unlikely]] return; }
L_005CD7E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD7E8u); st32((c.r[28].w[0] - 28388u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 165u, depth + 1u); else { c.pc = 0x00276380u; return; } if (c.pc != 0x005CD7E8u) [[unlikely]] return; }
L_005CD7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD7F0u); st32((c.r[28].w[0] - 28384u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 233u, depth + 1u); else { c.pc = 0x00276F40u; return; } if (c.pc != 0x005CD7F0u) [[unlikely]] return; }
L_005CD7F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD7F8u); st32((c.r[28].w[0] - 28380u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 117u, depth + 1u); else { c.pc = 0x002753C0u; return; } if (c.pc != 0x005CD7F8u) [[unlikely]] return; }
L_005CD7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD800u); st32((c.r[28].w[0] - 28376u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 336u, depth + 1u); else { c.pc = 0x002734D0u; return; } if (c.pc != 0x005CD800u) [[unlikely]] return; }
L_005CD800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD808u); st32((c.r[28].w[0] - 28372u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 363u, depth + 1u); else { c.pc = 0x002739C0u; return; } if (c.pc != 0x005CD808u) [[unlikely]] return; }
L_005CD808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD810u); st32((c.r[28].w[0] - 28368u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 388u, depth + 1u); else { c.pc = 0x00273DE0u; return; } if (c.pc != 0x005CD810u) [[unlikely]] return; }
L_005CD810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD818u); st32((c.r[28].w[0] - 28364u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 23u, depth + 1u); else { c.pc = 0x00274340u; return; } if (c.pc != 0x005CD818u) [[unlikely]] return; }
L_005CD818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD820u); st32((c.r[28].w[0] - 28360u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 53u, depth + 1u); else { c.pc = 0x00274880u; return; } if (c.pc != 0x005CD820u) [[unlikely]] return; }
L_005CD820:
    set32(c.r[4], ld32((c.r[28].w[0] - 28348u)));
    st32((c.r[28].w[0] - 28356u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[28].w[0] - 28348u), c.r[3].w[0]);  if (t) { goto L_005CD848; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[4], c.r[4].w[0] - 19584u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD848u); set32(c.r[5], c.r[5].w[0] - 20416u);  if (depth < kMaxDepth) unit_0047(c, 186u, depth + 1u); else { c.pc = 0x0021DB80u; return; } if (c.pc != 0x005CD848u) [[unlikely]] return; }
L_005CD848:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CD860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD870u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CD870u) [[unlikely]] return; }
L_005CD870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD878u); st32((c.r[28].w[0] - 28344u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004E(c, 453u, depth + 1u); else { c.pc = 0x0023BDD0u; return; } if (c.pc != 0x005CD878u) [[unlikely]] return; }
L_005CD878:
    st32((c.r[28].w[0] - 28340u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CD890:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD8A0u);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005CD8A0u) [[unlikely]] return; }
L_005CD8A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD8A8u); st32((c.r[28].w[0] - 28332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 32u, depth + 1u); else { c.pc = 0x0023CA50u; return; } if (c.pc != 0x005CD8A8u) [[unlikely]] return; }
L_005CD8A8:
    st32((c.r[28].w[0] - 28328u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CD8C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD8D0u);  if (depth < kMaxDepth) unit_005C(c, 249u, depth + 1u); else { c.pc = 0x00272A40u; return; } if (c.pc != 0x005CD8D0u) [[unlikely]] return; }
L_005CD8D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CD8D8u); st32((c.r[28].w[0] - 28320u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 69u, depth + 1u); else { c.pc = 0x0023D220u; return; } if (c.pc != 0x005CD8D8u) [[unlikely]] return; }
L_005CD8D8:
    st32((c.r[28].w[0] - 28316u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CD8F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 9856u);
    set32(c.r[5], c.r[5].w[0] + 9872u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 10056u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD910:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 9912u);
    set32(c.r[5], c.r[5].w[0] + 9933u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 10056u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD930:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 9960u);
    set32(c.r[5], c.r[5].w[0] + 9982u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 10056u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD950:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 10008u);
    set32(c.r[5], c.r[5].w[0] + 10030u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 10056u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD970:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 10056u);
    set32(c.r[5], c.r[5].w[0] + 10202u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 13584u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD990:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 10224u);
    set32(c.r[5], c.r[5].w[0] + 10255u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 10056u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD9B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 10288u);
    set32(c.r[5], c.r[5].w[0] + 10323u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 10056u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD9D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 10360u);
    set32(c.r[5], c.r[5].w[0] + 10368u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 10056u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CD9F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 10400u);
    set32(c.r[5], c.r[5].w[0] + 11127u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 18368u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CDA10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDA20u);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005CDA20u) [[unlikely]] return; }
L_005CDA20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28308u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 11152u);
    set32(c.r[5], c.r[5].w[0] + 11180u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDA40u); set32(c.r[6], c.r[6].w[0] + 23872u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CDA40u) [[unlikely]] return; }
L_005CDA40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CDA50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDA60u);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005CDA60u) [[unlikely]] return; }
L_005CDA60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28304u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 11192u);
    set32(c.r[5], c.r[5].w[0] + 11200u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDA80u); set32(c.r[6], c.r[6].w[0] + 14568u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CDA80u) [[unlikely]] return; }
L_005CDA80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CDA90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDAA0u);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005CDAA0u) [[unlikely]] return; }
L_005CDAA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28300u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 11224u);
    set32(c.r[5], c.r[5].w[0] + 11258u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDAC0u); set32(c.r[6], c.r[6].w[0] + 13680u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CDAC0u) [[unlikely]] return; }
L_005CDAC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CDAD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDAE0u);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005CDAE0u) [[unlikely]] return; }
L_005CDAE0:
    st32((c.r[28].w[0] - 28296u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CDAF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDB00u);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005CDB00u) [[unlikely]] return; }
L_005CDB00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28284u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 11280u);
    set32(c.r[5], c.r[5].w[0] + 11296u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDB20u); set32(c.r[6], c.r[6].w[0] + 11224u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CDB20u) [[unlikely]] return; }
L_005CDB20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CDB30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 11328u);
    set32(c.r[5], c.r[5].w[0] + 11344u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CDB50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 11368u);
    set32(c.r[5], c.r[5].w[0] + 11394u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 11776u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CDB70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 11424u);
    set32(c.r[5], c.r[5].w[0] + 11440u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 11368u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CDB90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 11472u);
    set32(c.r[5], c.r[5].w[0] + 11488u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 11704u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CDBB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 11520u);
    set32(c.r[5], c.r[5].w[0] + 11536u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 11840u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CDBD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 11568u);
    set32(c.r[5], c.r[5].w[0] + 11584u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 11904u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CDBF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 11624u);
    set32(c.r[5], c.r[5].w[0] + 11683u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CDC10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 11704u);
    set32(c.r[5], c.r[5].w[0] + 11743u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 11776u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CDC30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 11776u);
    set32(c.r[5], c.r[5].w[0] + 11816u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 13584u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CDC50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 11840u);
    set32(c.r[5], c.r[5].w[0] + 11874u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 11776u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CDC70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 11904u);
    set32(c.r[5], c.r[5].w[0] + 11969u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 11776u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CDC90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDCA0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005CDCA0u) [[unlikely]] return; }
L_005CDCA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28280u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 12000u);
    set32(c.r[5], c.r[5].w[0] + 12028u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDCC0u); set32(c.r[6], c.r[6].w[0] + 23872u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CDCC0u) [[unlikely]] return; }
L_005CDCC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CDCD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDCE0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005CDCE0u) [[unlikely]] return; }
L_005CDCE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28276u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 12040u);
    set32(c.r[5], c.r[5].w[0] + 12048u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDD00u); set32(c.r[6], c.r[6].w[0] + 13000u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CDD00u) [[unlikely]] return; }
L_005CDD00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CDD10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDD20u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005CDD20u) [[unlikely]] return; }
L_005CDD20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28272u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 12080u);
    set32(c.r[5], c.r[5].w[0] + 12124u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDD40u); set32(c.r[6], c.r[6].w[0] + 13680u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CDD40u) [[unlikely]] return; }
L_005CDD40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CDD50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDD60u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005CDD60u) [[unlikely]] return; }
L_005CDD60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28268u), c.r[2].w[0]);
    ld128((c.r[3].w[0] + 18128u) & ~15u, c.r[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[3].w[0] + 15008u) & ~15u, c.r[4]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CDD80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 12144u);
    set32(c.r[5], c.r[5].w[0] + 12182u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 18368u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CDDA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 12208u);
    set32(c.r[5], c.r[5].w[0] + 12977u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CDDC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDDD0u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CDDD0u) [[unlikely]] return; }
L_005CDDD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDDD8u); st32((c.r[28].w[0] - 28260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 249u, depth + 1u); else { c.pc = 0x00272A40u; return; } if (c.pc != 0x005CDDD8u) [[unlikely]] return; }
L_005CDDD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDDE0u); st32((c.r[28].w[0] - 28256u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 172u, depth + 1u); else { c.pc = 0x00259610u; return; } if (c.pc != 0x005CDDE0u) [[unlikely]] return; }
L_005CDDE0:
    st32((c.r[28].w[0] - 28252u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CDDF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 13000u);
    set32(c.r[5], c.r[5].w[0] + 13024u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 14568u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CDE10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDE20u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CDE20u) [[unlikely]] return; }
L_005CDE20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDE28u); st32((c.r[28].w[0] - 28244u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 388u, depth + 1u); else { c.pc = 0x00273DE0u; return; } if (c.pc != 0x005CDE28u) [[unlikely]] return; }
L_005CDE28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28240u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 13048u);
    set32(c.r[5], c.r[5].w[0] + 13059u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDE48u); set32(c.r[6], c.r[6].w[0] + 13184u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CDE48u) [[unlikely]] return; }
L_005CDE48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CDE60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDE70u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CDE70u) [[unlikely]] return; }
L_005CDE70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[28].w[0] - 28236u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 13080u);
    set32(c.r[5], c.r[5].w[0] + 13088u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDE90u); set32(c.r[6], c.r[6].w[0] - 18368u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CDE90u) [[unlikely]] return; }
L_005CDE90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CDEA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDEB0u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CDEB0u) [[unlikely]] return; }
L_005CDEB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28232u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 13112u);
    set32(c.r[5], c.r[5].w[0] + 13132u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDED0u); set32(c.r[6], c.r[6].w[0] + 23872u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CDED0u) [[unlikely]] return; }
L_005CDED0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CDEE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDEF0u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CDEF0u) [[unlikely]] return; }
L_005CDEF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28228u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 13144u);
    set32(c.r[5], c.r[5].w[0] + 13152u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDF10u); set32(c.r[6], c.r[6].w[0] + 13000u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CDF10u) [[unlikely]] return; }
L_005CDF10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CDF20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDF30u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CDF30u) [[unlikely]] return; }
L_005CDF30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28224u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 13184u);
    set32(c.r[5], c.r[5].w[0] + 13200u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDF50u); set32(c.r[6], c.r[6].w[0] + 14568u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CDF50u) [[unlikely]] return; }
L_005CDF50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CDF60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDF70u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CDF70u) [[unlikely]] return; }
L_005CDF70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28220u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 13224u);
    set32(c.r[5], c.r[5].w[0] + 13260u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDF90u); set32(c.r[6], c.r[6].w[0] + 13680u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CDF90u) [[unlikely]] return; }
L_005CDF90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CDFA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDFB0u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CDFB0u) [[unlikely]] return; }
L_005CDFB0:
    st32((c.r[28].w[0] - 28216u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CDFC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDFD0u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CDFD0u) [[unlikely]] return; }
L_005CDFD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28204u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 13280u);
    set32(c.r[5], c.r[5].w[0] + 13327u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CDFF0u); set32(c.r[6], c.r[6].w[0] + 13000u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CDFF0u) [[unlikely]] return; }
L_005CDFF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE010u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CE010u) [[unlikely]] return; }
L_005CE010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE018u); st32((c.r[28].w[0] - 28200u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005CE018u) [[unlikely]] return; }
L_005CE018:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28196u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 13360u);
    set32(c.r[5], c.r[5].w[0] + 13407u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE038u); set32(c.r[6], c.r[6].w[0] + 13000u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CE038u) [[unlikely]] return; }
L_005CE038:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE060u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CE060u) [[unlikely]] return; }
L_005CE060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE068u); st32((c.r[28].w[0] - 28192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005CE068u) [[unlikely]] return; }
L_005CE068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE070u); st32((c.r[28].w[0] - 28188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0059(c, 9u, depth + 1u); else { c.pc = 0x002640C0u; return; } if (c.pc != 0x005CE070u) [[unlikely]] return; }
L_005CE070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE078u); st32((c.r[28].w[0] - 28184u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 32u, depth + 1u); else { c.pc = 0x0023CA50u; return; } if (c.pc != 0x005CE078u) [[unlikely]] return; }
L_005CE078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE080u); st32((c.r[28].w[0] - 28180u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 165u, depth + 1u); else { c.pc = 0x00276380u; return; } if (c.pc != 0x005CE080u) [[unlikely]] return; }
L_005CE080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE088u); st32((c.r[28].w[0] - 28176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 249u, depth + 1u); else { c.pc = 0x00272A40u; return; } if (c.pc != 0x005CE088u) [[unlikely]] return; }
L_005CE088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE090u); st32((c.r[28].w[0] - 28172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0059(c, 40u, depth + 1u); else { c.pc = 0x00264600u; return; } if (c.pc != 0x005CE090u) [[unlikely]] return; }
L_005CE090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE098u); st32((c.r[28].w[0] - 28168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 69u, depth + 1u); else { c.pc = 0x0023D220u; return; } if (c.pc != 0x005CE098u) [[unlikely]] return; }
L_005CE098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE0A0u); st32((c.r[28].w[0] - 28164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 233u, depth + 1u); else { c.pc = 0x00276F40u; return; } if (c.pc != 0x005CE0A0u) [[unlikely]] return; }
L_005CE0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE0A8u); st32((c.r[28].w[0] - 28160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 172u, depth + 1u); else { c.pc = 0x00259610u; return; } if (c.pc != 0x005CE0A8u) [[unlikely]] return; }
L_005CE0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE0B0u); st32((c.r[28].w[0] - 28156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 435u, depth + 1u); else { c.pc = 0x00263B50u; return; } if (c.pc != 0x005CE0B0u) [[unlikely]] return; }
L_005CE0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE0B8u); st32((c.r[28].w[0] - 28152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004E(c, 453u, depth + 1u); else { c.pc = 0x0023BDD0u; return; } if (c.pc != 0x005CE0B8u) [[unlikely]] return; }
L_005CE0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE0C0u); st32((c.r[28].w[0] - 28148u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 117u, depth + 1u); else { c.pc = 0x002753C0u; return; } if (c.pc != 0x005CE0C0u) [[unlikely]] return; }
L_005CE0C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE0C8u); st32((c.r[28].w[0] - 28144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005CE0C8u) [[unlikely]] return; }
L_005CE0C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE0D0u); st32((c.r[28].w[0] - 28140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005CE0D0u) [[unlikely]] return; }
L_005CE0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE0D8u); st32((c.r[28].w[0] - 28136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 406u, depth + 1u); else { c.pc = 0x002636D0u; return; } if (c.pc != 0x005CE0D8u) [[unlikely]] return; }
L_005CE0D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28132u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 13448u);
    set32(c.r[5], c.r[5].w[0] + 13456u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE0F8u); set32(c.r[6], c.r[6].w[0] + 13512u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CE0F8u) [[unlikely]] return; }
L_005CE0F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE110:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 13480u);
    set32(c.r[5], c.r[5].w[0] + 13488u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE134u); set32(c.r[6], c.r[6].w[0] - 19832u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CE134u) [[unlikely]] return; }
L_005CE134:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE140u); set32(c.r[4], c.r[4].w[0] + 15040u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x005CE140u) [[unlikely]] return; }
L_005CE140:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 15040u);
    set32(c.r[5], c.r[5].w[0] - 25552u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE15Cu); set32(c.r[6], c.r[6].w[0] + 15024u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CE15Cu) [[unlikely]] return; }
L_005CE15C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE170:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 13512u);
    set32(c.r[5], c.r[5].w[0] + 13560u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 18368u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CE190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 13584u);
    set32(c.r[5], c.r[5].w[0] + 13664u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE1B4u); set32(c.r[6], c.r[6].w[0] + 23872u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CE1B4u) [[unlikely]] return; }
L_005CE1B4:
    c.f[12] = ld32((c.r[28].w[0] - 32644u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 13616u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE1D0u); c.f[15] = c.f[12];  if (depth < kMaxDepth) unit_0072(c, 232u, depth + 1u); else { c.pc = 0x002C9FC0u; return; } if (c.pc != 0x005CE1D0u) [[unlikely]] return; }
L_005CE1D0:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 13632u), c.f[0]);
    st32((c.r[3].w[0] + 13636u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[7].w[0] + 13640u), c.f[0]);
    st32((c.r[6].w[0] + 13648u), c.f[0]);
    st32((c.r[5].w[0] + 13652u), c.f[0]);
    st32((c.r[4].w[0] + 13656u), c.f[0]);
    st32((c.r[3].w[0] + 13660u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE230u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CE230u) [[unlikely]] return; }
L_005CE230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE238u); st32((c.r[28].w[0] - 28116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 249u, depth + 1u); else { c.pc = 0x00272A40u; return; } if (c.pc != 0x005CE238u) [[unlikely]] return; }
L_005CE238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE240u); st32((c.r[28].w[0] - 28112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 172u, depth + 1u); else { c.pc = 0x00259610u; return; } if (c.pc != 0x005CE240u) [[unlikely]] return; }
L_005CE240:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28108u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 13680u);
    set32(c.r[5], c.r[5].w[0] + 13696u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE260u); set32(c.r[6], c.r[6].w[0] + 13584u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CE260u) [[unlikely]] return; }
L_005CE260:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE280u);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005CE280u) [[unlikely]] return; }
L_005CE280:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28104u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 13720u);
    set32(c.r[5], c.r[5].w[0] + 13744u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE2A0u); set32(c.r[6], c.r[6].w[0] + 14184u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CE2A0u) [[unlikely]] return; }
L_005CE2A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE2B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE2C0u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CE2C0u) [[unlikely]] return; }
L_005CE2C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28100u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 13768u);
    set32(c.r[5], c.r[5].w[0] + 13776u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE2E0u); set32(c.r[6], c.r[6].w[0] + 13184u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CE2E0u) [[unlikely]] return; }
L_005CE2E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE2F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE300u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005CE300u) [[unlikely]] return; }
L_005CE300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE308u); st32((c.r[28].w[0] - 28096u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 406u, depth + 1u); else { c.pc = 0x002636D0u; return; } if (c.pc != 0x005CE308u) [[unlikely]] return; }
L_005CE308:
    st32((c.r[28].w[0] - 28092u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE330u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CE330u) [[unlikely]] return; }
L_005CE330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE338u); st32((c.r[28].w[0] - 28084u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 435u, depth + 1u); else { c.pc = 0x00263B50u; return; } if (c.pc != 0x005CE338u) [[unlikely]] return; }
L_005CE338:
    st32((c.r[28].w[0] - 28080u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE360u);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005CE360u) [[unlikely]] return; }
L_005CE360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE368u); st32((c.r[28].w[0] - 28072u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0059(c, 9u, depth + 1u); else { c.pc = 0x002640C0u; return; } if (c.pc != 0x005CE368u) [[unlikely]] return; }
L_005CE368:
    st32((c.r[28].w[0] - 28068u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE390u);  if (depth < kMaxDepth) unit_005C(c, 249u, depth + 1u); else { c.pc = 0x00272A40u; return; } if (c.pc != 0x005CE390u) [[unlikely]] return; }
L_005CE390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE398u); st32((c.r[28].w[0] - 28060u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0059(c, 40u, depth + 1u); else { c.pc = 0x00264600u; return; } if (c.pc != 0x005CE398u) [[unlikely]] return; }
L_005CE398:
    st32((c.r[28].w[0] - 28056u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE3B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 13800u);
    set32(c.r[5], c.r[5].w[0] + 13808u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 18368u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CE3D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 13832u);
    set32(c.r[5], c.r[5].w[0] + 13851u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 13584u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CE3F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE400u);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005CE400u) [[unlikely]] return; }
L_005CE400:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28048u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 13872u);
    set32(c.r[5], c.r[5].w[0] + 13913u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE420u); set32(c.r[6], c.r[6].w[0] + 14184u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CE420u) [[unlikely]] return; }
L_005CE420:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE440u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CE440u) [[unlikely]] return; }
L_005CE440:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28044u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 13944u);
    set32(c.r[5], c.r[5].w[0] + 14017u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE460u); set32(c.r[6], c.r[6].w[0] + 23872u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CE460u) [[unlikely]] return; }
L_005CE460:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE480u);  if (depth < kMaxDepth) unit_005C(c, 249u, depth + 1u); else { c.pc = 0x00272A40u; return; } if (c.pc != 0x005CE480u) [[unlikely]] return; }
L_005CE480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE488u); st32((c.r[28].w[0] - 28040u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005CE488u) [[unlikely]] return; }
L_005CE488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE490u); st32((c.r[28].w[0] - 28036u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CE490u) [[unlikely]] return; }
L_005CE490:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 28032u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 14032u);
    set32(c.r[5], c.r[5].w[0] + 14072u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE4B0u); set32(c.r[6], c.r[6].w[0] + 13512u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CE4B0u) [[unlikely]] return; }
L_005CE4B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE4C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE4D0u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CE4D0u) [[unlikely]] return; }
L_005CE4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE4D8u); st32((c.r[28].w[0] - 28028u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004E(c, 453u, depth + 1u); else { c.pc = 0x0023BDD0u; return; } if (c.pc != 0x005CE4D8u) [[unlikely]] return; }
L_005CE4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE4E0u); st32((c.r[28].w[0] - 28024u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005CE4E0u) [[unlikely]] return; }
L_005CE4E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE4E8u); st32((c.r[28].w[0] - 28020u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 32u, depth + 1u); else { c.pc = 0x0023CA50u; return; } if (c.pc != 0x005CE4E8u) [[unlikely]] return; }
L_005CE4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE4F0u); st32((c.r[28].w[0] - 28016u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 249u, depth + 1u); else { c.pc = 0x00272A40u; return; } if (c.pc != 0x005CE4F0u) [[unlikely]] return; }
L_005CE4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE4F8u); st32((c.r[28].w[0] - 28012u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 69u, depth + 1u); else { c.pc = 0x0023D220u; return; } if (c.pc != 0x005CE4F8u) [[unlikely]] return; }
L_005CE4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE500u); st32((c.r[28].w[0] - 28008u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005CE500u) [[unlikely]] return; }
L_005CE500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE508u); st32((c.r[28].w[0] - 28004u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005CE508u) [[unlikely]] return; }
L_005CE508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE510u); st32((c.r[28].w[0] - 28000u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 172u, depth + 1u); else { c.pc = 0x00259610u; return; } if (c.pc != 0x005CE510u) [[unlikely]] return; }
L_005CE510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE518u); st32((c.r[28].w[0] - 27996u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 406u, depth + 1u); else { c.pc = 0x002636D0u; return; } if (c.pc != 0x005CE518u) [[unlikely]] return; }
L_005CE518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE520u); st32((c.r[28].w[0] - 27992u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 435u, depth + 1u); else { c.pc = 0x00263B50u; return; } if (c.pc != 0x005CE520u) [[unlikely]] return; }
L_005CE520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE528u); st32((c.r[28].w[0] - 27988u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0059(c, 9u, depth + 1u); else { c.pc = 0x002640C0u; return; } if (c.pc != 0x005CE528u) [[unlikely]] return; }
L_005CE528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE530u); st32((c.r[28].w[0] - 27984u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0059(c, 40u, depth + 1u); else { c.pc = 0x00264600u; return; } if (c.pc != 0x005CE530u) [[unlikely]] return; }
L_005CE530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE538u); st32((c.r[28].w[0] - 27980u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 165u, depth + 1u); else { c.pc = 0x00276380u; return; } if (c.pc != 0x005CE538u) [[unlikely]] return; }
L_005CE538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE540u); st32((c.r[28].w[0] - 27976u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 233u, depth + 1u); else { c.pc = 0x00276F40u; return; } if (c.pc != 0x005CE540u) [[unlikely]] return; }
L_005CE540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE548u); st32((c.r[28].w[0] - 27972u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 117u, depth + 1u); else { c.pc = 0x002753C0u; return; } if (c.pc != 0x005CE548u) [[unlikely]] return; }
L_005CE548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE550u); st32((c.r[28].w[0] - 27968u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 336u, depth + 1u); else { c.pc = 0x002734D0u; return; } if (c.pc != 0x005CE550u) [[unlikely]] return; }
L_005CE550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE558u); st32((c.r[28].w[0] - 27964u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 363u, depth + 1u); else { c.pc = 0x002739C0u; return; } if (c.pc != 0x005CE558u) [[unlikely]] return; }
L_005CE558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE560u); st32((c.r[28].w[0] - 27960u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 388u, depth + 1u); else { c.pc = 0x00273DE0u; return; } if (c.pc != 0x005CE560u) [[unlikely]] return; }
L_005CE560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE568u); st32((c.r[28].w[0] - 27956u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 23u, depth + 1u); else { c.pc = 0x00274340u; return; } if (c.pc != 0x005CE568u) [[unlikely]] return; }
L_005CE568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE570u); st32((c.r[28].w[0] - 27952u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 53u, depth + 1u); else { c.pc = 0x00274880u; return; } if (c.pc != 0x005CE570u) [[unlikely]] return; }
L_005CE570:
    st32((c.r[28].w[0] - 27948u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE57Cu); set32(c.r[4], c.r[28].w[0] - 27944u);  if (depth < kMaxDepth) unit_004E(c, 417u, depth + 1u); else { c.pc = 0x0023B850u; return; } if (c.pc != 0x005CE57Cu) [[unlikely]] return; }
L_005CE57C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE5A0u);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005CE5A0u) [[unlikely]] return; }
L_005CE5A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE5A8u); st32((c.r[28].w[0] - 27940u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CE5A8u) [[unlikely]] return; }
L_005CE5A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[28].w[0] - 27936u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 14112u);
    set32(c.r[5], c.r[5].w[0] + 14128u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE5C8u); set32(c.r[6], c.r[6].w[0] - 18368u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CE5C8u) [[unlikely]] return; }
L_005CE5C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE5E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE5F0u);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005CE5F0u) [[unlikely]] return; }
L_005CE5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE5F8u); st32((c.r[28].w[0] - 27932u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CE5F8u) [[unlikely]] return; }
L_005CE5F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 27928u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 14152u);
    set32(c.r[5], c.r[5].w[0] + 14160u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE618u); set32(c.r[6], c.r[6].w[0] + 13680u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CE618u) [[unlikely]] return; }
L_005CE618:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE640u);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005CE640u) [[unlikely]] return; }
L_005CE640:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 27924u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 14184u);
    set32(c.r[5], c.r[5].w[0] + 14192u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE660u); set32(c.r[6], c.r[6].w[0] + 14568u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CE660u) [[unlikely]] return; }
L_005CE660:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE680u);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005CE680u) [[unlikely]] return; }
L_005CE680:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 27920u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 14224u);
    set32(c.r[5], c.r[5].w[0] + 14270u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE6A0u); set32(c.r[6], c.r[6].w[0] + 13680u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CE6A0u) [[unlikely]] return; }
L_005CE6A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE6B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE6C0u);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005CE6C0u) [[unlikely]] return; }
L_005CE6C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 27916u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 14296u);
    set32(c.r[5], c.r[5].w[0] + 14316u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE6E0u); set32(c.r[6], c.r[6].w[0] + 23872u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CE6E0u) [[unlikely]] return; }
L_005CE6E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE6F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE700u);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005CE700u) [[unlikely]] return; }
L_005CE700:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[2] = c.r[3].w[0];
    st32((c.r[28].w[0] - 27912u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = ld64((c.r[3].w[0] + 31024u));
    c.f[1] = ld32((c.r[28].w[0] - 30680u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[4].w[0] + 15056u), c.r[5].d[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31032u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 15064u), c.f[0]);
    fpu_div(c, 0u, c.f[2], c.f[1]);
    st32((c.r[28].w[0] - 27904u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE760u);  if (depth < kMaxDepth) unit_005C(c, 249u, depth + 1u); else { c.pc = 0x00272A40u; return; } if (c.pc != 0x005CE760u) [[unlikely]] return; }
L_005CE760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE768u); st32((c.r[28].w[0] - 27900u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CE768u) [[unlikely]] return; }
L_005CE768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE770u); st32((c.r[28].w[0] - 27896u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 172u, depth + 1u); else { c.pc = 0x00259610u; return; } if (c.pc != 0x005CE770u) [[unlikely]] return; }
L_005CE770:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 27892u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 14328u);
    set32(c.r[5], c.r[5].w[0] + 14374u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE790u); set32(c.r[6], c.r[6].w[0] + 13680u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CE790u) [[unlikely]] return; }
L_005CE790:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE7A0:
    c.f[12] = ld32((c.r[28].w[0] - 32644u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 14416u);
    st32((c.r[5].w[0] + 14400u), c.f[12]);
    c.f[13] = c.f[12];
    st32((c.r[3].w[0] + 14404u), c.f[12]);
    c.f[14] = c.f[12];
    st32((c.r[2].w[0] + 14408u), c.f[12]);
    c.budget -= 13;
    { c.f[15] = c.f[12];  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C9FC0u | kUnwind; return; } [[clang::musttail]] return unit_0072(c, 232u, depth); }
L_005CE7E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE7F0u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CE7F0u) [[unlikely]] return; }
L_005CE7F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 27888u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 14496u);
    set32(c.r[5], c.r[5].w[0] + 14512u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE810u); set32(c.r[6], c.r[6].w[0] + 13080u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CE810u) [[unlikely]] return; }
L_005CE810:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE830u);  if (depth < kMaxDepth) unit_005C(c, 249u, depth + 1u); else { c.pc = 0x00272A40u; return; } if (c.pc != 0x005CE830u) [[unlikely]] return; }
L_005CE830:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 27884u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 14536u);
    set32(c.r[5], c.r[5].w[0] + 14556u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE850u); set32(c.r[6], c.r[6].w[0] + 23872u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CE850u) [[unlikely]] return; }
L_005CE850:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE870u);  if (depth < kMaxDepth) unit_005C(c, 249u, depth + 1u); else { c.pc = 0x00272A40u; return; } if (c.pc != 0x005CE870u) [[unlikely]] return; }
L_005CE870:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 27880u), c.r[2].w[0]);
    ld128((c.r[3].w[0] + 31216u) & ~15u, c.r[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[3].w[0] + 15072u) & ~15u, c.r[4]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE890:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 14568u);
    set32(c.r[5], c.r[5].w[0] + 14576u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 13512u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CE8B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE8C0u);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005CE8C0u) [[unlikely]] return; }
L_005CE8C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE8C8u); st32((c.r[28].w[0] - 27872u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 336u, depth + 1u); else { c.pc = 0x002734D0u; return; } if (c.pc != 0x005CE8C8u) [[unlikely]] return; }
L_005CE8C8:
    st32((c.r[28].w[0] - 27868u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE8E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE8F0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005CE8F0u) [[unlikely]] return; }
L_005CE8F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE8F8u); st32((c.r[28].w[0] - 27860u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 363u, depth + 1u); else { c.pc = 0x002739C0u; return; } if (c.pc != 0x005CE8F8u) [[unlikely]] return; }
L_005CE8F8:
    st32((c.r[28].w[0] - 27856u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE910:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE920u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CE920u) [[unlikely]] return; }
L_005CE920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE928u); st32((c.r[28].w[0] - 27848u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 388u, depth + 1u); else { c.pc = 0x00273DE0u; return; } if (c.pc != 0x005CE928u) [[unlikely]] return; }
L_005CE928:
    st32((c.r[28].w[0] - 27844u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE950u);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005CE950u) [[unlikely]] return; }
L_005CE950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE958u); st32((c.r[28].w[0] - 27836u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 23u, depth + 1u); else { c.pc = 0x00274340u; return; } if (c.pc != 0x005CE958u) [[unlikely]] return; }
L_005CE958:
    st32((c.r[28].w[0] - 27832u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE970:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE980u);  if (depth < kMaxDepth) unit_005C(c, 249u, depth + 1u); else { c.pc = 0x00272A40u; return; } if (c.pc != 0x005CE980u) [[unlikely]] return; }
L_005CE980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE988u); st32((c.r[28].w[0] - 27824u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 53u, depth + 1u); else { c.pc = 0x00274880u; return; } if (c.pc != 0x005CE988u) [[unlikely]] return; }
L_005CE988:
    st32((c.r[28].w[0] - 27820u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE9A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 14608u);
    set32(c.r[5], c.r[5].w[0] + 14624u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CE9C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE9D0u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CE9D0u) [[unlikely]] return; }
L_005CE9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CE9D8u); st32((c.r[28].w[0] - 27812u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 117u, depth + 1u); else { c.pc = 0x002753C0u; return; } if (c.pc != 0x005CE9D8u) [[unlikely]] return; }
L_005CE9D8:
    st32((c.r[28].w[0] - 27808u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CE9F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEA00u);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005CEA00u) [[unlikely]] return; }
L_005CEA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEA08u); st32((c.r[28].w[0] - 27800u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 165u, depth + 1u); else { c.pc = 0x00276380u; return; } if (c.pc != 0x005CEA08u) [[unlikely]] return; }
L_005CEA08:
    st32((c.r[28].w[0] - 27796u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CEA20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEA30u);  if (depth < kMaxDepth) unit_005C(c, 249u, depth + 1u); else { c.pc = 0x00272A40u; return; } if (c.pc != 0x005CEA30u) [[unlikely]] return; }
L_005CEA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEA38u); st32((c.r[28].w[0] - 27788u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 233u, depth + 1u); else { c.pc = 0x00276F40u; return; } if (c.pc != 0x005CEA38u) [[unlikely]] return; }
L_005CEA38:
    st32((c.r[28].w[0] - 27784u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CEA50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 14640u);
    set32(c.r[5], c.r[5].w[0] + 14694u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 19432u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CEA70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEA80u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CEA80u) [[unlikely]] return; }
L_005CEA80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 27776u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 14720u);
    set32(c.r[5], c.r[5].w[0] + 14828u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEAA0u); set32(c.r[6], c.r[6].w[0] + 13184u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CEAA0u) [[unlikely]] return; }
L_005CEAA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CEAB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEAC0u);  if (depth < kMaxDepth) unit_005C(c, 249u, depth + 1u); else { c.pc = 0x00272A40u; return; } if (c.pc != 0x005CEAC0u) [[unlikely]] return; }
L_005CEAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEAC8u); st32((c.r[28].w[0] - 27772u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005CEAC8u) [[unlikely]] return; }
L_005CEAC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEAD0u); st32((c.r[28].w[0] - 27768u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CEAD0u) [[unlikely]] return; }
L_005CEAD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 27764u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 14864u);
    set32(c.r[5], c.r[5].w[0] + 14880u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEAF0u); set32(c.r[6], c.r[6].w[0] + 14568u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CEAF0u) [[unlikely]] return; }
L_005CEAF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CEB00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEB10u);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CEB10u) [[unlikely]] return; }
L_005CEB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEB18u); st32((c.r[28].w[0] - 27760u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 249u, depth + 1u); else { c.pc = 0x00272A40u; return; } if (c.pc != 0x005CEB18u) [[unlikely]] return; }
L_005CEB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEB20u); st32((c.r[28].w[0] - 27756u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 172u, depth + 1u); else { c.pc = 0x00259610u; return; } if (c.pc != 0x005CEB20u) [[unlikely]] return; }
L_005CEB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEB28u); st32((c.r[28].w[0] - 27752u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005CEB28u) [[unlikely]] return; }
L_005CEB28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 27748u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 14904u);
    set32(c.r[5], c.r[5].w[0] + 14959u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEB48u); set32(c.r[6], c.r[6].w[0] + 23872u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CEB48u) [[unlikely]] return; }
L_005CEB48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CEB60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEB70u);  if (depth < kMaxDepth) unit_005C(c, 249u, depth + 1u); else { c.pc = 0x00272A40u; return; } if (c.pc != 0x005CEB70u) [[unlikely]] return; }
L_005CEB70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEB78u); st32((c.r[28].w[0] - 27744u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005CEB78u) [[unlikely]] return; }
L_005CEB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEB80u); st32((c.r[28].w[0] - 27740u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005CEB80u) [[unlikely]] return; }
L_005CEB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEB88u); st32((c.r[28].w[0] - 27736u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 172u, depth + 1u); else { c.pc = 0x00259610u; return; } if (c.pc != 0x005CEB88u) [[unlikely]] return; }
L_005CEB88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 27732u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[5], c.r[5].w[0] + 14992u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEBA8u); set32(c.r[6], c.r[6].w[0] + 13680u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CEBA8u) [[unlikely]] return; }
L_005CEBA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CEBC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEBD0u);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005CEBD0u) [[unlikely]] return; }
L_005CEBD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 27728u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 15016u);
    set32(c.r[5], c.r[5].w[0] + 15024u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEBF0u); set32(c.r[6], c.r[6].w[0] + 11192u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CEBF0u) [[unlikely]] return; }
L_005CEBF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CEC00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 15040u);
    set32(c.r[5], c.r[5].w[0] + 15129u);
    c.budget -= 6;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CEC20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 15136u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 15188u), 0u);
    st32((c.r[3].w[0] + 15140u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 15196u), 0u);
    st32((c.r[3].w[0] + 15144u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 15204u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 15148u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 15212u), 0u);
    st32((c.r[3].w[0] + 15152u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 15220u), 0u);
    st32((c.r[3].w[0] + 15156u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 15160u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 15164u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 15168u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 15172u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 15176u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 15180u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 15184u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 15192u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 15200u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 15208u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 15216u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 15224u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 50;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 15228u), 0u);  c.pc = t; return; }
L_005CECF0:
    c.f[1] = ld32((c.r[28].w[0] - 32656u));
    c.f[0] = fp::sqrt(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[2] = ld32((c.r[28].w[0] - 32652u));
    fpu_div(c, 0u, c.f[2], c.f[0]);
    st32((c.r[3].w[0] + 15272u), c.f[0]);
    c.f[3] = fp::sqrt(c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[28].w[0] - 32648u));
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 15280u), c.f[0]);  c.pc = t; return; }
L_005CED40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 15288u);
    set32(c.r[5], c.r[5].w[0] + 15296u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CED60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 15312u);
    set32(c.r[5], c.r[5].w[0] + 15320u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 31856u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CED80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 15336u);
    set32(c.r[5], c.r[5].w[0] + 15344u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CEDA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 15360u);
    set32(c.r[5], c.r[5].w[0] + 16621u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CEDC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 16648u);
    set32(c.r[5], c.r[5].w[0] + 16656u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 17560u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CEDE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16680u);
    set32(c.r[5], c.r[5].w[0] + 17241u);
    set32(c.r[6], c.r[6].w[0] + 31184u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEE08u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CEE08u) [[unlikely]] return; }
L_005CEE08:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27716u), 0u);  if (t) { goto L_005CEE2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEE1Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005CEE1Cu) [[unlikely]] return; }
L_005CEE1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEE2Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005CEE2Cu) [[unlikely]] return; }
L_005CEE2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 27716u);
    set32(c.r[5], c.r[5].w[0] - 7504u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CEE44u); set32(c.r[6], c.r[6].w[0] + 15088u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CEE44u) [[unlikely]] return; }
L_005CEE44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005CEE60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 17264u);
    set32(c.r[5], c.r[5].w[0] + 17272u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 20784u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CEE80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 17288u);
    set32(c.r[5], c.r[5].w[0] + 17502u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23920u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CEEA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 17520u);
    set32(c.r[5], c.r[5].w[0] + 17536u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CEEC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 17560u);
    set32(c.r[5], c.r[5].w[0] + 17568u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 15336u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CEEE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 17600u);
    set32(c.r[5], c.r[5].w[0] + 17739u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23832u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CEF00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 17760u);
    set32(c.r[5], c.r[5].w[0] + 17785u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 19432u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CEF20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 17816u);
    set32(c.r[5], c.r[5].w[0] + 17833u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 19432u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CEF40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 17880u);
    set32(c.r[5], c.r[5].w[0] + 17916u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23832u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CEF60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 17928u);
    set32(c.r[5], c.r[5].w[0] + 18027u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 17288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CEF80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 18040u);
    set32(c.r[5], c.r[5].w[0] + 18064u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CEFA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 18088u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 18108u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 18092u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 18128u), 0u);
    st32((c.r[3].w[0] + 18096u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 18136u), 0u);
    st32((c.r[3].w[0] + 18104u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 18144u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 18112u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 18152u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 18132u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 18140u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 18148u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 18156u), c.r[5].w[0]);  c.pc = t; return; }
L_005CF020:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 18216u);
    set32(c.r[5], c.r[5].w[0] + 18233u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 19432u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF040:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 18320u);
    set32(c.r[5], c.r[5].w[0] + 18336u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 17520u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF060:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 18368u);
    set32(c.r[5], c.r[5].w[0] + 18384u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 15288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF080:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 18408u);
    set32(c.r[5], c.r[5].w[0] + 18416u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 20648u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF0A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 18440u);
    set32(c.r[5], c.r[5].w[0] + 18448u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 20784u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF0C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 18472u);
    set32(c.r[5], c.r[5].w[0] + 19240u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 19672u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF0E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 19280u);
    set32(c.r[5], c.r[5].w[0] + 19306u);
    set32(c.r[6], c.r[6].w[0] + 31184u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF108u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CF108u) [[unlikely]] return; }
L_005CF108:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27708u), 0u);  if (t) { goto L_005CF12C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF11Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005CF11Cu) [[unlikely]] return; }
L_005CF11C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF12Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005CF12Cu) [[unlikely]] return; }
L_005CF12C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 27708u);
    set32(c.r[5], c.r[5].w[0] - 22400u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF144u); set32(c.r[6], c.r[6].w[0] + 15104u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CF144u) [[unlikely]] return; }
L_005CF144:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005CF160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 19328u);
    set32(c.r[5], c.r[5].w[0] + 19382u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF184u); set32(c.r[6], c.r[6].w[0] + 17288u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CF184u) [[unlikely]] return; }
L_005CF184:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF190u); set32(c.r[4], c.r[4].w[0] + 15136u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x005CF190u) [[unlikely]] return; }
L_005CF190:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 15136u);
    set32(c.r[5], c.r[5].w[0] - 25552u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF1ACu); set32(c.r[6], c.r[6].w[0] + 15120u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CF1ACu) [[unlikely]] return; }
L_005CF1AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CF1C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 19400u);
    set32(c.r[5], c.r[5].w[0] + 19408u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF1E4u); set32(c.r[6], c.r[6].w[0] - 19792u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CF1E4u) [[unlikely]] return; }
L_005CF1E4:
    set32(c.r[4], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 15152u), c.r[4].w[0]);
    set32(c.r[5], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[3].w[0] + 15156u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 15160u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CF220:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 19432u);
    set32(c.r[5], c.r[5].w[0] + 19449u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF240:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 19464u);
    set32(c.r[5], c.r[5].w[0] + 19481u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 19432u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF260:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 19504u);
    set32(c.r[5], c.r[5].w[0] + 19542u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 19432u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 19560u);
    set32(c.r[5], c.r[5].w[0] + 19654u);
    set32(c.r[6], c.r[6].w[0] + 31184u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF2A8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CF2A8u) [[unlikely]] return; }
L_005CF2A8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27704u), 0u);  if (t) { goto L_005CF2CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF2BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005CF2BCu) [[unlikely]] return; }
L_005CF2BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF2CCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005CF2CCu) [[unlikely]] return; }
L_005CF2CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 27704u);
    set32(c.r[5], c.r[5].w[0] - 9248u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF2E4u); set32(c.r[6], c.r[6].w[0] + 15168u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CF2E4u) [[unlikely]] return; }
L_005CF2E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005CF300:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 19672u);
    set32(c.r[5], c.r[5].w[0] + 19816u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 22304u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF320:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 19840u);
    set32(c.r[5], c.r[5].w[0] + 19856u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 32248u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF340:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 19952u);
    set32(c.r[5], c.r[5].w[0] + 20012u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 17288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 20024u);
    set32(c.r[5], c.r[5].w[0] + 20290u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF384u); set32(c.r[6], c.r[6].w[0] + 23872u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CF384u) [[unlikely]] return; }
L_005CF384:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF390u); set32(c.r[4], c.r[4].w[0] + 15200u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x005CF390u) [[unlikely]] return; }
L_005CF390:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 15200u);
    set32(c.r[5], c.r[5].w[0] - 25552u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF3ACu); set32(c.r[6], c.r[6].w[0] + 15184u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CF3ACu) [[unlikely]] return; }
L_005CF3AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CF3C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 20320u);
    set32(c.r[5], c.r[5].w[0] + 20594u);
    c.budget -= 6;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF3E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27680u), 0u);  if (t) { goto L_005CF410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF400u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005CF400u) [[unlikely]] return; }
L_005CF400:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF410u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005CF410u) [[unlikely]] return; }
L_005CF410:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 27680u);
    set32(c.r[5], c.r[5].w[0] - 25952u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF428u); set32(c.r[6], c.r[6].w[0] + 15216u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CF428u) [[unlikely]] return; }
L_005CF428:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 20648u);
    set32(c.r[5], c.r[5].w[0] + 20656u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF440u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CF440u) [[unlikely]] return; }
L_005CF440:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005CF450:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 20680u);
    set32(c.r[5], c.r[5].w[0] + 20697u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 19432u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF470:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 20720u);
    set32(c.r[5], c.r[5].w[0] + 20758u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 19432u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF490:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 20784u);
    set32(c.r[5], c.r[5].w[0] + 20833u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 19328u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF4B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 20848u);
    set32(c.r[5], c.r[5].w[0] + 20856u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 19952u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF4D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 20864u);
    set32(c.r[5], c.r[5].w[0] + 20890u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 20024u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF4F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 20904u);
    set32(c.r[5], c.r[5].w[0] + 20912u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF510:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 20928u);
    set32(c.r[5], c.r[5].w[0] + 20958u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 19968u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF530:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 22304u);
    set32(c.r[5], c.r[5].w[0] + 22312u);
    c.budget -= 6;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF550:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 23592u);
    set32(c.r[5], c.r[5].w[0] + 23600u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23624u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF570:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 15512u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 15516u), 0u);
    set32(c.r[4], c.r[4].w[0] + 15512u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[5].w[0] + 13696u);
    st32((c.r[2].w[0] + 15520u), 0u);
    c.budget -= 13;
    { set32(c.r[6], c.r[6].w[0] + 15496u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003981B0u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 13u, depth); }
L_005CF5B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 23624u);
    set32(c.r[5], c.r[5].w[0] + 23632u);
    c.budget -= 6;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF5D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 23648u);
    set32(c.r[5], c.r[5].w[0] + 23709u);
    set32(c.r[6], c.r[6].w[0] + 31184u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF5F8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CF5F8u) [[unlikely]] return; }
L_005CF5F8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27660u), 0u);  if (t) { goto L_005CF61C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF60Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005CF60Cu) [[unlikely]] return; }
L_005CF60C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF61Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005CF61Cu) [[unlikely]] return; }
L_005CF61C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 27660u);
    set32(c.r[5], c.r[5].w[0] - 7344u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF634u); set32(c.r[6], c.r[6].w[0] + 15528u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CF634u) [[unlikely]] return; }
L_005CF634:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF640u); set32(c.r[4], c.r[4].w[0] + 15568u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x005CF640u) [[unlikely]] return; }
L_005CF640:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 15568u);
    set32(c.r[5], c.r[5].w[0] - 25552u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF65Cu); set32(c.r[6], c.r[6].w[0] + 15544u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CF65Cu) [[unlikely]] return; }
L_005CF65C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005CF670:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 23728u);
    set32(c.r[5], c.r[5].w[0] + 23744u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23624u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF690:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 23776u);
    set32(c.r[5], c.r[5].w[0] + 23792u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23624u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF6B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 11704u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 5u);
    st32((c.r[2].w[0] + 15600u), c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st16((c.r[2].w[0] + 15608u), static_cast<std::uint16_t>(0u));
    set32(c.r[16], c.r[16].w[0] + 15600u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st16((c.r[3].w[0] + 15614u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[2].w[0] + 15610u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 15608u));
    c.budget -= 22;
    { const bool t = c.r[2].sd[0] <= 0; st16((c.r[3].w[0] + 15612u), static_cast<std::uint16_t>(0u));  if (t) { goto L_005CF744; } }
    c.r[17].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF71Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x005CF71Cu) [[unlikely]] return; }
L_005CF71C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 28352u);
    set32(c.r[6], c.r[6].w[0] + 28640u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF73Cu); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x005CF73Cu) [[unlikely]] return; }
L_005CF73C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_005CF748; } }
L_005CF744:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_005CF748:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 11688u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 15600u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 29056u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF770u); set32(c.r[6], c.r[6].w[0] + 15584u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CF770u) [[unlikely]] return; }
L_005CF770:
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF780u); st32((c.r[29].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x005CF780u) [[unlikely]] return; }
L_005CF780:
    st32((c.r[28].w[0] - 27656u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[28].w[0] - 27652u), c.r[2].w[0]);
    set32(c.r[4], c.r[28].w[0] - 27656u);
    set32(c.r[5], c.r[5].w[0] - 12992u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF7A4u); set32(c.r[6], c.r[6].w[0] + 15616u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CF7A4u) [[unlikely]] return; }
L_005CF7A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_005CF7C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 23832u);
    set32(c.r[5], c.r[5].w[0] + 23861u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 17288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF7E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF7F0u); set32(c.r[4], c.r[28].w[0] - 27648u);  if (depth < kMaxDepth) unit_006B(c, 153u, depth + 1u); else { c.pc = 0x002ACBE0u; return; } if (c.pc != 0x005CF7F0u) [[unlikely]] return; }
L_005CF7F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 23872u);
    set32(c.r[5], c.r[5].w[0] + 23906u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF808u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CF808u) [[unlikely]] return; }
L_005CF808:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CF820:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 23920u);
    set32(c.r[5], c.r[5].w[0] + 23961u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 23976u);
    set32(c.r[5], c.r[5].w[0] + 24092u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF864u); set32(c.r[6], c.r[6].w[0] - 18016u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CF864u) [[unlikely]] return; }
L_005CF864:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 23984u);
    set32(c.r[5], c.r[5].w[0] + 24113u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF880u); set32(c.r[6], c.r[6].w[0] - 18040u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CF880u) [[unlikely]] return; }
L_005CF880:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 23992u);
    set32(c.r[5], c.r[5].w[0] + 24130u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF89Cu); set32(c.r[6], c.r[6].w[0] + 23872u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CF89Cu) [[unlikely]] return; }
L_005CF89C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 24000u);
    set32(c.r[5], c.r[5].w[0] + 24146u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF8B8u); set32(c.r[6], c.r[6].w[0] + 17928u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CF8B8u) [[unlikely]] return; }
L_005CF8B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CF8D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 24168u);
    set32(c.r[5], c.r[5].w[0] + 24176u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF8F4u); set32(c.r[6], c.r[6].w[0] + 23872u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CF8F4u) [[unlikely]] return; }
L_005CF8F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF900u); set32(c.r[4], c.r[4].w[0] + 15648u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x005CF900u) [[unlikely]] return; }
L_005CF900:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 15648u);
    set32(c.r[5], c.r[5].w[0] - 25552u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF91Cu); set32(c.r[6], c.r[6].w[0] + 15632u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005CF91Cu) [[unlikely]] return; }
L_005CF91C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CF930:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 24192u);
    set32(c.r[5], c.r[5].w[0] + 24208u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF954u); set32(c.r[6], c.r[6].w[0] - 19816u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CF954u) [[unlikely]] return; }
L_005CF954:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 24200u);
    set32(c.r[5], c.r[5].w[0] + 24236u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CF970u); set32(c.r[6], c.r[6].w[0] - 19832u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005CF970u) [[unlikely]] return; }
L_005CF970:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005CF980:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 24280u);
    set32(c.r[5], c.r[5].w[0] + 24288u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 19952u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF9A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 24304u);
    set32(c.r[5], c.r[5].w[0] + 24390u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 20024u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF9C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 24408u);
    set32(c.r[5], c.r[5].w[0] + 24416u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CF9E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 24600u);
    set32(c.r[5], c.r[5].w[0] + 24681u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005CFA00:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    set32(c.r[4], c.r[4].w[0] + 24704u);
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 40u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), 0ull);
    set32(c.r[11], 0u + 16u);
    st64((c.r[29].w[0] + 80u), 0ull);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CFA78u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005CFA78u) [[unlikely]] return; }
L_005CFA78:
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0]), c.r[5].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    set32(c.r[4], c.r[4].w[0] + 24784u);
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), 0ull);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[11], 0u + 16u);
    st64((c.r[29].w[0] + 72u), 0ull);
    st64((c.r[29].w[0] + 80u), 0ull);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CFAE4u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005CFAE4u) [[unlikely]] return; }
L_005CFAE4:
    set32(c.r[2], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[6], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    set32(c.r[4], c.r[4].w[0] + 24864u);
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 40u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), 0ull);
    set32(c.r[11], 0u + 16u);
    st64((c.r[29].w[0] + 80u), 0ull);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CFB54u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005CFB54u) [[unlikely]] return; }
L_005CFB54:
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], 0u + 8u);
    st64((c.r[29].w[0]), c.r[5].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    set32(c.r[4], c.r[4].w[0] + 24944u);
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), 0ull);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[11], 0u + 16u);
    st64((c.r[29].w[0] + 72u), 0ull);
    st64((c.r[29].w[0] + 80u), 0ull);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CFBC0u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005CFBC0u) [[unlikely]] return; }
L_005CFBC0:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[12], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[12].d[0]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 40u), c.r[12].d[0]);
    set32(c.r[4], c.r[4].w[0] + 25024u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[12].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[12].d[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CFC30u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005CFC30u) [[unlikely]] return; }
L_005CFC30:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[9], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[9].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 40u), c.r[9].d[0]);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 25104u);
    st64((c.r[29].w[0] + 56u), c.r[6].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[6], 0u + 24u);
    st64((c.r[29].w[0] + 72u), c.r[9].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CFCA4u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005CFCA4u) [[unlikely]] return; }
L_005CFCA4:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[10], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[10].d[0]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 40u), c.r[10].d[0]);
    set32(c.r[4], c.r[4].w[0] + 25184u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[10].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[5].d[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CFD14u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005CFD14u) [[unlikely]] return; }
L_005CFD14:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 25264u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), 0ull);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[11], 0u + 2u);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[5].d[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CFD80u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005CFD80u) [[unlikely]] return; }
L_005CFD80:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 25344u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), 0ull);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[11], 0u + 2u);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[2].d[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CFDECu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005CFDECu) [[unlikely]] return; }
L_005CFDEC:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[5], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[5].d[0]);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[8].d[0]);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 19u);
    st64((c.r[29].w[0] + 40u), c.r[5].d[0]);
    set32(c.r[11], 0u + 5u);
    st64((c.r[29].w[0] + 48u), c.r[8].d[0]);
    set32(c.r[4], c.r[4].w[0] + 25424u);
    st64((c.r[29].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 64u), c.r[11].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[11].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CFE58u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005CFE58u) [[unlikely]] return; }
L_005CFE58:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[8].d[0]);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[5], 0u + 9u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    set32(c.r[2], 0u + 14u);
    st64((c.r[29].w[0] + 48u), c.r[8].d[0]);
    set32(c.r[11], 0u + 5u);
    st64((c.r[29].w[0] + 56u), c.r[5].d[0]);
    set32(c.r[4], c.r[4].w[0] + 25504u);
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 72u), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[11].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[3].d[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CFEC8u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005CFEC8u) [[unlikely]] return; }
L_005CFEC8:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[12], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[12].d[0]);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[8].d[0]);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[3], 0u + 9u);
    st64((c.r[29].w[0] + 40u), c.r[12].d[0]);
    set32(c.r[2], 0u + 14u);
    st64((c.r[29].w[0] + 48u), c.r[8].d[0]);
    set32(c.r[11], 0u + 5u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[4], c.r[4].w[0] + 25584u);
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[5], 0u + 17u);
    st64((c.r[29].w[0] + 72u), c.r[12].d[0]);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 96u), c.r[11].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[12].d[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CFF3Cu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005CFF3Cu) [[unlikely]] return; }
L_005CFF3C:
    set32(c.r[5], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[5].d[0]);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 8u), 0ull);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 25664u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), 0ull);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    c.r[11].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), 0ull);
    st64((c.r[29].w[0] + 80u), 0ull);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005CFFA8u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005CFFA8u) [[unlikely]] return; }
L_005CFFA8:
    set32(c.r[11], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[11].d[0]);
    set32(c.r[2], 0u + 19u);
    st64((c.r[29].w[0] + 8u), 0ull);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 25744u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[5].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), 0ull);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 56u), c.r[2].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 72u), 0ull);
    st64((c.r[29].w[0] + 80u), 0ull);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    c.budget -= 22;
    [[clang::musttail]] return unit_0134(c, 1u, depth);
}

}
