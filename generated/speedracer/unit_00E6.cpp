#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00E6[4096] = {
    1, 2, 0, 0, 0, 3, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0,
    0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0,
    0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122,
    0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0,
    0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181,
    0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0,
    191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0,
    0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0,
    0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0,
    0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254,
    0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0,
    0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272,
    0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 279,
    0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0,
    0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0,
    0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 302,
    0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0,
    309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0,
    316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343,
    0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0,
    0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0,
    355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0,
    0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364,
    0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370,
    0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0,
    0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0,
    0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0,
    386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0,
    0, 391, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397,
    0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0,
    0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0,
    0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0,
    416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0,
    0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 0,
    0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 445,
    0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 456, 0, 0,
    457, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0,
    464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0,
    469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0,
    475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0,
    480, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492,
    0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0,
    498, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0,
    0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0,
    511, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0,
    516, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 521, 0, 0, 0,
    0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0,
    527, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533,
    0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 0, 0, 545,
    0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 551, 0, 0, 552, 0, 0,
    553, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    559, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 562, 0, 0, 563, 0, 0, 0, 0, 0, 0,
    0, 0, 564, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0,
    0, 0, 570, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574,
    0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0,
    0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 584,
    0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 590, 0,
    0, 0, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 600, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 604,
    0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0,
    0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00E6(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00498000;
    case 2u: goto L_00498004;
    case 3u: goto L_00498014;
    case 4u: goto L_00498018;
    case 5u: goto L_00498020;
    case 6u: goto L_00498040;
    case 7u: goto L_0049805C;
    case 8u: goto L_00498078;
    case 9u: goto L_00498090;
    case 10u: goto L_0049809C;
    case 11u: goto L_004980C0;
    case 12u: goto L_004980F8;
    case 13u: goto L_00498110;
    case 14u: goto L_00498124;
    case 15u: goto L_00498134;
    case 16u: goto L_00498140;
    case 17u: goto L_00498160;
    case 18u: goto L_00498170;
    case 19u: goto L_004981FC;
    case 20u: goto L_0049820C;
    case 21u: goto L_00498228;
    case 22u: goto L_0049823C;
    case 23u: goto L_0049824C;
    case 24u: goto L_00498258;
    case 25u: goto L_00498270;
    case 26u: goto L_00498280;
    case 27u: goto L_004982D4;
    case 28u: goto L_004982E4;
    case 29u: goto L_00498300;
    case 30u: goto L_00498314;
    case 31u: goto L_00498324;
    case 32u: goto L_00498338;
    case 33u: goto L_00498358;
    case 34u: goto L_00498368;
    case 35u: goto L_00498384;
    case 36u: goto L_00498390;
    case 37u: goto L_004983A8;
    case 38u: goto L_004983D0;
    case 39u: goto L_004983F8;
    case 40u: goto L_00498424;
    case 41u: goto L_00498434;
    case 42u: goto L_00498454;
    case 43u: goto L_00498484;
    case 44u: goto L_004984B0;
    case 45u: goto L_004984C0;
    case 46u: goto L_004984F0;
    case 47u: goto L_00498520;
    case 48u: goto L_0049854C;
    case 49u: goto L_004985BC;
    case 50u: goto L_004985D4;
    case 51u: goto L_004985EC;
    case 52u: goto L_00498600;
    case 53u: goto L_00498618;
    case 54u: goto L_00498648;
    case 55u: goto L_00498678;
    case 56u: goto L_00498690;
    case 57u: goto L_004986C0;
    case 58u: goto L_004986E4;
    case 59u: goto L_00498700;
    case 60u: goto L_00498724;
    case 61u: goto L_0049873C;
    case 62u: goto L_00498760;
    case 63u: goto L_00498770;
    case 64u: goto L_00498794;
    case 65u: goto L_004987A0;
    case 66u: goto L_004987B0;
    case 67u: goto L_004987C0;
    case 68u: goto L_004987D0;
    case 69u: goto L_00498824;
    case 70u: goto L_00498844;
    case 71u: goto L_0049885C;
    case 72u: goto L_00498880;
    case 73u: goto L_004988B8;
    case 74u: goto L_004988C0;
    case 75u: goto L_004988C8;
    case 76u: goto L_004988E4;
    case 77u: goto L_00498940;
    case 78u: goto L_00498958;
    case 79u: goto L_00498974;
    case 80u: goto L_0049898C;
    case 81u: goto L_004989C0;
    case 82u: goto L_004989F8;
    case 83u: goto L_00498A08;
    case 84u: goto L_00498A18;
    case 85u: goto L_00498A30;
    case 86u: goto L_00498A44;
    case 87u: goto L_00498A60;
    case 88u: goto L_00498A90;
    case 89u: goto L_00498AAC;
    case 90u: goto L_00498ABC;
    case 91u: goto L_00498AD0;
    case 92u: goto L_00498AE4;
    case 93u: goto L_00498AF8;
    case 94u: goto L_00498B0C;
    case 95u: goto L_00498B20;
    case 96u: goto L_00498B34;
    case 97u: goto L_00498B44;
    case 98u: goto L_00498B54;
    case 99u: goto L_00498B68;
    case 100u: goto L_00498B7C;
    case 101u: goto L_00498B90;
    case 102u: goto L_00498BA4;
    case 103u: goto L_00498BB8;
    case 104u: goto L_00498BCC;
    case 105u: goto L_00498BE0;
    case 106u: goto L_00498BF4;
    case 107u: goto L_00498C08;
    case 108u: goto L_00498C1C;
    case 109u: goto L_00498C40;
    case 110u: goto L_00498C80;
    case 111u: goto L_00498C98;
    case 112u: goto L_00498CB0;
    case 113u: goto L_00498CD4;
    case 114u: goto L_00498D40;
    case 115u: goto L_00498D50;
    case 116u: goto L_00498D98;
    case 117u: goto L_00498DAC;
    case 118u: goto L_00498DB8;
    case 119u: goto L_00498DC4;
    case 120u: goto L_00498DCC;
    case 121u: goto L_00498DDC;
    case 122u: goto L_00498DFC;
    case 123u: goto L_00498E10;
    case 124u: goto L_00498E1C;
    case 125u: goto L_00498E28;
    case 126u: goto L_00498E30;
    case 127u: goto L_00498E40;
    case 128u: goto L_00498E4C;
    case 129u: goto L_00498E54;
    case 130u: goto L_00498E64;
    case 131u: goto L_00498E90;
    case 132u: goto L_00498EA4;
    case 133u: goto L_00498EB0;
    case 134u: goto L_00498EBC;
    case 135u: goto L_00498EC4;
    case 136u: goto L_00498ED4;
    case 137u: goto L_00498EF4;
    case 138u: goto L_00498F08;
    case 139u: goto L_00498F14;
    case 140u: goto L_00498F20;
    case 141u: goto L_00498F28;
    case 142u: goto L_00498F38;
    case 143u: goto L_00498F44;
    case 144u: goto L_00498F4C;
    case 145u: goto L_00498F5C;
    case 146u: goto L_00498F6C;
    case 147u: goto L_00498F90;
    case 148u: goto L_00498FA4;
    case 149u: goto L_00498FB0;
    case 150u: goto L_00498FC0;
    case 151u: goto L_00498FD0;
    case 152u: goto L_00498FE0;
    case 153u: goto L_00499038;
    case 154u: goto L_00499040;
    case 155u: goto L_0049904C;
    case 156u: goto L_004990AC;
    case 157u: goto L_004990E0;
    case 158u: goto L_004990F0;
    case 159u: goto L_00499108;
    case 160u: goto L_00499120;
    case 161u: goto L_00499138;
    case 162u: goto L_00499144;
    case 163u: goto L_00499158;
    case 164u: goto L_00499164;
    case 165u: goto L_00499180;
    case 166u: goto L_004991A0;
    case 167u: goto L_004991B0;
    case 168u: goto L_004991C4;
    case 169u: goto L_004991D4;
    case 170u: goto L_004991E4;
    case 171u: goto L_00499200;
    case 172u: goto L_00499210;
    case 173u: goto L_00499228;
    case 174u: goto L_00499258;
    case 175u: goto L_00499280;
    case 176u: goto L_004992A0;
    case 177u: goto L_004992B0;
    case 178u: goto L_004992C4;
    case 179u: goto L_004992D4;
    case 180u: goto L_004992E0;
    case 181u: goto L_004992FC;
    case 182u: goto L_0049930C;
    case 183u: goto L_00499320;
    case 184u: goto L_00499348;
    case 185u: goto L_00499358;
    case 186u: goto L_00499370;
    case 187u: goto L_004993A4;
    case 188u: goto L_004993C4;
    case 189u: goto L_004993E0;
    case 190u: goto L_004993F0;
    case 191u: goto L_00499400;
    case 192u: goto L_00499410;
    case 193u: goto L_00499420;
    case 194u: goto L_00499430;
    case 195u: goto L_00499450;
    case 196u: goto L_00499460;
    case 197u: goto L_00499474;
    case 198u: goto L_00499484;
    case 199u: goto L_00499490;
    case 200u: goto L_004994AC;
    case 201u: goto L_004994BC;
    case 202u: goto L_004994D0;
    case 203u: goto L_004994F8;
    case 204u: goto L_00499510;
    case 205u: goto L_00499518;
    case 206u: goto L_00499530;
    case 207u: goto L_00499540;
    case 208u: goto L_00499550;
    case 209u: goto L_00499560;
    case 210u: goto L_00499570;
    case 211u: goto L_00499580;
    case 212u: goto L_004995BC;
    case 213u: goto L_004995D0;
    case 214u: goto L_00499600;
    case 215u: goto L_00499650;
    case 216u: goto L_004996AC;
    case 217u: goto L_004996C4;
    case 218u: goto L_004996DC;
    case 219u: goto L_004996F0;
    case 220u: goto L_00499708;
    case 221u: goto L_00499738;
    case 222u: goto L_00499760;
    case 223u: goto L_00499774;
    case 224u: goto L_00499784;
    case 225u: goto L_00499798;
    case 226u: goto L_004997B0;
    case 227u: goto L_004997C4;
    case 228u: goto L_004997D0;
    case 229u: goto L_004997E0;
    case 230u: goto L_00499810;
    case 231u: goto L_00499820;
    case 232u: goto L_00499834;
    case 233u: goto L_00499844;
    case 234u: goto L_00499850;
    case 235u: goto L_0049986C;
    case 236u: goto L_0049987C;
    case 237u: goto L_00499890;
    case 238u: goto L_004998AC;
    case 239u: goto L_004998B8;
    case 240u: goto L_004998C4;
    case 241u: goto L_004998E0;
    case 242u: goto L_00499910;
    case 243u: goto L_00499920;
    case 244u: goto L_00499934;
    case 245u: goto L_00499944;
    case 246u: goto L_00499950;
    case 247u: goto L_0049996C;
    case 248u: goto L_0049997C;
    case 249u: goto L_00499990;
    case 250u: goto L_004999AC;
    case 251u: goto L_004999B8;
    case 252u: goto L_004999C4;
    case 253u: goto L_004999E0;
    case 254u: goto L_004999FC;
    case 255u: goto L_00499A14;
    case 256u: goto L_00499A24;
    case 257u: goto L_00499A34;
    case 258u: goto L_00499A48;
    case 259u: goto L_00499A58;
    case 260u: goto L_00499A68;
    case 261u: goto L_00499A84;
    case 262u: goto L_00499A94;
    case 263u: goto L_00499AAC;
    case 264u: goto L_00499AE0;
    case 265u: goto L_00499B00;
    case 266u: goto L_00499B0C;
    case 267u: goto L_00499B1C;
    case 268u: goto L_00499B30;
    case 269u: goto L_00499B40;
    case 270u: goto L_00499B50;
    case 271u: goto L_00499B6C;
    case 272u: goto L_00499B7C;
    case 273u: goto L_00499B94;
    case 274u: goto L_00499BB4;
    case 275u: goto L_00499C2C;
    case 276u: goto L_00499C40;
    case 277u: goto L_00499C60;
    case 278u: goto L_00499C6C;
    case 279u: goto L_00499C7C;
    case 280u: goto L_00499C90;
    case 281u: goto L_00499CA0;
    case 282u: goto L_00499CB0;
    case 283u: goto L_00499CCC;
    case 284u: goto L_00499CDC;
    case 285u: goto L_00499CF4;
    case 286u: goto L_00499D0C;
    case 287u: goto L_00499D30;
    case 288u: goto L_00499D50;
    case 289u: goto L_00499D70;
    case 290u: goto L_00499D84;
    case 291u: goto L_00499DA4;
    case 292u: goto L_00499DB0;
    case 293u: goto L_00499DBC;
    case 294u: goto L_00499DE0;
    case 295u: goto L_00499DFC;
    case 296u: goto L_00499E10;
    case 297u: goto L_00499E34;
    case 298u: goto L_00499E40;
    case 299u: goto L_00499E50;
    case 300u: goto L_00499E68;
    case 301u: goto L_00499E70;
    case 302u: goto L_00499E7C;
    case 303u: goto L_00499E8C;
    case 304u: goto L_00499E9C;
    case 305u: goto L_00499EAC;
    case 306u: goto L_00499EC0;
    case 307u: goto L_00499EE0;
    case 308u: goto L_00499EF0;
    case 309u: goto L_00499F00;
    case 310u: goto L_00499F10;
    case 311u: goto L_00499F20;
    case 312u: goto L_00499F34;
    case 313u: goto L_00499F40;
    case 314u: goto L_00499F60;
    case 315u: goto L_00499F74;
    case 316u: goto L_00499F80;
    case 317u: goto L_00499F90;
    case 318u: goto L_00499FC0;
    case 319u: goto L_00499FD0;
    case 320u: goto L_00499FE4;
    case 321u: goto L_00499FF4;
    case 322u: goto L_0049A000;
    case 323u: goto L_0049A01C;
    case 324u: goto L_0049A02C;
    case 325u: goto L_0049A040;
    case 326u: goto L_0049A064;
    case 327u: goto L_0049A080;
    case 328u: goto L_0049A0A0;
    case 329u: goto L_0049A0C0;
    case 330u: goto L_0049A0D0;
    case 331u: goto L_0049A0E4;
    case 332u: goto L_0049A0F4;
    case 333u: goto L_0049A100;
    case 334u: goto L_0049A11C;
    case 335u: goto L_0049A12C;
    case 336u: goto L_0049A140;
    case 337u: goto L_0049A180;
    case 338u: goto L_0049A1A0;
    case 339u: goto L_0049A1B0;
    case 340u: goto L_0049A1C4;
    case 341u: goto L_0049A1D4;
    case 342u: goto L_0049A1E0;
    case 343u: goto L_0049A1FC;
    case 344u: goto L_0049A20C;
    case 345u: goto L_0049A220;
    case 346u: goto L_0049A244;
    case 347u: goto L_0049A258;
    case 348u: goto L_0049A274;
    case 349u: goto L_0049A288;
    case 350u: goto L_0049A2A0;
    case 351u: goto L_0049A2C0;
    case 352u: goto L_0049A2D0;
    case 353u: goto L_0049A2E4;
    case 354u: goto L_0049A2F4;
    case 355u: goto L_0049A300;
    case 356u: goto L_0049A31C;
    case 357u: goto L_0049A32C;
    case 358u: goto L_0049A340;
    case 359u: goto L_0049A364;
    case 360u: goto L_0049A378;
    case 361u: goto L_0049A394;
    case 362u: goto L_0049A3A8;
    case 363u: goto L_0049A3C0;
    case 364u: goto L_0049A3FC;
    case 365u: goto L_0049A410;
    case 366u: goto L_0049A424;
    case 367u: goto L_0049A430;
    case 368u: goto L_0049A44C;
    case 369u: goto L_0049A464;
    case 370u: goto L_0049A47C;
    case 371u: goto L_0049A490;
    case 372u: goto L_0049A49C;
    case 373u: goto L_0049A4A8;
    case 374u: goto L_0049A4C0;
    case 375u: goto L_0049A4D8;
    case 376u: goto L_0049A4F8;
    case 377u: goto L_0049A510;
    case 378u: goto L_0049A528;
    case 379u: goto L_0049A548;
    case 380u: goto L_0049A560;
    case 381u: goto L_0049A578;
    case 382u: goto L_0049A588;
    case 383u: goto L_0049A5A0;
    case 384u: goto L_0049A5D4;
    case 385u: goto L_0049A5EC;
    case 386u: goto L_0049A600;
    case 387u: goto L_0049A624;
    case 388u: goto L_0049A640;
    case 389u: goto L_0049A660;
    case 390u: goto L_0049A670;
    case 391u: goto L_0049A684;
    case 392u: goto L_0049A694;
    case 393u: goto L_0049A6A0;
    case 394u: goto L_0049A6BC;
    case 395u: goto L_0049A6CC;
    case 396u: goto L_0049A6E0;
    case 397u: goto L_0049A6FC;
    case 398u: goto L_0049A710;
    case 399u: goto L_0049A730;
    case 400u: goto L_0049A740;
    case 401u: goto L_0049A754;
    case 402u: goto L_0049A764;
    case 403u: goto L_0049A770;
    case 404u: goto L_0049A78C;
    case 405u: goto L_0049A79C;
    case 406u: goto L_0049A7B0;
    case 407u: goto L_0049A7CC;
    case 408u: goto L_0049A7E0;
    case 409u: goto L_0049A7F4;
    case 410u: goto L_0049A808;
    case 411u: goto L_0049A820;
    case 412u: goto L_0049A830;
    case 413u: goto L_0049A850;
    case 414u: goto L_0049A85C;
    case 415u: goto L_0049A870;
    case 416u: goto L_0049A880;
    case 417u: goto L_0049A890;
    case 418u: goto L_0049A8B0;
    case 419u: goto L_0049A8BC;
    case 420u: goto L_0049A8D0;
    case 421u: goto L_0049A8F8;
    case 422u: goto L_0049A908;
    case 423u: goto L_0049A91C;
    case 424u: goto L_0049A92C;
    case 425u: goto L_0049A938;
    case 426u: goto L_0049A954;
    case 427u: goto L_0049A964;
    case 428u: goto L_0049A978;
    case 429u: goto L_0049A9A0;
    case 430u: goto L_0049A9AC;
    case 431u: goto L_0049A9C0;
    case 432u: goto L_0049A9D4;
    case 433u: goto L_0049AA08;
    case 434u: goto L_0049AA20;
    case 435u: goto L_0049AA3C;
    case 436u: goto L_0049AA48;
    case 437u: goto L_0049AA58;
    case 438u: goto L_0049AA64;
    case 439u: goto L_0049AA70;
    case 440u: goto L_0049AA90;
    case 441u: goto L_0049AAA0;
    case 442u: goto L_0049AAB0;
    case 443u: goto L_0049AAD8;
    case 444u: goto L_0049AAE8;
    case 445u: goto L_0049AAFC;
    case 446u: goto L_0049AB0C;
    case 447u: goto L_0049AB18;
    case 448u: goto L_0049AB34;
    case 449u: goto L_0049AB44;
    case 450u: goto L_0049AB58;
    case 451u: goto L_0049AB80;
    case 452u: goto L_0049AB98;
    case 453u: goto L_0049ABB0;
    case 454u: goto L_0049ABD8;
    case 455u: goto L_0049ABE8;
    case 456u: goto L_0049ABF4;
    case 457u: goto L_0049AC00;
    case 458u: goto L_0049AC10;
    case 459u: goto L_0049AC24;
    case 460u: goto L_0049AC34;
    case 461u: goto L_0049AC40;
    case 462u: goto L_0049AC5C;
    case 463u: goto L_0049AC6C;
    case 464u: goto L_0049AC80;
    case 465u: goto L_0049ACA8;
    case 466u: goto L_0049ACCC;
    case 467u: goto L_0049ACDC;
    case 468u: goto L_0049ACF0;
    case 469u: goto L_0049AD00;
    case 470u: goto L_0049AD0C;
    case 471u: goto L_0049AD28;
    case 472u: goto L_0049AD38;
    case 473u: goto L_0049AD4C;
    case 474u: goto L_0049AD74;
    case 475u: goto L_0049AD80;
    case 476u: goto L_0049ADA0;
    case 477u: goto L_0049ADB0;
    case 478u: goto L_0049ADD0;
    case 479u: goto L_0049ADEC;
    case 480u: goto L_0049AE00;
    case 481u: goto L_0049AE10;
    case 482u: goto L_0049AE1C;
    case 483u: goto L_0049AE30;
    case 484u: goto L_0049AE3C;
    case 485u: goto L_0049AE60;
    case 486u: goto L_0049AE90;
    case 487u: goto L_0049AEA0;
    case 488u: goto L_0049AEB4;
    case 489u: goto L_0049AEC4;
    case 490u: goto L_0049AED0;
    case 491u: goto L_0049AEEC;
    case 492u: goto L_0049AEFC;
    case 493u: goto L_0049AF10;
    case 494u: goto L_0049AF34;
    case 495u: goto L_0049AF50;
    case 496u: goto L_0049AF64;
    case 497u: goto L_0049AF74;
    case 498u: goto L_0049AF80;
    case 499u: goto L_0049AF94;
    case 500u: goto L_0049AFA0;
    case 501u: goto L_0049AFC0;
    case 502u: goto L_0049AFD4;
    case 503u: goto L_0049AFE0;
    case 504u: goto L_0049AFF8;
    case 505u: goto L_0049B00C;
    case 506u: goto L_0049B020;
    case 507u: goto L_0049B040;
    case 508u: goto L_0049B050;
    case 509u: goto L_0049B064;
    case 510u: goto L_0049B074;
    case 511u: goto L_0049B080;
    case 512u: goto L_0049B09C;
    case 513u: goto L_0049B0AC;
    case 514u: goto L_0049B0C0;
    case 515u: goto L_0049B0E4;
    case 516u: goto L_0049B100;
    case 517u: goto L_0049B118;
    case 518u: goto L_0049B130;
    case 519u: goto L_0049B154;
    case 520u: goto L_0049B164;
    case 521u: goto L_0049B170;
    case 522u: goto L_0049B194;
    case 523u: goto L_0049B1A4;
    case 524u: goto L_0049B1C0;
    case 525u: goto L_0049B1D0;
    case 526u: goto L_0049B1E0;
    case 527u: goto L_0049B200;
    case 528u: goto L_0049B220;
    case 529u: goto L_0049B230;
    case 530u: goto L_0049B244;
    case 531u: goto L_0049B254;
    case 532u: goto L_0049B260;
    case 533u: goto L_0049B27C;
    case 534u: goto L_0049B28C;
    case 535u: goto L_0049B2A0;
    case 536u: goto L_0049B2D0;
    case 537u: goto L_0049B2E4;
    case 538u: goto L_0049B2F0;
    case 539u: goto L_0049B31C;
    case 540u: goto L_0049B32C;
    case 541u: goto L_0049B348;
    case 542u: goto L_0049B354;
    case 543u: goto L_0049B360;
    case 544u: goto L_0049B36C;
    case 545u: goto L_0049B37C;
    case 546u: goto L_0049B398;
    case 547u: goto L_0049B3A4;
    case 548u: goto L_0049B3B0;
    case 549u: goto L_0049B3BC;
    case 550u: goto L_0049B3CC;
    case 551u: goto L_0049B3E8;
    case 552u: goto L_0049B3F4;
    case 553u: goto L_0049B400;
    case 554u: goto L_0049B40C;
    case 555u: goto L_0049B41C;
    case 556u: goto L_0049B438;
    case 557u: goto L_0049B444;
    case 558u: goto L_0049B450;
    case 559u: goto L_0049B480;
    case 560u: goto L_0049B4A0;
    case 561u: goto L_0049B4C0;
    case 562u: goto L_0049B4D8;
    case 563u: goto L_0049B4E4;
    case 564u: goto L_0049B508;
    case 565u: goto L_0049B514;
    case 566u: goto L_0049B530;
    case 567u: goto L_0049B558;
    case 568u: goto L_0049B590;
    case 569u: goto L_0049B5F0;
    case 570u: goto L_0049B608;
    case 571u: goto L_0049B620;
    case 572u: goto L_0049B634;
    case 573u: goto L_0049B64C;
    case 574u: goto L_0049B67C;
    case 575u: goto L_0049B6A0;
    case 576u: goto L_0049B6F0;
    case 577u: goto L_0049B734;
    case 578u: goto L_0049B74C;
    case 579u: goto L_0049B764;
    case 580u: goto L_0049B778;
    case 581u: goto L_0049B790;
    case 582u: goto L_0049B7C0;
    case 583u: goto L_0049B7E0;
    case 584u: goto L_0049B7FC;
    case 585u: goto L_0049B810;
    case 586u: goto L_0049B820;
    case 587u: goto L_0049B86C;
    case 588u: goto L_0049B8C8;
    case 589u: goto L_0049B8E0;
    case 590u: goto L_0049B8F8;
    case 591u: goto L_0049B90C;
    case 592u: goto L_0049B924;
    case 593u: goto L_0049B954;
    case 594u: goto L_0049B970;
    case 595u: goto L_0049B9BC;
    case 596u: goto L_0049BA18;
    case 597u: goto L_0049BA30;
    case 598u: goto L_0049BA48;
    case 599u: goto L_0049BA5C;
    case 600u: goto L_0049BA74;
    case 601u: goto L_0049BAA4;
    case 602u: goto L_0049BAC0;
    case 603u: goto L_0049BAF0;
    case 604u: goto L_0049BAFC;
    case 605u: goto L_0049BB20;
    case 606u: goto L_0049BB2C;
    case 607u: goto L_0049BB40;
    case 608u: goto L_0049BB54;
    case 609u: goto L_0049BB60;
    case 610u: goto L_0049BB74;
    case 611u: goto L_0049BB90;
    case 612u: goto L_0049BBC4;
    case 613u: goto L_0049BBF0;
    case 614u: goto L_0049BC1C;
    case 615u: goto L_0049BC48;
    case 616u: goto L_0049BC74;
    case 617u: goto L_0049BCA0;
    case 618u: goto L_0049BCCC;
    case 619u: goto L_0049BCF8;
    case 620u: goto L_0049BD24;
    case 621u: goto L_0049BD50;
    case 622u: goto L_0049BD7C;
    case 623u: goto L_0049BDA8;
    case 624u: goto L_0049BDD4;
    case 625u: goto L_0049BDFC;
    case 626u: goto L_0049BE28;
    case 627u: goto L_0049BE54;
    case 628u: goto L_0049BE80;
    case 629u: goto L_0049BEAC;
    case 630u: goto L_0049BED8;
    case 631u: goto L_0049BF04;
    case 632u: goto L_0049BF30;
    case 633u: goto L_0049BF5C;
    case 634u: goto L_0049BF88;
    case 635u: goto L_0049BFB4;
    case 636u: goto L_0049BFE0;
    default: bad_entry(c, 0x00498000u); return;
    }
