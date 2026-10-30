#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0081[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 37,
    0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 43, 0, 0,
    0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 48, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 70, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73,
    0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0,
    0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 110, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 145,
    0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0,
    149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0,
    0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 217,
    0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0,
    0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 228, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245,
    0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256,
    0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 273,
    0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 279, 0,
    0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0,
    0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0,
    296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 300, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0,
    307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 313,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0,
    0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324,
    0, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0,
    0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 353,
    0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 359, 0, 0,
    0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0,
    370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0,
    0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0,
    0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0,
    0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397,
    0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0,
    403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408,
    0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0,
    0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0,
    0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432,
    0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0,
    437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0,
    0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0,
    0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0,
    0, 0, 461, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0,
    467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472,
    0, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0,
    0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0,
    0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0,
    0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0,
    0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0,
    0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 529,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0, 0, 0, 0, 0, 0, 536,
    0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0,
    542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 0, 0, 550,
    0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0,
    0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0,
    562, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0,
    567, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    570, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0,
    0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0,
    0, 579, 0, 580, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0,
    0, 587, 0, 588, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0,
    0, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 596, 0, 0, 0, 0,
    0, 597, 0, 598, 0, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0, 0, 601, 0, 602, 0, 0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0,
    0, 605, 0, 606, 0, 0, 0, 0, 0, 607, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    613, 0, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0, 616, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0,
    620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 625, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 631, 0, 0, 632, 0, 0, 0, 0,
    633, 0, 0, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 637, 0, 0, 638, 0, 0, 639, 0, 0,
    640, 0, 0, 641, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    645, 0, 0, 646, 0, 0, 647, 0, 0, 648, 0, 0, 649, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    652, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0,
    0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0,
    0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0,
};

void unit_0081(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00304000;
    case 2u: goto L_00304004;
    case 3u: goto L_00304020;
    case 4u: goto L_0030402C;
    case 5u: goto L_0030403C;
    case 6u: goto L_00304054;
    case 7u: goto L_00304060;
    case 8u: goto L_0030407C;
    case 9u: goto L_00304098;
    case 10u: goto L_003040A4;
    case 11u: goto L_003040B4;
    case 12u: goto L_003040CC;
    case 13u: goto L_003040D8;
    case 14u: goto L_00304100;
    case 15u: goto L_00304110;
    case 16u: goto L_00304144;
    case 17u: goto L_00304150;
    case 18u: goto L_00304164;
    case 19u: goto L_00304180;
    case 20u: goto L_0030418C;
    case 21u: goto L_0030419C;
    case 22u: goto L_003041B4;
    case 23u: goto L_003041C0;
    case 24u: goto L_003041DC;
    case 25u: goto L_003041F8;
    case 26u: goto L_00304204;
    case 27u: goto L_00304214;
    case 28u: goto L_0030422C;
    case 29u: goto L_00304238;
    case 30u: goto L_00304260;
    case 31u: goto L_00304270;
    case 32u: goto L_003042A4;
    case 33u: goto L_003042B0;
    case 34u: goto L_003042C4;
    case 35u: goto L_003042E0;
    case 36u: goto L_003042EC;
    case 37u: goto L_003042FC;
    case 38u: goto L_00304314;
    case 39u: goto L_00304320;
    case 40u: goto L_0030433C;
    case 41u: goto L_00304358;
    case 42u: goto L_00304364;
    case 43u: goto L_00304374;
    case 44u: goto L_0030438C;
    case 45u: goto L_00304398;
    case 46u: goto L_003043C0;
    case 47u: goto L_003043D0;
    case 48u: goto L_00304404;
    case 49u: goto L_00304410;
    case 50u: goto L_00304424;
    case 51u: goto L_00304440;
    case 52u: goto L_0030444C;
    case 53u: goto L_0030445C;
    case 54u: goto L_00304474;
    case 55u: goto L_00304480;
    case 56u: goto L_0030449C;
    case 57u: goto L_003044B8;
    case 58u: goto L_003044C4;
    case 59u: goto L_003044D4;
    case 60u: goto L_003044EC;
    case 61u: goto L_003044F8;
    case 62u: goto L_00304520;
    case 63u: goto L_00304530;
    case 64u: goto L_00304564;
    case 65u: goto L_00304570;
    case 66u: goto L_00304584;
    case 67u: goto L_003045A0;
    case 68u: goto L_003045AC;
    case 69u: goto L_003045BC;
    case 70u: goto L_003045D0;
    case 71u: goto L_003045D4;
    case 72u: goto L_003045E0;
    case 73u: goto L_003045FC;
    case 74u: goto L_00304618;
    case 75u: goto L_00304624;
    case 76u: goto L_00304634;
    case 77u: goto L_0030464C;
    case 78u: goto L_00304658;
    case 79u: goto L_00304680;
    case 80u: goto L_00304690;
    case 81u: goto L_003046C0;
    case 82u: goto L_003046DC;
    case 83u: goto L_003046E8;
    case 84u: goto L_003046F8;
    case 85u: goto L_00304710;
    case 86u: goto L_0030471C;
    case 87u: goto L_00304740;
    case 88u: goto L_00304764;
    case 89u: goto L_0030476C;
    case 90u: goto L_00304788;
    case 91u: goto L_003047B0;
    case 92u: goto L_00304870;
    case 93u: goto L_00304898;
    case 94u: goto L_003048B8;
    case 95u: goto L_003048D8;
    case 96u: goto L_003048F8;
    case 97u: goto L_00304918;
    case 98u: goto L_00304934;
    case 99u: goto L_0030494C;
    case 100u: goto L_00304968;
    case 101u: goto L_00304984;
    case 102u: goto L_003049A4;
    case 103u: goto L_003049C4;
    case 104u: goto L_003049E4;
    case 105u: goto L_00304A10;
    case 106u: goto L_00304A38;
    case 107u: goto L_00304A48;
    case 108u: goto L_00304A5C;
    case 109u: goto L_00304A70;
    case 110u: goto L_00304A84;
    case 111u: goto L_00304A98;
    case 112u: goto L_00304AA4;
    case 113u: goto L_00304AB4;
    case 114u: goto L_00304AC4;
    case 115u: goto L_00304AD4;
    case 116u: goto L_00304AE8;
    case 117u: goto L_00304AFC;
    case 118u: goto L_00304B20;
    case 119u: goto L_00304B4C;
    case 120u: goto L_00304B5C;
    case 121u: goto L_00304B64;
    case 122u: goto L_00304B78;
    case 123u: goto L_00304B94;
    case 124u: goto L_00304BA0;
    case 125u: goto L_00304BB0;
    case 126u: goto L_00304BC8;
    case 127u: goto L_00304BD4;
    case 128u: goto L_00304BE4;
    case 129u: goto L_00304BEC;
    case 130u: goto L_00304C00;
    case 131u: goto L_00304C1C;
    case 132u: goto L_00304C28;
    case 133u: goto L_00304C38;
    case 134u: goto L_00304C50;
    case 135u: goto L_00304C5C;
    case 136u: goto L_00304C6C;
    case 137u: goto L_00304C74;
    case 138u: goto L_00304C88;
    case 139u: goto L_00304CA4;
    case 140u: goto L_00304CB0;
    case 141u: goto L_00304CC0;
    case 142u: goto L_00304CD8;
    case 143u: goto L_00304CE4;
    case 144u: goto L_00304CF0;
    case 145u: goto L_00304CFC;
    case 146u: goto L_00304D20;
    case 147u: goto L_00304D40;
    case 148u: goto L_00304D74;
    case 149u: goto L_00304D80;
    case 150u: goto L_00304D94;
    case 151u: goto L_00304DB0;
    case 152u: goto L_00304DBC;
    case 153u: goto L_00304DCC;
    case 154u: goto L_00304DE4;
    case 155u: goto L_00304DF0;
    case 156u: goto L_00304E10;
    case 157u: goto L_00304E2C;
    case 158u: goto L_00304E38;
    case 159u: goto L_00304E48;
    case 160u: goto L_00304E60;
    case 161u: goto L_00304E6C;
    case 162u: goto L_00304E90;
    case 163u: goto L_00304EB0;
    case 164u: goto L_00304EE4;
    case 165u: goto L_00304EF0;
    case 166u: goto L_00304F04;
    case 167u: goto L_00304F20;
    case 168u: goto L_00304F2C;
    case 169u: goto L_00304F3C;
    case 170u: goto L_00304F54;
    case 171u: goto L_00304F60;
    case 172u: goto L_00304F80;
    case 173u: goto L_00304F9C;
    case 174u: goto L_00304FA8;
    case 175u: goto L_00304FB8;
    case 176u: goto L_00304FD0;
    case 177u: goto L_00304FDC;
    case 178u: goto L_00305000;
    case 179u: goto L_00305020;
    case 180u: goto L_00305054;
    case 181u: goto L_00305060;
    case 182u: goto L_00305074;
    case 183u: goto L_00305090;
    case 184u: goto L_0030509C;
    case 185u: goto L_003050AC;
    case 186u: goto L_003050C4;
    case 187u: goto L_003050D0;
    case 188u: goto L_003050F0;
    case 189u: goto L_0030510C;
    case 190u: goto L_00305118;
    case 191u: goto L_00305128;
    case 192u: goto L_00305140;
    case 193u: goto L_0030514C;
    case 194u: goto L_00305170;
    case 195u: goto L_00305190;
    case 196u: goto L_003051C4;
    case 197u: goto L_003051D0;
    case 198u: goto L_003051E4;
    case 199u: goto L_00305200;
    case 200u: goto L_0030520C;
    case 201u: goto L_0030521C;
    case 202u: goto L_00305234;
    case 203u: goto L_00305240;
    case 204u: goto L_0030525C;
    case 205u: goto L_00305278;
    case 206u: goto L_00305284;
    case 207u: goto L_00305294;
    case 208u: goto L_003052AC;
    case 209u: goto L_003052B8;
    case 210u: goto L_003052E0;
    case 211u: goto L_003052F0;
    case 212u: goto L_00305324;
    case 213u: goto L_00305330;
    case 214u: goto L_00305344;
    case 215u: goto L_00305360;
    case 216u: goto L_0030536C;
    case 217u: goto L_0030537C;
    case 218u: goto L_00305394;
    case 219u: goto L_003053A0;
    case 220u: goto L_003053BC;
    case 221u: goto L_003053D8;
    case 222u: goto L_003053E4;
    case 223u: goto L_003053F4;
    case 224u: goto L_0030540C;
    case 225u: goto L_00305418;
    case 226u: goto L_00305440;
    case 227u: goto L_00305450;
    case 228u: goto L_00305484;
    case 229u: goto L_00305490;
    case 230u: goto L_003054A4;
    case 231u: goto L_003054C0;
    case 232u: goto L_003054CC;
    case 233u: goto L_003054DC;
    case 234u: goto L_003054F4;
    case 235u: goto L_00305500;
    case 236u: goto L_0030551C;
    case 237u: goto L_00305538;
    case 238u: goto L_00305544;
    case 239u: goto L_00305554;
    case 240u: goto L_0030556C;
    case 241u: goto L_00305578;
    case 242u: goto L_003055A0;
    case 243u: goto L_003055B0;
    case 244u: goto L_003055E0;
    case 245u: goto L_003055FC;
    case 246u: goto L_00305608;
    case 247u: goto L_00305618;
    case 248u: goto L_00305630;
    case 249u: goto L_0030563C;
    case 250u: goto L_00305660;
    case 251u: goto L_00305680;
    case 252u: goto L_003056B4;
    case 253u: goto L_003056C0;
    case 254u: goto L_003056D4;
    case 255u: goto L_003056F0;
    case 256u: goto L_003056FC;
    case 257u: goto L_0030570C;
    case 258u: goto L_00305724;
    case 259u: goto L_00305730;
    case 260u: goto L_00305750;
    case 261u: goto L_0030576C;
    case 262u: goto L_00305778;
    case 263u: goto L_00305788;
    case 264u: goto L_003057A0;
    case 265u: goto L_003057AC;
    case 266u: goto L_003057D0;
    case 267u: goto L_003057F0;
    case 268u: goto L_00305824;
    case 269u: goto L_00305830;
    case 270u: goto L_00305844;
    case 271u: goto L_00305860;
    case 272u: goto L_0030586C;
    case 273u: goto L_0030587C;
    case 274u: goto L_00305894;
    case 275u: goto L_003058A0;
    case 276u: goto L_003058C0;
    case 277u: goto L_003058DC;
    case 278u: goto L_003058E8;
    case 279u: goto L_003058F8;
    case 280u: goto L_00305910;
    case 281u: goto L_0030591C;
    case 282u: goto L_00305940;
    case 283u: goto L_00305960;
    case 284u: goto L_00305994;
    case 285u: goto L_003059A0;
    case 286u: goto L_003059B4;
    case 287u: goto L_003059D0;
    case 288u: goto L_003059DC;
    case 289u: goto L_003059EC;
    case 290u: goto L_00305A04;
    case 291u: goto L_00305A10;
    case 292u: goto L_00305A30;
    case 293u: goto L_00305A4C;
    case 294u: goto L_00305A58;
    case 295u: goto L_00305A68;
    case 296u: goto L_00305A80;
    case 297u: goto L_00305A8C;
    case 298u: goto L_00305AB0;
    case 299u: goto L_00305AD0;
    case 300u: goto L_00305B04;
    case 301u: goto L_00305B10;
    case 302u: goto L_00305B24;
    case 303u: goto L_00305B40;
    case 304u: goto L_00305B4C;
    case 305u: goto L_00305B5C;
    case 306u: goto L_00305B74;
    case 307u: goto L_00305B80;
    case 308u: goto L_00305BA0;
    case 309u: goto L_00305BBC;
    case 310u: goto L_00305BC8;
    case 311u: goto L_00305BD8;
    case 312u: goto L_00305BF0;
    case 313u: goto L_00305BFC;
    case 314u: goto L_00305C20;
    case 315u: goto L_00305C30;
    case 316u: goto L_00305C64;
    case 317u: goto L_00305C70;
    case 318u: goto L_00305C84;
    case 319u: goto L_00305CA0;
    case 320u: goto L_00305CAC;
    case 321u: goto L_00305CBC;
    case 322u: goto L_00305CD4;
    case 323u: goto L_00305CE0;
    case 324u: goto L_00305CFC;
    case 325u: goto L_00305D18;
    case 326u: goto L_00305D24;
    case 327u: goto L_00305D34;
    case 328u: goto L_00305D4C;
    case 329u: goto L_00305D58;
    case 330u: goto L_00305D80;
    case 331u: goto L_00305D90;
    case 332u: goto L_00305DC4;
    case 333u: goto L_00305DD0;
    case 334u: goto L_00305DE4;
    case 335u: goto L_00305E00;
    case 336u: goto L_00305E0C;
    case 337u: goto L_00305E1C;
    case 338u: goto L_00305E34;
    case 339u: goto L_00305E40;
    case 340u: goto L_00305E5C;
    case 341u: goto L_00305E78;
    case 342u: goto L_00305E84;
    case 343u: goto L_00305E94;
    case 344u: goto L_00305EAC;
    case 345u: goto L_00305EB8;
    case 346u: goto L_00305EE0;
    case 347u: goto L_00305EF0;
    case 348u: goto L_00305F24;
    case 349u: goto L_00305F30;
    case 350u: goto L_00305F44;
    case 351u: goto L_00305F60;
    case 352u: goto L_00305F6C;
    case 353u: goto L_00305F7C;
    case 354u: goto L_00305F94;
    case 355u: goto L_00305FA0;
    case 356u: goto L_00305FBC;
    case 357u: goto L_00305FD8;
    case 358u: goto L_00305FE4;
    case 359u: goto L_00305FF4;
    case 360u: goto L_0030600C;
    case 361u: goto L_00306018;
    case 362u: goto L_00306040;
    case 363u: goto L_00306050;
    case 364u: goto L_00306080;
    case 365u: goto L_0030609C;
    case 366u: goto L_003060A8;
    case 367u: goto L_003060B8;
    case 368u: goto L_003060D0;
    case 369u: goto L_003060DC;
    case 370u: goto L_00306100;
    case 371u: goto L_00306120;
    case 372u: goto L_00306154;
    case 373u: goto L_00306160;
    case 374u: goto L_00306174;
    case 375u: goto L_00306190;
    case 376u: goto L_0030619C;
    case 377u: goto L_003061AC;
    case 378u: goto L_003061C4;
    case 379u: goto L_003061D0;
    case 380u: goto L_003061F0;
    case 381u: goto L_0030620C;
    case 382u: goto L_00306218;
    case 383u: goto L_00306228;
    case 384u: goto L_00306240;
    case 385u: goto L_0030624C;
    case 386u: goto L_00306270;
    case 387u: goto L_00306290;
    case 388u: goto L_003062C4;
    case 389u: goto L_003062D0;
    case 390u: goto L_003062E4;
    case 391u: goto L_00306300;
    case 392u: goto L_0030630C;
    case 393u: goto L_0030631C;
    case 394u: goto L_00306334;
    case 395u: goto L_00306340;
    case 396u: goto L_00306360;
    case 397u: goto L_0030637C;
    case 398u: goto L_00306388;
    case 399u: goto L_00306398;
    case 400u: goto L_003063B0;
    case 401u: goto L_003063BC;
    case 402u: goto L_003063E0;
    case 403u: goto L_00306400;
    case 404u: goto L_00306434;
    case 405u: goto L_00306440;
    case 406u: goto L_00306454;
    case 407u: goto L_00306470;
    case 408u: goto L_0030647C;
    case 409u: goto L_0030648C;
    case 410u: goto L_003064A4;
    case 411u: goto L_003064B0;
    case 412u: goto L_003064D0;
    case 413u: goto L_003064EC;
    case 414u: goto L_003064F8;
    case 415u: goto L_00306508;
    case 416u: goto L_00306520;
    case 417u: goto L_0030652C;
    case 418u: goto L_00306550;
    case 419u: goto L_00306560;
    case 420u: goto L_00306594;
    case 421u: goto L_003065A0;
    case 422u: goto L_003065B4;
    case 423u: goto L_003065D0;
    case 424u: goto L_003065DC;
    case 425u: goto L_003065EC;
    case 426u: goto L_00306604;
    case 427u: goto L_00306610;
    case 428u: goto L_0030662C;
    case 429u: goto L_00306648;
    case 430u: goto L_00306654;
    case 431u: goto L_00306664;
    case 432u: goto L_0030667C;
    case 433u: goto L_00306688;
    case 434u: goto L_003066B0;
    case 435u: goto L_003066C0;
    case 436u: goto L_003066F4;
    case 437u: goto L_00306700;
    case 438u: goto L_00306714;
    case 439u: goto L_00306730;
    case 440u: goto L_0030673C;
    case 441u: goto L_0030674C;
    case 442u: goto L_00306764;
    case 443u: goto L_00306770;
    case 444u: goto L_0030678C;
    case 445u: goto L_003067A8;
    case 446u: goto L_003067B4;
    case 447u: goto L_003067C4;
    case 448u: goto L_003067DC;
    case 449u: goto L_003067E8;
    case 450u: goto L_00306810;
    case 451u: goto L_00306820;
    case 452u: goto L_00306854;
    case 453u: goto L_00306860;
    case 454u: goto L_00306874;
    case 455u: goto L_00306890;
    case 456u: goto L_0030689C;
    case 457u: goto L_003068AC;
    case 458u: goto L_003068C4;
    case 459u: goto L_003068D0;
    case 460u: goto L_003068EC;
    case 461u: goto L_00306908;
    case 462u: goto L_00306914;
    case 463u: goto L_00306924;
    case 464u: goto L_0030693C;
    case 465u: goto L_00306948;
    case 466u: goto L_00306970;
    case 467u: goto L_00306980;
    case 468u: goto L_003069B4;
    case 469u: goto L_003069C0;
    case 470u: goto L_003069D4;
    case 471u: goto L_003069F0;
    case 472u: goto L_003069FC;
    case 473u: goto L_00306A0C;
    case 474u: goto L_00306A24;
    case 475u: goto L_00306A30;
    case 476u: goto L_00306A4C;
    case 477u: goto L_00306A68;
    case 478u: goto L_00306A74;
    case 479u: goto L_00306A84;
    case 480u: goto L_00306A9C;
    case 481u: goto L_00306AA8;
    case 482u: goto L_00306AD0;
    case 483u: goto L_00306AE0;
    case 484u: goto L_00306B10;
    case 485u: goto L_00306B2C;
    case 486u: goto L_00306B38;
    case 487u: goto L_00306B48;
    case 488u: goto L_00306B60;
    case 489u: goto L_00306B6C;
    case 490u: goto L_00306B90;
    case 491u: goto L_00306BB8;
    case 492u: goto L_00306BE4;
    case 493u: goto L_00306C04;
    case 494u: goto L_00306C28;
    case 495u: goto L_00306C4C;
    case 496u: goto L_00306C70;
    case 497u: goto L_00306C9C;
    case 498u: goto L_00306CC8;
    case 499u: goto L_00306CF4;
    case 500u: goto L_00306D20;
    case 501u: goto L_00306D40;
    case 502u: goto L_00306D64;
    case 503u: goto L_00306D90;
    case 504u: goto L_00306DB8;
    case 505u: goto L_00306DEC;
    case 506u: goto L_00306E18;
    case 507u: goto L_00306E48;
    case 508u: goto L_00306E78;
    case 509u: goto L_00306EAC;
    case 510u: goto L_00306EE4;
    case 511u: goto L_00306F1C;
    case 512u: goto L_00306F54;
    case 513u: goto L_00306F88;
    case 514u: goto L_00306FB4;
    case 515u: goto L_00306FE4;
    case 516u: goto L_00307020;
    case 517u: goto L_00307030;
    case 518u: goto L_00307070;
    case 519u: goto L_0030708C;
    case 520u: goto L_003070B0;
    case 521u: goto L_003070C0;
    case 522u: goto L_003070E8;
    case 523u: goto L_003070F8;
    case 524u: goto L_00307114;
    case 525u: goto L_00307128;
    case 526u: goto L_00307138;
    case 527u: goto L_00307150;
    case 528u: goto L_0030716C;
    case 529u: goto L_0030717C;
    case 530u: goto L_003071A4;
    case 531u: goto L_003071B0;
    case 532u: goto L_003071BC;
    case 533u: goto L_003071C8;
    case 534u: goto L_003071D4;
    case 535u: goto L_003071E0;
    case 536u: goto L_003071FC;
    case 537u: goto L_0030720C;
    case 538u: goto L_00307228;
    case 539u: goto L_0030723C;
    case 540u: goto L_0030724C;
    case 541u: goto L_00307260;
    case 542u: goto L_00307280;
    case 543u: goto L_003072A0;
    case 544u: goto L_003072C0;
    case 545u: goto L_003072E0;
    case 546u: goto L_00307310;
    case 547u: goto L_00307340;
    case 548u: goto L_0030735C;
    case 549u: goto L_00307368;
    case 550u: goto L_0030737C;
    case 551u: goto L_00307394;
    case 552u: goto L_003073A8;
    case 553u: goto L_003073B8;
    case 554u: goto L_003073CC;
    case 555u: goto L_003073DC;
    case 556u: goto L_003073F0;
    case 557u: goto L_0030740C;
    case 558u: goto L_00307420;
    case 559u: goto L_0030743C;
    case 560u: goto L_00307450;
    case 561u: goto L_0030746C;
    case 562u: goto L_00307480;
    case 563u: goto L_0030749C;
    case 564u: goto L_003074B0;
    case 565u: goto L_003074CC;
    case 566u: goto L_003074E0;
    case 567u: goto L_00307500;
    case 568u: goto L_00307524;
    case 569u: goto L_00307534;
    case 570u: goto L_00307580;
    case 571u: goto L_0030759C;
    case 572u: goto L_003075B8;
    case 573u: goto L_003075D4;
    case 574u: goto L_003075F0;
    case 575u: goto L_00307610;
    case 576u: goto L_00307634;
    case 577u: goto L_00307644;
    case 578u: goto L_0030766C;
    case 579u: goto L_00307684;
    case 580u: goto L_0030768C;
    case 581u: goto L_003076A4;
    case 582u: goto L_003076AC;
    case 583u: goto L_003076C4;
    case 584u: goto L_003076CC;
    case 585u: goto L_003076E4;
    case 586u: goto L_003076EC;
    case 587u: goto L_00307704;
    case 588u: goto L_0030770C;
    case 589u: goto L_00307724;
    case 590u: goto L_00307744;
    case 591u: goto L_00307770;
    case 592u: goto L_00307794;
    case 593u: goto L_003077A4;
    case 594u: goto L_003077CC;
    case 595u: goto L_003077E4;
    case 596u: goto L_003077EC;
    case 597u: goto L_00307804;
    case 598u: goto L_0030780C;
    case 599u: goto L_00307824;
    case 600u: goto L_0030782C;
    case 601u: goto L_00307844;
    case 602u: goto L_0030784C;
    case 603u: goto L_00307864;
    case 604u: goto L_0030786C;
    case 605u: goto L_00307884;
    case 606u: goto L_0030788C;
    case 607u: goto L_003078A4;
    case 608u: goto L_003078AC;
    case 609u: goto L_003078C4;
    case 610u: goto L_003078E4;
    case 611u: goto L_00307910;
    case 612u: goto L_0030792C;
    case 613u: goto L_00307980;
    case 614u: goto L_0030799C;
    case 615u: goto L_003079A8;
    case 616u: goto L_003079B4;
    case 617u: goto L_003079C0;
    case 618u: goto L_003079E0;
    case 619u: goto L_003079F0;
    case 620u: goto L_00307A00;
    case 621u: goto L_00307A1C;
    case 622u: goto L_00307A40;
    case 623u: goto L_00307A70;
    case 624u: goto L_00307A9C;
    case 625u: goto L_00307AA8;
    case 626u: goto L_00307AB4;
    case 627u: goto L_00307ADC;
    case 628u: goto L_00307B04;
    case 629u: goto L_00307B2C;
    case 630u: goto L_00307B54;
    case 631u: goto L_00307B60;
    case 632u: goto L_00307B6C;
    case 633u: goto L_00307B80;
    case 634u: goto L_00307B98;
    case 635u: goto L_00307BA8;
    case 636u: goto L_00307BD0;
    case 637u: goto L_00307BDC;
    case 638u: goto L_00307BE8;
    case 639u: goto L_00307BF4;
    case 640u: goto L_00307C00;
    case 641u: goto L_00307C0C;
    case 642u: goto L_00307C20;
    case 643u: goto L_00307C48;
    case 644u: goto L_00307C58;
    case 645u: goto L_00307C80;
    case 646u: goto L_00307C8C;
    case 647u: goto L_00307C98;
    case 648u: goto L_00307CA4;
    case 649u: goto L_00307CB0;
    case 650u: goto L_00307CBC;
    case 651u: goto L_00307CCC;
    case 652u: goto L_00307D00;
    case 653u: goto L_00307D10;
    case 654u: goto L_00307D20;
    case 655u: goto L_00307D64;
    case 656u: goto L_00307D90;
    case 657u: goto L_00307DC4;
    case 658u: goto L_00307DF0;
    case 659u: goto L_00307E24;
    case 660u: goto L_00307E50;
    case 661u: goto L_00307E84;
    case 662u: goto L_00307E94;
    case 663u: goto L_00307EB0;
    case 664u: goto L_00307ECC;
    case 665u: goto L_00307EF0;
    case 666u: goto L_00307F14;
    case 667u: goto L_00307F20;
    case 668u: goto L_00307F40;
    case 669u: goto L_00307F68;
    case 670u: goto L_00307F84;
    case 671u: goto L_00307FBC;
    case 672u: goto L_00307FD0;
    case 673u: goto L_00307FF4;
    default: bad_entry(c, 0x00304000u); return;
    }
L_00304000:
    set32(c.r[17], c.r[17].w[0] - 24960u);
    c.budget -= 1;