L_00498000:
    c.budget -= 1;
L_00498004:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00498014u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00498014u) [[unlikely]] return; }
L_00498014:
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_00498018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498020u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00498020u) [[unlikely]] return; }
L_00498020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00498040:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049805Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0049805Cu) [[unlikely]] return; }
L_0049805C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 49u);  goto L_00498070; }
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_00498070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498078u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x00498078u) [[unlikely]] return; }
L_00498078:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00498090u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00498090u) [[unlikely]] return; }
L_00498090:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049809Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049809Cu) [[unlikely]] return; }
L_0049809C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004980C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 136u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    if (c.r[16].d[0] == c.r[4].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0049825C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 136u), c.r[16].w[0]);  goto L_004980FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004980F8u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004980F8u) [[unlikely]] return; }
L_004980F8:
    st32((c.r[18].w[0] + 136u), c.r[16].w[0]);
    c.budget -= 1;
L_004980FC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00498258; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498110u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x00498110u) [[unlikely]] return; }
L_00498110:
    set32(c.r[4], ld32((c.r[18].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00498258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498124u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0061(c, 38u, depth + 1u); else { c.pc = 0x00284390u; return; } if (c.pc != 0x00498124u) [[unlikely]] return; }
L_00498124:
    set32(c.r[4], ld32((c.r[18].w[0] + 132u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498134u); st32((c.r[29].w[0] + 76u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00498134u) [[unlikely]] return; }
L_00498134:
    set32(c.r[4], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498140u); st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x00498140u) [[unlikely]] return; }
L_00498140:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[18].d[0] != 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 8u)));  goto L_004981E4; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498160u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00498160u) [[unlikely]] return; }
L_00498160:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));  goto L_00498174; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498170u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x00498170u) [[unlikely]] return; }
L_00498170:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));
    c.budget -= 1;
L_00498174:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00498198; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[17].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004981D8; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004981D8; } }
L_00498198:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_004981C0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_004981DC; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004981D8; } }
L_004981C0:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004981D8; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004981D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_004981DC:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 2;
L_004981E4:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  goto L_00498250; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 8u), c.r[16].w[0]);  goto L_0049822C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004981FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004981FCu) [[unlikely]] return; }
L_004981FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049820Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0049820Cu) [[unlikely]] return; }
L_0049820C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00498228; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00498228u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00498228u) [[unlikely]] return; }
L_00498228:
    st32((c.r[18].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 1;
L_0049822C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0049824C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049823Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0049823Cu) [[unlikely]] return; }
L_0049823C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049824Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0049824Cu) [[unlikely]] return; }
L_0049824C:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_00498250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498258u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00498258u) [[unlikely]] return; }
L_00498258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0049825C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00498270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00498280:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004983A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 29504u);
    set32(c.r[2], c.r[2].w[0] - 29480u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 9;
    if (c.r[18].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_00498328; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_00498304; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004982D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004982D4u) [[unlikely]] return; }
L_004982D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004982E4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004982E4u) [[unlikely]] return; }
L_004982E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00498300; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00498300u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00498300u) [[unlikely]] return; }
L_00498300:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00498304:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 140u), 0u);  if (t) { goto L_00498324; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498314u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00498314u) [[unlikely]] return; }
L_00498314:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498324u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00498324u) [[unlikely]] return; }
L_00498324:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00498328:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00498338u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00498338u) [[unlikely]] return; }
L_00498338:
    set32(c.r[2], c.r[17].w[0] + 140u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00498388; }
    set32(c.r[18], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00498384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498358u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00498358u) [[unlikely]] return; }
L_00498358:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498368u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00498368u) [[unlikely]] return; }
L_00498368:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00498384; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00498384u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00498384u) [[unlikely]] return; }
L_00498384:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00498388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498390u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 208u, depth + 1u); else { c.pc = 0x001B3480u; return; } if (c.pc != 0x00498390u) [[unlikely]] return; }
L_00498390:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004983AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004983A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004983A8u) [[unlikely]] return; }
L_004983A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004983AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004983D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004983F8u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 222u, depth + 1u); else { c.pc = 0x001B3670u; return; } if (c.pc != 0x004983F8u) [[unlikely]] return; }
L_004983F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 29504u);
    set32(c.r[2], c.r[2].w[0] - 29480u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 140u), 0u);  if (t) { goto L_00498434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498424u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00498424u) [[unlikely]] return; }
L_00498424:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498434u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00498434u) [[unlikely]] return; }
L_00498434:
    st32((c.r[17].w[0] + 152u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[17].w[0] + 156u), 0u);
    set32(c.r[4], c.r[17].w[0] + 60u);
    st32((c.r[17].w[0] + 160u), 0u);
    set32(c.r[5], c.r[5].w[0] - 13454u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498454u); st32((c.r[17].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_000C(c, 360u, depth + 1u); else { c.pc = 0x00133730u; return; } if (c.pc != 0x00498454u) [[unlikely]] return; }
L_00498454:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] << 5);
    set32(c.r[2], 0u + 16u);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 10;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 20u)));  goto L_00498490; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498484u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00498484u) [[unlikely]] return; }
L_00498484:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
L_00498490:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004984B0u); set32(c.r[4], c.r[17].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004984B0u) [[unlikely]] return; }
L_004984B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004984C0u); set32(c.r[5], c.r[5].w[0] - 13436u);  if (depth < kMaxDepth) unit_000C(c, 360u, depth + 1u); else { c.pc = 0x00133730u; return; } if (c.pc != 0x004984C0u) [[unlikely]] return; }
L_004984C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] << 5);
    set32(c.r[2], 0u + 16u);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 10;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_004984FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004984F0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004984F0u) [[unlikely]] return; }
L_004984F0:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
L_004984FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00498520u); set32(c.r[4], c.r[17].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00498520u) [[unlikely]] return; }
L_00498520:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 100u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 120u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 116u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00498554; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049854Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049854Cu) [[unlikely]] return; }
L_0049854C:
    set32(c.r[2], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 2;
L_00498554:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 116u)));
    c.f[0] = ld32((c.r[2].w[0] - 8816u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[29].w[0] + 100u);
    st32((c.r[6].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[4].w[0] - 8812u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 8808u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 8804u));
    st32((c.r[6].w[0] + 12u), c.f[0]);
    set32(c.r[19], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 122u)));
    set32(c.r[4], c.r[19].w[0] << 5);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 23;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 100u)));  goto L_004985E0; }
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004985BCu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004985BCu) [[unlikely]] return; }
L_004985BC:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[18].w[0] + 4u);  goto L_004985D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004985D4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004985D4u) [[unlikely]] return; }
L_004985D4:
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_004985D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00498604; } }
L_004985E0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004985ECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004985ECu) [[unlikely]] return; }
L_004985EC:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498600u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00498600u) [[unlikely]] return; }
L_00498600:
    st32((c.r[18].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_00498604:
    set32(c.r[25], ld32((c.r[17].w[0] + 60u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00498618u); set32(c.r[4], c.r[17].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00498618u) [[unlikely]] return; }
L_00498618:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 122u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_00498648; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[2], c.r[29].w[0] + 100u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);  goto L_0049864C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498648u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00498648u) [[unlikely]] return; }
L_00498648:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 1;
L_0049864C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[17].w[0] + 148u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 144u), 0u);  if (t) { goto L_00498668; } }
    set32(c.r[5], c.r[17].w[0] + 60u);
    c.budget -= 1;
L_00498668:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00498678u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00498678u) [[unlikely]] return; }
L_00498678:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00498690u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00498690u) [[unlikely]] return; }
L_00498690:
    st32((c.r[17].w[0] + 132u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004986C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29764u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_004986DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004986EC; } }
L_004986DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004986E4u);  if (depth < kMaxDepth) unit_002C(c, 227u, depth + 1u); else { c.pc = 0x001B3760u; return; } if (c.pc != 0x004986E4u) [[unlikely]] return; }
L_004986E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004986EC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00498700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498724u); set32(c.r[4], c.r[4].w[0] - 13600u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00498724u) [[unlikely]] return; }
L_00498724:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00498734; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00498744; } }
L_00498734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049873Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 228u, depth + 1u); else { c.pc = 0x001B37A0u; return; } if (c.pc != 0x0049873Cu) [[unlikely]] return; }
L_0049873C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00498744:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00498760:
    set32(c.r[2], ld32((c.r[28].w[0] - 30836u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00498770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29764u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0049878C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00498794; } }
L_0049878C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498794u);  if (depth < kMaxDepth) unit_002C(c, 231u, depth + 1u); else { c.pc = 0x001B3810u; return; } if (c.pc != 0x00498794u) [[unlikely]] return; }
L_00498794:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004987A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29764u)));  c.pc = t; return; }
L_004987B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 13568u);  c.pc = t; return; }
L_004987C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00498280u | kUnwind; return; } goto L_00498280; }
L_004987D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0049885C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[17].w[0] + 52u);
    set32(c.r[2], c.r[2].w[0] - 29376u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00498824; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00498824; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00498824; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00498824; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498824u);  if (depth < kMaxDepth) unit_00E6(c, 115u, depth + 1u); else { c.pc = 0x00498D50u; return; } if (c.pc != 0x00498824u) [[unlikely]] return; }
L_00498824:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00498848; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 29328u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498844u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 149u, depth + 1u); else { c.pc = 0x00199D20u; return; } if (c.pc != 0x00498844u) [[unlikely]] return; }
L_00498844:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00498848:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00498860; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049885Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0049885Cu) [[unlikely]] return; }
L_0049885C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00498860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00498880:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[18], ld32((c.r[28].w[0] - 28960u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 28956u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0049898C; } }
L_004988B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00498978; } }
L_004988C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004988C8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 398u, depth + 1u); else { c.pc = 0x004F2F80u; return; } if (c.pc != 0x004988C8u) [[unlikely]] return; }
L_004988C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00498978; }
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004988E4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x004988E4u) [[unlikely]] return; }
L_004988E4:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_004988F4; } }
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_004988F4:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0049891C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00498914; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_00498914:
    c.r[4].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 2;
L_0049891C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00498974; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], c.r[5].w[0] - 12242u);
    set32(c.r[6], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498940u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 192u, depth + 1u); else { c.pc = 0x0016DB40u; return; } if (c.pc != 0x00498940u) [[unlikely]] return; }
L_00498940:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00498958u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00498958u) [[unlikely]] return; }
L_00498958:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00498974; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00498974u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00498974u) [[unlikely]] return; }
L_00498974:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00498978:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004988C0u | kUnwind; return; } goto L_004988C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049898Cu); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x0049898Cu) [[unlikely]] return; }
L_0049898C:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], c.r[19].w[0] + 64u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004988B8u | kUnwind; return; } goto L_004988B8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004989C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 28956u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00498A60; } }
L_004989F8:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 108u);  goto L_00498A58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00498A48; } }
L_00498A08:
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498A18u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 361u, depth + 1u); else { c.pc = 0x001537B0u; return; } if (c.pc != 0x00498A18u) [[unlikely]] return; }
L_00498A18:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00498A48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498A30u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0015(c, 176u, depth + 1u); else { c.pc = 0x00155A70u; return; } if (c.pc != 0x00498A30u) [[unlikely]] return; }
L_00498A30:
    set32(c.r[25], ld32((c.r[2].w[0] + 20u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00498A44u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00498A44u) [[unlikely]] return; }
L_00498A44:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00498A48:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 108u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00498A08u | kUnwind; return; } goto L_00498A08; }
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 1;
L_00498A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498A60u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x00498A60u) [[unlikely]] return; }
L_00498A60:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], c.r[20].w[0] + 64u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004989F8u | kUnwind; return; } goto L_004989F8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00498A90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], c.r[28].w[0] - 29752u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498AACu); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_00E6(c, 112u, depth + 1u); else { c.pc = 0x00498CB0u; return; } if (c.pc != 0x00498AACu) [[unlikely]] return; }
L_00498AAC:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498ABCu); set32(c.r[5], c.r[28].w[0] - 29748u);  if (depth < kMaxDepth) unit_00E6(c, 112u, depth + 1u); else { c.pc = 0x00498CB0u; return; } if (c.pc != 0x00498ABCu) [[unlikely]] return; }
L_00498ABC:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498AD0u); set32(c.r[5], c.r[28].w[0] - 29744u);  if (depth < kMaxDepth) unit_00E6(c, 112u, depth + 1u); else { c.pc = 0x00498CB0u; return; } if (c.pc != 0x00498AD0u) [[unlikely]] return; }
L_00498AD0:
    set32(c.r[3], 0u + 5u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498AE4u); set32(c.r[5], c.r[28].w[0] - 29740u);  if (depth < kMaxDepth) unit_00E6(c, 112u, depth + 1u); else { c.pc = 0x00498CB0u; return; } if (c.pc != 0x00498AE4u) [[unlikely]] return; }