L_00304004:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00304024; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304020u); set32(c.r[5], c.r[5].w[0] - 24968u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304020u) [[unlikely]] return; }
L_00304020:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00304024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030402Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030402Cu) [[unlikely]] return; }
L_0030402C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030403Cu); set32(c.r[5], c.r[5].w[0] - 24976u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030403Cu) [[unlikely]] return; }
L_0030403C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304054u); set32(c.r[6], c.r[6].w[0] - 24984u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00304054u) [[unlikely]] return; }
L_00304054:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304060u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00304060u) [[unlikely]] return; }
L_00304060:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 24920u);
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030407Cu); set32(c.r[17], c.r[2].w[0] >> 11);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x0030407Cu) [[unlikely]] return; }
L_0030407C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_0030409C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304098u); set32(c.r[5], c.r[5].w[0] - 24928u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304098u) [[unlikely]] return; }
L_00304098:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0030409C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003040A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003040A4u) [[unlikely]] return; }
L_003040A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003040B4u); set32(c.r[5], c.r[5].w[0] - 24936u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003040B4u) [[unlikely]] return; }
L_003040B4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003040CCu); set32(c.r[6], c.r[6].w[0] - 24944u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003040CCu) [[unlikely]] return; }
L_003040CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003040D8u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003040D8u) [[unlikely]] return; }
L_003040D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00304100:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 10);  c.pc = t; return; }
L_00304110:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003041C0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00304148; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304144u);  if (depth < kMaxDepth) unit_0081(c, 31u, depth + 1u); else { c.pc = 0x00304270u; return; } if (c.pc != 0x00304144u) [[unlikely]] return; }
L_00304144:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00304148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304150u);  if (depth < kMaxDepth) unit_0081(c, 30u, depth + 1u); else { c.pc = 0x00304260u; return; } if (c.pc != 0x00304150u) [[unlikely]] return; }
L_00304150:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304164u); set32(c.r[17], c.r[17].w[0] - 25040u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00304164u) [[unlikely]] return; }
L_00304164:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00304184; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304180u); set32(c.r[5], c.r[5].w[0] - 25048u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304180u) [[unlikely]] return; }
L_00304180:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00304184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030418Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030418Cu) [[unlikely]] return; }
L_0030418C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030419Cu); set32(c.r[5], c.r[5].w[0] - 25056u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030419Cu) [[unlikely]] return; }
L_0030419C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003041B4u); set32(c.r[6], c.r[6].w[0] - 25064u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003041B4u) [[unlikely]] return; }
L_003041B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003041C0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003041C0u) [[unlikely]] return; }
L_003041C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 25000u);
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003041DCu); set32(c.r[17], c.r[2].w[0] >> 9);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003041DCu) [[unlikely]] return; }
L_003041DC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_003041FC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003041F8u); set32(c.r[5], c.r[5].w[0] - 25008u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003041F8u) [[unlikely]] return; }
L_003041F8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003041FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304204u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304204u) [[unlikely]] return; }
L_00304204:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304214u); set32(c.r[5], c.r[5].w[0] - 25016u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304214u) [[unlikely]] return; }
L_00304214:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030422Cu); set32(c.r[6], c.r[6].w[0] - 25024u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x0030422Cu) [[unlikely]] return; }
L_0030422C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304238u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00304238u) [[unlikely]] return; }
L_00304238:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00304260:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 8);  c.pc = t; return; }
L_00304270:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00304320; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003042A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003042A4u);  if (depth < kMaxDepth) unit_0081(c, 47u, depth + 1u); else { c.pc = 0x003043D0u; return; } if (c.pc != 0x003042A4u) [[unlikely]] return; }
L_003042A4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003042A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003042B0u);  if (depth < kMaxDepth) unit_0081(c, 46u, depth + 1u); else { c.pc = 0x003043C0u; return; } if (c.pc != 0x003042B0u) [[unlikely]] return; }
L_003042B0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003042C4u); set32(c.r[17], c.r[17].w[0] - 25136u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003042C4u) [[unlikely]] return; }
L_003042C4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_003042E4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003042E0u); set32(c.r[5], c.r[5].w[0] - 25144u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003042E0u) [[unlikely]] return; }
L_003042E0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003042E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003042ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003042ECu) [[unlikely]] return; }
L_003042EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003042FCu); set32(c.r[5], c.r[5].w[0] - 25152u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003042FCu) [[unlikely]] return; }
L_003042FC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304314u); set32(c.r[6], c.r[6].w[0] - 25160u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00304314u) [[unlikely]] return; }
L_00304314:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304320u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00304320u) [[unlikely]] return; }
L_00304320:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 25088u);
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030433Cu); set32(c.r[17], c.r[2].w[0] >> 7);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x0030433Cu) [[unlikely]] return; }
L_0030433C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_0030435C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304358u); set32(c.r[5], c.r[5].w[0] - 25104u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304358u) [[unlikely]] return; }
L_00304358:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0030435C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304364u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304364u) [[unlikely]] return; }
L_00304364:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304374u); set32(c.r[5], c.r[5].w[0] - 25112u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304374u) [[unlikely]] return; }
L_00304374:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030438Cu); set32(c.r[6], c.r[6].w[0] - 25120u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x0030438Cu) [[unlikely]] return; }
L_0030438C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304398u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00304398u) [[unlikely]] return; }
L_00304398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_003043C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 96ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 5);  c.pc = t; return; }
L_003043D0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00304480; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00304408; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304404u);  if (depth < kMaxDepth) unit_0081(c, 63u, depth + 1u); else { c.pc = 0x00304530u; return; } if (c.pc != 0x00304404u) [[unlikely]] return; }
L_00304404:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00304408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304410u);  if (depth < kMaxDepth) unit_0081(c, 62u, depth + 1u); else { c.pc = 0x00304520u; return; } if (c.pc != 0x00304410u) [[unlikely]] return; }
L_00304410:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304424u); set32(c.r[17], c.r[17].w[0] - 25216u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00304424u) [[unlikely]] return; }
L_00304424:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00304444; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304440u); set32(c.r[5], c.r[5].w[0] - 25224u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304440u) [[unlikely]] return; }
L_00304440:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00304444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030444Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030444Cu) [[unlikely]] return; }
L_0030444C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030445Cu); set32(c.r[5], c.r[5].w[0] - 25232u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030445Cu) [[unlikely]] return; }
L_0030445C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304474u); set32(c.r[6], c.r[6].w[0] - 25240u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00304474u) [[unlikely]] return; }
L_00304474:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304480u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00304480u) [[unlikely]] return; }
L_00304480:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 25176u);
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030449Cu); set32(c.r[17], c.r[2].w[0] >> 4);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x0030449Cu) [[unlikely]] return; }
L_0030449C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_003044BC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003044B8u); set32(c.r[5], c.r[5].w[0] - 25184u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003044B8u) [[unlikely]] return; }
L_003044B8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003044BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003044C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003044C4u) [[unlikely]] return; }
L_003044C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003044D4u); set32(c.r[5], c.r[5].w[0] - 25192u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003044D4u) [[unlikely]] return; }
L_003044D4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003044ECu); set32(c.r[6], c.r[6].w[0] - 25200u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003044ECu) [[unlikely]] return; }
L_003044EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003044F8u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003044F8u) [[unlikely]] return; }
L_003044F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00304520:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 3);  c.pc = t; return; }
L_00304530:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003045E0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00304568; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304564u);  if (depth < kMaxDepth) unit_0081(c, 80u, depth + 1u); else { c.pc = 0x00304690u; return; } if (c.pc != 0x00304564u) [[unlikely]] return; }
L_00304564:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00304568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304570u);  if (depth < kMaxDepth) unit_0081(c, 79u, depth + 1u); else { c.pc = 0x00304680u; return; } if (c.pc != 0x00304570u) [[unlikely]] return; }
L_00304570:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304584u); set32(c.r[17], c.r[17].w[0] - 25296u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00304584u) [[unlikely]] return; }
L_00304584:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_003045A4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003045A0u); set32(c.r[5], c.r[5].w[0] - 25304u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003045A0u) [[unlikely]] return; }
L_003045A0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003045A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003045ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003045ACu) [[unlikely]] return; }
L_003045AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003045BCu); set32(c.r[5], c.r[5].w[0] - 25312u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003045BCu) [[unlikely]] return; }
L_003045BC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003045D4u); set32(c.r[6], c.r[6].w[0] - 25320u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003045D4u) [[unlikely]] return; }
    goto L_003045D4;
L_003045D0:
    set32(c.r[6], c.r[6].w[0] - 25320u);
    c.budget -= 1;
L_003045D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003045E0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003045E0u) [[unlikely]] return; }
L_003045E0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 25256u);
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003045FCu); set32(c.r[17], c.r[2].w[0] >> 2);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003045FCu) [[unlikely]] return; }
L_003045FC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_0030461C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304618u); set32(c.r[5], c.r[5].w[0] - 25264u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304618u) [[unlikely]] return; }
L_00304618:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0030461C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304624u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304624u) [[unlikely]] return; }
L_00304624:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304634u); set32(c.r[5], c.r[5].w[0] - 25272u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304634u) [[unlikely]] return; }
L_00304634:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030464Cu); set32(c.r[6], c.r[6].w[0] - 25280u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x0030464Cu) [[unlikely]] return; }
L_0030464C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304658u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00304658u) [[unlikely]] return; }
L_00304658:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00304680:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 1);  c.pc = t; return; }
L_00304690:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] - 25336u);
    c.r[16].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003046C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003046C0u) [[unlikely]] return; }
L_003046C0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_003046E0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003046DCu); set32(c.r[5], c.r[5].w[0] - 25344u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003046DCu) [[unlikely]] return; }
L_003046DC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003046E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003046E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003046E8u) [[unlikely]] return; }
L_003046E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003046F8u); set32(c.r[5], c.r[5].w[0] - 25352u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003046F8u) [[unlikely]] return; }
L_003046F8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304710u); set32(c.r[6], c.r[6].w[0] - 25360u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00304710u) [[unlikely]] return; }
L_00304710:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030471Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x0030471Cu) [[unlikely]] return; }
L_0030471C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_00304740:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], 0u - 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00304780; } }
L_00304764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030476Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 105u, depth + 1u); else { c.pc = 0x00304A10u; return; } if (c.pc != 0x0030476Cu) [[unlikely]] return; }
L_0030476C:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00304780; }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00304780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304788u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 91u, depth + 1u); else { c.pc = 0x003047B0u; return; } if (c.pc != 0x00304788u) [[unlikely]] return; }
L_00304788:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00304764u | kUnwind; return; } goto L_00304764; }
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003047B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[6].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[5].d[0] = c.r[2].d[0] & c.r[5].d[0];
    set32(c.r[7], c.r[6].w[0] >> 16);
    set32(c.r[6], c.r[5].w[0] >> 17);
    c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[5], c.r[4].w[0] >> 18);
    set32(c.r[4], c.r[3].w[0] >> 19);
    c.r[8].d[0] = c.r[2].d[0] & 128ull;
    c.r[3].d[0] = c.r[2].d[0] & 256ull;
    set32(c.r[8], c.r[8].w[0] >> 7);
    set32(c.r[3], c.r[3].w[0] >> 8);
    set32(c.r[9], c.r[8].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 512ull;
    set32(c.r[8], c.r[3].w[0] >> 9);
    c.r[3].d[0] = c.r[2].d[0] & 1024ull;
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] >> 10);
    set32(c.r[9], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 2048ull;
    set32(c.r[8], c.r[3].w[0] >> 11);
    c.r[3].d[0] = c.r[2].d[0] & 4096ull;
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] >> 12);
    set32(c.r[9], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 8192ull;
    set32(c.r[8], c.r[3].w[0] >> 13);
    c.r[3].d[0] = c.r[2].d[0] & 16384ull;
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] >> 14);
    set32(c.r[9], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 32768ull;
    set32(c.r[8], c.r[3].w[0] >> 15);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 20);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 48;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00304870:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00304A00; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 25456u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00304000u < 16384u) { entry = entries_0081[(t - 0x00304000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00304898:
    set32(c.r[3], c.r[6].w[0] << 12);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.r[5].d[0] = c.r[5].d[0] | 4095ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00304A00; } }
L_003048B8:
    set32(c.r[3], c.r[6].w[0] << 16);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00304A00; } }
L_003048D8:
    set32(c.r[3], c.r[6].w[0] << 20);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00304A00; } }
L_003048F8:
    set32(c.r[3], c.r[6].w[0] << 24);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xF0FF0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00304A00; } }
L_00304918:
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[6].w[0] << 28);
    c.r[5].d[0] = c.r[5].d[0] << 36;
    c.r[5].d[0] = c.r[5].d[0] >> 36;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00304A00; } }
L_00304934:
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], 0u - 16u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00304A00; } }
L_0030494C:
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[5], 0u - 241u);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00304A00; } }
L_00304968:
    set32(c.r[3], c.r[6].w[0] << 8);
    set32(c.r[5], 0u - 3841u);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00304A00; } }
L_00304984:
    set32(c.r[3], c.r[6].w[0] << 12);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.r[5].d[0] = c.r[5].d[0] | 4095ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00304A00; } }
L_003049A4:
    set32(c.r[3], c.r[6].w[0] << 16);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00304A00; } }
L_003049C4:
    set32(c.r[3], c.r[6].w[0] << 20);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00304A00; } }
L_003049E4:
    set32(c.r[3], c.r[6].w[0] << 24);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xF0FF0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 7;
L_00304A00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00304A10:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_00304B14; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 25408u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00304000u < 16384u) { entry = entries_0081[(t - 0x00304000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00304A38:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 61440ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] >> 12);  if (t) { goto L_00304B14; } }
L_00304A48:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] >> 16);  if (t) { goto L_00304B14; } }
L_00304A5C:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F00000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] >> 20);  if (t) { goto L_00304B14; } }
L_00304A70:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0F000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] >> 24);  if (t) { goto L_00304B14; } }
L_00304A84:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] >> 28);  if (t) { goto L_00304B14; } }
L_00304A98:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 15ull;  if (t) { goto L_00304B14; } }
L_00304AA4:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] >> 4);  if (t) { goto L_00304B14; } }
L_00304AB4:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 3840ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] >> 8);  if (t) { goto L_00304B14; } }
L_00304AC4:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 61440ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] >> 12);  if (t) { goto L_00304B14; } }
L_00304AD4:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] >> 16);  if (t) { goto L_00304B14; } }
L_00304AE8:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F00000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] >> 20);  if (t) { goto L_00304B14; } }
L_00304AFC:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0F000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] >> 24);  if (t) { goto L_00304B14; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00304B14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00304B20:
    set32(c.r[29], c.r[29].w[0] - 864u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 860u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304B4Cu); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0084(c, 104u, depth + 1u); else { c.pc = 0x00310CE0u; return; } if (c.pc != 0x00304B4Cu) [[unlikely]] return; }