L_00498AE4:
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498AF8u); set32(c.r[5], c.r[28].w[0] - 29736u);  if (depth < kMaxDepth) unit_00E6(c, 112u, depth + 1u); else { c.pc = 0x00498CB0u; return; } if (c.pc != 0x00498AF8u) [[unlikely]] return; }
L_00498AF8:
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498B0Cu); set32(c.r[5], c.r[28].w[0] - 29732u);  if (depth < kMaxDepth) unit_00E6(c, 112u, depth + 1u); else { c.pc = 0x00498CB0u; return; } if (c.pc != 0x00498B0Cu) [[unlikely]] return; }
L_00498B0C:
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498B20u); set32(c.r[5], c.r[28].w[0] - 29728u);  if (depth < kMaxDepth) unit_00E6(c, 112u, depth + 1u); else { c.pc = 0x00498CB0u; return; } if (c.pc != 0x00498B20u) [[unlikely]] return; }
L_00498B20:
    set32(c.r[3], 0u + 10u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498B34u); set32(c.r[5], c.r[28].w[0] - 29724u);  if (depth < kMaxDepth) unit_00E6(c, 112u, depth + 1u); else { c.pc = 0x00498CB0u; return; } if (c.pc != 0x00498B34u) [[unlikely]] return; }
L_00498B34:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498B44u); set32(c.r[5], c.r[28].w[0] - 29720u);  if (depth < kMaxDepth) unit_00E6(c, 112u, depth + 1u); else { c.pc = 0x00498CB0u; return; } if (c.pc != 0x00498B44u) [[unlikely]] return; }
L_00498B44:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498B54u); set32(c.r[5], c.r[28].w[0] - 29716u);  if (depth < kMaxDepth) unit_00E6(c, 112u, depth + 1u); else { c.pc = 0x00498CB0u; return; } if (c.pc != 0x00498B54u) [[unlikely]] return; }
L_00498B54:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498B68u); set32(c.r[5], c.r[28].w[0] - 29712u);  if (depth < kMaxDepth) unit_00E6(c, 112u, depth + 1u); else { c.pc = 0x00498CB0u; return; } if (c.pc != 0x00498B68u) [[unlikely]] return; }
L_00498B68:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498B7Cu); set32(c.r[5], c.r[28].w[0] - 29708u);  if (depth < kMaxDepth) unit_00E6(c, 112u, depth + 1u); else { c.pc = 0x00498CB0u; return; } if (c.pc != 0x00498B7Cu) [[unlikely]] return; }
L_00498B7C:
    set32(c.r[3], 0u + 5u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498B90u); set32(c.r[5], c.r[28].w[0] - 29704u);  if (depth < kMaxDepth) unit_00E6(c, 112u, depth + 1u); else { c.pc = 0x00498CB0u; return; } if (c.pc != 0x00498B90u) [[unlikely]] return; }
L_00498B90:
    set32(c.r[3], 0u + 5u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498BA4u); set32(c.r[5], c.r[28].w[0] - 29700u);  if (depth < kMaxDepth) unit_00E6(c, 112u, depth + 1u); else { c.pc = 0x00498CB0u; return; } if (c.pc != 0x00498BA4u) [[unlikely]] return; }
L_00498BA4:
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498BB8u); set32(c.r[5], c.r[28].w[0] - 29696u);  if (depth < kMaxDepth) unit_00E6(c, 112u, depth + 1u); else { c.pc = 0x00498CB0u; return; } if (c.pc != 0x00498BB8u) [[unlikely]] return; }
L_00498BB8:
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498BCCu); set32(c.r[5], c.r[28].w[0] - 29692u);  if (depth < kMaxDepth) unit_00E6(c, 112u, depth + 1u); else { c.pc = 0x00498CB0u; return; } if (c.pc != 0x00498BCCu) [[unlikely]] return; }
L_00498BCC:
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498BE0u); set32(c.r[5], c.r[28].w[0] - 29688u);  if (depth < kMaxDepth) unit_00E6(c, 112u, depth + 1u); else { c.pc = 0x00498CB0u; return; } if (c.pc != 0x00498BE0u) [[unlikely]] return; }
L_00498BE0:
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498BF4u); set32(c.r[5], c.r[28].w[0] - 29684u);  if (depth < kMaxDepth) unit_00E6(c, 112u, depth + 1u); else { c.pc = 0x00498CB0u; return; } if (c.pc != 0x00498BF4u) [[unlikely]] return; }
L_00498BF4:
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498C08u); set32(c.r[5], c.r[28].w[0] - 29680u);  if (depth < kMaxDepth) unit_00E6(c, 112u, depth + 1u); else { c.pc = 0x00498CB0u; return; } if (c.pc != 0x00498C08u) [[unlikely]] return; }
L_00498C08:
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498C1Cu); set32(c.r[5], c.r[28].w[0] - 29676u);  if (depth < kMaxDepth) unit_00E6(c, 112u, depth + 1u); else { c.pc = 0x00498CB0u; return; } if (c.pc != 0x00498C1Cu) [[unlikely]] return; }
L_00498C1C:
    set32(c.r[3], 0u + 10u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00498C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00498C98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 29328u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00498C80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498C80u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 145u, depth + 1u); else { c.pc = 0x00199BA0u; return; } if (c.pc != 0x00498C80u) [[unlikely]] return; }
L_00498C80:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00498C9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498C98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00498C98u) [[unlikely]] return; }
L_00498C98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00498C9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00498CB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[9], c.r[4].w[0] + 12u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00498D00; } }
L_00498CD4:
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00498CF0; } }
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00498D00; } }
L_00498CF0:
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[8].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00498D00:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { set32(c.r[6], ld32((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00498CD4u | kUnwind; return; } goto L_00498CD4; }
    c.budget -= 2;
    if (c.r[10].d[0] == 0ull) { set32(c.r[3], ld32((c.r[5].w[0])));  goto L_00498D28; }
    set32(c.r[3], ld32((c.r[10].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[10].w[0] + 12u);  goto L_00498D44; }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_00498D28:
    set32(c.r[8], c.r[29].w[0] + 24u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29672u)));
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498D40u); st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00E6(c, 152u, depth + 1u); else { c.pc = 0x00498FE0u; return; } if (c.pc != 0x00498D40u) [[unlikely]] return; }
L_00498D40:
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_00498D44:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00498D50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00498E64; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_00498DE0; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00498D9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498D98u);  if (depth < kMaxDepth) unit_00E6(c, 115u, depth + 1u); else { c.pc = 0x00498D50u; return; } if (c.pc != 0x00498D98u) [[unlikely]] return; }
L_00498D98:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00498D9C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00498DB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498DACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E6(c, 115u, depth + 1u); else { c.pc = 0x00498D50u; return; } if (c.pc != 0x00498DACu) [[unlikely]] return; }
L_00498DAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00498DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498DB8u);  if (depth < kMaxDepth) unit_00E6(c, 151u, depth + 1u); else { c.pc = 0x00498FD0u; return; } if (c.pc != 0x00498DB8u) [[unlikely]] return; }
L_00498DB8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498DC4u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00E6(c, 150u, depth + 1u); else { c.pc = 0x00498FC0u; return; } if (c.pc != 0x00498DC4u) [[unlikely]] return; }
L_00498DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498DCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E6(c, 149u, depth + 1u); else { c.pc = 0x00498FB0u; return; } if (c.pc != 0x00498DCCu) [[unlikely]] return; }
L_00498DCC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498DDCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00E6(c, 147u, depth + 1u); else { c.pc = 0x00498F90u; return; } if (c.pc != 0x00498DDCu) [[unlikely]] return; }
L_00498DDC:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_00498DE0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00498E44; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00498E00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498DFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E6(c, 115u, depth + 1u); else { c.pc = 0x00498D50u; return; } if (c.pc != 0x00498DFCu) [[unlikely]] return; }
L_00498DFC:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00498E00:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00498E14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498E10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E6(c, 115u, depth + 1u); else { c.pc = 0x00498D50u; return; } if (c.pc != 0x00498E10u) [[unlikely]] return; }
L_00498E10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00498E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498E1Cu);  if (depth < kMaxDepth) unit_00E6(c, 151u, depth + 1u); else { c.pc = 0x00498FD0u; return; } if (c.pc != 0x00498E1Cu) [[unlikely]] return; }
L_00498E1C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498E28u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00E6(c, 150u, depth + 1u); else { c.pc = 0x00498FC0u; return; } if (c.pc != 0x00498E28u) [[unlikely]] return; }
L_00498E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498E30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E6(c, 149u, depth + 1u); else { c.pc = 0x00498FB0u; return; } if (c.pc != 0x00498E30u) [[unlikely]] return; }
L_00498E30:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498E40u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00E6(c, 147u, depth + 1u); else { c.pc = 0x00498F90u; return; } if (c.pc != 0x00498E40u) [[unlikely]] return; }
L_00498E40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00498E44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498E4Cu);  if (depth < kMaxDepth) unit_00E6(c, 151u, depth + 1u); else { c.pc = 0x00498FD0u; return; } if (c.pc != 0x00498E4Cu) [[unlikely]] return; }
L_00498E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498E54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E6(c, 149u, depth + 1u); else { c.pc = 0x00498FB0u; return; } if (c.pc != 0x00498E54u) [[unlikely]] return; }
L_00498E54:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_00498E68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498E64u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00498E64u) [[unlikely]] return; }
L_00498E64:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00498E68:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00498F5C; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_00498ED8; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00498E94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498E90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E6(c, 115u, depth + 1u); else { c.pc = 0x00498D50u; return; } if (c.pc != 0x00498E90u) [[unlikely]] return; }
L_00498E90:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00498E94:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00498EA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498EA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E6(c, 115u, depth + 1u); else { c.pc = 0x00498D50u; return; } if (c.pc != 0x00498EA4u) [[unlikely]] return; }
L_00498EA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00498EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498EB0u);  if (depth < kMaxDepth) unit_00E6(c, 151u, depth + 1u); else { c.pc = 0x00498FD0u; return; } if (c.pc != 0x00498EB0u) [[unlikely]] return; }
L_00498EB0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498EBCu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00E6(c, 150u, depth + 1u); else { c.pc = 0x00498FC0u; return; } if (c.pc != 0x00498EBCu) [[unlikely]] return; }
L_00498EBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498EC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E6(c, 149u, depth + 1u); else { c.pc = 0x00498FB0u; return; } if (c.pc != 0x00498EC4u) [[unlikely]] return; }
L_00498EC4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498ED4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00E6(c, 147u, depth + 1u); else { c.pc = 0x00498F90u; return; } if (c.pc != 0x00498ED4u) [[unlikely]] return; }
L_00498ED4:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_00498ED8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00498F3C; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00498EF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498EF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E6(c, 115u, depth + 1u); else { c.pc = 0x00498D50u; return; } if (c.pc != 0x00498EF4u) [[unlikely]] return; }
L_00498EF4:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00498EF8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00498F0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498F08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E6(c, 115u, depth + 1u); else { c.pc = 0x00498D50u; return; } if (c.pc != 0x00498F08u) [[unlikely]] return; }
L_00498F08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00498F0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498F14u);  if (depth < kMaxDepth) unit_00E6(c, 151u, depth + 1u); else { c.pc = 0x00498FD0u; return; } if (c.pc != 0x00498F14u) [[unlikely]] return; }
L_00498F14:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498F20u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00E6(c, 150u, depth + 1u); else { c.pc = 0x00498FC0u; return; } if (c.pc != 0x00498F20u) [[unlikely]] return; }
L_00498F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498F28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E6(c, 149u, depth + 1u); else { c.pc = 0x00498FB0u; return; } if (c.pc != 0x00498F28u) [[unlikely]] return; }
L_00498F28:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498F38u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00E6(c, 147u, depth + 1u); else { c.pc = 0x00498F90u; return; } if (c.pc != 0x00498F38u) [[unlikely]] return; }
L_00498F38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00498F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498F44u);  if (depth < kMaxDepth) unit_00E6(c, 151u, depth + 1u); else { c.pc = 0x00498FD0u; return; } if (c.pc != 0x00498F44u) [[unlikely]] return; }
L_00498F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498F4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E6(c, 149u, depth + 1u); else { c.pc = 0x00498FB0u; return; } if (c.pc != 0x00498F4Cu) [[unlikely]] return; }
L_00498F4C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00498F5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498F5Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00498F5Cu) [[unlikely]] return; }
L_00498F5C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00498F70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498F6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00498F6Cu) [[unlikely]] return; }
L_00498F6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00498F70:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00498F90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00498FA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00498FA4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00498FA4u) [[unlikely]] return; }
L_00498FA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00498FB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_00498FC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00498FD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00498FE0:
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
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(-1ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00499040; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499038u); set32(c.r[5], c.r[5].w[0] - 12233u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x00499038u) [[unlikely]] return; }
L_00499038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499040u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x00499040u) [[unlikely]] return; }
L_00499040:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049904Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0049904Cu) [[unlikely]] return; }
L_0049904C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_00499070; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 5;
L_00499070:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00499090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[16].w[0]);  if (t) { goto L_00499094; } }
L_00499090:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_00499094:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004990ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x004990ACu) [[unlikely]] return; }
L_004990AC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004990BC; }
    st32((c.r[21].w[0] + 20u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_004990BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004990E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004990F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499108u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0023(c, 91u, depth + 1u); else { c.pc = 0x0018D700u; return; } if (c.pc != 0x00499108u) [[unlikely]] return; }
L_00499108:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00499168; }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499120u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00499120u) [[unlikely]] return; }
L_00499120:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 1024u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499138u); set32(c.r[6], c.r[6].w[0] - 10994u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00499138u) [[unlikely]] return; }
L_00499138:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499144u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 187u, depth + 1u); else { c.pc = 0x0016D970u; return; } if (c.pc != 0x00499144u) [[unlikely]] return; }
L_00499144:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00499158u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00499158u) [[unlikely]] return; }
L_00499158:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499164u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00499164u) [[unlikely]] return; }
L_00499164:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00499168:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00499180:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004991A0u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x004991A0u) [[unlikely]] return; }
L_004991A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00499210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004991B0u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x004991B0u) [[unlikely]] return; }
L_004991B0:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004991C4u); set32(c.r[4], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004991C4u) [[unlikely]] return; }
L_004991C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004991D4u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x004991D4u) [[unlikely]] return; }
L_004991D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004991E4u); set32(c.r[5], c.r[5].w[0] - 10968u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x004991E4u) [[unlikely]] return; }
L_004991E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_004991F8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_004991F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499200u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x00499200u) [[unlikely]] return; }
L_00499200:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499210u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00499210u) [[unlikely]] return; }
L_00499210:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00499238; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499228u); set32(c.r[5], c.r[5].w[0] - 10968u);  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x00499228u) [[unlikely]] return; }
L_00499228:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00499238; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00499238:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00499268; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00499250; }
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00499250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499258u);  if (depth < kMaxDepth) unit_00E7(c, 56u, depth + 1u); else { c.pc = 0x0049C930u; return; } if (c.pc != 0x00499258u) [[unlikely]] return; }
L_00499258:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00499264; } }
    st8((c.r[2].w[0] + 381u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 1;
L_00499264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00499268:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00499280:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004992A0u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x004992A0u) [[unlikely]] return; }
L_004992A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049930C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004992B0u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x004992B0u) [[unlikely]] return; }
L_004992B0:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004992C4u); set32(c.r[4], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004992C4u) [[unlikely]] return; }
L_004992C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004992D4u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x004992D4u) [[unlikely]] return; }
L_004992D4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004992E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x004992E0u) [[unlikely]] return; }
L_004992E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_004992F4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_004992F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004992FCu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x004992FCu) [[unlikely]] return; }
L_004992FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049930Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049930Cu) [[unlikely]] return; }
L_0049930C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00499330; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499320u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x00499320u) [[unlikely]] return; }
L_00499320:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00499330; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00499330:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00499340; }
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00499340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499348u);  if (depth < kMaxDepth) unit_00DF(c, 105u, depth + 1u); else { c.pc = 0x0047CD40u; return; } if (c.pc != 0x00499348u) [[unlikely]] return; }
L_00499348:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 292u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00499358u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00499358u) [[unlikely]] return; }
L_00499358:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00499370:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_004993C4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004993A4u); set32(c.r[5], ld32((c.r[28].w[0] - 29588u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004993A4u) [[unlikely]] return; }
L_004993A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004993C8; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004993C4u); set32(c.r[6], c.r[6].w[0] - 10921u);  if (depth < kMaxDepth) unit_00EC(c, 170u, depth + 1u); else { c.pc = 0x004B1B40u; return; } if (c.pc != 0x004993C4u) [[unlikely]] return; }
L_004993C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004993C8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004993E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0048AA20u | kUnwind; return; } [[clang::musttail]] return unit_00E2(c, 323u, depth); }
L_004993F0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  [[clang::musttail]] return unit_00FC(c, 392u, depth); }
L_00499400:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  [[clang::musttail]] return unit_00FC(c, 395u, depth); }
L_00499410:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 24560u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00459F40u | kUnwind; return; } [[clang::musttail]] return unit_00D6(c, 264u, depth); }
L_00499420:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 24560u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00459FE0u | kUnwind; return; } [[clang::musttail]] return unit_00D6(c, 266u, depth); }
L_00499430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499450u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x00499450u) [[unlikely]] return; }
L_00499450:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004994BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499460u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x00499460u) [[unlikely]] return; }
L_00499460:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00499474u); set32(c.r[4], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00499474u) [[unlikely]] return; }
L_00499474:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499484u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00499484u) [[unlikely]] return; }
L_00499484:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499490u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00499490u) [[unlikely]] return; }
L_00499490:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_004994A4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_004994A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004994ACu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x004994ACu) [[unlikely]] return; }
L_004994AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004994BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004994BCu) [[unlikely]] return; }
L_004994BC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004994E0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004994D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x004994D0u) [[unlikely]] return; }
L_004994D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004994E0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004994E0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004994F0; }
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_004994F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004994F8u);  if (depth < kMaxDepth) unit_00E7(c, 58u, depth + 1u); else { c.pc = 0x0049C960u; return; } if (c.pc != 0x004994F8u) [[unlikely]] return; }
L_004994F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_00499508; }
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00499508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499510u);  if (depth < kMaxDepth) unit_00E7(c, 56u, depth + 1u); else { c.pc = 0x0049C930u; return; } if (c.pc != 0x00499510u) [[unlikely]] return; }
L_00499510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499518u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 287u, depth + 1u); else { c.pc = 0x00486080u; return; } if (c.pc != 0x00499518u) [[unlikely]] return; }
L_00499518:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00499530:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0048A3D0u | kUnwind; return; } [[clang::musttail]] return unit_00E2(c, 262u, depth); }
L_00499540:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004899C0u | kUnwind; return; } [[clang::musttail]] return unit_00E2(c, 175u, depth); }
L_00499550:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00489BA0u | kUnwind; return; } [[clang::musttail]] return unit_00E2(c, 190u, depth); }
L_00499560:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00489CC0u | kUnwind; return; } [[clang::musttail]] return unit_00E2(c, 202u, depth); }
L_00499570:
    c.budget -= 2;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00489E00u | kUnwind; return; } [[clang::musttail]] return unit_00E2(c, 216u, depth); }
L_00499580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[1] = c.f[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; c.f[20] = c.f[0];  if (t) { goto L_004995D4; } }
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004995BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004995BCu) [[unlikely]] return; }
L_004995BC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.f[20] = c.f[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004995D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004995D0u) [[unlikely]] return; }
L_004995D0:
    c.f[1] = 0u;
    c.budget -= 1;
L_004995D4:
    st32((c.r[17].w[0]), c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[20]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00499600:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00499738; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 84u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 100u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00499658; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499650u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00499650u) [[unlikely]] return; }
L_00499650:
    set32(c.r[2], c.r[29].w[0] + 84u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 2;
L_00499658:
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[5], c.r[29].w[0] + 84u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 18;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 84u)));  goto L_004996D0; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004996ACu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004996ACu) [[unlikely]] return; }
L_004996AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004996C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004996C4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004996C4u) [[unlikely]] return; }
L_004996C4:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004996C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004996F4; } }
L_004996D0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004996DCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004996DCu) [[unlikely]] return; }
L_004996DC:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004996F0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004996F0u) [[unlikely]] return; }
L_004996F0:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_004996F4:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00499708u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00499708u) [[unlikely]] return; }
L_00499708:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 80u), c.r[4].w[0]);  if (t) { goto L_00499738; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[3], c.r[29].w[0] + 84u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0049973C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499738u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00499738u) [[unlikely]] return; }
L_00499738:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0049973C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00499760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499774u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 108u, depth + 1u); else { c.pc = 0x001A5B50u; return; } if (c.pc != 0x00499774u) [[unlikely]] return; }
L_00499774:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00499784u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00499784u) [[unlikely]] return; }
L_00499784:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00499798u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00499798u) [[unlikely]] return; }
L_00499798:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004997B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004997C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x004997C4u) [[unlikely]] return; }
L_004997C4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004997D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 553u, depth + 1u); else { c.pc = 0x004A3FC0u; return; } if (c.pc != 0x004997D0u) [[unlikely]] return; }
L_004997D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004997E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499810u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x00499810u) [[unlikely]] return; }
L_00499810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049987C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499820u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x00499820u) [[unlikely]] return; }
L_00499820:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00499834u); set32(c.r[4], c.r[29].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00499834u) [[unlikely]] return; }
L_00499834:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499844u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00499844u) [[unlikely]] return; }
L_00499844:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499850u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00499850u) [[unlikely]] return; }
L_00499850:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_00499864; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00499864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049986Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049986Cu) [[unlikely]] return; }
L_0049986C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049987Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049987Cu) [[unlikely]] return; }
L_0049987C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_004998A0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499890u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x00499890u) [[unlikely]] return; }
L_00499890:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_004998A0; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004998A0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004998ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004998ACu) [[unlikely]] return; }
L_004998AC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004998B8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004998B8u) [[unlikely]] return; }
L_004998B8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004998C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 269u, depth + 1u); else { c.pc = 0x004B5D20u; return; } if (c.pc != 0x004998C4u) [[unlikely]] return; }
L_004998C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004998E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499910u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x00499910u) [[unlikely]] return; }
L_00499910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049997C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499920u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x00499920u) [[unlikely]] return; }
L_00499920:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00499934u); set32(c.r[4], c.r[29].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00499934u) [[unlikely]] return; }
L_00499934:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499944u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00499944u) [[unlikely]] return; }
L_00499944:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499950u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00499950u) [[unlikely]] return; }
L_00499950:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_00499964; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00499964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049996Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049996Cu) [[unlikely]] return; }
L_0049996C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049997Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049997Cu) [[unlikely]] return; }
L_0049997C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_004999A0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499990u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x00499990u) [[unlikely]] return; }
L_00499990:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_004999A0; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004999A0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004999ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004999ACu) [[unlikely]] return; }
L_004999AC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004999B8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004999B8u) [[unlikely]] return; }
L_004999B8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004999C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 266u, depth + 1u); else { c.pc = 0x004B5CB0u; return; } if (c.pc != 0x004999C4u) [[unlikely]] return; }
L_004999C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004999E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004999FCu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004999FCu) [[unlikely]] return; }
L_004999FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499A14u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x00499A14u) [[unlikely]] return; }
L_00499A14:
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499A24u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x00499A24u) [[unlikely]] return; }
L_00499A24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00499A94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499A34u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x00499A34u) [[unlikely]] return; }
L_00499A34:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00499A48u); set32(c.r[4], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00499A48u) [[unlikely]] return; }
L_00499A48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499A58u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00499A58u) [[unlikely]] return; }
L_00499A58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499A68u); set32(c.r[5], c.r[5].w[0] - 10920u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00499A68u) [[unlikely]] return; }
L_00499A68:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_00499A7C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_00499A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499A84u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x00499A84u) [[unlikely]] return; }
L_00499A84:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499A94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00499A94u) [[unlikely]] return; }
L_00499A94:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00499ABC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499AACu); set32(c.r[5], c.r[5].w[0] - 10920u);  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x00499AACu) [[unlikely]] return; }
L_00499AAC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00499ABC; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00499ABC:
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[5].w[0] - 10904u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    mmi::pmaxw(c.r[2], c.r[2], c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499AE0u); set32(c.r[6], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00499AE0u) [[unlikely]] return; }
L_00499AE0:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 129u);  goto L_00499AF4; }
    set32(c.r[6], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_00499AF4:
    set32(c.r[5], ld32((c.r[28].w[0] - 29668u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499B00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00499B00u) [[unlikely]] return; }
L_00499B00:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499B0Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x00499B0Cu) [[unlikely]] return; }
L_00499B0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00499B7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499B1Cu); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x00499B1Cu) [[unlikely]] return; }
L_00499B1C:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00499B30u); set32(c.r[4], c.r[29].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00499B30u) [[unlikely]] return; }
L_00499B30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499B40u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00499B40u) [[unlikely]] return; }
L_00499B40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499B50u); set32(c.r[5], c.r[5].w[0] - 10900u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00499B50u) [[unlikely]] return; }
L_00499B50:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_00499B64; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00499B64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499B6Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x00499B6Cu) [[unlikely]] return; }
L_00499B6C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499B7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00499B7Cu) [[unlikely]] return; }
L_00499B7C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00499BA4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499B94u); set32(c.r[5], c.r[5].w[0] - 10900u);  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x00499B94u) [[unlikely]] return; }
L_00499B94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00499BA4; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00499BA4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26064u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499BB4u); set32(c.r[5], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BF(c, 434u, depth + 1u); else { c.pc = 0x003FF360u; return; } if (c.pc != 0x00499BB4u) [[unlikely]] return; }
L_00499BB4:
    c.f[20] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00499C34; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    fpu_div(c, 0u, c.f[20], c.f[0]);
    set32(c.r[7], 0u + 60u);
    set32(c.r[2], 0u + 100u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[8], c.f[0]);
    mmi::div(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499C2Cu); set32(c.r[5], c.r[5].w[0] - 10878u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00499C2Cu) [[unlikely]] return; }
L_00499C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 128u)));  if (t) { goto L_00499C44; } }
L_00499C34:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499C40u); set32(c.r[5], c.r[5].w[0] - 10863u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00499C40u) [[unlikely]] return; }
L_00499C40:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 1;
L_00499C44:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 129u);  goto L_00499C54; }
    set32(c.r[6], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_00499C54:
    set32(c.r[5], ld32((c.r[28].w[0] - 29664u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499C60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00499C60u) [[unlikely]] return; }
L_00499C60:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499C6Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x00499C6Cu) [[unlikely]] return; }
L_00499C6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00499CDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499C7Cu); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x00499C7Cu) [[unlikely]] return; }
L_00499C7C:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00499C90u); set32(c.r[4], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00499C90u) [[unlikely]] return; }
L_00499C90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499CA0u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00499CA0u) [[unlikely]] return; }
L_00499CA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499CB0u); set32(c.r[5], c.r[5].w[0] - 10900u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00499CB0u) [[unlikely]] return; }
L_00499CB0:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_00499CC4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_00499CC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499CCCu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x00499CCCu) [[unlikely]] return; }
L_00499CCC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499CDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00499CDCu) [[unlikely]] return; }
L_00499CDC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00499D04; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499CF4u); set32(c.r[5], c.r[5].w[0] - 10900u);  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x00499CF4u) [[unlikely]] return; }
L_00499CF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00499D04; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00499D04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499D0Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00499D0Cu) [[unlikely]] return; }
L_00499D0C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00499D78; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26064u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499D30u); set32(c.r[5], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BF(c, 434u, depth + 1u); else { c.pc = 0x003FF360u; return; } if (c.pc != 0x00499D30u) [[unlikely]] return; }
L_00499D30:
    set32(c.r[3], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_00499D48; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00499D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499D50u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x00499D50u) [[unlikely]] return; }