L_00304B4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 860u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304B5Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0081(c, 371u, depth + 1u); else { c.pc = 0x00306120u; return; } if (c.pc != 0x00304B5Cu) [[unlikely]] return; }
L_00304B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304B64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 370u, depth + 1u); else { c.pc = 0x00306100u; return; } if (c.pc != 0x00304B64u) [[unlikely]] return; }
L_00304B64:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 860u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304B78u); set32(c.r[18], c.r[18].w[0] - 22304u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00304B78u) [[unlikely]] return; }
L_00304B78:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_00304B98; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[29].w[0] + 860u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304B94u); set32(c.r[5], c.r[5].w[0] - 22320u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304B94u) [[unlikely]] return; }
L_00304B94:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00304B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304BA0u); set32(c.r[4], c.r[29].w[0] + 860u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304BA0u) [[unlikely]] return; }
L_00304BA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[29].w[0] + 860u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304BB0u); set32(c.r[5], c.r[5].w[0] - 22328u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304BB0u) [[unlikely]] return; }
L_00304BB0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 592u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304BC8u); set32(c.r[6], c.r[6].w[0] - 22336u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00304BC8u) [[unlikely]] return; }
L_00304BC8:
    set32(c.r[4], c.r[29].w[0] + 860u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304BD4u); set32(c.r[5], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00304BD4u) [[unlikely]] return; }
L_00304BD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 860u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304BE4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0081(c, 251u, depth + 1u); else { c.pc = 0x00305680u; return; } if (c.pc != 0x00304BE4u) [[unlikely]] return; }
L_00304BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304BECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 250u, depth + 1u); else { c.pc = 0x00305660u; return; } if (c.pc != 0x00304BECu) [[unlikely]] return; }
L_00304BEC:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 860u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304C00u); set32(c.r[18], c.r[18].w[0] - 21664u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00304C00u) [[unlikely]] return; }
L_00304C00:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_00304C20; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[29].w[0] + 860u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304C1Cu); set32(c.r[5], c.r[5].w[0] - 21672u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304C1Cu) [[unlikely]] return; }
L_00304C1C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00304C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304C28u); set32(c.r[4], c.r[29].w[0] + 860u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304C28u) [[unlikely]] return; }
L_00304C28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[29].w[0] + 860u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304C38u); set32(c.r[5], c.r[5].w[0] - 21680u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304C38u) [[unlikely]] return; }
L_00304C38:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304C50u); set32(c.r[6], c.r[6].w[0] - 21688u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00304C50u) [[unlikely]] return; }
L_00304C50:
    set32(c.r[4], c.r[29].w[0] + 860u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304C5Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00304C5Cu) [[unlikely]] return; }
L_00304C5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 860u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304C6Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0081(c, 147u, depth + 1u); else { c.pc = 0x00304D40u; return; } if (c.pc != 0x00304C6Cu) [[unlikely]] return; }
L_00304C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304C74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 146u, depth + 1u); else { c.pc = 0x00304D20u; return; } if (c.pc != 0x00304C74u) [[unlikely]] return; }
L_00304C74:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 860u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304C88u); set32(c.r[16], c.r[16].w[0] - 21088u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00304C88u) [[unlikely]] return; }
L_00304C88:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00304CA8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[29].w[0] + 860u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304CA4u); set32(c.r[5], c.r[5].w[0] - 21096u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304CA4u) [[unlikely]] return; }
L_00304CA4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00304CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304CB0u); set32(c.r[4], c.r[29].w[0] + 860u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304CB0u) [[unlikely]] return; }
L_00304CB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[29].w[0] + 860u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304CC0u); set32(c.r[5], c.r[5].w[0] - 21104u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304CC0u) [[unlikely]] return; }
L_00304CC0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304CD8u); set32(c.r[6], c.r[6].w[0] - 21112u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00304CD8u) [[unlikely]] return; }
L_00304CD8:
    set32(c.r[4], c.r[29].w[0] + 860u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304CE4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00304CE4u) [[unlikely]] return; }
L_00304CE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304CF0u); set32(c.r[5], c.r[29].w[0] + 860u);  if (depth < kMaxDepth) unit_0084(c, 91u, depth + 1u); else { c.pc = 0x00310B10u; return; } if (c.pc != 0x00304CF0u) [[unlikely]] return; }
L_00304CF0:
    set32(c.r[4], c.r[29].w[0] + 860u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304CFCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x00304CFCu) [[unlikely]] return; }
L_00304CFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 864u);  c.pc = t; return; }
L_00304D20:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 30);  c.pc = t; return; }
L_00304D40:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00304DF0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00304D78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304D74u);  if (depth < kMaxDepth) unit_0081(c, 163u, depth + 1u); else { c.pc = 0x00304EB0u; return; } if (c.pc != 0x00304D74u) [[unlikely]] return; }
L_00304D74:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00304D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304D80u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00304E90u; return; } if (c.pc != 0x00304D80u) [[unlikely]] return; }
L_00304D80:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304D94u); set32(c.r[16], c.r[16].w[0] - 21168u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00304D94u) [[unlikely]] return; }
L_00304D94:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00304DB4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304DB0u); set32(c.r[5], c.r[5].w[0] - 21176u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304DB0u) [[unlikely]] return; }
L_00304DB0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00304DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304DBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304DBCu) [[unlikely]] return; }
L_00304DBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304DCCu); set32(c.r[5], c.r[5].w[0] - 21184u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304DCCu) [[unlikely]] return; }
L_00304DCC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304DE4u); set32(c.r[6], c.r[6].w[0] - 21192u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00304DE4u) [[unlikely]] return; }
L_00304DE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304DF0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00304DF0u) [[unlikely]] return; }
L_00304DF0:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 21128u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304E10u); set32(c.r[18], c.r[2].w[0] >> 28);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00304E10u) [[unlikely]] return; }
L_00304E10:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00304E30; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304E2Cu); set32(c.r[5], c.r[5].w[0] - 21136u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304E2Cu) [[unlikely]] return; }
L_00304E2C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00304E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304E38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304E38u) [[unlikely]] return; }
L_00304E38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304E48u); set32(c.r[5], c.r[5].w[0] - 21144u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304E48u) [[unlikely]] return; }
L_00304E48:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304E60u); set32(c.r[6], c.r[6].w[0] - 21152u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00304E60u) [[unlikely]] return; }
L_00304E60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304E6Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00304E6Cu) [[unlikely]] return; }
L_00304E6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00304E90:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0C000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 26);  c.pc = t; return; }
L_00304EB0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00304F60; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00304EE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304EE4u);  if (depth < kMaxDepth) unit_0081(c, 179u, depth + 1u); else { c.pc = 0x00305020u; return; } if (c.pc != 0x00304EE4u) [[unlikely]] return; }
L_00304EE4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00304EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304EF0u);  if (depth < kMaxDepth) unit_0081(c, 178u, depth + 1u); else { c.pc = 0x00305000u; return; } if (c.pc != 0x00304EF0u) [[unlikely]] return; }
L_00304EF0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304F04u); set32(c.r[16], c.r[16].w[0] - 21256u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00304F04u) [[unlikely]] return; }
L_00304F04:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00304F24; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304F20u); set32(c.r[5], c.r[5].w[0] - 21264u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304F20u) [[unlikely]] return; }
L_00304F20:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00304F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304F2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304F2Cu) [[unlikely]] return; }
L_00304F2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304F3Cu); set32(c.r[5], c.r[5].w[0] - 21272u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304F3Cu) [[unlikely]] return; }
L_00304F3C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304F54u); set32(c.r[6], c.r[6].w[0] - 21280u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00304F54u) [[unlikely]] return; }
L_00304F54:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304F60u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00304F60u) [[unlikely]] return; }
L_00304F60:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 21216u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304F80u); set32(c.r[18], c.r[2].w[0] >> 25);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00304F80u) [[unlikely]] return; }
L_00304F80:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00304FA0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304F9Cu); set32(c.r[5], c.r[5].w[0] - 21224u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304F9Cu) [[unlikely]] return; }
L_00304F9C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00304FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304FA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304FA8u) [[unlikely]] return; }
L_00304FA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304FB8u); set32(c.r[5], c.r[5].w[0] - 21232u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00304FB8u) [[unlikely]] return; }
L_00304FB8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304FD0u); set32(c.r[6], c.r[6].w[0] - 21240u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00304FD0u) [[unlikely]] return; }
L_00304FD0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304FDCu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00304FDCu) [[unlikely]] return; }
L_00304FDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00305000:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 24);  c.pc = t; return; }
L_00305020:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003050D0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00305058; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305054u);  if (depth < kMaxDepth) unit_0081(c, 195u, depth + 1u); else { c.pc = 0x00305190u; return; } if (c.pc != 0x00305054u) [[unlikely]] return; }
L_00305054:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00305058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305060u);  if (depth < kMaxDepth) unit_0081(c, 194u, depth + 1u); else { c.pc = 0x00305170u; return; } if (c.pc != 0x00305060u) [[unlikely]] return; }
L_00305060:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305074u); set32(c.r[16], c.r[16].w[0] - 21336u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00305074u) [[unlikely]] return; }
L_00305074:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00305094; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305090u); set32(c.r[5], c.r[5].w[0] - 21344u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305090u) [[unlikely]] return; }
L_00305090:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00305094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030509Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030509Cu) [[unlikely]] return; }
L_0030509C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003050ACu); set32(c.r[5], c.r[5].w[0] - 21352u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003050ACu) [[unlikely]] return; }
L_003050AC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003050C4u); set32(c.r[6], c.r[6].w[0] - 21360u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003050C4u) [[unlikely]] return; }
L_003050C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003050D0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003050D0u) [[unlikely]] return; }
L_003050D0:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F00000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 21296u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003050F0u); set32(c.r[18], c.r[2].w[0] >> 20);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003050F0u) [[unlikely]] return; }
L_003050F0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00305110; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030510Cu); set32(c.r[5], c.r[5].w[0] - 21304u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030510Cu) [[unlikely]] return; }
L_0030510C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00305110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305118u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305118u) [[unlikely]] return; }
L_00305118:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305128u); set32(c.r[5], c.r[5].w[0] - 21312u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305128u) [[unlikely]] return; }
L_00305128:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305140u); set32(c.r[6], c.r[6].w[0] - 21320u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00305140u) [[unlikely]] return; }
L_00305140:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030514Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x0030514Cu) [[unlikely]] return; }
L_0030514C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00305170:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 16);  c.pc = t; return; }
L_00305190:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00305240; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003051C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003051C4u);  if (depth < kMaxDepth) unit_0081(c, 211u, depth + 1u); else { c.pc = 0x003052F0u; return; } if (c.pc != 0x003051C4u) [[unlikely]] return; }
L_003051C4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003051C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003051D0u);  if (depth < kMaxDepth) unit_0081(c, 210u, depth + 1u); else { c.pc = 0x003052E0u; return; } if (c.pc != 0x003051D0u) [[unlikely]] return; }
L_003051D0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003051E4u); set32(c.r[17], c.r[17].w[0] - 21424u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003051E4u) [[unlikely]] return; }
L_003051E4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00305204; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305200u); set32(c.r[5], c.r[5].w[0] - 21432u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305200u) [[unlikely]] return; }
L_00305200:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00305204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030520Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030520Cu) [[unlikely]] return; }
L_0030520C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030521Cu); set32(c.r[5], c.r[5].w[0] - 21440u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030521Cu) [[unlikely]] return; }
L_0030521C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305234u); set32(c.r[6], c.r[6].w[0] - 21448u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00305234u) [[unlikely]] return; }
L_00305234:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305240u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00305240u) [[unlikely]] return; }
L_00305240:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 21376u);
    c.r[2].d[0] = c.r[2].d[0] & 61440ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030525Cu); set32(c.r[17], c.r[2].w[0] >> 12);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x0030525Cu) [[unlikely]] return; }
L_0030525C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_0030527C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305278u); set32(c.r[5], c.r[5].w[0] - 21384u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305278u) [[unlikely]] return; }
L_00305278:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0030527C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305284u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305284u) [[unlikely]] return; }
L_00305284:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305294u); set32(c.r[5], c.r[5].w[0] - 21392u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305294u) [[unlikely]] return; }
L_00305294:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003052ACu); set32(c.r[6], c.r[6].w[0] - 21400u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003052ACu) [[unlikely]] return; }
L_003052AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003052B8u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003052B8u) [[unlikely]] return; }
L_003052B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_003052E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 11);  c.pc = t; return; }
L_003052F0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003053A0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00305328; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305324u);  if (depth < kMaxDepth) unit_0081(c, 227u, depth + 1u); else { c.pc = 0x00305450u; return; } if (c.pc != 0x00305324u) [[unlikely]] return; }
L_00305324:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00305328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305330u);  if (depth < kMaxDepth) unit_0081(c, 226u, depth + 1u); else { c.pc = 0x00305440u; return; } if (c.pc != 0x00305330u) [[unlikely]] return; }
L_00305330:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305344u); set32(c.r[17], c.r[17].w[0] - 21504u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00305344u) [[unlikely]] return; }
L_00305344:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00305364; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305360u); set32(c.r[5], c.r[5].w[0] - 21512u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305360u) [[unlikely]] return; }
L_00305360:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00305364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030536Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030536Cu) [[unlikely]] return; }
L_0030536C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030537Cu); set32(c.r[5], c.r[5].w[0] - 21520u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030537Cu) [[unlikely]] return; }
L_0030537C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305394u); set32(c.r[6], c.r[6].w[0] - 21528u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00305394u) [[unlikely]] return; }
L_00305394:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003053A0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003053A0u) [[unlikely]] return; }
L_003053A0:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 21456u);
    c.r[2].d[0] = c.r[2].d[0] & 1792ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003053BCu); set32(c.r[17], c.r[2].w[0] >> 8);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003053BCu) [[unlikely]] return; }
L_003053BC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_003053DC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003053D8u); set32(c.r[5], c.r[5].w[0] - 21464u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003053D8u) [[unlikely]] return; }
L_003053D8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003053DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003053E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003053E4u) [[unlikely]] return; }
L_003053E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003053F4u); set32(c.r[5], c.r[5].w[0] - 21472u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003053F4u) [[unlikely]] return; }
L_003053F4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030540Cu); set32(c.r[6], c.r[6].w[0] - 21480u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x0030540Cu) [[unlikely]] return; }
L_0030540C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305418u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00305418u) [[unlikely]] return; }
L_00305418:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00305440:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 7);  c.pc = t; return; }
L_00305450:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00305500; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00305488; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305484u);  if (depth < kMaxDepth) unit_0081(c, 243u, depth + 1u); else { c.pc = 0x003055B0u; return; } if (c.pc != 0x00305484u) [[unlikely]] return; }
L_00305484:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00305488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305490u);  if (depth < kMaxDepth) unit_0081(c, 242u, depth + 1u); else { c.pc = 0x003055A0u; return; } if (c.pc != 0x00305490u) [[unlikely]] return; }
L_00305490:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003054A4u); set32(c.r[17], c.r[17].w[0] - 21584u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003054A4u) [[unlikely]] return; }
L_003054A4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_003054C4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003054C0u); set32(c.r[5], c.r[5].w[0] - 21592u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003054C0u) [[unlikely]] return; }
L_003054C0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003054C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003054CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003054CCu) [[unlikely]] return; }
L_003054CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003054DCu); set32(c.r[5], c.r[5].w[0] - 21600u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003054DCu) [[unlikely]] return; }
L_003054DC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003054F4u); set32(c.r[6], c.r[6].w[0] - 21608u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003054F4u) [[unlikely]] return; }
L_003054F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305500u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00305500u) [[unlikely]] return; }
L_00305500:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 21536u);
    c.r[2].d[0] = c.r[2].d[0] & 112ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030551Cu); set32(c.r[17], c.r[2].w[0] >> 4);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x0030551Cu) [[unlikely]] return; }
L_0030551C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_0030553C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305538u); set32(c.r[5], c.r[5].w[0] - 21544u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305538u) [[unlikely]] return; }
L_00305538:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0030553C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305544u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305544u) [[unlikely]] return; }
L_00305544:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305554u); set32(c.r[5], c.r[5].w[0] - 21552u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305554u) [[unlikely]] return; }
L_00305554:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030556Cu); set32(c.r[6], c.r[6].w[0] - 21560u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x0030556Cu) [[unlikely]] return; }
L_0030556C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305578u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00305578u) [[unlikely]] return; }
L_00305578:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_003055A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 3);  c.pc = t; return; }
L_003055B0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[17], c.r[17].w[0] - 21616u);
    c.r[16].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003055E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003055E0u) [[unlikely]] return; }
L_003055E0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00305600; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003055FCu); set32(c.r[5], c.r[5].w[0] - 21624u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003055FCu) [[unlikely]] return; }
L_003055FC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00305600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305608u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305608u) [[unlikely]] return; }
L_00305608:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305618u); set32(c.r[5], c.r[5].w[0] - 21632u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305618u) [[unlikely]] return; }
L_00305618:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305630u); set32(c.r[6], c.r[6].w[0] - 21640u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00305630u) [[unlikely]] return; }
L_00305630:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030563Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x0030563Cu) [[unlikely]] return; }
L_0030563C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_00305660:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 31);  c.pc = t; return; }
L_00305680:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00305730; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003056B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003056B4u);  if (depth < kMaxDepth) unit_0081(c, 267u, depth + 1u); else { c.pc = 0x003057F0u; return; } if (c.pc != 0x003056B4u) [[unlikely]] return; }
L_003056B4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003056B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003056C0u);  if (depth < kMaxDepth) unit_0081(c, 266u, depth + 1u); else { c.pc = 0x003057D0u; return; } if (c.pc != 0x003056C0u) [[unlikely]] return; }
L_003056C0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003056D4u); set32(c.r[16], c.r[16].w[0] - 21744u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003056D4u) [[unlikely]] return; }
L_003056D4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_003056F4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003056F0u); set32(c.r[5], c.r[5].w[0] - 21752u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003056F0u) [[unlikely]] return; }
L_003056F0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003056F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003056FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003056FCu) [[unlikely]] return; }
L_003056FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030570Cu); set32(c.r[5], c.r[5].w[0] - 21760u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030570Cu) [[unlikely]] return; }
L_0030570C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305724u); set32(c.r[6], c.r[6].w[0] - 21768u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00305724u) [[unlikely]] return; }
L_00305724:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305730u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00305730u) [[unlikely]] return; }
L_00305730:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 21696u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305750u); set32(c.r[18], c.r[2].w[0] >> 28);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00305750u) [[unlikely]] return; }
L_00305750:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00305770; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030576Cu); set32(c.r[5], c.r[5].w[0] - 21704u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030576Cu) [[unlikely]] return; }
L_0030576C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00305770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305778u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305778u) [[unlikely]] return; }
L_00305778:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305788u); set32(c.r[5], c.r[5].w[0] - 21712u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305788u) [[unlikely]] return; }
L_00305788:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003057A0u); set32(c.r[6], c.r[6].w[0] - 21720u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003057A0u) [[unlikely]] return; }
L_003057A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003057ACu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003057ACu) [[unlikely]] return; }
L_003057AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_003057D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 27);  c.pc = t; return; }
L_003057F0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003058A0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00305828; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305824u);  if (depth < kMaxDepth) unit_0081(c, 283u, depth + 1u); else { c.pc = 0x00305960u; return; } if (c.pc != 0x00305824u) [[unlikely]] return; }
L_00305824:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00305828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305830u);  if (depth < kMaxDepth) unit_0081(c, 282u, depth + 1u); else { c.pc = 0x00305940u; return; } if (c.pc != 0x00305830u) [[unlikely]] return; }
L_00305830:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305844u); set32(c.r[16], c.r[16].w[0] - 21824u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00305844u) [[unlikely]] return; }
L_00305844:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00305864; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305860u); set32(c.r[5], c.r[5].w[0] - 21832u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305860u) [[unlikely]] return; }
L_00305860:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00305864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030586Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030586Cu) [[unlikely]] return; }
L_0030586C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030587Cu); set32(c.r[5], c.r[5].w[0] - 21840u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030587Cu) [[unlikely]] return; }
L_0030587C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305894u); set32(c.r[6], c.r[6].w[0] - 21848u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00305894u) [[unlikely]] return; }
L_00305894:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003058A0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003058A0u) [[unlikely]] return; }
L_003058A0:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07000000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 21776u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003058C0u); set32(c.r[18], c.r[2].w[0] >> 24);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003058C0u) [[unlikely]] return; }
L_003058C0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_003058E0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003058DCu); set32(c.r[5], c.r[5].w[0] - 21784u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003058DCu) [[unlikely]] return; }
L_003058DC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003058E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003058E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003058E8u) [[unlikely]] return; }
L_003058E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003058F8u); set32(c.r[5], c.r[5].w[0] - 21792u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003058F8u) [[unlikely]] return; }
L_003058F8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305910u); set32(c.r[6], c.r[6].w[0] - 21800u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00305910u) [[unlikely]] return; }
L_00305910:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030591Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x0030591Cu) [[unlikely]] return; }
L_0030591C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00305940:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 23);  c.pc = t; return; }
L_00305960:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00305A10; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00305998; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305994u);  if (depth < kMaxDepth) unit_0081(c, 299u, depth + 1u); else { c.pc = 0x00305AD0u; return; } if (c.pc != 0x00305994u) [[unlikely]] return; }
L_00305994:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00305998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003059A0u);  if (depth < kMaxDepth) unit_0081(c, 298u, depth + 1u); else { c.pc = 0x00305AB0u; return; } if (c.pc != 0x003059A0u) [[unlikely]] return; }
L_003059A0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003059B4u); set32(c.r[16], c.r[16].w[0] - 21904u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003059B4u) [[unlikely]] return; }
L_003059B4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_003059D4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003059D0u); set32(c.r[5], c.r[5].w[0] - 21912u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003059D0u) [[unlikely]] return; }
L_003059D0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003059D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003059DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003059DCu) [[unlikely]] return; }
L_003059DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003059ECu); set32(c.r[5], c.r[5].w[0] - 21920u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003059ECu) [[unlikely]] return; }
L_003059EC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305A04u); set32(c.r[6], c.r[6].w[0] - 21928u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00305A04u) [[unlikely]] return; }
L_00305A04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305A10u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00305A10u) [[unlikely]] return; }
L_00305A10:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 21856u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305A30u); set32(c.r[18], c.r[2].w[0] >> 20);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00305A30u) [[unlikely]] return; }
L_00305A30:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00305A50; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305A4Cu); set32(c.r[5], c.r[5].w[0] - 21864u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305A4Cu) [[unlikely]] return; }
L_00305A4C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00305A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305A58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305A58u) [[unlikely]] return; }
L_00305A58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305A68u); set32(c.r[5], c.r[5].w[0] - 21872u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305A68u) [[unlikely]] return; }
L_00305A68:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305A80u); set32(c.r[6], c.r[6].w[0] - 21880u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00305A80u) [[unlikely]] return; }
L_00305A80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305A8Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00305A8Cu) [[unlikely]] return; }
L_00305A8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00305AB0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 19);  c.pc = t; return; }
L_00305AD0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00305B80; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00305B08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305B04u);  if (depth < kMaxDepth) unit_0081(c, 315u, depth + 1u); else { c.pc = 0x00305C30u; return; } if (c.pc != 0x00305B04u) [[unlikely]] return; }
L_00305B04:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00305B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305B10u);  if (depth < kMaxDepth) unit_0081(c, 314u, depth + 1u); else { c.pc = 0x00305C20u; return; } if (c.pc != 0x00305B10u) [[unlikely]] return; }
L_00305B10:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305B24u); set32(c.r[16], c.r[16].w[0] - 21984u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00305B24u) [[unlikely]] return; }
L_00305B24:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00305B44; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305B40u); set32(c.r[5], c.r[5].w[0] - 21992u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305B40u) [[unlikely]] return; }
L_00305B40:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00305B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305B4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305B4Cu) [[unlikely]] return; }
L_00305B4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305B5Cu); set32(c.r[5], c.r[5].w[0] - 22000u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305B5Cu) [[unlikely]] return; }
L_00305B5C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305B74u); set32(c.r[6], c.r[6].w[0] - 22008u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00305B74u) [[unlikely]] return; }
L_00305B74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305B80u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00305B80u) [[unlikely]] return; }
L_00305B80:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 21936u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305BA0u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00305BA0u) [[unlikely]] return; }
L_00305BA0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00305BC0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305BBCu); set32(c.r[5], c.r[5].w[0] - 21944u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305BBCu) [[unlikely]] return; }
L_00305BBC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00305BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305BC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305BC8u) [[unlikely]] return; }
L_00305BC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305BD8u); set32(c.r[5], c.r[5].w[0] - 21952u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305BD8u) [[unlikely]] return; }
L_00305BD8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305BF0u); set32(c.r[6], c.r[6].w[0] - 21960u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00305BF0u) [[unlikely]] return; }
L_00305BF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305BFCu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00305BFCu) [[unlikely]] return; }
L_00305BFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00305C20:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 15);  c.pc = t; return; }
L_00305C30:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00305CE0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00305C68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305C64u);  if (depth < kMaxDepth) unit_0081(c, 331u, depth + 1u); else { c.pc = 0x00305D90u; return; } if (c.pc != 0x00305C64u) [[unlikely]] return; }
L_00305C64:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00305C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305C70u);  if (depth < kMaxDepth) unit_0081(c, 330u, depth + 1u); else { c.pc = 0x00305D80u; return; } if (c.pc != 0x00305C70u) [[unlikely]] return; }
L_00305C70:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305C84u); set32(c.r[17], c.r[17].w[0] - 22064u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00305C84u) [[unlikely]] return; }
L_00305C84:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00305CA4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305CA0u); set32(c.r[5], c.r[5].w[0] - 22072u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305CA0u) [[unlikely]] return; }
L_00305CA0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00305CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305CACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305CACu) [[unlikely]] return; }
L_00305CAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305CBCu); set32(c.r[5], c.r[5].w[0] - 22080u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305CBCu) [[unlikely]] return; }
L_00305CBC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305CD4u); set32(c.r[6], c.r[6].w[0] - 22088u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00305CD4u) [[unlikely]] return; }
L_00305CD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305CE0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00305CE0u) [[unlikely]] return; }
L_00305CE0:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 22016u);
    c.r[2].d[0] = c.r[2].d[0] & 28672ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305CFCu); set32(c.r[17], c.r[2].w[0] >> 12);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00305CFCu) [[unlikely]] return; }
L_00305CFC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_00305D1C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305D18u); set32(c.r[5], c.r[5].w[0] - 22024u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305D18u) [[unlikely]] return; }
L_00305D18:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00305D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305D24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305D24u) [[unlikely]] return; }
L_00305D24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305D34u); set32(c.r[5], c.r[5].w[0] - 22032u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305D34u) [[unlikely]] return; }
L_00305D34:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305D4Cu); set32(c.r[6], c.r[6].w[0] - 22040u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00305D4Cu) [[unlikely]] return; }
L_00305D4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305D58u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00305D58u) [[unlikely]] return; }
L_00305D58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00305D80:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 11);  c.pc = t; return; }
L_00305D90:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00305E40; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00305DC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305DC4u);  if (depth < kMaxDepth) unit_0081(c, 347u, depth + 1u); else { c.pc = 0x00305EF0u; return; } if (c.pc != 0x00305DC4u) [[unlikely]] return; }
L_00305DC4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00305DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305DD0u);  if (depth < kMaxDepth) unit_0081(c, 346u, depth + 1u); else { c.pc = 0x00305EE0u; return; } if (c.pc != 0x00305DD0u) [[unlikely]] return; }
L_00305DD0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305DE4u); set32(c.r[17], c.r[17].w[0] - 22144u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00305DE4u) [[unlikely]] return; }
L_00305DE4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00305E04; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305E00u); set32(c.r[5], c.r[5].w[0] - 22152u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305E00u) [[unlikely]] return; }
L_00305E00:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00305E04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305E0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305E0Cu) [[unlikely]] return; }
L_00305E0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305E1Cu); set32(c.r[5], c.r[5].w[0] - 22160u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305E1Cu) [[unlikely]] return; }
L_00305E1C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305E34u); set32(c.r[6], c.r[6].w[0] - 22168u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00305E34u) [[unlikely]] return; }
L_00305E34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305E40u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00305E40u) [[unlikely]] return; }
L_00305E40:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 22096u);
    c.r[2].d[0] = c.r[2].d[0] & 1792ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305E5Cu); set32(c.r[17], c.r[2].w[0] >> 8);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00305E5Cu) [[unlikely]] return; }