L_00499D50:
    set32(c.r[3], c.r[2].w[0] + 68u);
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_00499D68; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00499D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499D70u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00499D70u) [[unlikely]] return; }
L_00499D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 112u)));  if (t) { goto L_00499D88; } }
L_00499D78:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499D84u); set32(c.r[5], c.r[5].w[0] - 10863u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00499D84u) [[unlikely]] return; }
L_00499D84:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 1;
L_00499D88:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 113u);  goto L_00499D98; }
    set32(c.r[6], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_00499D98:
    set32(c.r[5], ld32((c.r[28].w[0] - 29660u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499DA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00499DA4u) [[unlikely]] return; }
L_00499DA4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499DB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00499DB0u) [[unlikely]] return; }
L_00499DB0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499DBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00499DBCu) [[unlikely]] return; }
L_00499DBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00499DE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00499DFC; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499DFCu); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 415u, depth + 1u); else { c.pc = 0x004F31F0u; return; } if (c.pc != 0x00499DFCu) [[unlikely]] return; }
L_00499DFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00499E10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00499E34; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499E34u); c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 420u, depth + 1u); else { c.pc = 0x004F3260u; return; } if (c.pc != 0x00499E34u) [[unlikely]] return; }
L_00499E34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00499E40:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 22944u)));  [[clang::musttail]] return unit_00ED(c, 491u, depth); }
L_00499E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499E68u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x00499E68u) [[unlikely]] return; }
L_00499E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499E70u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 317u, depth + 1u); else { c.pc = 0x003BE990u; return; } if (c.pc != 0x00499E70u) [[unlikely]] return; }
L_00499E70:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499E7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 398u, depth + 1u); else { c.pc = 0x003BF2A0u; return; } if (c.pc != 0x00499E7Cu) [[unlikely]] return; }
L_00499E7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499E8Cu); set32(c.r[5], c.r[5].w[0] - 10856u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00499E8Cu) [[unlikely]] return; }
L_00499E8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00499EB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499E9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 398u, depth + 1u); else { c.pc = 0x003BF2A0u; return; } if (c.pc != 0x00499E9Cu) [[unlikely]] return; }
L_00499E9C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499EACu); set32(c.r[5], c.r[5].w[0] - 10831u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00499EACu) [[unlikely]] return; }
L_00499EAC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00499EC4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00499EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499EC0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 468u, depth + 1u); else { c.pc = 0x004333F0u; return; } if (c.pc != 0x00499EC0u) [[unlikely]] return; }
L_00499EC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00499EC4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00499EE0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  [[clang::musttail]] return unit_00FC(c, 503u, depth); }
L_00499EF0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  [[clang::musttail]] return unit_00FC(c, 512u, depth); }
L_00499F00:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  [[clang::musttail]] return unit_00FC(c, 517u, depth); }
L_00499F10:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  [[clang::musttail]] return unit_00FC(c, 521u, depth); }
L_00499F20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00499F34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499F34u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x00499F34u) [[unlikely]] return; }
L_00499F34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00499F40:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00499F50; }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 2;
L_00499F50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00499F60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00499F74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499F74u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x00499F74u) [[unlikely]] return; }
L_00499F74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00499F80:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00498000u < 16384u) { entry = entries_00E6[(t - 0x00498000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00499F90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499FC0u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x00499FC0u) [[unlikely]] return; }
L_00499FC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049A02C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499FD0u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x00499FD0u) [[unlikely]] return; }
L_00499FD0:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00499FE4u); set32(c.r[4], c.r[29].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00499FE4u) [[unlikely]] return; }
L_00499FE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00499FF4u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00499FF4u) [[unlikely]] return; }
L_00499FF4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A000u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049A000u) [[unlikely]] return; }
L_0049A000:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_0049A014; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0049A014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A01Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049A01Cu) [[unlikely]] return; }
L_0049A01C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A02Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049A02Cu) [[unlikely]] return; }
L_0049A02C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0049A050; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A040u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049A040u) [[unlikely]] return; }
L_0049A040:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0049A050; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049A050:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0049A084; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A064u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049A064u) [[unlikely]] return; }
L_0049A064:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0049A080; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A080u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049A080u) [[unlikely]] return; }
L_0049A080:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0049A084:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0049A0A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A0C0u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049A0C0u) [[unlikely]] return; }
L_0049A0C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049A12C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A0D0u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049A0D0u) [[unlikely]] return; }
L_0049A0D0:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A0E4u); set32(c.r[4], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049A0E4u) [[unlikely]] return; }
L_0049A0E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A0F4u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049A0F4u) [[unlikely]] return; }
L_0049A0F4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A100u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049A100u) [[unlikely]] return; }
L_0049A100:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_0049A114; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_0049A114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A11Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049A11Cu) [[unlikely]] return; }
L_0049A11C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A12Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049A12Cu) [[unlikely]] return; }
L_0049A12C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0049A150; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A140u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049A140u) [[unlikely]] return; }
L_0049A140:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0049A150; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049A150:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 192u));  goto L_0049A160; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049A164; } }
L_0049A160:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 1;
L_0049A164:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0049A180:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A1A0u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049A1A0u) [[unlikely]] return; }
L_0049A1A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049A20C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A1B0u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049A1B0u) [[unlikely]] return; }
L_0049A1B0:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A1C4u); set32(c.r[4], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049A1C4u) [[unlikely]] return; }
L_0049A1C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A1D4u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049A1D4u) [[unlikely]] return; }
L_0049A1D4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A1E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049A1E0u) [[unlikely]] return; }
L_0049A1E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_0049A1F4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_0049A1F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A1FCu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049A1FCu) [[unlikely]] return; }
L_0049A1FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A20Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049A20Cu) [[unlikely]] return; }
L_0049A20C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0049A230; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A220u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049A220u) [[unlikely]] return; }
L_0049A220:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0049A230; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049A230:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0049A28C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A244u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0049A244u) [[unlikely]] return; }
L_0049A244:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 30968u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A258u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049A258u) [[unlikely]] return; }
L_0049A258:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0049A280; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 30984u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A274u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049A274u) [[unlikely]] return; }
L_0049A274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049A288; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0049A280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A288u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x0049A288u) [[unlikely]] return; }
L_0049A288:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0049A28C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0049A2A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A2C0u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049A2C0u) [[unlikely]] return; }
L_0049A2C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049A32C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A2D0u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049A2D0u) [[unlikely]] return; }
L_0049A2D0:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A2E4u); set32(c.r[4], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049A2E4u) [[unlikely]] return; }
L_0049A2E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A2F4u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049A2F4u) [[unlikely]] return; }
L_0049A2F4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A300u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049A300u) [[unlikely]] return; }
L_0049A300:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_0049A314; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_0049A314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A31Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049A31Cu) [[unlikely]] return; }
L_0049A31C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A32Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049A32Cu) [[unlikely]] return; }
L_0049A32C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0049A350; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A340u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049A340u) [[unlikely]] return; }
L_0049A340:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0049A350; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049A350:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0049A3AC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A364u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0049A364u) [[unlikely]] return; }
L_0049A364:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 30968u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A378u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049A378u) [[unlikely]] return; }
L_0049A378:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0049A3A0; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 30984u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A394u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049A394u) [[unlikely]] return; }
L_0049A394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049A3A8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0049A3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A3A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x0049A3A8u) [[unlikely]] return; }
L_0049A3A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0049A3AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0049A3C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0049A3E8; } }
    set32(c.r[18], c.r[18].w[0] - 72u);
    c.budget -= 1;
L_0049A3E8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A3FCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049A3FCu) [[unlikely]] return; }
L_0049A3FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] - 10970u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A410u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0027(c, 9u, depth + 1u); else { c.pc = 0x0019C0F0u; return; } if (c.pc != 0x0049A410u) [[unlikely]] return; }
L_0049A410:
    set32(c.r[7], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A424u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x0049A424u) [[unlikely]] return; }
L_0049A424:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A430u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049A430u) [[unlikely]] return; }
L_0049A430:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_0049A444; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0049A444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A44Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049A44Cu) [[unlikely]] return; }
L_0049A44C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 228u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A464u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049A464u) [[unlikely]] return; }
L_0049A464:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 240u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A47Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049A47Cu) [[unlikely]] return; }
L_0049A47C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 220u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A490u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049A490u) [[unlikely]] return; }
L_0049A490:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A49Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049A49Cu) [[unlikely]] return; }
L_0049A49C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A4A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049A4A8u) [[unlikely]] return; }
L_0049A4A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0049A4C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0049A4D0; } }
    set32(c.r[4], c.r[4].w[0] + 48u);
    c.budget -= 1;
L_0049A4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A4D8u);  if (depth < kMaxDepth) unit_00E0(c, 311u, depth + 1u); else { c.pc = 0x00482720u; return; } if (c.pc != 0x0049A4D8u) [[unlikely]] return; }
L_0049A4D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0049A4FC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 244u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A4F8u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049A4F8u) [[unlikely]] return; }
L_0049A4F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0049A4FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049A510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0049A520; } }
    set32(c.r[4], c.r[4].w[0] + 48u);
    c.budget -= 1;
L_0049A520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A528u);  if (depth < kMaxDepth) unit_00E0(c, 311u, depth + 1u); else { c.pc = 0x00482720u; return; } if (c.pc != 0x0049A528u) [[unlikely]] return; }
L_0049A528:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0049A54C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 240u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A548u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049A548u) [[unlikely]] return; }
L_0049A548:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0049A54C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049A560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0049A570; } }
    set32(c.r[4], c.r[4].w[0] + 48u);
    c.budget -= 1;
L_0049A570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A578u);  if (depth < kMaxDepth) unit_00E0(c, 311u, depth + 1u); else { c.pc = 0x00482720u; return; } if (c.pc != 0x0049A578u) [[unlikely]] return; }
L_0049A578:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0049A588; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A588u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 16u, depth + 1u); else { c.pc = 0x0018C2E0u; return; } if (c.pc != 0x0049A588u) [[unlikely]] return; }
L_0049A588:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049A5A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0049A5C0; } }
    set32(c.r[16], c.r[16].w[0] - 72u);
    c.budget -= 1;
L_0049A5C0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 30968u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A5D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049A5D4u) [[unlikely]] return; }
L_0049A5D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0049A5E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0049A5EC; } }
L_0049A5E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A5ECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 150u, depth + 1u); else { c.pc = 0x00189E80u; return; } if (c.pc != 0x0049A5ECu) [[unlikely]] return; }
L_0049A5EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049A600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[2].w[0] + 56u);  goto L_0049A61C; }
    set32(c.r[2], c.r[2].w[0] - 72u);
    set32(c.r[4], c.r[2].w[0] + 56u);
    c.budget -= 2;
L_0049A61C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A624u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0049A624u) [[unlikely]] return; }
L_0049A624:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049A640:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A660u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049A660u) [[unlikely]] return; }
L_0049A660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049A6CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A670u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049A670u) [[unlikely]] return; }
L_0049A670:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A684u); set32(c.r[4], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049A684u) [[unlikely]] return; }
L_0049A684:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A694u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049A694u) [[unlikely]] return; }
L_0049A694:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A6A0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049A6A0u) [[unlikely]] return; }
L_0049A6A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_0049A6B4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_0049A6B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A6BCu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049A6BCu) [[unlikely]] return; }
L_0049A6BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A6CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049A6CCu) [[unlikely]] return; }
L_0049A6CC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0049A6F0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A6E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049A6E0u) [[unlikely]] return; }
L_0049A6E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0049A6F0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049A6F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A6FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 172u, depth + 1u); else { c.pc = 0x004A1750u; return; } if (c.pc != 0x0049A6FCu) [[unlikely]] return; }
L_0049A6FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0049A710:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A730u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049A730u) [[unlikely]] return; }
L_0049A730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049A79C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A740u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049A740u) [[unlikely]] return; }
L_0049A740:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A754u); set32(c.r[4], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049A754u) [[unlikely]] return; }
L_0049A754:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A764u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049A764u) [[unlikely]] return; }
L_0049A764:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A770u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049A770u) [[unlikely]] return; }
L_0049A770:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_0049A784; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_0049A784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A78Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049A78Cu) [[unlikely]] return; }
L_0049A78C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A79Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049A79Cu) [[unlikely]] return; }
L_0049A79C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0049A7C0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A7B0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049A7B0u) [[unlikely]] return; }
L_0049A7B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0049A7C0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049A7C0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A7CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 176u, depth + 1u); else { c.pc = 0x004A17C0u; return; } if (c.pc != 0x0049A7CCu) [[unlikely]] return; }
L_0049A7CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0049A7E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A7F4u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 539u, depth + 1u); else { c.pc = 0x004F3EA0u; return; } if (c.pc != 0x0049A7F4u) [[unlikely]] return; }
L_0049A7F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0049A80C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A808u);  if (depth < kMaxDepth) unit_00FC(c, 297u, depth + 1u); else { c.pc = 0x004F2410u; return; } if (c.pc != 0x0049A808u) [[unlikely]] return; }
L_0049A808:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0049A80C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049A820:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  [[clang::musttail]] return unit_00FD(c, 15u, depth); }
L_0049A830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049A850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A850u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 539u, depth + 1u); else { c.pc = 0x004F3EA0u; return; } if (c.pc != 0x0049A850u) [[unlikely]] return; }
L_0049A850:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A85Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 17u, depth + 1u); else { c.pc = 0x004F41C0u; return; } if (c.pc != 0x0049A85Cu) [[unlikely]] return; }
L_0049A85C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049A870:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A880u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049A880u) [[unlikely]] return; }
L_0049A880:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049A890:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049A8B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A8B0u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 539u, depth + 1u); else { c.pc = 0x004F3EA0u; return; } if (c.pc != 0x0049A8B0u) [[unlikely]] return; }
L_0049A8B0:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A8BCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x0049A8BCu) [[unlikely]] return; }
L_0049A8BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049A8D0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A8F8u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049A8F8u) [[unlikely]] return; }
L_0049A8F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049A964; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A908u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049A908u) [[unlikely]] return; }
L_0049A908:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A91Cu); set32(c.r[4], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049A91Cu) [[unlikely]] return; }
L_0049A91C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A92Cu); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049A92Cu) [[unlikely]] return; }
L_0049A92C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A938u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049A938u) [[unlikely]] return; }
L_0049A938:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_0049A94C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0049A94C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A954u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049A954u) [[unlikely]] return; }
L_0049A954:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A964u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049A964u) [[unlikely]] return; }
L_0049A964:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0049A988; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A978u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049A978u) [[unlikely]] return; }
L_0049A978:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0049A988; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049A988:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0049A998; }
    set32(c.r[17], c.r[17].w[0] + 48u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0049A998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A9A0u);  if (depth < kMaxDepth) unit_00E0(c, 311u, depth + 1u); else { c.pc = 0x00482720u; return; } if (c.pc != 0x0049A9A0u) [[unlikely]] return; }