L_00305E5C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_00305E7C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305E78u); set32(c.r[5], c.r[5].w[0] - 22104u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305E78u) [[unlikely]] return; }
L_00305E78:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00305E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305E84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305E84u) [[unlikely]] return; }
L_00305E84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305E94u); set32(c.r[5], c.r[5].w[0] - 22112u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305E94u) [[unlikely]] return; }
L_00305E94:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305EACu); set32(c.r[6], c.r[6].w[0] - 22120u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00305EACu) [[unlikely]] return; }
L_00305EAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305EB8u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00305EB8u) [[unlikely]] return; }
L_00305EB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00305EE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 7);  c.pc = t; return; }
L_00305EF0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00305FA0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00305F28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305F24u);  if (depth < kMaxDepth) unit_0081(c, 363u, depth + 1u); else { c.pc = 0x00306050u; return; } if (c.pc != 0x00305F24u) [[unlikely]] return; }
L_00305F24:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00305F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305F30u);  if (depth < kMaxDepth) unit_0081(c, 362u, depth + 1u); else { c.pc = 0x00306040u; return; } if (c.pc != 0x00305F30u) [[unlikely]] return; }
L_00305F30:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305F44u); set32(c.r[17], c.r[17].w[0] - 22224u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00305F44u) [[unlikely]] return; }
L_00305F44:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00305F64; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305F60u); set32(c.r[5], c.r[5].w[0] - 22232u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305F60u) [[unlikely]] return; }
L_00305F60:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00305F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305F6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305F6Cu) [[unlikely]] return; }
L_00305F6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305F7Cu); set32(c.r[5], c.r[5].w[0] - 22240u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305F7Cu) [[unlikely]] return; }
L_00305F7C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305F94u); set32(c.r[6], c.r[6].w[0] - 22248u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00305F94u) [[unlikely]] return; }
L_00305F94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305FA0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00305FA0u) [[unlikely]] return; }
L_00305FA0:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 22176u);
    c.r[2].d[0] = c.r[2].d[0] & 112ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305FBCu); set32(c.r[17], c.r[2].w[0] >> 4);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00305FBCu) [[unlikely]] return; }
L_00305FBC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_00305FDC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305FD8u); set32(c.r[5], c.r[5].w[0] - 22184u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305FD8u) [[unlikely]] return; }
L_00305FD8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00305FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305FE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305FE4u) [[unlikely]] return; }
L_00305FE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305FF4u); set32(c.r[5], c.r[5].w[0] - 22192u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00305FF4u) [[unlikely]] return; }
L_00305FF4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030600Cu); set32(c.r[6], c.r[6].w[0] - 22200u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x0030600Cu) [[unlikely]] return; }
L_0030600C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306018u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00306018u) [[unlikely]] return; }
L_00306018:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00306040:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 3);  c.pc = t; return; }
L_00306050:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[17], c.r[17].w[0] - 22256u);
    c.r[16].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306080u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00306080u) [[unlikely]] return; }
L_00306080:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_003060A0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030609Cu); set32(c.r[5], c.r[5].w[0] - 22264u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030609Cu) [[unlikely]] return; }
L_0030609C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003060A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003060A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003060A8u) [[unlikely]] return; }
L_003060A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003060B8u); set32(c.r[5], c.r[5].w[0] - 22272u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003060B8u) [[unlikely]] return; }
L_003060B8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003060D0u); set32(c.r[6], c.r[6].w[0] - 22280u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003060D0u) [[unlikely]] return; }
L_003060D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003060DCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003060DCu) [[unlikely]] return; }
L_003060DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_00306100:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 31);  c.pc = t; return; }
L_00306120:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003061D0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00306158; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306154u);  if (depth < kMaxDepth) unit_0081(c, 387u, depth + 1u); else { c.pc = 0x00306290u; return; } if (c.pc != 0x00306154u) [[unlikely]] return; }
L_00306154:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00306158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306160u);  if (depth < kMaxDepth) unit_0081(c, 386u, depth + 1u); else { c.pc = 0x00306270u; return; } if (c.pc != 0x00306160u) [[unlikely]] return; }
L_00306160:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306174u); set32(c.r[16], c.r[16].w[0] - 22384u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00306174u) [[unlikely]] return; }
L_00306174:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00306194; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306190u); set32(c.r[5], c.r[5].w[0] - 22392u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306190u) [[unlikely]] return; }
L_00306190:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00306194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030619Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030619Cu) [[unlikely]] return; }
L_0030619C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003061ACu); set32(c.r[5], c.r[5].w[0] - 22400u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003061ACu) [[unlikely]] return; }
L_003061AC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003061C4u); set32(c.r[6], c.r[6].w[0] - 22408u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003061C4u) [[unlikely]] return; }
L_003061C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003061D0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003061D0u) [[unlikely]] return; }
L_003061D0:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 22344u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003061F0u); set32(c.r[18], c.r[2].w[0] >> 28);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003061F0u) [[unlikely]] return; }
L_003061F0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00306210; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030620Cu); set32(c.r[5], c.r[5].w[0] - 22352u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030620Cu) [[unlikely]] return; }
L_0030620C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00306210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306218u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306218u) [[unlikely]] return; }
L_00306218:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306228u); set32(c.r[5], c.r[5].w[0] - 22360u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306228u) [[unlikely]] return; }
L_00306228:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306240u); set32(c.r[6], c.r[6].w[0] - 22368u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00306240u) [[unlikely]] return; }
L_00306240:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030624Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x0030624Cu) [[unlikely]] return; }
L_0030624C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00306270:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0F000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 24);  c.pc = t; return; }
L_00306290:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00306340; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003062C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003062C4u);  if (depth < kMaxDepth) unit_0081(c, 403u, depth + 1u); else { c.pc = 0x00306400u; return; } if (c.pc != 0x003062C4u) [[unlikely]] return; }
L_003062C4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003062C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003062D0u);  if (depth < kMaxDepth) unit_0081(c, 402u, depth + 1u); else { c.pc = 0x003063E0u; return; } if (c.pc != 0x003062D0u) [[unlikely]] return; }
L_003062D0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003062E4u); set32(c.r[16], c.r[16].w[0] - 22480u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003062E4u) [[unlikely]] return; }
L_003062E4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00306304; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306300u); set32(c.r[5], c.r[5].w[0] - 22488u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306300u) [[unlikely]] return; }
L_00306300:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00306304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030630Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030630Cu) [[unlikely]] return; }
L_0030630C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030631Cu); set32(c.r[5], c.r[5].w[0] - 22496u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030631Cu) [[unlikely]] return; }
L_0030631C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306334u); set32(c.r[6], c.r[6].w[0] - 22504u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00306334u) [[unlikely]] return; }
L_00306334:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306340u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00306340u) [[unlikely]] return; }
L_00306340:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00E00000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 22432u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306360u); set32(c.r[18], c.r[2].w[0] >> 21);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00306360u) [[unlikely]] return; }
L_00306360:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00306380; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030637Cu); set32(c.r[5], c.r[5].w[0] - 22440u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030637Cu) [[unlikely]] return; }
L_0030637C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00306380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306388u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306388u) [[unlikely]] return; }
L_00306388:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306398u); set32(c.r[5], c.r[5].w[0] - 22448u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306398u) [[unlikely]] return; }
L_00306398:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003063B0u); set32(c.r[6], c.r[6].w[0] - 22456u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003063B0u) [[unlikely]] return; }
L_003063B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003063BCu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003063BCu) [[unlikely]] return; }
L_003063BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_003063E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 19);  c.pc = t; return; }
L_00306400:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003064B0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00306438; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306434u);  if (depth < kMaxDepth) unit_0081(c, 419u, depth + 1u); else { c.pc = 0x00306560u; return; } if (c.pc != 0x00306434u) [[unlikely]] return; }
L_00306434:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00306438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306440u);  if (depth < kMaxDepth) unit_0081(c, 418u, depth + 1u); else { c.pc = 0x00306550u; return; } if (c.pc != 0x00306440u) [[unlikely]] return; }
L_00306440:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306454u); set32(c.r[16], c.r[16].w[0] - 22576u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00306454u) [[unlikely]] return; }
L_00306454:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00306474; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306470u); set32(c.r[5], c.r[5].w[0] - 22584u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306470u) [[unlikely]] return; }
L_00306470:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00306474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030647Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030647Cu) [[unlikely]] return; }
L_0030647C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030648Cu); set32(c.r[5], c.r[5].w[0] - 22592u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030648Cu) [[unlikely]] return; }
L_0030648C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003064A4u); set32(c.r[6], c.r[6].w[0] - 22600u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003064A4u) [[unlikely]] return; }
L_003064A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003064B0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003064B0u) [[unlikely]] return; }
L_003064B0:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 22528u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003064D0u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003064D0u) [[unlikely]] return; }
L_003064D0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_003064F0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003064ECu); set32(c.r[5], c.r[5].w[0] - 22536u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003064ECu) [[unlikely]] return; }
L_003064EC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003064F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003064F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003064F8u) [[unlikely]] return; }
L_003064F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306508u); set32(c.r[5], c.r[5].w[0] - 22544u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306508u) [[unlikely]] return; }
L_00306508:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306520u); set32(c.r[6], c.r[6].w[0] - 22552u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00306520u) [[unlikely]] return; }
L_00306520:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030652Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x0030652Cu) [[unlikely]] return; }
L_0030652C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00306550:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 49152ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 14);  c.pc = t; return; }
L_00306560:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00306610; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00306598; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306594u);  if (depth < kMaxDepth) unit_0081(c, 435u, depth + 1u); else { c.pc = 0x003066C0u; return; } if (c.pc != 0x00306594u) [[unlikely]] return; }
L_00306594:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00306598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003065A0u);  if (depth < kMaxDepth) unit_0081(c, 434u, depth + 1u); else { c.pc = 0x003066B0u; return; } if (c.pc != 0x003065A0u) [[unlikely]] return; }
L_003065A0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003065B4u); set32(c.r[17], c.r[17].w[0] - 22648u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003065B4u) [[unlikely]] return; }
L_003065B4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_003065D4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003065D0u); set32(c.r[5], c.r[5].w[0] - 22656u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003065D0u) [[unlikely]] return; }
L_003065D0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003065D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003065DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003065DCu) [[unlikely]] return; }
L_003065DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003065ECu); set32(c.r[5], c.r[5].w[0] - 22664u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003065ECu) [[unlikely]] return; }
L_003065EC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306604u); set32(c.r[6], c.r[6].w[0] - 22672u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00306604u) [[unlikely]] return; }
L_00306604:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306610u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00306610u) [[unlikely]] return; }
L_00306610:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 22616u);
    c.r[2].d[0] = c.r[2].d[0] & 14336ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030662Cu); set32(c.r[17], c.r[2].w[0] >> 11);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x0030662Cu) [[unlikely]] return; }