L_0049A9A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A9ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 16u, depth + 1u); else { c.pc = 0x0018C2E0u; return; } if (c.pc != 0x0049A9ACu) [[unlikely]] return; }
L_0049A9AC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A9C0u); set32(c.r[4], c.r[29].w[0] + 128u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049A9C0u) [[unlikely]] return; }
L_0049A9C0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049A9D4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049A9D4u) [[unlikely]] return; }
L_0049A9D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 112u));  goto L_0049A9EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 116u)));  if (t) { goto L_0049A9F4; } }
L_0049A9EC:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0049A9F4:
    set32(c.r[6], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AA08u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x0049AA08u) [[unlikely]] return; }
L_0049AA08:
    set32(c.r[7], 0u - 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 156u), c.r[7].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AA20u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x0049AA20u) [[unlikely]] return; }
L_0049AA20:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 81u);  goto L_0049AA34; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0049AA34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AA3Cu); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_000F(c, 313u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x0049AA3Cu) [[unlikely]] return; }
L_0049AA3C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AA48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049AA48u) [[unlikely]] return; }
L_0049AA48:
    set32(c.r[16], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AA58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049AA58u) [[unlikely]] return; }
L_0049AA58:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AA64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049AA64u) [[unlikely]] return; }
L_0049AA64:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AA70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049AA70u) [[unlikely]] return; }
L_0049AA70:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0049AA90:
    c.budget -= 2;
    {  goto L_0049ABB0; }
L_0049AAA0:
    c.budget -= 2;
    {  goto L_0049ABB0; }
L_0049AAB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AAD8u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049AAD8u) [[unlikely]] return; }
L_0049AAD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049AB44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AAE8u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049AAE8u) [[unlikely]] return; }
L_0049AAE8:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AAFCu); set32(c.r[4], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049AAFCu) [[unlikely]] return; }
L_0049AAFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AB0Cu); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049AB0Cu) [[unlikely]] return; }
L_0049AB0C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AB18u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049AB18u) [[unlikely]] return; }
L_0049AB18:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_0049AB2C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0049AB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AB34u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049AB34u) [[unlikely]] return; }
L_0049AB34:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AB44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049AB44u) [[unlikely]] return; }
L_0049AB44:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0049AB68; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AB58u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049AB58u) [[unlikely]] return; }
L_0049AB58:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0049AB68; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049AB68:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0049AB78; }
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0049AB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AB80u);  if (depth < kMaxDepth) unit_00E0(c, 311u, depth + 1u); else { c.pc = 0x00482720u; return; } if (c.pc != 0x0049AB80u) [[unlikely]] return; }
L_0049AB80:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 236u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AB98u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049AB98u) [[unlikely]] return; }
L_0049AB98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0049ABB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049ABD8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0049ABD8u) [[unlikely]] return; }
L_0049ABD8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049ABE8u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049ABE8u) [[unlikely]] return; }
L_0049ABE8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049ABF4u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049ABF4u) [[unlikely]] return; }
L_0049ABF4:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AC00u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049AC00u) [[unlikely]] return; }
L_0049AC00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049AC6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AC10u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049AC10u) [[unlikely]] return; }
L_0049AC10:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AC24u); set32(c.r[4], c.r[29].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049AC24u) [[unlikely]] return; }
L_0049AC24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AC34u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049AC34u) [[unlikely]] return; }
L_0049AC34:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AC40u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049AC40u) [[unlikely]] return; }
L_0049AC40:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_0049AC54; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0049AC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AC5Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049AC5Cu) [[unlikely]] return; }
L_0049AC5C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AC6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049AC6Cu) [[unlikely]] return; }
L_0049AC6C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0049AC90; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AC80u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049AC80u) [[unlikely]] return; }
L_0049AC80:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0049AC90; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049AC90:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0049ACA0; }
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0049ACA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049ACA8u);  if (depth < kMaxDepth) unit_00E0(c, 311u, depth + 1u); else { c.pc = 0x00482720u; return; } if (c.pc != 0x0049ACA8u) [[unlikely]] return; }
L_0049ACA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[29].w[0] + 97u);  goto L_0049ACC0; }
    set32(c.r[17], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0049ACC0:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049ACCCu); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049ACCCu) [[unlikely]] return; }
L_0049ACCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049AD38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049ACDCu); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049ACDCu) [[unlikely]] return; }
L_0049ACDC:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049ACF0u); set32(c.r[4], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049ACF0u) [[unlikely]] return; }
L_0049ACF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AD00u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049AD00u) [[unlikely]] return; }
L_0049AD00:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AD0Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049AD0Cu) [[unlikely]] return; }
L_0049AD0C:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_0049AD20; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0049AD20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AD28u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049AD28u) [[unlikely]] return; }
L_0049AD28:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AD38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049AD38u) [[unlikely]] return; }
L_0049AD38:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0049AD5C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AD4Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049AD4Cu) [[unlikely]] return; }
L_0049AD4C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0049AD5C; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049AD5C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 236u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AD74u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049AD74u) [[unlikely]] return; }
L_0049AD74:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AD80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049AD80u) [[unlikely]] return; }
L_0049AD80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0049ADA0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0048AA50u | kUnwind; return; } [[clang::musttail]] return unit_00E2(c, 325u, depth); }
L_0049ADB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049ADD0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049ADD0u) [[unlikely]] return; }
L_0049ADD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0049AE40; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049ADECu); set32(c.r[4], c.r[4].w[0] - 10811u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0049ADECu) [[unlikely]] return; }
L_0049ADEC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0049AE08; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AE00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0049AE00u) [[unlikely]] return; }
L_0049AE00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049AE3C; } }
L_0049AE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AE10u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0049AE10u) [[unlikely]] return; }
L_0049AE10:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AE1Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0049AE1Cu) [[unlikely]] return; }
L_0049AE1C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AE30u); set32(c.r[5], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049AE30u) [[unlikely]] return; }
L_0049AE30:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AE3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049AE3Cu) [[unlikely]] return; }
L_0049AE3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0049AE40:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0049AE60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AE90u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049AE90u) [[unlikely]] return; }
L_0049AE90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049AEFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AEA0u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049AEA0u) [[unlikely]] return; }
L_0049AEA0:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AEB4u); set32(c.r[4], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049AEB4u) [[unlikely]] return; }
L_0049AEB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AEC4u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049AEC4u) [[unlikely]] return; }
L_0049AEC4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AED0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049AED0u) [[unlikely]] return; }
L_0049AED0:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_0049AEE4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0049AEE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AEECu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049AEECu) [[unlikely]] return; }
L_0049AEEC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AEFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049AEFCu) [[unlikely]] return; }
L_0049AEFC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0049AF20; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AF10u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049AF10u) [[unlikely]] return; }
L_0049AF10:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0049AF20; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049AF20:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0049AFA4; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AF34u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049AF34u) [[unlikely]] return; }
L_0049AF34:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0049AFA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AF50u); set32(c.r[4], c.r[4].w[0] - 10811u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0049AF50u) [[unlikely]] return; }
L_0049AF50:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0049AF6C; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AF64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0049AF64u) [[unlikely]] return; }
L_0049AF64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049AFA0; } }
L_0049AF6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AF74u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0049AF74u) [[unlikely]] return; }
L_0049AF74:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AF80u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0049AF80u) [[unlikely]] return; }
L_0049AF80:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AF94u); set32(c.r[5], c.r[29].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049AF94u) [[unlikely]] return; }
L_0049AF94:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AFA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049AFA0u) [[unlikely]] return; }
L_0049AFA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0049AFA4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0049AFC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0049AFD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AFD4u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x0049AFD4u) [[unlikely]] return; }
L_0049AFD4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049AFE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0049B000; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049AFF8u); set32(c.r[5], c.r[5].w[0] - 10811u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0049AFF8u) [[unlikely]] return; }
L_0049AFF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0049B010; } }
L_0049B000:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B00Cu); set32(c.r[7], c.r[7].w[0] - 10811u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x0049B00Cu) [[unlikely]] return; }
L_0049B00C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0049B010:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049B020:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B040u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049B040u) [[unlikely]] return; }
L_0049B040:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049B0AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B050u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049B050u) [[unlikely]] return; }
L_0049B050:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B064u); set32(c.r[4], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049B064u) [[unlikely]] return; }
L_0049B064:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B074u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049B074u) [[unlikely]] return; }
L_0049B074:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B080u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049B080u) [[unlikely]] return; }
L_0049B080:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_0049B094; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_0049B094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B09Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049B09Cu) [[unlikely]] return; }
L_0049B09C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B0ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049B0ACu) [[unlikely]] return; }
L_0049B0AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0049B0D0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B0C0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049B0C0u) [[unlikely]] return; }
L_0049B0C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0049B0D0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049B0D0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0049B0E8; }
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B0E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 463u, depth + 1u); else { c.pc = 0x004F3780u; return; } if (c.pc != 0x0049B0E4u) [[unlikely]] return; }
L_0049B0E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0049B0E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0049B100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0049B118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B118u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 463u, depth + 1u); else { c.pc = 0x004F3780u; return; } if (c.pc != 0x0049B118u) [[unlikely]] return; }
L_0049B118:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049B130:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B154u); set32(c.r[5], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0049B154u) [[unlikely]] return; }
L_0049B154:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B164u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049B164u) [[unlikely]] return; }
L_0049B164:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B170u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049B170u) [[unlikely]] return; }
L_0049B170:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_0049B184; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_0049B184:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B194u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049B194u) [[unlikely]] return; }
L_0049B194:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B1A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049B1A4u) [[unlikely]] return; }
L_0049B1A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0049B1C0:
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00498000u < 16384u) { entry = entries_00E6[(t - 0x00498000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0049B1D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 56u);  c.pc = t; return; }
L_0049B1E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049B1F0; } }
    set32(c.r[2], c.r[2].w[0] - 72u);
    c.budget -= 1;