L_0030662C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_0030664C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306648u); set32(c.r[5], c.r[5].w[0] - 22624u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306648u) [[unlikely]] return; }
L_00306648:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0030664C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306654u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306654u) [[unlikely]] return; }
L_00306654:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306664u); set32(c.r[5], c.r[5].w[0] - 22632u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306664u) [[unlikely]] return; }
L_00306664:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030667Cu); set32(c.r[6], c.r[6].w[0] - 22640u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x0030667Cu) [[unlikely]] return; }
L_0030667C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306688u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00306688u) [[unlikely]] return; }
L_00306688:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_003066B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1536ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 9);  c.pc = t; return; }
L_003066C0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00306770; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003066F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003066F4u);  if (depth < kMaxDepth) unit_0081(c, 451u, depth + 1u); else { c.pc = 0x00306820u; return; } if (c.pc != 0x003066F4u) [[unlikely]] return; }
L_003066F4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003066F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306700u);  if (depth < kMaxDepth) unit_0081(c, 450u, depth + 1u); else { c.pc = 0x00306810u; return; } if (c.pc != 0x00306700u) [[unlikely]] return; }
L_00306700:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306714u); set32(c.r[17], c.r[17].w[0] - 22720u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00306714u) [[unlikely]] return; }
L_00306714:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00306734; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306730u); set32(c.r[5], c.r[5].w[0] - 22728u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306730u) [[unlikely]] return; }
L_00306730:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00306734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030673Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030673Cu) [[unlikely]] return; }
L_0030673C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030674Cu); set32(c.r[5], c.r[5].w[0] - 22736u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030674Cu) [[unlikely]] return; }
L_0030674C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306764u); set32(c.r[6], c.r[6].w[0] - 22744u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00306764u) [[unlikely]] return; }
L_00306764:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306770u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00306770u) [[unlikely]] return; }
L_00306770:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 22688u);
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030678Cu); set32(c.r[17], c.r[2].w[0] >> 8);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x0030678Cu) [[unlikely]] return; }
L_0030678C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_003067AC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003067A8u); set32(c.r[5], c.r[5].w[0] - 22696u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003067A8u) [[unlikely]] return; }
L_003067A8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003067AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003067B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003067B4u) [[unlikely]] return; }
L_003067B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003067C4u); set32(c.r[5], c.r[5].w[0] - 22704u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003067C4u) [[unlikely]] return; }
L_003067C4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003067DCu); set32(c.r[6], c.r[6].w[0] - 22712u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003067DCu) [[unlikely]] return; }
L_003067DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003067E8u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003067E8u) [[unlikely]] return; }
L_003067E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00306810:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 192ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 6);  c.pc = t; return; }
L_00306820:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003068D0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00306858; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306854u);  if (depth < kMaxDepth) unit_0081(c, 467u, depth + 1u); else { c.pc = 0x00306980u; return; } if (c.pc != 0x00306854u) [[unlikely]] return; }
L_00306854:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00306858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306860u);  if (depth < kMaxDepth) unit_0081(c, 466u, depth + 1u); else { c.pc = 0x00306970u; return; } if (c.pc != 0x00306860u) [[unlikely]] return; }
L_00306860:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306874u); set32(c.r[17], c.r[17].w[0] - 22816u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00306874u) [[unlikely]] return; }
L_00306874:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00306894; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306890u); set32(c.r[5], c.r[5].w[0] - 22824u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306890u) [[unlikely]] return; }
L_00306890:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00306894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030689Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030689Cu) [[unlikely]] return; }
L_0030689C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003068ACu); set32(c.r[5], c.r[5].w[0] - 22832u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003068ACu) [[unlikely]] return; }
L_003068AC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003068C4u); set32(c.r[6], c.r[6].w[0] - 22840u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003068C4u) [[unlikely]] return; }
L_003068C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003068D0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003068D0u) [[unlikely]] return; }
L_003068D0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 22768u);
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003068ECu); set32(c.r[17], c.r[2].w[0] >> 5);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003068ECu) [[unlikely]] return; }
L_003068EC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_0030690C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306908u); set32(c.r[5], c.r[5].w[0] - 22784u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306908u) [[unlikely]] return; }
L_00306908:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0030690C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306914u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306914u) [[unlikely]] return; }
L_00306914:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306924u); set32(c.r[5], c.r[5].w[0] - 22792u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306924u) [[unlikely]] return; }
L_00306924:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030693Cu); set32(c.r[6], c.r[6].w[0] - 22800u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x0030693Cu) [[unlikely]] return; }
L_0030693C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306948u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00306948u) [[unlikely]] return; }
L_00306948:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00306970:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 4);  c.pc = t; return; }
L_00306980:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00306A30; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003069B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003069B4u);  if (depth < kMaxDepth) unit_0081(c, 483u, depth + 1u); else { c.pc = 0x00306AE0u; return; } if (c.pc != 0x003069B4u) [[unlikely]] return; }
L_003069B4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003069B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003069C0u);  if (depth < kMaxDepth) unit_0081(c, 482u, depth + 1u); else { c.pc = 0x00306AD0u; return; } if (c.pc != 0x003069C0u) [[unlikely]] return; }
L_003069C0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003069D4u); set32(c.r[17], c.r[17].w[0] - 22896u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003069D4u) [[unlikely]] return; }
L_003069D4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_003069F4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003069F0u); set32(c.r[5], c.r[5].w[0] - 22904u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003069F0u) [[unlikely]] return; }
L_003069F0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003069F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003069FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003069FCu) [[unlikely]] return; }
L_003069FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306A0Cu); set32(c.r[5], c.r[5].w[0] - 22912u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306A0Cu) [[unlikely]] return; }
L_00306A0C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306A24u); set32(c.r[6], c.r[6].w[0] - 22920u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00306A24u) [[unlikely]] return; }
L_00306A24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306A30u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00306A30u) [[unlikely]] return; }
L_00306A30:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 22856u);
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306A4Cu); set32(c.r[17], c.r[2].w[0] >> 3);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00306A4Cu) [[unlikely]] return; }
L_00306A4C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_00306A6C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306A68u); set32(c.r[5], c.r[5].w[0] - 22864u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306A68u) [[unlikely]] return; }
L_00306A68:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00306A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306A74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306A74u) [[unlikely]] return; }
L_00306A74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306A84u); set32(c.r[5], c.r[5].w[0] - 22872u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306A84u) [[unlikely]] return; }
L_00306A84:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306A9Cu); set32(c.r[6], c.r[6].w[0] - 22880u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00306A9Cu) [[unlikely]] return; }
L_00306A9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306AA8u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00306AA8u) [[unlikely]] return; }
L_00306AA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00306AD0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 2);  c.pc = t; return; }
L_00306AE0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] - 22936u);
    c.r[16].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306B10u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00306B10u) [[unlikely]] return; }
L_00306B10:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00306B30; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306B2Cu); set32(c.r[5], c.r[5].w[0] - 22944u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306B2Cu) [[unlikely]] return; }
L_00306B2C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00306B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306B38u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306B38u) [[unlikely]] return; }
L_00306B38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306B48u); set32(c.r[5], c.r[5].w[0] - 22952u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00306B48u) [[unlikely]] return; }
L_00306B48:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306B60u); set32(c.r[6], c.r[6].w[0] - 22960u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00306B60u) [[unlikely]] return; }
L_00306B60:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306B6Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00306B6Cu) [[unlikely]] return; }
L_00306B6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_00306B90:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00306D84; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 23056u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00304000u < 16384u) { entry = entries_0081[(t - 0x00304000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00306BB8:
    set32(c.r[8], ld32((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    set32(c.r[5], c.r[5].w[0] >> 28);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00306D84; } }
L_00306BE4:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    set32(c.r[3], c.r[3].w[0] >> 3);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00306D84; } }
L_00306C04:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 112ull;
    set32(c.r[3], c.r[3].w[0] >> 4);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    set32(c.r[3], c.r[3].w[0] >> 7);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00306D84; } }
L_00306C28:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 1792ull;
    set32(c.r[3], c.r[3].w[0] >> 8);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    set32(c.r[3], c.r[3].w[0] >> 11);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00306D84; } }
L_00306C4C:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 28672ull;
    set32(c.r[3], c.r[3].w[0] >> 12);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    set32(c.r[3], c.r[3].w[0] >> 15);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00306D84; } }
L_00306C70:
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    set32(c.r[5], c.r[5].w[0] >> 16);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 19);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00306D84; } }
L_00306C9C:
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    set32(c.r[5], c.r[5].w[0] >> 20);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 23);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00306D84; } }
L_00306CC8:
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x07000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    set32(c.r[5], c.r[5].w[0] >> 24);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 27);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00306D84; } }
L_00306CF4:
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    set32(c.r[5], c.r[5].w[0] >> 28);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00306D84; } }
L_00306D20:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    set32(c.r[3], c.r[3].w[0] >> 3);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00306D84; } }
L_00306D40:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 112ull;
    set32(c.r[3], c.r[3].w[0] >> 4);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    set32(c.r[3], c.r[3].w[0] >> 7);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00306D84; } }
L_00306D64:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1792ull;
    set32(c.r[3], c.r[3].w[0] >> 8);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    set32(c.r[3], c.r[3].w[0] >> 11);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 8;
L_00306D84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00306D90:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00307010; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 23008u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00304000u < 16384u) { entry = entries_0081[(t - 0x00304000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00306DB8:
    set32(c.r[3], c.r[7].w[0] << 31);
    set32(c.r[5], c.r[6].w[0] << 28);
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x8FFF0000u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 33;
    c.r[5].d[0] = c.r[5].d[0] >> 33;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00307010; } }
L_00306DEC:
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[7], 0u - 8u);
    set32(c.r[5], 0u - 9u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00307010; } }
L_00306E18:
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[7].w[0] << 7);
    set32(c.r[7], 0u - 113u);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], 0u - 129u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00307010; } }
L_00306E48:
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[7].w[0] << 11);
    set32(c.r[7], 0u - 1793u);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[5], 0u - 2049u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00307010; } }
L_00306E78:
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[7].w[0] << 15);
    set32(c.r[7], 0u - 28673u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[6], c.r[6].w[0] << 12);
    c.r[5].d[0] = c.r[5].d[0] | 32767ull;
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00307010; } }
L_00306EAC:
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[7].w[0] << 19);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFF80000u);
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[7].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00307010; } }
L_00306EE4:
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[7].w[0] << 23);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF8F0000u);
    set32(c.r[6], c.r[6].w[0] << 20);
    c.r[7].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF7F0000u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00307010; } }
L_00306F1C:
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[7].w[0] << 27);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xF8FF0000u);
    set32(c.r[6], c.r[6].w[0] << 24);
    c.r[7].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00307010; } }
L_00306F54:
    set32(c.r[3], c.r[7].w[0] << 31);
    set32(c.r[5], c.r[6].w[0] << 28);
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x8FFF0000u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 33;
    c.r[5].d[0] = c.r[5].d[0] >> 33;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00307010; } }
L_00306F88:
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[7], 0u - 8u);
    set32(c.r[5], 0u - 9u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00307010; } }
L_00306FB4:
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[7].w[0] << 7);
    set32(c.r[7], 0u - 113u);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], 0u - 129u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00307010; } }
L_00306FE4:
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[7].w[0] << 11);
    set32(c.r[7], 0u - 1793u);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[5], 0u - 2049u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 11;
L_00307010:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00307020:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 21072u);  c.pc = t; return; }
L_00307030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030708C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 16528u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00307070; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13520u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307070u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006F(c, 208u, depth + 1u); else { c.pc = 0x002BDBC0u; return; } if (c.pc != 0x00307070u) [[unlikely]] return; }
L_00307070:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00307090; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030708Cu); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0030708Cu) [[unlikely]] return; }
L_0030708C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00307090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003070B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 7u);  c.pc = t; return; }
L_003070C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27536u)));
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0030713C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00307118; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003070E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003070E8u) [[unlikely]] return; }
L_003070E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003070F8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003070F8u) [[unlikely]] return; }
L_003070F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00307114; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307114u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307114u) [[unlikely]] return; }
L_00307114:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00307118:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27536u), 0u);  if (t) { goto L_00307138; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307128u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00307128u) [[unlikely]] return; }
L_00307128:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307138u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00307138u) [[unlikely]] return; }
L_00307138:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0030713C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00307150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 40u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030716Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0030716Cu) [[unlikely]] return; }
L_0030716C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003071E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030717Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x0030717Cu) [[unlikely]] return; }
L_0030717C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 16528u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003071A4u); st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 546u, depth + 1u); else { c.pc = 0x00307310u; return; } if (c.pc != 0x003071A4u) [[unlikely]] return; }
L_003071A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003071B0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0081(c, 545u, depth + 1u); else { c.pc = 0x003072E0u; return; } if (c.pc != 0x003071B0u) [[unlikely]] return; }
L_003071B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003071BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0081(c, 544u, depth + 1u); else { c.pc = 0x003072C0u; return; } if (c.pc != 0x003071BCu) [[unlikely]] return; }
L_003071BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003071C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0081(c, 543u, depth + 1u); else { c.pc = 0x003072A0u; return; } if (c.pc != 0x003071C8u) [[unlikely]] return; }
L_003071C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003071D4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0081(c, 542u, depth + 1u); else { c.pc = 0x00307280u; return; } if (c.pc != 0x003071D4u) [[unlikely]] return; }
L_003071D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003071E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0081(c, 541u, depth + 1u); else { c.pc = 0x00307260u; return; } if (c.pc != 0x003071E0u) [[unlikely]] return; }
L_003071E0:
    set32(c.r[17], ld32((c.r[28].w[0] - 27536u)));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00307250; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[28].w[0] - 27536u), c.r[16].w[0]);  goto L_0030722C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003071FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003071FCu) [[unlikely]] return; }
L_003071FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030720Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030720Cu) [[unlikely]] return; }
L_0030720C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00307228; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307228u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307228u) [[unlikely]] return; }
L_00307228:
    st32((c.r[28].w[0] - 27536u), c.r[16].w[0]);
    c.budget -= 1;
L_0030722C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0030724C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030723Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030723Cu) [[unlikely]] return; }
L_0030723C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030724Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030724Cu) [[unlikely]] return; }
L_0030724C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00307250:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00307260:
    c.r[6].d[0] = ld16((c.r[4].w[0] + 28u));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[5], 0u - 3073u);
    set32(c.r[3], c.r[3].w[0] << 10);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00307280:
    c.r[6].d[0] = ld16((c.r[4].w[0] + 28u));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[5], 0u - 897u);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003072A0:
    c.r[6].d[0] = ld16((c.r[4].w[0] + 28u));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[5], 0u - 113u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003072C0:
    c.r[6].d[0] = ld16((c.r[4].w[0] + 28u));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[5], 0u - 15u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003072E0:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[6].d[0] = ld16((c.r[4].w[0] + 28u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], c.r[3].w[0] << 12);
    c.r[5].d[0] = c.r[5].d[0] | 4095ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00307310:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[4].w[0] + 28u));  goto L_00307328; }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00307330; } }
L_00307328:
    c.r[3].d[0] = c.r[3].d[0] & 65534ull;
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00307330:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00307340:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030735Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 92u, depth + 1u); else { c.pc = 0x002C8A80u; return; } if (c.pc != 0x0030735Cu) [[unlikely]] return; }
L_0030735C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307368u); set32(c.r[4], ld32((c.r[2].w[0] - 21072u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00307368u) [[unlikely]] return; }
L_00307368:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030737Cu); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0030737Cu) [[unlikely]] return; }
L_0030737C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 20992u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307394u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x00307394u) [[unlikely]] return; }
L_00307394:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003073A8u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x003073A8u) [[unlikely]] return; }
L_003073A8:
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003073B8u); set32(c.r[4], c.r[4].w[0] - 20984u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x003073B8u) [[unlikely]] return; }
L_003073B8:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003073CCu); set32(c.r[6], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x003073CCu) [[unlikely]] return; }
L_003073CC:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003073DCu); set32(c.r[4], c.r[4].w[0] - 20976u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x003073DCu) [[unlikely]] return; }
L_003073DC:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003073F0u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x003073F0u) [[unlikely]] return; }
L_003073F0:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 20967u);
    c.r[2].d[0] = c.r[2].d[0] & 61440ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030740Cu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0081(c, 591u, depth + 1u); else { c.pc = 0x00307770u; return; } if (c.pc != 0x0030740Cu) [[unlikely]] return; }
L_0030740C:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307420u); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00307420u) [[unlikely]] return; }
L_00307420:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 20954u);
    c.r[2].d[0] = c.r[2].d[0] & 14ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030743Cu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0081(c, 575u, depth + 1u); else { c.pc = 0x00307610u; return; } if (c.pc != 0x0030743Cu) [[unlikely]] return; }
L_0030743C:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307450u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00307450u) [[unlikely]] return; }
L_00307450:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 20937u);
    c.r[2].d[0] = c.r[2].d[0] & 112ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030746Cu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0081(c, 575u, depth + 1u); else { c.pc = 0x00307610u; return; } if (c.pc != 0x0030746Cu) [[unlikely]] return; }
L_0030746C:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307480u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00307480u) [[unlikely]] return; }
L_00307480:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 20919u);
    c.r[2].d[0] = c.r[2].d[0] & 896ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030749Cu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0081(c, 575u, depth + 1u); else { c.pc = 0x00307610u; return; } if (c.pc != 0x0030749Cu) [[unlikely]] return; }
L_0030749C:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003074B0u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x003074B0u) [[unlikely]] return; }
L_003074B0:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 20902u);
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003074CCu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0081(c, 567u, depth + 1u); else { c.pc = 0x00307500u; return; } if (c.pc != 0x003074CCu) [[unlikely]] return; }
L_003074CC:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003074E0u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x003074E0u) [[unlikely]] return; }
L_003074E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00307500:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307524u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00307524u) [[unlikely]] return; }
L_00307524:
    set32(c.r[17], c.r[2].w[0] + 22u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307534u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00307534u) [[unlikely]] return; }
L_00307534:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_003075C0; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_003075A4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_00307588; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_0030756C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003075DC; } }
L_0030756C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307580u); set32(c.r[6], c.r[6].w[0] - 20892u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00307580u) [[unlikely]] return; }
L_00307580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003075F4; } }
L_00307588:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030759Cu); set32(c.r[6], c.r[6].w[0] - 20870u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x0030759Cu) [[unlikely]] return; }
L_0030759C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003075F0; } }
L_003075A4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003075B8u); set32(c.r[6], c.r[6].w[0] - 20856u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003075B8u) [[unlikely]] return; }
L_003075B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003075F0; } }
L_003075C0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003075D4u); set32(c.r[6], c.r[6].w[0] - 20843u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003075D4u) [[unlikely]] return; }
L_003075D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003075F0; } }
L_003075DC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003075F0u); set32(c.r[6], c.r[6].w[0] - 20828u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003075F0u) [[unlikely]] return; }
L_003075F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003075F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00307610:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307634u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00307634u) [[unlikely]] return; }
L_00307634:
    set32(c.r[17], c.r[2].w[0] + 22u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307644u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00307644u) [[unlikely]] return; }
L_00307644:
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0030772C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 21056u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00304000u < 16384u) { entry = entries_0081[(t - 0x00304000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030766C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307684u); set32(c.r[6], c.r[6].w[0] - 20812u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00307684u) [[unlikely]] return; }
L_00307684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00307748; } }
L_0030768C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003076A4u); set32(c.r[6], c.r[6].w[0] - 20795u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003076A4u) [[unlikely]] return; }
L_003076A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00307744; } }
L_003076AC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003076C4u); set32(c.r[6], c.r[6].w[0] - 20778u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003076C4u) [[unlikely]] return; }
L_003076C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00307744; } }
L_003076CC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003076E4u); set32(c.r[6], c.r[6].w[0] - 20758u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003076E4u) [[unlikely]] return; }
L_003076E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00307744; } }
L_003076EC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307704u); set32(c.r[6], c.r[6].w[0] - 20736u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00307704u) [[unlikely]] return; }
L_00307704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00307744; } }
L_0030770C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307724u); set32(c.r[6], c.r[6].w[0] - 20714u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00307724u) [[unlikely]] return; }
L_00307724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00307744; } }
L_0030772C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307744u); set32(c.r[6], c.r[6].w[0] - 20828u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00307744u) [[unlikely]] return; }
L_00307744:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00307748:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00307770:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307794u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00307794u) [[unlikely]] return; }
L_00307794:
    set32(c.r[17], c.r[2].w[0] + 22u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003077A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x003077A4u) [[unlikely]] return; }
L_003077A4:
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003078CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 21024u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00304000u < 16384u) { entry = entries_0081[(t - 0x00304000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003077CC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003077E4u); set32(c.r[6], c.r[6].w[0] - 20695u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003077E4u) [[unlikely]] return; }
L_003077E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003078E8; } }
L_003077EC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307804u); set32(c.r[6], c.r[6].w[0] - 20679u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00307804u) [[unlikely]] return; }
L_00307804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003078E4; } }
L_0030780C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307824u); set32(c.r[6], c.r[6].w[0] - 20664u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00307824u) [[unlikely]] return; }
L_00307824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003078E4; } }
L_0030782C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307844u); set32(c.r[6], c.r[6].w[0] - 20648u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00307844u) [[unlikely]] return; }
L_00307844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003078E4; } }
L_0030784C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307864u); set32(c.r[6], c.r[6].w[0] - 20628u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00307864u) [[unlikely]] return; }
L_00307864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003078E4; } }
L_0030786C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307884u); set32(c.r[6], c.r[6].w[0] - 20610u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00307884u) [[unlikely]] return; }
L_00307884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003078E4; } }
L_0030788C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003078A4u); set32(c.r[6], c.r[6].w[0] - 20591u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003078A4u) [[unlikely]] return; }
L_003078A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003078E4; } }
L_003078AC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003078C4u); set32(c.r[6], c.r[6].w[0] - 20568u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003078C4u) [[unlikely]] return; }
L_003078C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003078E4; } }
L_003078CC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003078E4u); set32(c.r[6], c.r[6].w[0] - 20828u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003078E4u) [[unlikely]] return; }
L_003078E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003078E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00307910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030792Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 96u, depth + 1u); else { c.pc = 0x002C8AD0u; return; } if (c.pc != 0x0030792Cu) [[unlikely]] return; }
L_0030792C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));  goto L_0030793C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030796C; } }
L_0030793C:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0030796C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00307968; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0030796C; }
L_00307968:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030796C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00307980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030799Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 97u, depth + 1u); else { c.pc = 0x002C8AE0u; return; } if (c.pc != 0x0030799Cu) [[unlikely]] return; }
L_0030799C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003079A8u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x003079A8u) [[unlikely]] return; }
L_003079A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003079B4u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x003079B4u) [[unlikely]] return; }
L_003079B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003079C0u); set32(c.r[5], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x003079C0u) [[unlikely]] return; }
L_003079C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003079E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8AF0u | kUnwind; return; } [[clang::musttail]] return unit_0072(c, 98u, depth); }
L_003079F0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8B00u | kUnwind; return; } [[clang::musttail]] return unit_0072(c, 99u, depth); }
L_00307A00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307A1Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 100u, depth + 1u); else { c.pc = 0x002C8B10u; return; } if (c.pc != 0x00307A1Cu) [[unlikely]] return; }
L_00307A1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x14010000u);
    c.r[1].d[0] = c.r[1].d[0] | 2ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00307B4C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307A40u); set32(c.r[5], c.r[29].w[0] + 63u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x00307A40u) [[unlikely]] return; }
L_00307A40:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 63u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 28u));  goto L_00307A5C; }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00307A64; } }
L_00307A5C:
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00307A64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307A70u); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0081(c, 654u, depth + 1u); else { c.pc = 0x00307D20u; return; } if (c.pc != 0x00307A70u) [[unlikely]] return; }
L_00307A70:
    c.r[7].d[0] = ld16((c.r[29].w[0] + 56u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[2].d[0] | 4095ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[7].w[0] << 12);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307A9Cu); st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x00307A9Cu) [[unlikely]] return; }
L_00307A9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307AA8u); set32(c.r[5], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x00307AA8u) [[unlikely]] return; }
L_00307AA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307AB4u); set32(c.r[5], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_0081(c, 653u, depth + 1u); else { c.pc = 0x00307D10u; return; } if (c.pc != 0x00307AB4u) [[unlikely]] return; }
L_00307AB4:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 52u));
    set32(c.r[3], 0u - 15u);
    c.r[6].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 52u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307ADCu); st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 653u, depth + 1u); else { c.pc = 0x00307D10u; return; } if (c.pc != 0x00307ADCu) [[unlikely]] return; }
L_00307ADC:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 52u));
    set32(c.r[3], 0u - 113u);
    c.r[6].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 52u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307B04u); st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 653u, depth + 1u); else { c.pc = 0x00307D10u; return; } if (c.pc != 0x00307B04u) [[unlikely]] return; }
L_00307B04:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 52u));
    set32(c.r[3], 0u - 897u);
    c.r[6].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] << 7);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307B2Cu); st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 652u, depth + 1u); else { c.pc = 0x00307D00u; return; } if (c.pc != 0x00307B2Cu) [[unlikely]] return; }
L_00307B2C:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 48u));
    set32(c.r[4], 0u - 3073u);
    c.r[5].d[0] = ld16((c.r[17].w[0] + 28u));
    set32(c.r[3], c.r[3].w[0] << 10);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00307B6C; } }
L_00307B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307B54u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x00307B54u) [[unlikely]] return; }
L_00307B54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307B60u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x00307B60u) [[unlikely]] return; }
L_00307B60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307B6Cu); set32(c.r[5], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x00307B6Cu) [[unlikely]] return; }
L_00307B6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00307B80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 40u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307B98u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00307B98u) [[unlikely]] return; }
L_00307B98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00307C0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307BA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x00307BA8u) [[unlikely]] return; }
L_00307BA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 16528u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307BD0u); st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 546u, depth + 1u); else { c.pc = 0x00307310u; return; } if (c.pc != 0x00307BD0u) [[unlikely]] return; }
L_00307BD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307BDCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0081(c, 545u, depth + 1u); else { c.pc = 0x003072E0u; return; } if (c.pc != 0x00307BDCu) [[unlikely]] return; }
L_00307BDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307BE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0081(c, 544u, depth + 1u); else { c.pc = 0x003072C0u; return; } if (c.pc != 0x00307BE8u) [[unlikely]] return; }
L_00307BE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307BF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0081(c, 543u, depth + 1u); else { c.pc = 0x003072A0u; return; } if (c.pc != 0x00307BF4u) [[unlikely]] return; }
L_00307BF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307C00u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0081(c, 542u, depth + 1u); else { c.pc = 0x00307280u; return; } if (c.pc != 0x00307C00u) [[unlikely]] return; }
L_00307C00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307C0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0081(c, 541u, depth + 1u); else { c.pc = 0x00307260u; return; } if (c.pc != 0x00307C0Cu) [[unlikely]] return; }
L_00307C0C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00307C20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 40u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307C48u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00307C48u) [[unlikely]] return; }
L_00307C48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00307CBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307C58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x00307C58u) [[unlikely]] return; }
L_00307C58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 16528u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307C80u); st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 546u, depth + 1u); else { c.pc = 0x00307310u; return; } if (c.pc != 0x00307C80u) [[unlikely]] return; }
L_00307C80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307C8Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0081(c, 545u, depth + 1u); else { c.pc = 0x003072E0u; return; } if (c.pc != 0x00307C8Cu) [[unlikely]] return; }
L_00307C8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307C98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0081(c, 544u, depth + 1u); else { c.pc = 0x003072C0u; return; } if (c.pc != 0x00307C98u) [[unlikely]] return; }
L_00307C98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307CA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0081(c, 543u, depth + 1u); else { c.pc = 0x003072A0u; return; } if (c.pc != 0x00307CA4u) [[unlikely]] return; }
L_00307CA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307CB0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0081(c, 542u, depth + 1u); else { c.pc = 0x00307280u; return; } if (c.pc != 0x00307CB0u) [[unlikely]] return; }
L_00307CB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307CBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0081(c, 541u, depth + 1u); else { c.pc = 0x00307260u; return; } if (c.pc != 0x00307CBCu) [[unlikely]] return; }
L_00307CBC:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307CCCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 101u, depth + 1u); else { c.pc = 0x002C8B20u; return; } if (c.pc != 0x00307CCCu) [[unlikely]] return; }
L_00307CCC:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00307D00:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  goto L_00307DF0; }
L_00307D10:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  goto L_00307D90; }
L_00307D20:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  goto L_00307D30; }
L_00307D30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307D64u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307D64u) [[unlikely]] return; }
L_00307D64:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00307D90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307DC4u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307DC4u) [[unlikely]] return; }
L_00307DC4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00307DF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307E24u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307E24u) [[unlikely]] return; }
L_00307E24:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00307E50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00307ECC; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_00307EB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307E84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00307E84u) [[unlikely]] return; }
L_00307E84:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307E94u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00307E94u) [[unlikely]] return; }
L_00307E94:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00307EB0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307EB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307EB0u) [[unlikely]] return; }
L_00307EB0:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_00307EB4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00307ED0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307ECCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00307ECCu) [[unlikely]] return; }
L_00307ECC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00307ED0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00307EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 448u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00307F14; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307F14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307F14u) [[unlikely]] return; }
L_00307F14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00307F20:
    set32(c.r[4], ld32((c.r[4].w[0] + 448u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00304000u < 16384u) { entry = entries_0081[(t - 0x00304000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00307F40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00307F70; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307F68u); set32(c.r[5], c.r[5].w[0] - 20496u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00307F68u) [[unlikely]] return; }
L_00307F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00307FC0; } }
L_00307F70:
    c.budget -= 2;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[7], 0u - 1u);  goto L_00307FB0; }
    set32(c.r[5], ld32((c.r[4].w[0] + 380u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00307FA0; } }
L_00307F84:
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00307FA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 28u), c.r[7].w[0]);  if (t) { goto L_00307FB4; } }
L_00307FA0:
    c.r[2].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 372u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00307F84u | kUnwind; return; } goto L_00307F84; }
    set32(c.r[7], 0u - 1u);
    c.budget -= 1;
L_00307FB0:
    st32((c.r[29].w[0] + 28u), c.r[7].w[0]);
    c.budget -= 1;
L_00307FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307FBCu); set32(c.r[5], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00307FBCu) [[unlikely]] return; }
L_00307FBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00307FC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00307FD0:
    set32(c.r[29], c.r[29].w[0] - 1120u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307FF4u); set32(c.r[5], c.r[29].w[0] + 1116u);  if (depth < kMaxDepth) unit_0050(c, 288u, depth + 1u); else { c.pc = 0x00243100u; return; } if (c.pc != 0x00307FF4u) [[unlikely]] return; }
L_00307FF4:
    set32(c.r[6], ld32((c.r[29].w[0] + 1116u)));
    c.r[3].d[0] = c.r[6].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0082(c, 10u, depth); } }
    [[clang::musttail]] return unit_0082(c, 2u, depth);
}

}