L_0049B1F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0049B200:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B220u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049B220u) [[unlikely]] return; }
L_0049B220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049B28C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B230u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0049B230u) [[unlikely]] return; }
L_0049B230:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B244u); set32(c.r[4], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049B244u) [[unlikely]] return; }
L_0049B244:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B254u); set32(c.r[5], c.r[5].w[0] - 10970u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049B254u) [[unlikely]] return; }
L_0049B254:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B260u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0049B260u) [[unlikely]] return; }
L_0049B260:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_0049B274; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_0049B274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B27Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049B27Cu) [[unlikely]] return; }
L_0049B27C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B28Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049B28Cu) [[unlikely]] return; }
L_0049B28C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0049B2B8; }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B2A0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049B2A0u) [[unlikely]] return; }
L_0049B2A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0049B2B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049B2B8; } }
L_0049B2B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0049B2B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0049B2D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0049B2E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B2E4u);  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0049B2E4u) [[unlikely]] return; }
L_0049B2E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049B2F0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B31Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0049B31Cu) [[unlikely]] return; }
L_0049B31C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B32Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x0049B32Cu) [[unlikely]] return; }
L_0049B32C:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 161u);  goto L_0049B340; }
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0049B340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B348u); set32(c.r[5], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x0049B348u) [[unlikely]] return; }
L_0049B348:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B354u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049B354u) [[unlikely]] return; }
L_0049B354:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B360u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049B360u) [[unlikely]] return; }
L_0049B360:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B36Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0049B36Cu) [[unlikely]] return; }
L_0049B36C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B37Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x0049B37Cu) [[unlikely]] return; }
L_0049B37C:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 129u);  goto L_0049B390; }
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0049B390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B398u); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x0049B398u) [[unlikely]] return; }
L_0049B398:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B3A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049B3A4u) [[unlikely]] return; }
L_0049B3A4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B3B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049B3B0u) [[unlikely]] return; }
L_0049B3B0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B3BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0049B3BCu) [[unlikely]] return; }
L_0049B3BC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B3CCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x0049B3CCu) [[unlikely]] return; }
L_0049B3CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 97u);  goto L_0049B3E0; }
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0049B3E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B3E8u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x0049B3E8u) [[unlikely]] return; }
L_0049B3E8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B3F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049B3F4u) [[unlikely]] return; }
L_0049B3F4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B400u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049B400u) [[unlikely]] return; }
L_0049B400:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B40Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0049B40Cu) [[unlikely]] return; }
L_0049B40C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B41Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x0049B41Cu) [[unlikely]] return; }
L_0049B41C:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 65u);  goto L_0049B430; }
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0049B430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B438u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x0049B438u) [[unlikely]] return; }
L_0049B438:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B444u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049B444u) [[unlikely]] return; }
L_0049B444:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B450u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049B450u) [[unlikely]] return; }
L_0049B450:
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 220u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 216u));
    set32(c.r[6], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    st32((c.r[29].w[0] + 192u), c.f[2]);
    st32((c.r[29].w[0] + 196u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B480u); st32((c.r[29].w[0] + 204u), c.f[0]);  if (depth < kMaxDepth) unit_00E6(c, 566u, depth + 1u); else { c.pc = 0x0049B530u; return; } if (c.pc != 0x0049B480u) [[unlikely]] return; }
L_0049B480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0049B4A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B4C0u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049B4C0u) [[unlikely]] return; }
L_0049B4C0:
    set32(c.r[3], ld32((c.r[2].w[0] + 120u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B4D8u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x0049B4D8u) [[unlikely]] return; }
L_0049B4D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B4E4u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x0049B4E4u) [[unlikely]] return; }
L_0049B4E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0049B50C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049B508; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B508u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x0049B508u) [[unlikely]] return; }
L_0049B508:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0049B50C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B514u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x0049B514u) [[unlikely]] return; }
L_0049B514:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0049B530:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0049B67C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B558u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049B558u) [[unlikely]] return; }
L_0049B558:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0049B680; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 84u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 100u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0049B598; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B590u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049B590u) [[unlikely]] return; }
L_0049B590:
    set32(c.r[2], c.r[29].w[0] + 84u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 2;
L_0049B598:
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[5], c.r[29].w[0] + 84u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 19;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 84u)));  goto L_0049B614; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B5F0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049B5F0u) [[unlikely]] return; }
L_0049B5F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0049B60C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B608u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049B608u) [[unlikely]] return; }
L_0049B608:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0049B60C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049B638; } }
L_0049B614:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B620u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049B620u) [[unlikely]] return; }
L_0049B620:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B634u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049B634u) [[unlikely]] return; }
L_0049B634:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_0049B638:
    set32(c.r[25], ld32((c.r[17].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B64Cu); set32(c.r[4], c.r[17].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049B64Cu) [[unlikely]] return; }
L_0049B64C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 80u), c.r[4].w[0]);  if (t) { goto L_0049B67C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[3], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0049B67C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B67Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049B67Cu) [[unlikely]] return; }
L_0049B67C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0049B680:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0049B6A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.f[20] = c.f[12];
    set32(c.r[2], 0u + 8u);
    st16((c.r[29].w[0] + 120u), static_cast<std::uint16_t>(0u));
    st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st32((c.r[29].w[0] + 116u), c.r[4].w[0]);  if (t) { goto L_0049B6F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B6F0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049B6F0u) [[unlikely]] return; }
L_0049B6F0:
    set32(c.r[2], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 2;
L_0049B6F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[5], c.r[29].w[0] + 100u);
    st32((c.r[2].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[18].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 122u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 12;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 100u)));  goto L_0049B758; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B734u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049B734u) [[unlikely]] return; }
L_0049B734:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0049B750; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B74Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049B74Cu) [[unlikely]] return; }
L_0049B74C:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0049B750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049B77C; } }
L_0049B758:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B764u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049B764u) [[unlikely]] return; }
L_0049B764:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B778u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049B778u) [[unlikely]] return; }
L_0049B778:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_0049B77C:
    set32(c.r[25], ld32((c.r[18].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B790u); set32(c.r[4], c.r[18].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049B790u) [[unlikely]] return; }
L_0049B790:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 122u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 96u), c.r[4].w[0]);  if (t) { goto L_0049B7C0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[3], c.r[29].w[0] + 100u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0049B7C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B7C0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049B7C0u) [[unlikely]] return; }
L_0049B7C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0049B7C4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0049B7E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_0049B810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B7FCu);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049B7FCu) [[unlikely]] return; }
L_0049B7FC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.f[12] = c.f[20];
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B810u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049B810u) [[unlikely]] return; }
L_0049B810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0049B820:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 84u);
    set32(c.r[2], 0u + 16u);
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(0u));
    st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st32((c.r[29].w[0] + 100u), c.r[4].w[0]);  if (t) { goto L_0049B874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B86Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049B86Cu) [[unlikely]] return; }
L_0049B86C:
    set32(c.r[2], c.r[29].w[0] + 84u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 2;
L_0049B874:
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[5], c.r[29].w[0] + 84u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 18;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 84u)));  goto L_0049B8EC; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B8C8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049B8C8u) [[unlikely]] return; }
L_0049B8C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0049B8E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B8E0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049B8E0u) [[unlikely]] return; }
L_0049B8E0:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0049B8E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049B910; } }
L_0049B8EC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B8F8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049B8F8u) [[unlikely]] return; }
L_0049B8F8:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B90Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049B90Cu) [[unlikely]] return; }
L_0049B90C:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_0049B910:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B924u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049B924u) [[unlikely]] return; }
L_0049B924:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 80u), c.r[4].w[0]);  if (t) { goto L_0049B954; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[3], c.r[29].w[0] + 84u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0049B958; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B954u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049B954u) [[unlikely]] return; }
L_0049B954:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0049B958:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0049B970:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 84u);
    set32(c.r[2], 0u + 16u);
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(0u));
    st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st32((c.r[29].w[0] + 100u), c.r[4].w[0]);  if (t) { goto L_0049B9C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049B9BCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049B9BCu) [[unlikely]] return; }
L_0049B9BC:
    set32(c.r[2], c.r[29].w[0] + 84u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 2;
L_0049B9C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[5], c.r[29].w[0] + 84u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 18;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 84u)));  goto L_0049BA3C; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BA18u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049BA18u) [[unlikely]] return; }
L_0049BA18:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0049BA34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BA30u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049BA30u) [[unlikely]] return; }
L_0049BA30:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0049BA34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049BA60; } }
L_0049BA3C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BA48u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049BA48u) [[unlikely]] return; }
L_0049BA48:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BA5Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049BA5Cu) [[unlikely]] return; }
L_0049BA5C:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_0049BA60:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BA74u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049BA74u) [[unlikely]] return; }
L_0049BA74:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 80u), c.r[4].w[0]);  if (t) { goto L_0049BAA4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[3], c.r[29].w[0] + 84u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0049BAA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BAA4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049BAA4u) [[unlikely]] return; }
L_0049BAA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0049BAA8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0049BAC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BAF0u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x0049BAF0u) [[unlikely]] return; }
L_0049BAF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BAFCu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0049BAFCu) [[unlikely]] return; }
L_0049BAFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0049BB24; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049BB20; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BB20u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x0049BB20u) [[unlikely]] return; }
L_0049BB20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0049BB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BB2Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x0049BB2Cu) [[unlikely]] return; }
L_0049BB2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0049BB40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0049BB54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BB54u);  if (depth < kMaxDepth) unit_00E0(c, 520u, depth + 1u); else { c.pc = 0x00483F20u; return; } if (c.pc != 0x0049BB54u) [[unlikely]] return; }
L_0049BB54:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049BB60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0049BB7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BB74u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049BB74u) [[unlikely]] return; }
L_0049BB74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0049BB84; } }
L_0049BB7C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0049BB84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049BB90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 10806u);
    set32(c.r[5], c.r[5].w[0] - 10794u);
    set32(c.r[6], c.r[6].w[0] - 10788u);
    set32(c.r[7], c.r[7].w[0] - 19968u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BBC4u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BBC4u) [[unlikely]] return; }
L_0049BBC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10782u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10758u);
    set32(c.r[7], c.r[7].w[0] - 24736u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BBF0u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BBF0u) [[unlikely]] return; }
L_0049BBF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10747u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10758u);
    set32(c.r[7], c.r[7].w[0] - 24800u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BC1Cu); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BC1Cu) [[unlikely]] return; }
L_0049BC1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10725u);
    set32(c.r[5], c.r[5].w[0] - 10706u);
    set32(c.r[6], c.r[6].w[0] - 10794u);
    set32(c.r[7], c.r[7].w[0] - 24768u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BC48u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BC48u) [[unlikely]] return; }
L_0049BC48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10701u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10794u);
    set32(c.r[7], c.r[7].w[0] - 20224u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BC74u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BC74u) [[unlikely]] return; }
L_0049BC74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10684u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10788u);
    set32(c.r[7], c.r[7].w[0] - 23904u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BCA0u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BCA0u) [[unlikely]] return; }
L_0049BCA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10671u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10788u);
    set32(c.r[7], c.r[7].w[0] - 24192u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BCCCu); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BCCCu) [[unlikely]] return; }
L_0049BCCC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10658u);
    set32(c.r[5], c.r[5].w[0] - 10706u);
    set32(c.r[6], c.r[6].w[0] - 10788u);
    set32(c.r[7], c.r[7].w[0] - 24416u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BCF8u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BCF8u) [[unlikely]] return; }
L_0049BCF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10642u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10788u);
    set32(c.r[7], c.r[7].w[0] - 20448u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BD24u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BD24u) [[unlikely]] return; }
L_0049BD24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10628u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10608u);
    set32(c.r[7], c.r[7].w[0] - 25072u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BD50u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BD50u) [[unlikely]] return; }
L_0049BD50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10588u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10569u);
    set32(c.r[7], c.r[7].w[0] - 25120u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BD7Cu); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BD7Cu) [[unlikely]] return; }
L_0049BD7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10556u);
    set32(c.r[5], c.r[5].w[0] - 10535u);
    set32(c.r[6], c.r[6].w[0] - 10569u);
    set32(c.r[7], c.r[7].w[0] - 20512u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BDA8u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BDA8u) [[unlikely]] return; }
L_0049BDA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10528u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10608u);
    set32(c.r[7], c.r[7].w[0] - 20544u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BDD4u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BDD4u) [[unlikely]] return; }
L_0049BDD4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 10794u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10507u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 20000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BDFCu); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BDFCu) [[unlikely]] return; }
L_0049BDFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10489u);
    set32(c.r[5], c.r[5].w[0] - 10794u);
    set32(c.r[6], c.r[6].w[0] - 10569u);
    set32(c.r[7], c.r[7].w[0] - 20176u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BE28u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BE28u) [[unlikely]] return; }
L_0049BE28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10472u);
    set32(c.r[5], c.r[5].w[0] - 10535u);
    set32(c.r[6], c.r[6].w[0] - 10794u);
    set32(c.r[7], c.r[7].w[0] - 20016u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BE54u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BE54u) [[unlikely]] return; }
L_0049BE54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10456u);
    set32(c.r[5], c.r[5].w[0] - 10535u);
    set32(c.r[6], c.r[6].w[0] - 10794u);
    set32(c.r[7], c.r[7].w[0] - 20032u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BE80u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BE80u) [[unlikely]] return; }
L_0049BE80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10437u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10409u);
    set32(c.r[7], c.r[7].w[0] - 18400u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BEACu); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BEACu) [[unlikely]] return; }
L_0049BEAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10391u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10788u);
    set32(c.r[7], c.r[7].w[0] - 26704u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BED8u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BED8u) [[unlikely]] return; }
L_0049BED8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10371u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10794u);
    set32(c.r[7], c.r[7].w[0] - 26784u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BF04u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BF04u) [[unlikely]] return; }
L_0049BF04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10350u);
    set32(c.r[5], c.r[5].w[0] - 10794u);
    set32(c.r[6], c.r[6].w[0] - 10338u);
    set32(c.r[7], c.r[7].w[0] - 17568u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BF30u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BF30u) [[unlikely]] return; }
L_0049BF30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10328u);
    set32(c.r[5], c.r[5].w[0] - 10294u);
    set32(c.r[6], c.r[6].w[0] - 10794u);
    set32(c.r[7], c.r[7].w[0] - 17728u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BF5Cu); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BF5Cu) [[unlikely]] return; }
L_0049BF5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10283u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10409u);
    set32(c.r[7], c.r[7].w[0] - 18064u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BF88u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BF88u) [[unlikely]] return; }
L_0049BF88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10249u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10222u);
    set32(c.r[7], c.r[7].w[0] - 18464u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BFB4u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BFB4u) [[unlikely]] return; }
L_0049BFB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10204u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10178u);
    set32(c.r[7], c.r[7].w[0] - 18784u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049BFE0u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049BFE0u) [[unlikely]] return; }
L_0049BFE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10166u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10148u);
    c.budget -= 8;
    [[clang::musttail]] return unit_00E7(c, 1u, depth);
}

}
