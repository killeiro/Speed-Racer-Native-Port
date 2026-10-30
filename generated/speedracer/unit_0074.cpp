#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0074[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0,
    0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0,
    0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0,
    0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73,
    0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 86, 0,
    87, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0,
    101, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0,
    0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0,
    132, 0, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 139, 0, 140, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 157,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0,
    0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 181,
    0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 187, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0,
    0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 212, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    230, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 237,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0,
    0, 0, 255, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 261,
    0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0,
    0, 0, 0, 0, 280, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0,
    0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 292, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    310, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 317,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0,
    0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 335, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 341,
    0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 347, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0,
    0, 0, 0, 0, 360, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0,
    0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 372, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0,
    384, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0,
    390, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 397,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0,
    0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0,
    0, 0, 415, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 421,
    0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 427, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433,
    0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0,
    0, 0, 0, 0, 440, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0,
    0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 452, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0,
    464, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0,
    470, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 476, 0, 477,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0,
    0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0,
    0, 0, 495, 0, 0, 496, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 501,
    0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 507, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513,
    514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 520, 0,
    0, 0, 0, 0, 521, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0,
    0, 527, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 532, 0, 533, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 536, 0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0,
    545, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0,
    551, 0, 0, 552, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 558,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 563, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0,
    0, 0, 570, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0,
    0, 0, 576, 0, 0, 577, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 582,
    0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 587, 0, 588, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594,
    0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0,
    0, 0, 0, 0, 601, 0, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0,
    0, 607, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 0, 612, 0, 613, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 619, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 622, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0,
    625, 0, 0, 0, 0, 0, 626, 0, 0, 627, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0,
    631, 0, 0, 632, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 636, 0, 0, 637, 0, 638,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 642, 0, 643, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 647, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0,
    0, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 652, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 655, 0, 0, 0,
    0, 0, 656, 0, 0, 657, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 662,
    0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 668, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 671, 0, 0, 672, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674,
    0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 676, 0, 0, 677, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 680, 0,
    0, 0, 0, 0, 681, 0, 0, 682, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0,
    0, 687, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 691, 0, 0, 692, 0, 693, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 696, 0, 0, 697, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 702, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0,
    705, 0, 0, 0, 0, 0, 706, 0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0,
    711, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 0, 717, 0, 718,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 721, 0, 0, 722, 0, 723, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 724, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 726, 0, 0, 727, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0,
    0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 0, 732, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0,
    0, 0, 736, 0, 0, 737, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 741, 0, 0, 742,
    0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 746, 0, 0, 747, 0, 748, 0, 0, 0, 0,
};

void unit_0074(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002D0000;
    case 2u: goto L_002D0008;
    case 3u: goto L_002D008C;
    case 4u: goto L_002D00C0;
    case 5u: goto L_002D00FC;
    case 6u: goto L_002D0120;
    case 7u: goto L_002D0160;
    case 8u: goto L_002D017C;
    case 9u: goto L_002D01A0;
    case 10u: goto L_002D01B0;
    case 11u: goto L_002D01C0;
    case 12u: goto L_002D01E8;
    case 13u: goto L_002D01F8;
    case 14u: goto L_002D0214;
    case 15u: goto L_002D0228;
    case 16u: goto L_002D0238;
    case 17u: goto L_002D0250;
    case 18u: goto L_002D026C;
    case 19u: goto L_002D027C;
    case 20u: goto L_002D02C0;
    case 21u: goto L_002D02D0;
    case 22u: goto L_002D02EC;
    case 23u: goto L_002D0300;
    case 24u: goto L_002D0310;
    case 25u: goto L_002D0330;
    case 26u: goto L_002D034C;
    case 27u: goto L_002D0358;
    case 28u: goto L_002D036C;
    case 29u: goto L_002D0384;
    case 30u: goto L_002D0398;
    case 31u: goto L_002D03B0;
    case 32u: goto L_002D03CC;
    case 33u: goto L_002D0410;
    case 34u: goto L_002D042C;
    case 35u: goto L_002D0438;
    case 36u: goto L_002D0450;
    case 37u: goto L_002D0460;
    case 38u: goto L_002D0470;
    case 39u: goto L_002D048C;
    case 40u: goto L_002D0498;
    case 41u: goto L_002D04B0;
    case 42u: goto L_002D04C8;
    case 43u: goto L_002D04D8;
    case 44u: goto L_002D0520;
    case 45u: goto L_002D0548;
    case 46u: goto L_002D0558;
    case 47u: goto L_002D0590;
    case 48u: goto L_002D05C0;
    case 49u: goto L_002D05F4;
    case 50u: goto L_002D0604;
    case 51u: goto L_002D0620;
    case 52u: goto L_002D063C;
    case 53u: goto L_002D0660;
    case 54u: goto L_002D0670;
    case 55u: goto L_002D0680;
    case 56u: goto L_002D06A8;
    case 57u: goto L_002D06B0;
    case 58u: goto L_002D06B8;
    case 59u: goto L_002D06C0;
    case 60u: goto L_002D06C8;
    case 61u: goto L_002D06D0;
    case 62u: goto L_002D06D8;
    case 63u: goto L_002D06E0;
    case 64u: goto L_002D06E8;
    case 65u: goto L_002D0700;
    case 66u: goto L_002D0728;
    case 67u: goto L_002D0734;
    case 68u: goto L_002D0740;
    case 69u: goto L_002D074C;
    case 70u: goto L_002D0758;
    case 71u: goto L_002D0764;
    case 72u: goto L_002D0770;
    case 73u: goto L_002D077C;
    case 74u: goto L_002D0788;
    case 75u: goto L_002D07A0;
    case 76u: goto L_002D07CC;
    case 77u: goto L_002D0800;
    case 78u: goto L_002D0804;
    case 79u: goto L_002D0814;
    case 80u: goto L_002D0838;
    case 81u: goto L_002D0848;
    case 82u: goto L_002D0868;
    case 83u: goto L_002D08B0;
    case 84u: goto L_002D08D8;
    case 85u: goto L_002D08F0;
    case 86u: goto L_002D08F8;
    case 87u: goto L_002D0900;
    case 88u: goto L_002D0908;
    case 89u: goto L_002D0910;
    case 90u: goto L_002D0918;
    case 91u: goto L_002D0930;
    case 92u: goto L_002D0938;
    case 93u: goto L_002D0940;
    case 94u: goto L_002D0948;
    case 95u: goto L_002D0950;
    case 96u: goto L_002D0958;
    case 97u: goto L_002D0960;
    case 98u: goto L_002D0968;
    case 99u: goto L_002D0970;
    case 100u: goto L_002D0978;
    case 101u: goto L_002D0980;
    case 102u: goto L_002D0988;
    case 103u: goto L_002D0990;
    case 104u: goto L_002D09A0;
    case 105u: goto L_002D09CC;
    case 106u: goto L_002D0A04;
    case 107u: goto L_002D0A14;
    case 108u: goto L_002D0A38;
    case 109u: goto L_002D0A48;
    case 110u: goto L_002D0A68;
    case 111u: goto L_002D0AB0;
    case 112u: goto L_002D0AF8;
    case 113u: goto L_002D0B08;
    case 114u: goto L_002D0B2C;
    case 115u: goto L_002D0B3C;
    case 116u: goto L_002D0B5C;
    case 117u: goto L_002D0B80;
    case 118u: goto L_002D0BBC;
    case 119u: goto L_002D0BE4;
    case 120u: goto L_002D0BF4;
    case 121u: goto L_002D0C14;
    case 122u: goto L_002D0C30;
    case 123u: goto L_002D0C78;
    case 124u: goto L_002D0C88;
    case 125u: goto L_002D0CAC;
    case 126u: goto L_002D0CBC;
    case 127u: goto L_002D0CDC;
    case 128u: goto L_002D0D00;
    case 129u: goto L_002D0D44;
    case 130u: goto L_002D0D6C;
    case 131u: goto L_002D0D78;
    case 132u: goto L_002D0D80;
    case 133u: goto L_002D0D90;
    case 134u: goto L_002D0D98;
    case 135u: goto L_002D0DA8;
    case 136u: goto L_002D0DB0;
    case 137u: goto L_002D0DBC;
    case 138u: goto L_002D0DCC;
    case 139u: goto L_002D0DD4;
    case 140u: goto L_002D0DDC;
    case 141u: goto L_002D0DE0;
    case 142u: goto L_002D0E20;
    case 143u: goto L_002D0E44;
    case 144u: goto L_002D0E64;
    case 145u: goto L_002D0E80;
    case 146u: goto L_002D0EDC;
    case 147u: goto L_002D0EEC;
    case 148u: goto L_002D0F0C;
    case 149u: goto L_002D0F28;
    case 150u: goto L_002D0F50;
    case 151u: goto L_002D0F70;
    case 152u: goto L_002D0F90;
    case 153u: goto L_002D0FBC;
    case 154u: goto L_002D0FD0;
    case 155u: goto L_002D0FE8;
    case 156u: goto L_002D0FF4;
    case 157u: goto L_002D0FFC;
    case 158u: goto L_002D1024;
    case 159u: goto L_002D1038;
    case 160u: goto L_002D1050;
    case 161u: goto L_002D105C;
    case 162u: goto L_002D1064;
    case 163u: goto L_002D108C;
    case 164u: goto L_002D10A0;
    case 165u: goto L_002D10B8;
    case 166u: goto L_002D10C4;
    case 167u: goto L_002D10CC;
    case 168u: goto L_002D10F4;
    case 169u: goto L_002D1108;
    case 170u: goto L_002D1120;
    case 171u: goto L_002D112C;
    case 172u: goto L_002D1134;
    case 173u: goto L_002D115C;
    case 174u: goto L_002D1170;
    case 175u: goto L_002D1188;
    case 176u: goto L_002D1194;
    case 177u: goto L_002D119C;
    case 178u: goto L_002D11C4;
    case 179u: goto L_002D11D8;
    case 180u: goto L_002D11F0;
    case 181u: goto L_002D11FC;
    case 182u: goto L_002D1204;
    case 183u: goto L_002D122C;
    case 184u: goto L_002D1240;
    case 185u: goto L_002D1258;
    case 186u: goto L_002D1264;
    case 187u: goto L_002D126C;
    case 188u: goto L_002D1294;
    case 189u: goto L_002D12A8;
    case 190u: goto L_002D12C0;
    case 191u: goto L_002D12CC;
    case 192u: goto L_002D12D4;
    case 193u: goto L_002D12FC;
    case 194u: goto L_002D1310;
    case 195u: goto L_002D1328;
    case 196u: goto L_002D1334;
    case 197u: goto L_002D133C;
    case 198u: goto L_002D1364;
    case 199u: goto L_002D1378;
    case 200u: goto L_002D1390;
    case 201u: goto L_002D139C;
    case 202u: goto L_002D13A4;
    case 203u: goto L_002D13CC;
    case 204u: goto L_002D13E0;
    case 205u: goto L_002D13F8;
    case 206u: goto L_002D1404;
    case 207u: goto L_002D140C;
    case 208u: goto L_002D1434;
    case 209u: goto L_002D1448;
    case 210u: goto L_002D1460;
    case 211u: goto L_002D146C;
    case 212u: goto L_002D1474;
    case 213u: goto L_002D149C;
    case 214u: goto L_002D14B0;
    case 215u: goto L_002D14C8;
    case 216u: goto L_002D14D4;
    case 217u: goto L_002D14DC;
    case 218u: goto L_002D1504;
    case 219u: goto L_002D1518;
    case 220u: goto L_002D1530;
    case 221u: goto L_002D153C;
    case 222u: goto L_002D1544;
    case 223u: goto L_002D156C;
    case 224u: goto L_002D1580;
    case 225u: goto L_002D1598;
    case 226u: goto L_002D15A4;
    case 227u: goto L_002D15AC;
    case 228u: goto L_002D15D4;
    case 229u: goto L_002D15E8;
    case 230u: goto L_002D1600;
    case 231u: goto L_002D160C;
    case 232u: goto L_002D1614;
    case 233u: goto L_002D163C;
    case 234u: goto L_002D1650;
    case 235u: goto L_002D1668;
    case 236u: goto L_002D1674;
    case 237u: goto L_002D167C;
    case 238u: goto L_002D16A4;
    case 239u: goto L_002D16B8;
    case 240u: goto L_002D16D0;
    case 241u: goto L_002D16DC;
    case 242u: goto L_002D16E4;
    case 243u: goto L_002D170C;
    case 244u: goto L_002D1720;
    case 245u: goto L_002D1738;
    case 246u: goto L_002D1744;
    case 247u: goto L_002D174C;
    case 248u: goto L_002D1774;
    case 249u: goto L_002D1788;
    case 250u: goto L_002D17A0;
    case 251u: goto L_002D17AC;
    case 252u: goto L_002D17B4;
    case 253u: goto L_002D17DC;
    case 254u: goto L_002D17F0;
    case 255u: goto L_002D1808;
    case 256u: goto L_002D1814;
    case 257u: goto L_002D181C;
    case 258u: goto L_002D1844;
    case 259u: goto L_002D1858;
    case 260u: goto L_002D1870;
    case 261u: goto L_002D187C;
    case 262u: goto L_002D1884;
    case 263u: goto L_002D18AC;
    case 264u: goto L_002D18C0;
    case 265u: goto L_002D18D8;
    case 266u: goto L_002D18E4;
    case 267u: goto L_002D18EC;
    case 268u: goto L_002D1914;
    case 269u: goto L_002D1928;
    case 270u: goto L_002D1940;
    case 271u: goto L_002D194C;
    case 272u: goto L_002D1954;
    case 273u: goto L_002D197C;
    case 274u: goto L_002D1990;
    case 275u: goto L_002D19A8;
    case 276u: goto L_002D19B4;
    case 277u: goto L_002D19BC;
    case 278u: goto L_002D19E4;
    case 279u: goto L_002D19F8;
    case 280u: goto L_002D1A10;
    case 281u: goto L_002D1A1C;
    case 282u: goto L_002D1A24;
    case 283u: goto L_002D1A4C;
    case 284u: goto L_002D1A60;
    case 285u: goto L_002D1A78;
    case 286u: goto L_002D1A84;
    case 287u: goto L_002D1A8C;
    case 288u: goto L_002D1AB4;
    case 289u: goto L_002D1AC8;
    case 290u: goto L_002D1AE0;
    case 291u: goto L_002D1AEC;
    case 292u: goto L_002D1AF4;
    case 293u: goto L_002D1B1C;
    case 294u: goto L_002D1B30;
    case 295u: goto L_002D1B48;
    case 296u: goto L_002D1B54;
    case 297u: goto L_002D1B5C;
    case 298u: goto L_002D1B84;
    case 299u: goto L_002D1B98;
    case 300u: goto L_002D1BB0;
    case 301u: goto L_002D1BBC;
    case 302u: goto L_002D1BC4;
    case 303u: goto L_002D1BEC;
    case 304u: goto L_002D1C00;
    case 305u: goto L_002D1C18;
    case 306u: goto L_002D1C24;
    case 307u: goto L_002D1C2C;
    case 308u: goto L_002D1C54;
    case 309u: goto L_002D1C68;
    case 310u: goto L_002D1C80;
    case 311u: goto L_002D1C8C;
    case 312u: goto L_002D1C94;
    case 313u: goto L_002D1CBC;
    case 314u: goto L_002D1CD0;
    case 315u: goto L_002D1CE8;
    case 316u: goto L_002D1CF4;
    case 317u: goto L_002D1CFC;
    case 318u: goto L_002D1D24;
    case 319u: goto L_002D1D38;
    case 320u: goto L_002D1D50;
    case 321u: goto L_002D1D5C;
    case 322u: goto L_002D1D64;
    case 323u: goto L_002D1D8C;
    case 324u: goto L_002D1DA0;
    case 325u: goto L_002D1DB8;
    case 326u: goto L_002D1DC4;
    case 327u: goto L_002D1DCC;
    case 328u: goto L_002D1DF4;
    case 329u: goto L_002D1E08;
    case 330u: goto L_002D1E20;
    case 331u: goto L_002D1E2C;
    case 332u: goto L_002D1E34;
    case 333u: goto L_002D1E5C;
    case 334u: goto L_002D1E70;
    case 335u: goto L_002D1E88;
    case 336u: goto L_002D1E94;
    case 337u: goto L_002D1E9C;
    case 338u: goto L_002D1EC4;
    case 339u: goto L_002D1ED8;
    case 340u: goto L_002D1EF0;
    case 341u: goto L_002D1EFC;
    case 342u: goto L_002D1F04;
    case 343u: goto L_002D1F2C;
    case 344u: goto L_002D1F40;
    case 345u: goto L_002D1F58;
    case 346u: goto L_002D1F64;
    case 347u: goto L_002D1F6C;
    case 348u: goto L_002D1F94;
    case 349u: goto L_002D1FA8;
    case 350u: goto L_002D1FC0;
    case 351u: goto L_002D1FCC;
    case 352u: goto L_002D1FD4;
    case 353u: goto L_002D1FFC;
    case 354u: goto L_002D2010;
    case 355u: goto L_002D2028;
    case 356u: goto L_002D2034;
    case 357u: goto L_002D203C;
    case 358u: goto L_002D2064;
    case 359u: goto L_002D2078;
    case 360u: goto L_002D2090;
    case 361u: goto L_002D209C;
    case 362u: goto L_002D20A4;
    case 363u: goto L_002D20CC;
    case 364u: goto L_002D20E0;
    case 365u: goto L_002D20F8;
    case 366u: goto L_002D2104;
    case 367u: goto L_002D210C;
    case 368u: goto L_002D2134;
    case 369u: goto L_002D2148;
    case 370u: goto L_002D2160;
    case 371u: goto L_002D216C;
    case 372u: goto L_002D2174;
    case 373u: goto L_002D219C;
    case 374u: goto L_002D21B0;
    case 375u: goto L_002D21C8;
    case 376u: goto L_002D21D4;
    case 377u: goto L_002D21DC;
    case 378u: goto L_002D2204;
    case 379u: goto L_002D2218;
    case 380u: goto L_002D2230;
    case 381u: goto L_002D223C;
    case 382u: goto L_002D2244;
    case 383u: goto L_002D226C;
    case 384u: goto L_002D2280;
    case 385u: goto L_002D2298;
    case 386u: goto L_002D22A4;
    case 387u: goto L_002D22AC;
    case 388u: goto L_002D22D4;
    case 389u: goto L_002D22E8;
    case 390u: goto L_002D2300;
    case 391u: goto L_002D230C;
    case 392u: goto L_002D2314;
    case 393u: goto L_002D233C;
    case 394u: goto L_002D2350;
    case 395u: goto L_002D2368;
    case 396u: goto L_002D2374;
    case 397u: goto L_002D237C;
    case 398u: goto L_002D23A4;
    case 399u: goto L_002D23B8;
    case 400u: goto L_002D23D0;
    case 401u: goto L_002D23DC;
    case 402u: goto L_002D23E4;
    case 403u: goto L_002D240C;
    case 404u: goto L_002D2420;
    case 405u: goto L_002D2438;
    case 406u: goto L_002D2444;
    case 407u: goto L_002D244C;
    case 408u: goto L_002D2474;
    case 409u: goto L_002D2488;
    case 410u: goto L_002D24A0;
    case 411u: goto L_002D24AC;
    case 412u: goto L_002D24B4;
    case 413u: goto L_002D24DC;
    case 414u: goto L_002D24F0;
    case 415u: goto L_002D2508;
    case 416u: goto L_002D2514;
    case 417u: goto L_002D251C;
    case 418u: goto L_002D2544;
    case 419u: goto L_002D2558;
    case 420u: goto L_002D2570;
    case 421u: goto L_002D257C;
    case 422u: goto L_002D2584;
    case 423u: goto L_002D25AC;
    case 424u: goto L_002D25C0;
    case 425u: goto L_002D25D8;
    case 426u: goto L_002D25E4;
    case 427u: goto L_002D25EC;
    case 428u: goto L_002D2614;
    case 429u: goto L_002D2628;
    case 430u: goto L_002D2640;
    case 431u: goto L_002D264C;
    case 432u: goto L_002D2654;
    case 433u: goto L_002D267C;
    case 434u: goto L_002D2690;
    case 435u: goto L_002D26A8;
    case 436u: goto L_002D26B4;
    case 437u: goto L_002D26BC;
    case 438u: goto L_002D26E4;
    case 439u: goto L_002D26F8;
    case 440u: goto L_002D2710;
    case 441u: goto L_002D271C;
    case 442u: goto L_002D2724;
    case 443u: goto L_002D274C;
    case 444u: goto L_002D2760;
    case 445u: goto L_002D2778;
    case 446u: goto L_002D2784;
    case 447u: goto L_002D278C;
    case 448u: goto L_002D27B4;
    case 449u: goto L_002D27C8;
    case 450u: goto L_002D27E0;
    case 451u: goto L_002D27EC;
    case 452u: goto L_002D27F4;
    case 453u: goto L_002D281C;
    case 454u: goto L_002D2830;
    case 455u: goto L_002D2848;
    case 456u: goto L_002D2854;
    case 457u: goto L_002D285C;
    case 458u: goto L_002D2884;
    case 459u: goto L_002D2898;
    case 460u: goto L_002D28B0;
    case 461u: goto L_002D28BC;
    case 462u: goto L_002D28C4;
    case 463u: goto L_002D28EC;
    case 464u: goto L_002D2900;
    case 465u: goto L_002D2918;
    case 466u: goto L_002D2924;
    case 467u: goto L_002D292C;
    case 468u: goto L_002D2954;
    case 469u: goto L_002D2968;
    case 470u: goto L_002D2980;
    case 471u: goto L_002D298C;
    case 472u: goto L_002D2994;
    case 473u: goto L_002D29BC;
    case 474u: goto L_002D29D0;
    case 475u: goto L_002D29E8;
    case 476u: goto L_002D29F4;
    case 477u: goto L_002D29FC;
    case 478u: goto L_002D2A24;
    case 479u: goto L_002D2A38;
    case 480u: goto L_002D2A50;
    case 481u: goto L_002D2A5C;
    case 482u: goto L_002D2A64;
    case 483u: goto L_002D2A8C;
    case 484u: goto L_002D2AA0;
    case 485u: goto L_002D2AB8;
    case 486u: goto L_002D2AC4;
    case 487u: goto L_002D2ACC;
    case 488u: goto L_002D2AF4;
    case 489u: goto L_002D2B08;
    case 490u: goto L_002D2B20;
    case 491u: goto L_002D2B2C;
    case 492u: goto L_002D2B34;
    case 493u: goto L_002D2B5C;
    case 494u: goto L_002D2B70;
    case 495u: goto L_002D2B88;
    case 496u: goto L_002D2B94;
    case 497u: goto L_002D2B9C;
    case 498u: goto L_002D2BC4;
    case 499u: goto L_002D2BD8;
    case 500u: goto L_002D2BF0;
    case 501u: goto L_002D2BFC;
    case 502u: goto L_002D2C04;
    case 503u: goto L_002D2C2C;
    case 504u: goto L_002D2C40;
    case 505u: goto L_002D2C58;
    case 506u: goto L_002D2C64;
    case 507u: goto L_002D2C6C;
    case 508u: goto L_002D2C94;
    case 509u: goto L_002D2CA8;
    case 510u: goto L_002D2CC0;
    case 511u: goto L_002D2CCC;
    case 512u: goto L_002D2CD4;
    case 513u: goto L_002D2CFC;
    case 514u: goto L_002D2D00;
    case 515u: goto L_002D2D10;
    case 516u: goto L_002D2D28;
    case 517u: goto L_002D2D34;
    case 518u: goto L_002D2D3C;
    case 519u: goto L_002D2D64;
    case 520u: goto L_002D2D78;
    case 521u: goto L_002D2D90;
    case 522u: goto L_002D2D9C;
    case 523u: goto L_002D2DA4;
    case 524u: goto L_002D2DCC;
    case 525u: goto L_002D2DE0;
    case 526u: goto L_002D2DF8;
    case 527u: goto L_002D2E04;
    case 528u: goto L_002D2E0C;
    case 529u: goto L_002D2E34;
    case 530u: goto L_002D2E48;
    case 531u: goto L_002D2E60;
    case 532u: goto L_002D2E6C;
    case 533u: goto L_002D2E74;
    case 534u: goto L_002D2E9C;
    case 535u: goto L_002D2EB0;
    case 536u: goto L_002D2EC8;
    case 537u: goto L_002D2ED4;
    case 538u: goto L_002D2EDC;
    case 539u: goto L_002D2F04;
    case 540u: goto L_002D2F18;
    case 541u: goto L_002D2F30;
    case 542u: goto L_002D2F3C;
    case 543u: goto L_002D2F44;
    case 544u: goto L_002D2F6C;
    case 545u: goto L_002D2F80;
    case 546u: goto L_002D2F98;
    case 547u: goto L_002D2FA4;
    case 548u: goto L_002D2FAC;
    case 549u: goto L_002D2FD4;
    case 550u: goto L_002D2FE8;
    case 551u: goto L_002D3000;
    case 552u: goto L_002D300C;
    case 553u: goto L_002D3014;
    case 554u: goto L_002D303C;
    case 555u: goto L_002D3050;
    case 556u: goto L_002D3068;
    case 557u: goto L_002D3074;
    case 558u: goto L_002D307C;
    case 559u: goto L_002D30A4;
    case 560u: goto L_002D30B8;
    case 561u: goto L_002D30D0;
    case 562u: goto L_002D30DC;
    case 563u: goto L_002D30E4;
    case 564u: goto L_002D310C;
    case 565u: goto L_002D3120;
    case 566u: goto L_002D3138;
    case 567u: goto L_002D3144;
    case 568u: goto L_002D314C;
    case 569u: goto L_002D3174;
    case 570u: goto L_002D3188;
    case 571u: goto L_002D31A0;
    case 572u: goto L_002D31AC;
    case 573u: goto L_002D31B4;
    case 574u: goto L_002D31DC;
    case 575u: goto L_002D31F0;
    case 576u: goto L_002D3208;
    case 577u: goto L_002D3214;
    case 578u: goto L_002D321C;
    case 579u: goto L_002D3244;
    case 580u: goto L_002D3258;
    case 581u: goto L_002D3270;
    case 582u: goto L_002D327C;
    case 583u: goto L_002D3284;
    case 584u: goto L_002D32AC;
    case 585u: goto L_002D32C0;
    case 586u: goto L_002D32D8;
    case 587u: goto L_002D32E4;
    case 588u: goto L_002D32EC;
    case 589u: goto L_002D3314;
    case 590u: goto L_002D3328;
    case 591u: goto L_002D3340;
    case 592u: goto L_002D334C;
    case 593u: goto L_002D3354;
    case 594u: goto L_002D337C;
    case 595u: goto L_002D3390;
    case 596u: goto L_002D33A8;
    case 597u: goto L_002D33B4;
    case 598u: goto L_002D33BC;
    case 599u: goto L_002D33E4;
    case 600u: goto L_002D33F8;
    case 601u: goto L_002D3410;
    case 602u: goto L_002D341C;
    case 603u: goto L_002D3424;
    case 604u: goto L_002D344C;
    case 605u: goto L_002D3460;
    case 606u: goto L_002D3478;
    case 607u: goto L_002D3484;
    case 608u: goto L_002D348C;
    case 609u: goto L_002D34B4;
    case 610u: goto L_002D34C8;
    case 611u: goto L_002D34E0;
    case 612u: goto L_002D34EC;
    case 613u: goto L_002D34F4;
    case 614u: goto L_002D351C;
    case 615u: goto L_002D3530;
    case 616u: goto L_002D3548;
    case 617u: goto L_002D3554;
    case 618u: goto L_002D355C;
    case 619u: goto L_002D3584;
    case 620u: goto L_002D3598;
    case 621u: goto L_002D35B0;
    case 622u: goto L_002D35BC;
    case 623u: goto L_002D35C4;
    case 624u: goto L_002D35EC;
    case 625u: goto L_002D3600;
    case 626u: goto L_002D3618;
    case 627u: goto L_002D3624;
    case 628u: goto L_002D362C;
    case 629u: goto L_002D3654;
    case 630u: goto L_002D3668;
    case 631u: goto L_002D3680;
    case 632u: goto L_002D368C;
    case 633u: goto L_002D3694;
    case 634u: goto L_002D36BC;
    case 635u: goto L_002D36D0;
    case 636u: goto L_002D36E8;
    case 637u: goto L_002D36F4;
    case 638u: goto L_002D36FC;
    case 639u: goto L_002D3724;
    case 640u: goto L_002D3738;
    case 641u: goto L_002D3750;
    case 642u: goto L_002D375C;
    case 643u: goto L_002D3764;
    case 644u: goto L_002D378C;
    case 645u: goto L_002D37A0;
    case 646u: goto L_002D37B8;
    case 647u: goto L_002D37C4;
    case 648u: goto L_002D37CC;
    case 649u: goto L_002D37F4;
    case 650u: goto L_002D3808;
    case 651u: goto L_002D3820;
    case 652u: goto L_002D382C;
    case 653u: goto L_002D3834;
    case 654u: goto L_002D385C;
    case 655u: goto L_002D3870;
    case 656u: goto L_002D3888;
    case 657u: goto L_002D3894;
    case 658u: goto L_002D389C;
    case 659u: goto L_002D38C4;
    case 660u: goto L_002D38D8;
    case 661u: goto L_002D38F0;
    case 662u: goto L_002D38FC;
    case 663u: goto L_002D3904;
    case 664u: goto L_002D392C;
    case 665u: goto L_002D3940;
    case 666u: goto L_002D3958;
    case 667u: goto L_002D3964;
    case 668u: goto L_002D396C;
    case 669u: goto L_002D3994;
    case 670u: goto L_002D39A8;
    case 671u: goto L_002D39C0;
    case 672u: goto L_002D39CC;
    case 673u: goto L_002D39D4;
    case 674u: goto L_002D39FC;
    case 675u: goto L_002D3A10;
    case 676u: goto L_002D3A28;
    case 677u: goto L_002D3A34;
    case 678u: goto L_002D3A3C;
    case 679u: goto L_002D3A64;
    case 680u: goto L_002D3A78;
    case 681u: goto L_002D3A90;
    case 682u: goto L_002D3A9C;
    case 683u: goto L_002D3AA4;
    case 684u: goto L_002D3ACC;
    case 685u: goto L_002D3AE0;
    case 686u: goto L_002D3AF8;
    case 687u: goto L_002D3B04;
    case 688u: goto L_002D3B0C;
    case 689u: goto L_002D3B34;
    case 690u: goto L_002D3B48;
    case 691u: goto L_002D3B60;
    case 692u: goto L_002D3B6C;
    case 693u: goto L_002D3B74;
    case 694u: goto L_002D3B9C;
    case 695u: goto L_002D3BB0;
    case 696u: goto L_002D3BC8;
    case 697u: goto L_002D3BD4;
    case 698u: goto L_002D3BDC;
    case 699u: goto L_002D3C04;
    case 700u: goto L_002D3C18;
    case 701u: goto L_002D3C30;
    case 702u: goto L_002D3C3C;
    case 703u: goto L_002D3C44;
    case 704u: goto L_002D3C6C;
    case 705u: goto L_002D3C80;
    case 706u: goto L_002D3C98;
    case 707u: goto L_002D3CA4;
    case 708u: goto L_002D3CAC;
    case 709u: goto L_002D3CD4;
    case 710u: goto L_002D3CE8;
    case 711u: goto L_002D3D00;
    case 712u: goto L_002D3D0C;
    case 713u: goto L_002D3D14;
    case 714u: goto L_002D3D3C;
    case 715u: goto L_002D3D50;
    case 716u: goto L_002D3D68;
    case 717u: goto L_002D3D74;
    case 718u: goto L_002D3D7C;
    case 719u: goto L_002D3DA4;
    case 720u: goto L_002D3DB8;
    case 721u: goto L_002D3DD0;
    case 722u: goto L_002D3DDC;
    case 723u: goto L_002D3DE4;
    case 724u: goto L_002D3E0C;
    case 725u: goto L_002D3E20;
    case 726u: goto L_002D3E38;
    case 727u: goto L_002D3E44;
    case 728u: goto L_002D3E4C;
    case 729u: goto L_002D3E74;
    case 730u: goto L_002D3E88;
    case 731u: goto L_002D3EA0;
    case 732u: goto L_002D3EAC;
    case 733u: goto L_002D3EB4;
    case 734u: goto L_002D3EDC;
    case 735u: goto L_002D3EF0;
    case 736u: goto L_002D3F08;
    case 737u: goto L_002D3F14;
    case 738u: goto L_002D3F1C;
    case 739u: goto L_002D3F44;
    case 740u: goto L_002D3F58;
    case 741u: goto L_002D3F70;
    case 742u: goto L_002D3F7C;
    case 743u: goto L_002D3F84;
    case 744u: goto L_002D3FAC;
    case 745u: goto L_002D3FC0;
    case 746u: goto L_002D3FD8;
    case 747u: goto L_002D3FE4;
    case 748u: goto L_002D3FEC;
    default: bad_entry(c, 0x002D0000u); return;
    }
L_002D0000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0008u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0071(c, 352u, depth + 1u); else { c.pc = 0x002C7D90u; return; } if (c.pc != 0x002D0008u) [[unlikely]] return; }
L_002D0008:
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(0u));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(0u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[9].d[0] = ld8((c.r[2].w[0] + 25104u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[11], c.r[11].w[0] + 25128u);
    set32(c.r[10], c.r[16].w[0] + 52u);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].d[0] = ld8((c.r[8].w[0] + 25105u));
    set32(c.r[9], 0u + 6u);
    st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[7].d[0] = ld8((c.r[7].w[0] + 25106u));
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 25108u)));
    st32((c.r[16].w[0] + 32u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 25112u)));
    st32((c.r[16].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 25116u)));
    st32((c.r[16].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 25120u)));
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 25124u)));
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 33;
L_002D008C:
    set32(c.r[3], ld32((c.r[11].w[0])));
    set32(c.r[9], c.r[9].w[0] - 1u);
    set32(c.r[2], ld32((c.r[11].w[0] + 4u)));
    st32((c.r[10].w[0]), c.r[3].w[0]);
    set32(c.r[11], c.r[11].w[0] + 8u);
    st32((c.r[10].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[9].sd[0] > 0; set32(c.r[10], c.r[10].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D008Cu | kUnwind; return; } goto L_002D008C; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D00C0:
    c.budget -= 2;
    {  goto L_002D00D0; }
L_002D00D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D00FCu); set32(c.r[8], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D00FCu) [[unlikely]] return; }
L_002D00FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D0120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D017C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 15008u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002D0160; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13520u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0160u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006F(c, 208u, depth + 1u); else { c.pc = 0x002BDBC0u; return; } if (c.pc != 0x002D0160u) [[unlikely]] return; }
L_002D0160:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002D0180; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D017Cu); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002D017Cu) [[unlikely]] return; }
L_002D017C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D0180:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D01A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 32192u);  c.pc = t; return; }
L_002D01B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 5u);  c.pc = t; return; }
L_002D01C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27592u)));
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002D023C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002D0218; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D01E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D01E8u) [[unlikely]] return; }
L_002D01E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D01F8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D01F8u) [[unlikely]] return; }
L_002D01F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D0214; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0214u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D0214u) [[unlikely]] return; }
L_002D0214:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D0218:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27592u), 0u);  if (t) { goto L_002D0238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0228u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D0228u) [[unlikely]] return; }
L_002D0228:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0238u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D0238u) [[unlikely]] return; }
L_002D0238:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002D023C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D0250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 32u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D026Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002D026Cu) [[unlikely]] return; }
L_002D026C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D02A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D027Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x002D027Cu) [[unlikely]] return; }
L_002D027C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] + 15008u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
L_002D02A4:
    set32(c.r[17], ld32((c.r[28].w[0] - 27592u)));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002D0314; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[28].w[0] - 27592u), c.r[16].w[0]);  goto L_002D02F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D02C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D02C0u) [[unlikely]] return; }
L_002D02C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D02D0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D02D0u) [[unlikely]] return; }
L_002D02D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D02EC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D02ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D02ECu) [[unlikely]] return; }
L_002D02EC:
    st32((c.r[28].w[0] - 27592u), c.r[16].w[0]);
    c.budget -= 1;
L_002D02F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D0310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0300u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D0300u) [[unlikely]] return; }
L_002D0300:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0310u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D0310u) [[unlikely]] return; }
L_002D0310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002D0314:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D0330:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D034Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 92u, depth + 1u); else { c.pc = 0x002C8A80u; return; } if (c.pc != 0x002D034Cu) [[unlikely]] return; }
L_002D034C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0358u); set32(c.r[4], ld32((c.r[2].w[0] + 32192u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002D0358u) [[unlikely]] return; }
L_002D0358:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D036Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002D036Cu) [[unlikely]] return; }
L_002D036C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 32208u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0384u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x002D0384u) [[unlikely]] return; }
L_002D0384:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0398u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002D0398u) [[unlikely]] return; }
L_002D0398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D03B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D03CCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 96u, depth + 1u); else { c.pc = 0x002C8AD0u; return; } if (c.pc != 0x002D03CCu) [[unlikely]] return; }
L_002D03CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));  goto L_002D03DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D03F8; } }
L_002D03DC:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
L_002D03F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D0410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D042Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 97u, depth + 1u); else { c.pc = 0x002C8AE0u; return; } if (c.pc != 0x002D042Cu) [[unlikely]] return; }
L_002D042C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0438u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002D0438u) [[unlikely]] return; }
L_002D0438:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D0450:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8AF0u | kUnwind; return; } [[clang::musttail]] return unit_0072(c, 98u, depth); }
L_002D0460:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8B00u | kUnwind; return; } [[clang::musttail]] return unit_0072(c, 99u, depth); }
L_002D0470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D048Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 100u, depth + 1u); else { c.pc = 0x002C8B10u; return; } if (c.pc != 0x002D048Cu) [[unlikely]] return; }
L_002D048C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0498u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002D0498u) [[unlikely]] return; }
L_002D0498:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D04B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D04C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002D04C8u) [[unlikely]] return; }
L_002D04C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D0500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D04D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x002D04D8u) [[unlikely]] return; }
L_002D04D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 15008u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
L_002D0500:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D0520:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0548u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002D0548u) [[unlikely]] return; }
L_002D0548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D0580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0558u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x002D0558u) [[unlikely]] return; }
L_002D0558:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 15008u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
L_002D0580:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0590u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 101u, depth + 1u); else { c.pc = 0x002C8B20u; return; } if (c.pc != 0x002D0590u) [[unlikely]] return; }
L_002D0590:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D05C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D063C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002D0624; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D05F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D05F4u) [[unlikely]] return; }
L_002D05F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0604u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D0604u) [[unlikely]] return; }
L_002D0604:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D0620; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0620u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D0620u) [[unlikely]] return; }
L_002D0620:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002D0624:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002D0640; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D063Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002D063Cu) [[unlikely]] return; }
L_002D063C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002D0640:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D0660:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  c.pc = t; return; }
L_002D0670:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_002D0680:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D06EC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 32304u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002D0000u < 16384u) { entry = entries_0074[(t - 0x002D0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D06A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D06EC; } }
L_002D06B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002D06EC; } }
L_002D06B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002D06EC; } }
L_002D06C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_002D06EC; } }
L_002D06C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_002D06EC; } }
L_002D06D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_002D06EC; } }
L_002D06D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_002D06EC; } }
L_002D06E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 64u);  if (t) { goto L_002D06EC; } }
L_002D06E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D06EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D0700:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D078C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 32352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002D0000u < 16384u) { entry = entries_0074[(t - 0x002D0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D0728:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 32400u);  if (t) { goto L_002D078C; } }
L_002D0734:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 32413u);  if (t) { goto L_002D078C; } }
L_002D0740:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 32424u);  if (t) { goto L_002D078C; } }
L_002D074C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 32441u);  if (t) { goto L_002D078C; } }
L_002D0758:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 32451u);  if (t) { goto L_002D078C; } }
L_002D0764:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 32466u);  if (t) { goto L_002D078C; } }
L_002D0770:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 32485u);  if (t) { goto L_002D078C; } }
L_002D077C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 32503u);  if (t) { goto L_002D078C; } }
L_002D0788:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D078C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D07A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 27576u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002D0878; } }
L_002D07CC:
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002D0878; }
    set32(c.r[17], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002D0888; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_002D0818; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0804u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D0804u) [[unlikely]] return; }
    goto L_002D0804;
L_002D0800:
    c.budget -= 1;
L_002D0804:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0814u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D0814u) [[unlikely]] return; }
L_002D0814:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002D0818:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0]), c.r[17].w[0]);  goto L_002D086C; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0838u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D0838u) [[unlikely]] return; }
L_002D0838:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0848u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D0848u) [[unlikely]] return; }
L_002D0848:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D0868; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0868u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D0868u) [[unlikely]] return; }
L_002D0868:
    st32((c.r[19].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_002D086C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D0888; } }
L_002D0878:
    c.r[2].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D07CCu | kUnwind; return; } goto L_002D07CC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D0888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D08B0:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(118ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D0994; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 32512u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002D0000u < 16384u) { entry = entries_0074[(t - 0x002D0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D08D8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 9u);  goto L_002D08E8; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_002D08E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D0994; } }
L_002D08F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_002D0994; } }
L_002D08F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_002D0994; } }
L_002D0900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_002D0994; } }
L_002D0908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_002D0994; } }
L_002D0910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_002D0994; } }
L_002D0918:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 9u);  goto L_002D0928; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_002D0928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D0994; } }
L_002D0930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_002D0994; } }
L_002D0938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_002D0994; } }
L_002D0940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_002D0994; } }
L_002D0948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_002D0994; } }
L_002D0950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_002D0994; } }
L_002D0958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_002D0994; } }
L_002D0960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002D0994; } }
L_002D0968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_002D0994; } }
L_002D0970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_002D0994; } }
L_002D0978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_002D0994; } }
L_002D0980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_002D0994; } }
L_002D0988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002D0994; } }
L_002D0990:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D0994:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D09A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 27584u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002D0A78; } }
L_002D09CC:
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002D0A78; }
    set32(c.r[17], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002D0A88; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_002D0A18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0A04u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D0A04u) [[unlikely]] return; }
L_002D0A04:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0A14u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D0A14u) [[unlikely]] return; }
L_002D0A14:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002D0A18:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0]), c.r[17].w[0]);  goto L_002D0A6C; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0A38u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D0A38u) [[unlikely]] return; }
L_002D0A38:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0A48u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D0A48u) [[unlikely]] return; }
L_002D0A48:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D0A68; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0A68u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D0A68u) [[unlikely]] return; }
L_002D0A68:
    st32((c.r[19].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_002D0A6C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D0A88; } }
L_002D0A78:
    c.r[2].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D09CCu | kUnwind; return; } goto L_002D09CC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D0A88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D0AB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D0B60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_002D0B0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0AF8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D0AF8u) [[unlikely]] return; }
L_002D0AF8:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0B08u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D0B08u) [[unlikely]] return; }
L_002D0B08:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_002D0B0C:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 4u), c.r[17].w[0]);  goto L_002D0B60; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0B2Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D0B2Cu) [[unlikely]] return; }
L_002D0B2C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0B3Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D0B3Cu) [[unlikely]] return; }
L_002D0B3C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D0B5C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0B5Cu); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D0B5Cu) [[unlikely]] return; }
L_002D0B5C:
    st32((c.r[19].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_002D0B60:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D0B80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D0C14; } }
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0BBCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D0BBCu) [[unlikely]] return; }
L_002D0BBC:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[16].d[0]) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_002D0C18; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0BE4u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D0BE4u) [[unlikely]] return; }
L_002D0BE4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0BF4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D0BF4u) [[unlikely]] return; }
L_002D0BF4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D0C14; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0C14u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D0C14u) [[unlikely]] return; }
L_002D0C14:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002D0C18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D0C30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[17], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D0CE0; } }
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_002D0C8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0C78u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D0C78u) [[unlikely]] return; }
L_002D0C78:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0C88u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D0C88u) [[unlikely]] return; }
L_002D0C88:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_002D0C8C:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 4u), c.r[17].w[0]);  goto L_002D0CE0; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0CACu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D0CACu) [[unlikely]] return; }
L_002D0CAC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0CBCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D0CBCu) [[unlikely]] return; }
L_002D0CBC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D0CDC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0CDCu); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D0CDCu) [[unlikely]] return; }
L_002D0CDC:
    st32((c.r[19].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_002D0CE0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D0D00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[9].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[13], 0u + 5u);
    set32(c.r[16], 0u + 16u);
    set32(c.r[25], 0u + 9u);
    set32(c.r[17], 0u + 7u);
    set32(c.r[24], 0u + 3u);
    set32(c.r[15], 0u + 12u);
    set32(c.r[14], 0u + 13u);
    set32(c.r[3], c.r[3].w[0] - 32544u);
    set32(c.r[12], c.r[12].w[0] + 15776u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 17;
L_002D0D44:
    c.r[1].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(30ll) ? 1ull : 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002D0DE0; } }
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[10], ld32((c.r[10].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[10].w[0];  c.pc = t; if (t - 0x002D0000u < 16384u) { entry = entries_0074[(t - 0x002D0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D0D6C:
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D0DE0; } }
L_002D0D78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D0DE0; } }
L_002D0D80:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[25].d[0] + 0ull;  if (t) { goto L_002D0DE0; } }
L_002D0D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D0DE0; } }
L_002D0D98:
    c.r[8].d[0] = c.r[24].d[0] + 0ull;
    c.r[7].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[14].d[0] + 0ull;  if (t) { goto L_002D0DE0; } }
L_002D0DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D0DE0; } }
L_002D0DB0:
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D0DE0; } }
L_002D0DBC:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[25].d[0] + 0ull;  if (t) { goto L_002D0DE0; } }
L_002D0DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[13].d[0] + 0ull;  if (t) { goto L_002D0DE0; } }
L_002D0DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D0DE0; } }
L_002D0DDC:
    c.r[6].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 1;
L_002D0DE0:
    set32(c.r[10], c.r[9].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[11], c.r[12].w[0] + c.r[10].w[0]);
    st32((c.r[11].w[0]), c.r[7].w[0]);
    c.r[10].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(30ll) ? 1ull : 0ull;
    st32((c.r[11].w[0] + 4u), c.r[8].w[0]);
    c.budget -= 10;
    { const bool t = c.r[10].d[0] != 0ull; st32((c.r[11].w[0] + 8u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D0D44u | kUnwind; return; } goto L_002D0D44; } }
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D0E20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[5], c.r[5].w[0] + 3712u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0E44u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002D0E44u) [[unlikely]] return; }
L_002D0E44:
    set32(c.r[4], ld32((c.r[28].w[0] - 27588u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 3712u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0E64u); st32((c.r[28].w[0] - 27580u), 0u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002D0E64u) [[unlikely]] return; }
L_002D0E64:
    st32((c.r[28].w[0] - 27588u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D0E80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002D0F28; } }
    set32(c.r[2], c.r[19].w[0] + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002D0F10; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D0F0C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0EDCu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D0EDCu) [[unlikely]] return; }
L_002D0EDC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0EECu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D0EECu) [[unlikely]] return; }
L_002D0EEC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D0F0C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0F0Cu); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D0F0Cu) [[unlikely]] return; }
L_002D0F0C:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002D0F10:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_002D0F2C; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0F28u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002D0F28u) [[unlikely]] return; }
L_002D0F28:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002D0F2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D0F50:
    set32(c.r[29], c.r[29].w[0] - 2048u);
    set32(c.r[2], 0u + 138u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1120u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0F70u); st32((c.r[28].w[0] - 27584u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002D0F70u) [[unlikely]] return; }
L_002D0F70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2944u);
    set32(c.r[6], c.r[6].w[0] + 3712u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0F90u); set32(c.r[8], 0u + 138u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002D0F90u) [[unlikely]] return; }
L_002D0F90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[28].w[0] - 27588u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 32399u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002D0FB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 2044u), c.r[2].w[0]);  if (t) { goto L_002D0FC0; } }
L_002D0FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0FBCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D0FBCu) [[unlikely]] return; }
L_002D0FBC:
    st32((c.r[29].w[0] + 2044u), c.r[2].w[0]);
    c.budget -= 1;
L_002D0FC0:
    set32(c.r[4], c.r[29].w[0] + 1368u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0FD0u); set32(c.r[6], c.r[29].w[0] + 2044u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D0FD0u) [[unlikely]] return; }
L_002D0FD0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1368u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0FE8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D0FE8u) [[unlikely]] return; }
L_002D0FE8:
    set32(c.r[4], c.r[29].w[0] + 1372u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0FF4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D0FF4u) [[unlikely]] return; }
L_002D0FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0FFCu); set32(c.r[4], c.r[29].w[0] + 2044u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D0FFCu) [[unlikely]] return; }
L_002D0FFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32391u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D101C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 2040u), c.r[2].w[0]);  if (t) { goto L_002D1028; } }
L_002D101C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1024u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1024u) [[unlikely]] return; }
L_002D1024:
    st32((c.r[29].w[0] + 2040u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1028:
    set32(c.r[4], c.r[29].w[0] + 1360u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1038u); set32(c.r[6], c.r[29].w[0] + 2040u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1038u) [[unlikely]] return; }
L_002D1038:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1360u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1050u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1050u) [[unlikely]] return; }
L_002D1050:
    set32(c.r[4], c.r[29].w[0] + 1364u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D105Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D105Cu) [[unlikely]] return; }
L_002D105C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1064u); set32(c.r[4], c.r[29].w[0] + 2040u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1064u) [[unlikely]] return; }
L_002D1064:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32386u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1084; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 2036u), c.r[2].w[0]);  if (t) { goto L_002D1090; } }
L_002D1084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D108Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D108Cu) [[unlikely]] return; }
L_002D108C:
    st32((c.r[29].w[0] + 2036u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1090:
    set32(c.r[4], c.r[29].w[0] + 1352u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D10A0u); set32(c.r[6], c.r[29].w[0] + 2036u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D10A0u) [[unlikely]] return; }
L_002D10A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1352u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D10B8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D10B8u) [[unlikely]] return; }
L_002D10B8:
    set32(c.r[4], c.r[29].w[0] + 1356u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D10C4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D10C4u) [[unlikely]] return; }
L_002D10C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D10CCu); set32(c.r[4], c.r[29].w[0] + 2036u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D10CCu) [[unlikely]] return; }
L_002D10CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32375u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D10EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 2032u), c.r[2].w[0]);  if (t) { goto L_002D10F8; } }
L_002D10EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D10F4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D10F4u) [[unlikely]] return; }
L_002D10F4:
    st32((c.r[29].w[0] + 2032u), c.r[2].w[0]);
    c.budget -= 1;
L_002D10F8:
    set32(c.r[4], c.r[29].w[0] + 1344u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1108u); set32(c.r[6], c.r[29].w[0] + 2032u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1108u) [[unlikely]] return; }
L_002D1108:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1344u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1120u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1120u) [[unlikely]] return; }
L_002D1120:
    set32(c.r[4], c.r[29].w[0] + 1348u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D112Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D112Cu) [[unlikely]] return; }
L_002D112C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1134u); set32(c.r[4], c.r[29].w[0] + 2032u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1134u) [[unlikely]] return; }
L_002D1134:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32367u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1154; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 2028u), c.r[2].w[0]);  if (t) { goto L_002D1160; } }
L_002D1154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D115Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D115Cu) [[unlikely]] return; }
L_002D115C:
    st32((c.r[29].w[0] + 2028u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1160:
    set32(c.r[4], c.r[29].w[0] + 1336u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1170u); set32(c.r[6], c.r[29].w[0] + 2028u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1170u) [[unlikely]] return; }
L_002D1170:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1336u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1188u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1188u) [[unlikely]] return; }
L_002D1188:
    set32(c.r[4], c.r[29].w[0] + 1340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1194u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1194u) [[unlikely]] return; }
L_002D1194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D119Cu); set32(c.r[4], c.r[29].w[0] + 2028u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D119Cu) [[unlikely]] return; }
L_002D119C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32353u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D11BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 2024u), c.r[2].w[0]);  if (t) { goto L_002D11C8; } }
L_002D11BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D11C4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D11C4u) [[unlikely]] return; }
L_002D11C4:
    st32((c.r[29].w[0] + 2024u), c.r[2].w[0]);
    c.budget -= 1;
L_002D11C8:
    set32(c.r[4], c.r[29].w[0] + 1328u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D11D8u); set32(c.r[6], c.r[29].w[0] + 2024u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D11D8u) [[unlikely]] return; }
L_002D11D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1328u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D11F0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D11F0u) [[unlikely]] return; }
L_002D11F0:
    set32(c.r[4], c.r[29].w[0] + 1332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D11FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D11FCu) [[unlikely]] return; }
L_002D11FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1204u); set32(c.r[4], c.r[29].w[0] + 2024u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1204u) [[unlikely]] return; }
L_002D1204:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32348u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1224; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 2020u), c.r[2].w[0]);  if (t) { goto L_002D1230; } }
L_002D1224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D122Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D122Cu) [[unlikely]] return; }
L_002D122C:
    st32((c.r[29].w[0] + 2020u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1230:
    set32(c.r[4], c.r[29].w[0] + 1320u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1240u); set32(c.r[6], c.r[29].w[0] + 2020u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1240u) [[unlikely]] return; }
L_002D1240:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1320u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1258u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1258u) [[unlikely]] return; }
L_002D1258:
    set32(c.r[4], c.r[29].w[0] + 1324u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1264u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1264u) [[unlikely]] return; }
L_002D1264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D126Cu); set32(c.r[4], c.r[29].w[0] + 2020u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D126Cu) [[unlikely]] return; }
L_002D126C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32340u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D128C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 2016u), c.r[2].w[0]);  if (t) { goto L_002D1298; } }
L_002D128C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1294u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1294u) [[unlikely]] return; }
L_002D1294:
    st32((c.r[29].w[0] + 2016u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1298:
    set32(c.r[4], c.r[29].w[0] + 1312u);
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D12A8u); set32(c.r[6], c.r[29].w[0] + 2016u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D12A8u) [[unlikely]] return; }
L_002D12A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1312u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D12C0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D12C0u) [[unlikely]] return; }
L_002D12C0:
    set32(c.r[4], c.r[29].w[0] + 1316u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D12CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D12CCu) [[unlikely]] return; }
L_002D12CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D12D4u); set32(c.r[4], c.r[29].w[0] + 2016u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D12D4u) [[unlikely]] return; }
L_002D12D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32334u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D12F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 2012u), c.r[2].w[0]);  if (t) { goto L_002D1300; } }
L_002D12F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D12FCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D12FCu) [[unlikely]] return; }
L_002D12FC:
    st32((c.r[29].w[0] + 2012u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1300:
    set32(c.r[4], c.r[29].w[0] + 1304u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1310u); set32(c.r[6], c.r[29].w[0] + 2012u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1310u) [[unlikely]] return; }
L_002D1310:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1304u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1328u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1328u) [[unlikely]] return; }
L_002D1328:
    set32(c.r[4], c.r[29].w[0] + 1308u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1334u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1334u) [[unlikely]] return; }
L_002D1334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D133Cu); set32(c.r[4], c.r[29].w[0] + 2012u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D133Cu) [[unlikely]] return; }
L_002D133C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32325u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D135C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 2008u), c.r[2].w[0]);  if (t) { goto L_002D1368; } }
L_002D135C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1364u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1364u) [[unlikely]] return; }
L_002D1364:
    st32((c.r[29].w[0] + 2008u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1368:
    set32(c.r[4], c.r[29].w[0] + 1296u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1378u); set32(c.r[6], c.r[29].w[0] + 2008u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1378u) [[unlikely]] return; }
L_002D1378:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1296u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1390u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1390u) [[unlikely]] return; }
L_002D1390:
    set32(c.r[4], c.r[29].w[0] + 1300u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D139Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D139Cu) [[unlikely]] return; }
L_002D139C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D13A4u); set32(c.r[4], c.r[29].w[0] + 2008u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D13A4u) [[unlikely]] return; }
L_002D13A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32315u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D13C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 2004u), c.r[2].w[0]);  if (t) { goto L_002D13D0; } }
L_002D13C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D13CCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D13CCu) [[unlikely]] return; }
L_002D13CC:
    st32((c.r[29].w[0] + 2004u), c.r[2].w[0]);
    c.budget -= 1;
L_002D13D0:
    set32(c.r[4], c.r[29].w[0] + 1288u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D13E0u); set32(c.r[6], c.r[29].w[0] + 2004u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D13E0u) [[unlikely]] return; }
L_002D13E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1288u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D13F8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D13F8u) [[unlikely]] return; }
L_002D13F8:
    set32(c.r[4], c.r[29].w[0] + 1292u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1404u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1404u) [[unlikely]] return; }
L_002D1404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D140Cu); set32(c.r[4], c.r[29].w[0] + 2004u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D140Cu) [[unlikely]] return; }
L_002D140C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32302u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D142C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 2000u), c.r[2].w[0]);  if (t) { goto L_002D1438; } }
L_002D142C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1434u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1434u) [[unlikely]] return; }
L_002D1434:
    st32((c.r[29].w[0] + 2000u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1438:
    set32(c.r[4], c.r[29].w[0] + 1280u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1448u); set32(c.r[6], c.r[29].w[0] + 2000u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1448u) [[unlikely]] return; }
L_002D1448:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1280u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1460u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1460u) [[unlikely]] return; }
L_002D1460:
    set32(c.r[4], c.r[29].w[0] + 1284u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D146Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D146Cu) [[unlikely]] return; }
L_002D146C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1474u); set32(c.r[4], c.r[29].w[0] + 2000u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1474u) [[unlikely]] return; }
L_002D1474:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32293u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1494; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1996u), c.r[2].w[0]);  if (t) { goto L_002D14A0; } }
L_002D1494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D149Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D149Cu) [[unlikely]] return; }
L_002D149C:
    st32((c.r[29].w[0] + 1996u), c.r[2].w[0]);
    c.budget -= 1;
L_002D14A0:
    set32(c.r[4], c.r[29].w[0] + 1272u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D14B0u); set32(c.r[6], c.r[29].w[0] + 1996u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D14B0u) [[unlikely]] return; }
L_002D14B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1272u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D14C8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D14C8u) [[unlikely]] return; }
L_002D14C8:
    set32(c.r[4], c.r[29].w[0] + 1276u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D14D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D14D4u) [[unlikely]] return; }
L_002D14D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D14DCu); set32(c.r[4], c.r[29].w[0] + 1996u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D14DCu) [[unlikely]] return; }
L_002D14DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32278u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D14FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1992u), c.r[2].w[0]);  if (t) { goto L_002D1508; } }
L_002D14FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1504u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1504u) [[unlikely]] return; }
L_002D1504:
    st32((c.r[29].w[0] + 1992u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1508:
    set32(c.r[4], c.r[29].w[0] + 1264u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1518u); set32(c.r[6], c.r[29].w[0] + 1992u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1518u) [[unlikely]] return; }
L_002D1518:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1264u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1530u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1530u) [[unlikely]] return; }
L_002D1530:
    set32(c.r[4], c.r[29].w[0] + 1268u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D153Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D153Cu) [[unlikely]] return; }
L_002D153C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1544u); set32(c.r[4], c.r[29].w[0] + 1992u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1544u) [[unlikely]] return; }
L_002D1544:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32266u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1564; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1988u), c.r[2].w[0]);  if (t) { goto L_002D1570; } }
L_002D1564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D156Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D156Cu) [[unlikely]] return; }
L_002D156C:
    st32((c.r[29].w[0] + 1988u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1570:
    set32(c.r[4], c.r[29].w[0] + 1256u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1580u); set32(c.r[6], c.r[29].w[0] + 1988u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1580u) [[unlikely]] return; }
L_002D1580:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1256u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1598u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1598u) [[unlikely]] return; }
L_002D1598:
    set32(c.r[4], c.r[29].w[0] + 1260u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D15A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D15A4u) [[unlikely]] return; }
L_002D15A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D15ACu); set32(c.r[4], c.r[29].w[0] + 1988u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D15ACu) [[unlikely]] return; }
L_002D15AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32248u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D15CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1984u), c.r[2].w[0]);  if (t) { goto L_002D15D8; } }
L_002D15CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D15D4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D15D4u) [[unlikely]] return; }
L_002D15D4:
    st32((c.r[29].w[0] + 1984u), c.r[2].w[0]);
    c.budget -= 1;
L_002D15D8:
    set32(c.r[4], c.r[29].w[0] + 1248u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D15E8u); set32(c.r[6], c.r[29].w[0] + 1984u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D15E8u) [[unlikely]] return; }
L_002D15E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1248u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1600u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1600u) [[unlikely]] return; }
L_002D1600:
    set32(c.r[4], c.r[29].w[0] + 1252u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D160Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D160Cu) [[unlikely]] return; }
L_002D160C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1614u); set32(c.r[4], c.r[29].w[0] + 1984u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1614u) [[unlikely]] return; }
L_002D1614:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32234u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1634; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1980u), c.r[2].w[0]);  if (t) { goto L_002D1640; } }
L_002D1634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D163Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D163Cu) [[unlikely]] return; }
L_002D163C:
    st32((c.r[29].w[0] + 1980u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1640:
    set32(c.r[4], c.r[29].w[0] + 1240u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1650u); set32(c.r[6], c.r[29].w[0] + 1980u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1650u) [[unlikely]] return; }
L_002D1650:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1240u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1668u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1668u) [[unlikely]] return; }
L_002D1668:
    set32(c.r[4], c.r[29].w[0] + 1244u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1674u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1674u) [[unlikely]] return; }
L_002D1674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D167Cu); set32(c.r[4], c.r[29].w[0] + 1980u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D167Cu) [[unlikely]] return; }
L_002D167C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32214u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D169C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1976u), c.r[2].w[0]);  if (t) { goto L_002D16A8; } }
L_002D169C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D16A4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D16A4u) [[unlikely]] return; }
L_002D16A4:
    st32((c.r[29].w[0] + 1976u), c.r[2].w[0]);
    c.budget -= 1;
L_002D16A8:
    set32(c.r[4], c.r[29].w[0] + 1232u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D16B8u); set32(c.r[6], c.r[29].w[0] + 1976u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D16B8u) [[unlikely]] return; }
L_002D16B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1232u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D16D0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D16D0u) [[unlikely]] return; }
L_002D16D0:
    set32(c.r[4], c.r[29].w[0] + 1236u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D16DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D16DCu) [[unlikely]] return; }
L_002D16DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D16E4u); set32(c.r[4], c.r[29].w[0] + 1976u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D16E4u) [[unlikely]] return; }
L_002D16E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32197u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1704; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1972u), c.r[2].w[0]);  if (t) { goto L_002D1710; } }
L_002D1704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D170Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D170Cu) [[unlikely]] return; }
L_002D170C:
    st32((c.r[29].w[0] + 1972u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1710:
    set32(c.r[4], c.r[29].w[0] + 1224u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1720u); set32(c.r[6], c.r[29].w[0] + 1972u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1720u) [[unlikely]] return; }
L_002D1720:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1224u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1738u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1738u) [[unlikely]] return; }
L_002D1738:
    set32(c.r[4], c.r[29].w[0] + 1228u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1744u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1744u) [[unlikely]] return; }
L_002D1744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D174Cu); set32(c.r[4], c.r[29].w[0] + 1972u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D174Cu) [[unlikely]] return; }
L_002D174C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32174u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D176C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1968u), c.r[2].w[0]);  if (t) { goto L_002D1778; } }
L_002D176C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1774u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1774u) [[unlikely]] return; }
L_002D1774:
    st32((c.r[29].w[0] + 1968u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1778:
    set32(c.r[4], c.r[29].w[0] + 1216u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1788u); set32(c.r[6], c.r[29].w[0] + 1968u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1788u) [[unlikely]] return; }
L_002D1788:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1216u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D17A0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D17A0u) [[unlikely]] return; }
L_002D17A0:
    set32(c.r[4], c.r[29].w[0] + 1220u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D17ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D17ACu) [[unlikely]] return; }
L_002D17AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D17B4u); set32(c.r[4], c.r[29].w[0] + 1968u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D17B4u) [[unlikely]] return; }
L_002D17B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32160u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D17D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1964u), c.r[2].w[0]);  if (t) { goto L_002D17E0; } }
L_002D17D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D17DCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D17DCu) [[unlikely]] return; }
L_002D17DC:
    st32((c.r[29].w[0] + 1964u), c.r[2].w[0]);
    c.budget -= 1;
L_002D17E0:
    set32(c.r[4], c.r[29].w[0] + 1208u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D17F0u); set32(c.r[6], c.r[29].w[0] + 1964u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D17F0u) [[unlikely]] return; }
L_002D17F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1208u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1808u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1808u) [[unlikely]] return; }
L_002D1808:
    set32(c.r[4], c.r[29].w[0] + 1212u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1814u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1814u) [[unlikely]] return; }
L_002D1814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D181Cu); set32(c.r[4], c.r[29].w[0] + 1964u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D181Cu) [[unlikely]] return; }
L_002D181C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32140u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D183C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1960u), c.r[2].w[0]);  if (t) { goto L_002D1848; } }
L_002D183C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1844u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1844u) [[unlikely]] return; }
L_002D1844:
    st32((c.r[29].w[0] + 1960u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1848:
    set32(c.r[4], c.r[29].w[0] + 1200u);
    set32(c.r[5], 0u + 14u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1858u); set32(c.r[6], c.r[29].w[0] + 1960u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1858u) [[unlikely]] return; }
L_002D1858:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1200u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1870u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1870u) [[unlikely]] return; }
L_002D1870:
    set32(c.r[4], c.r[29].w[0] + 1204u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D187Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D187Cu) [[unlikely]] return; }
L_002D187C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1884u); set32(c.r[4], c.r[29].w[0] + 1960u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1884u) [[unlikely]] return; }
L_002D1884:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32123u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D18A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1956u), c.r[2].w[0]);  if (t) { goto L_002D18B0; } }
L_002D18A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D18ACu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D18ACu) [[unlikely]] return; }
L_002D18AC:
    st32((c.r[29].w[0] + 1956u), c.r[2].w[0]);
    c.budget -= 1;
L_002D18B0:
    set32(c.r[4], c.r[29].w[0] + 1192u);
    set32(c.r[5], 0u + 14u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D18C0u); set32(c.r[6], c.r[29].w[0] + 1956u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D18C0u) [[unlikely]] return; }
L_002D18C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1192u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D18D8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D18D8u) [[unlikely]] return; }
L_002D18D8:
    set32(c.r[4], c.r[29].w[0] + 1196u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D18E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D18E4u) [[unlikely]] return; }
L_002D18E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D18ECu); set32(c.r[4], c.r[29].w[0] + 1956u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D18ECu) [[unlikely]] return; }
L_002D18EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32100u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D190C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1952u), c.r[2].w[0]);  if (t) { goto L_002D1918; } }
L_002D190C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1914u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1914u) [[unlikely]] return; }
L_002D1914:
    st32((c.r[29].w[0] + 1952u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1918:
    set32(c.r[4], c.r[29].w[0] + 1184u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1928u); set32(c.r[6], c.r[29].w[0] + 1952u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1928u) [[unlikely]] return; }
L_002D1928:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1184u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1940u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1940u) [[unlikely]] return; }
L_002D1940:
    set32(c.r[4], c.r[29].w[0] + 1188u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D194Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D194Cu) [[unlikely]] return; }
L_002D194C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1954u); set32(c.r[4], c.r[29].w[0] + 1952u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1954u) [[unlikely]] return; }
L_002D1954:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32086u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1974; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1948u), c.r[2].w[0]);  if (t) { goto L_002D1980; } }
L_002D1974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D197Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D197Cu) [[unlikely]] return; }
L_002D197C:
    st32((c.r[29].w[0] + 1948u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1980:
    set32(c.r[4], c.r[29].w[0] + 1176u);
    set32(c.r[5], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1990u); set32(c.r[6], c.r[29].w[0] + 1948u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1990u) [[unlikely]] return; }
L_002D1990:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1176u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D19A8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D19A8u) [[unlikely]] return; }
L_002D19A8:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D19B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D19B4u) [[unlikely]] return; }
L_002D19B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D19BCu); set32(c.r[4], c.r[29].w[0] + 1948u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D19BCu) [[unlikely]] return; }
L_002D19BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32069u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D19DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1944u), c.r[2].w[0]);  if (t) { goto L_002D19E8; } }
L_002D19DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D19E4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D19E4u) [[unlikely]] return; }
L_002D19E4:
    st32((c.r[29].w[0] + 1944u), c.r[2].w[0]);
    c.budget -= 1;
L_002D19E8:
    set32(c.r[4], c.r[29].w[0] + 1168u);
    set32(c.r[5], 0u + 17u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D19F8u); set32(c.r[6], c.r[29].w[0] + 1944u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D19F8u) [[unlikely]] return; }
L_002D19F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1168u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A10u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1A10u) [[unlikely]] return; }
L_002D1A10:
    set32(c.r[4], c.r[29].w[0] + 1172u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A1Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1A1Cu) [[unlikely]] return; }
L_002D1A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A24u); set32(c.r[4], c.r[29].w[0] + 1944u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1A24u) [[unlikely]] return; }
L_002D1A24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32054u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1A44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1940u), c.r[2].w[0]);  if (t) { goto L_002D1A50; } }
L_002D1A44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A4Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1A4Cu) [[unlikely]] return; }
L_002D1A4C:
    st32((c.r[29].w[0] + 1940u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1A50:
    set32(c.r[4], c.r[29].w[0] + 1160u);
    set32(c.r[5], 0u + 18u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A60u); set32(c.r[6], c.r[29].w[0] + 1940u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1A60u) [[unlikely]] return; }
L_002D1A60:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1160u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A78u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1A78u) [[unlikely]] return; }
L_002D1A78:
    set32(c.r[4], c.r[29].w[0] + 1164u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A84u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1A84u) [[unlikely]] return; }
L_002D1A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A8Cu); set32(c.r[4], c.r[29].w[0] + 1940u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1A8Cu) [[unlikely]] return; }
L_002D1A8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32036u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1AAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1936u), c.r[2].w[0]);  if (t) { goto L_002D1AB8; } }
L_002D1AAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1AB4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1AB4u) [[unlikely]] return; }
L_002D1AB4:
    st32((c.r[29].w[0] + 1936u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1AB8:
    set32(c.r[4], c.r[29].w[0] + 1152u);
    set32(c.r[5], 0u + 19u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1AC8u); set32(c.r[6], c.r[29].w[0] + 1936u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1AC8u) [[unlikely]] return; }
L_002D1AC8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1152u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1AE0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1AE0u) [[unlikely]] return; }
L_002D1AE0:
    set32(c.r[4], c.r[29].w[0] + 1156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1AECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1AECu) [[unlikely]] return; }
L_002D1AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1AF4u); set32(c.r[4], c.r[29].w[0] + 1936u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1AF4u) [[unlikely]] return; }
L_002D1AF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 32017u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1B14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1932u), c.r[2].w[0]);  if (t) { goto L_002D1B20; } }
L_002D1B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1B1Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1B1Cu) [[unlikely]] return; }
L_002D1B1C:
    st32((c.r[29].w[0] + 1932u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1B20:
    set32(c.r[4], c.r[29].w[0] + 1144u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1B30u); set32(c.r[6], c.r[29].w[0] + 1932u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1B30u) [[unlikely]] return; }
L_002D1B30:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1144u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1B48u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1B48u) [[unlikely]] return; }
L_002D1B48:
    set32(c.r[4], c.r[29].w[0] + 1148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1B54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1B54u) [[unlikely]] return; }
L_002D1B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1B5Cu); set32(c.r[4], c.r[29].w[0] + 1932u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1B5Cu) [[unlikely]] return; }
L_002D1B5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31995u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1B7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1928u), c.r[2].w[0]);  if (t) { goto L_002D1B88; } }
L_002D1B7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1B84u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1B84u) [[unlikely]] return; }
L_002D1B84:
    st32((c.r[29].w[0] + 1928u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1B88:
    set32(c.r[4], c.r[29].w[0] + 1136u);
    set32(c.r[5], 0u + 21u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1B98u); set32(c.r[6], c.r[29].w[0] + 1928u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1B98u) [[unlikely]] return; }
L_002D1B98:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1136u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1BB0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1BB0u) [[unlikely]] return; }
L_002D1BB0:
    set32(c.r[4], c.r[29].w[0] + 1140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1BBCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1BBCu) [[unlikely]] return; }
L_002D1BBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1BC4u); set32(c.r[4], c.r[29].w[0] + 1928u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1BC4u) [[unlikely]] return; }
L_002D1BC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31977u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1BE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1924u), c.r[2].w[0]);  if (t) { goto L_002D1BF0; } }
L_002D1BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1BECu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1BECu) [[unlikely]] return; }
L_002D1BEC:
    st32((c.r[29].w[0] + 1924u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1BF0:
    set32(c.r[4], c.r[29].w[0] + 1128u);
    set32(c.r[5], 0u + 21u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1C00u); set32(c.r[6], c.r[29].w[0] + 1924u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1C00u) [[unlikely]] return; }
L_002D1C00:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1128u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1C18u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1C18u) [[unlikely]] return; }
L_002D1C18:
    set32(c.r[4], c.r[29].w[0] + 1132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1C24u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1C24u) [[unlikely]] return; }
L_002D1C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1C2Cu); set32(c.r[4], c.r[29].w[0] + 1924u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1C2Cu) [[unlikely]] return; }
L_002D1C2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31953u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1C4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1920u), c.r[2].w[0]);  if (t) { goto L_002D1C58; } }
L_002D1C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1C54u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1C54u) [[unlikely]] return; }
L_002D1C54:
    st32((c.r[29].w[0] + 1920u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1C58:
    set32(c.r[4], c.r[29].w[0] + 1120u);
    set32(c.r[5], 0u + 22u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1C68u); set32(c.r[6], c.r[29].w[0] + 1920u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1C68u) [[unlikely]] return; }
L_002D1C68:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1120u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1C80u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1C80u) [[unlikely]] return; }
L_002D1C80:
    set32(c.r[4], c.r[29].w[0] + 1124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1C8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1C8Cu) [[unlikely]] return; }
L_002D1C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1C94u); set32(c.r[4], c.r[29].w[0] + 1920u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1C94u) [[unlikely]] return; }
L_002D1C94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31932u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1CB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1916u), c.r[2].w[0]);  if (t) { goto L_002D1CC0; } }
L_002D1CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1CBCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1CBCu) [[unlikely]] return; }
L_002D1CBC:
    st32((c.r[29].w[0] + 1916u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1CC0:
    set32(c.r[4], c.r[29].w[0] + 1112u);
    set32(c.r[5], 0u + 22u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1CD0u); set32(c.r[6], c.r[29].w[0] + 1916u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1CD0u) [[unlikely]] return; }
L_002D1CD0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1112u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1CE8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1CE8u) [[unlikely]] return; }
L_002D1CE8:
    set32(c.r[4], c.r[29].w[0] + 1116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1CF4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1CF4u) [[unlikely]] return; }
L_002D1CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1CFCu); set32(c.r[4], c.r[29].w[0] + 1916u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1CFCu) [[unlikely]] return; }
L_002D1CFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31905u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1D1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1912u), c.r[2].w[0]);  if (t) { goto L_002D1D28; } }
L_002D1D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1D24u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1D24u) [[unlikely]] return; }
L_002D1D24:
    st32((c.r[29].w[0] + 1912u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1D28:
    set32(c.r[4], c.r[29].w[0] + 1104u);
    set32(c.r[5], 0u + 23u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1D38u); set32(c.r[6], c.r[29].w[0] + 1912u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1D38u) [[unlikely]] return; }
L_002D1D38:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1104u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1D50u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1D50u) [[unlikely]] return; }
L_002D1D50:
    set32(c.r[4], c.r[29].w[0] + 1108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1D5Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1D5Cu) [[unlikely]] return; }
L_002D1D5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1D64u); set32(c.r[4], c.r[29].w[0] + 1912u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1D64u) [[unlikely]] return; }
L_002D1D64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31882u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1D84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1908u), c.r[2].w[0]);  if (t) { goto L_002D1D90; } }
L_002D1D84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1D8Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1D8Cu) [[unlikely]] return; }
L_002D1D8C:
    st32((c.r[29].w[0] + 1908u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1D90:
    set32(c.r[4], c.r[29].w[0] + 1096u);
    set32(c.r[5], 0u + 23u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1DA0u); set32(c.r[6], c.r[29].w[0] + 1908u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1DA0u) [[unlikely]] return; }
L_002D1DA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1096u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1DB8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1DB8u) [[unlikely]] return; }
L_002D1DB8:
    set32(c.r[4], c.r[29].w[0] + 1100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1DC4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1DC4u) [[unlikely]] return; }
L_002D1DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1DCCu); set32(c.r[4], c.r[29].w[0] + 1908u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1DCCu) [[unlikely]] return; }
L_002D1DCC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31853u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1DEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1904u), c.r[2].w[0]);  if (t) { goto L_002D1DF8; } }
L_002D1DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1DF4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1DF4u) [[unlikely]] return; }
L_002D1DF4:
    st32((c.r[29].w[0] + 1904u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1DF8:
    set32(c.r[4], c.r[29].w[0] + 1088u);
    set32(c.r[5], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1E08u); set32(c.r[6], c.r[29].w[0] + 1904u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1E08u) [[unlikely]] return; }
L_002D1E08:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1088u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1E20u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1E20u) [[unlikely]] return; }
L_002D1E20:
    set32(c.r[4], c.r[29].w[0] + 1092u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1E2Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1E2Cu) [[unlikely]] return; }
L_002D1E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1E34u); set32(c.r[4], c.r[29].w[0] + 1904u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1E34u) [[unlikely]] return; }
L_002D1E34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31827u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1E54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1900u), c.r[2].w[0]);  if (t) { goto L_002D1E60; } }
L_002D1E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1E5Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1E5Cu) [[unlikely]] return; }
L_002D1E5C:
    st32((c.r[29].w[0] + 1900u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1E60:
    set32(c.r[4], c.r[29].w[0] + 1080u);
    set32(c.r[5], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1E70u); set32(c.r[6], c.r[29].w[0] + 1900u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1E70u) [[unlikely]] return; }
L_002D1E70:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1080u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1E88u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1E88u) [[unlikely]] return; }
L_002D1E88:
    set32(c.r[4], c.r[29].w[0] + 1084u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1E94u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1E94u) [[unlikely]] return; }
L_002D1E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1E9Cu); set32(c.r[4], c.r[29].w[0] + 1900u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1E9Cu) [[unlikely]] return; }
L_002D1E9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31795u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1EBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1896u), c.r[2].w[0]);  if (t) { goto L_002D1EC8; } }
L_002D1EBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1EC4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1EC4u) [[unlikely]] return; }
L_002D1EC4:
    st32((c.r[29].w[0] + 1896u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1EC8:
    set32(c.r[4], c.r[29].w[0] + 1072u);
    set32(c.r[5], 0u + 25u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1ED8u); set32(c.r[6], c.r[29].w[0] + 1896u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1ED8u) [[unlikely]] return; }
L_002D1ED8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1072u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1EF0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1EF0u) [[unlikely]] return; }
L_002D1EF0:
    set32(c.r[4], c.r[29].w[0] + 1076u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1EFCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1EFCu) [[unlikely]] return; }
L_002D1EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1F04u); set32(c.r[4], c.r[29].w[0] + 1896u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1F04u) [[unlikely]] return; }
L_002D1F04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31781u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1F24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1892u), c.r[2].w[0]);  if (t) { goto L_002D1F30; } }
L_002D1F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1F2Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1F2Cu) [[unlikely]] return; }
L_002D1F2C:
    st32((c.r[29].w[0] + 1892u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1F30:
    set32(c.r[4], c.r[29].w[0] + 1064u);
    set32(c.r[5], 0u + 26u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1F40u); set32(c.r[6], c.r[29].w[0] + 1892u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1F40u) [[unlikely]] return; }
L_002D1F40:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1064u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1F58u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1F58u) [[unlikely]] return; }
L_002D1F58:
    set32(c.r[4], c.r[29].w[0] + 1068u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1F64u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1F64u) [[unlikely]] return; }
L_002D1F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1F6Cu); set32(c.r[4], c.r[29].w[0] + 1892u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1F6Cu) [[unlikely]] return; }
L_002D1F6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31764u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1F8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1888u), c.r[2].w[0]);  if (t) { goto L_002D1F98; } }
L_002D1F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1F94u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1F94u) [[unlikely]] return; }
L_002D1F94:
    st32((c.r[29].w[0] + 1888u), c.r[2].w[0]);
    c.budget -= 1;
L_002D1F98:
    set32(c.r[4], c.r[29].w[0] + 1056u);
    set32(c.r[5], 0u + 27u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1FA8u); set32(c.r[6], c.r[29].w[0] + 1888u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D1FA8u) [[unlikely]] return; }
L_002D1FA8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1056u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1FC0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D1FC0u) [[unlikely]] return; }
L_002D1FC0:
    set32(c.r[4], c.r[29].w[0] + 1060u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1FCCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D1FCCu) [[unlikely]] return; }
L_002D1FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1FD4u); set32(c.r[4], c.r[29].w[0] + 1888u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D1FD4u) [[unlikely]] return; }
L_002D1FD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31741u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D1FF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1884u), c.r[2].w[0]);  if (t) { goto L_002D2000; } }
L_002D1FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1FFCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D1FFCu) [[unlikely]] return; }
L_002D1FFC:
    st32((c.r[29].w[0] + 1884u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2000:
    set32(c.r[4], c.r[29].w[0] + 1048u);
    set32(c.r[5], 0u + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2010u); set32(c.r[6], c.r[29].w[0] + 1884u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2010u) [[unlikely]] return; }
L_002D2010:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1048u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2028u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2028u) [[unlikely]] return; }
L_002D2028:
    set32(c.r[4], c.r[29].w[0] + 1052u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2034u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2034u) [[unlikely]] return; }
L_002D2034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D203Cu); set32(c.r[4], c.r[29].w[0] + 1884u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D203Cu) [[unlikely]] return; }
L_002D203C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31715u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D205C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1880u), c.r[2].w[0]);  if (t) { goto L_002D2068; } }
L_002D205C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2064u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2064u) [[unlikely]] return; }
L_002D2064:
    st32((c.r[29].w[0] + 1880u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2068:
    set32(c.r[4], c.r[29].w[0] + 1040u);
    set32(c.r[5], 0u + 29u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2078u); set32(c.r[6], c.r[29].w[0] + 1880u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2078u) [[unlikely]] return; }
L_002D2078:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1040u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2090u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2090u) [[unlikely]] return; }
L_002D2090:
    set32(c.r[4], c.r[29].w[0] + 1044u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D209Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D209Cu) [[unlikely]] return; }
L_002D209C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D20A4u); set32(c.r[4], c.r[29].w[0] + 1880u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D20A4u) [[unlikely]] return; }
L_002D20A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31697u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D20C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1876u), c.r[2].w[0]);  if (t) { goto L_002D20D0; } }
L_002D20C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D20CCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D20CCu) [[unlikely]] return; }
L_002D20CC:
    st32((c.r[29].w[0] + 1876u), c.r[2].w[0]);
    c.budget -= 1;
L_002D20D0:
    set32(c.r[4], c.r[29].w[0] + 1032u);
    set32(c.r[5], 0u + 29u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D20E0u); set32(c.r[6], c.r[29].w[0] + 1876u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D20E0u) [[unlikely]] return; }
L_002D20E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1032u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D20F8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D20F8u) [[unlikely]] return; }
L_002D20F8:
    set32(c.r[4], c.r[29].w[0] + 1036u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2104u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2104u) [[unlikely]] return; }
L_002D2104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D210Cu); set32(c.r[4], c.r[29].w[0] + 1876u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D210Cu) [[unlikely]] return; }
L_002D210C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31673u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D212C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1872u), c.r[2].w[0]);  if (t) { goto L_002D2138; } }
L_002D212C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2134u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2134u) [[unlikely]] return; }
L_002D2134:
    st32((c.r[29].w[0] + 1872u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2138:
    set32(c.r[4], c.r[29].w[0] + 1024u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2148u); set32(c.r[6], c.r[29].w[0] + 1872u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2148u) [[unlikely]] return; }
L_002D2148:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1024u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2160u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2160u) [[unlikely]] return; }
L_002D2160:
    set32(c.r[4], c.r[29].w[0] + 1028u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D216Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D216Cu) [[unlikely]] return; }
L_002D216C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2174u); set32(c.r[4], c.r[29].w[0] + 1872u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2174u) [[unlikely]] return; }
L_002D2174:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31652u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2194; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1868u), c.r[2].w[0]);  if (t) { goto L_002D21A0; } }
L_002D2194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D219Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D219Cu) [[unlikely]] return; }
L_002D219C:
    st32((c.r[29].w[0] + 1868u), c.r[2].w[0]);
    c.budget -= 1;
L_002D21A0:
    set32(c.r[4], c.r[29].w[0] + 1016u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D21B0u); set32(c.r[6], c.r[29].w[0] + 1868u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D21B0u) [[unlikely]] return; }
L_002D21B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1016u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D21C8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D21C8u) [[unlikely]] return; }
L_002D21C8:
    set32(c.r[4], c.r[29].w[0] + 1020u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D21D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D21D4u) [[unlikely]] return; }
L_002D21D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D21DCu); set32(c.r[4], c.r[29].w[0] + 1868u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D21DCu) [[unlikely]] return; }
L_002D21DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31625u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D21FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1864u), c.r[2].w[0]);  if (t) { goto L_002D2208; } }
L_002D21FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2204u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2204u) [[unlikely]] return; }
L_002D2204:
    st32((c.r[29].w[0] + 1864u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2208:
    set32(c.r[4], c.r[29].w[0] + 1008u);
    set32(c.r[5], 0u + 31u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2218u); set32(c.r[6], c.r[29].w[0] + 1864u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2218u) [[unlikely]] return; }
L_002D2218:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1008u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2230u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2230u) [[unlikely]] return; }
L_002D2230:
    set32(c.r[4], c.r[29].w[0] + 1012u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D223Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D223Cu) [[unlikely]] return; }
L_002D223C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2244u); set32(c.r[4], c.r[29].w[0] + 1864u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2244u) [[unlikely]] return; }
L_002D2244:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31598u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2264; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1860u), c.r[2].w[0]);  if (t) { goto L_002D2270; } }
L_002D2264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D226Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D226Cu) [[unlikely]] return; }
L_002D226C:
    st32((c.r[29].w[0] + 1860u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2270:
    set32(c.r[4], c.r[29].w[0] + 1000u);
    set32(c.r[5], 0u + 31u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2280u); set32(c.r[6], c.r[29].w[0] + 1860u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2280u) [[unlikely]] return; }
L_002D2280:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 1000u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2298u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2298u) [[unlikely]] return; }
L_002D2298:
    set32(c.r[4], c.r[29].w[0] + 1004u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D22A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D22A4u) [[unlikely]] return; }
L_002D22A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D22ACu); set32(c.r[4], c.r[29].w[0] + 1860u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D22ACu) [[unlikely]] return; }
L_002D22AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31565u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D22CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1856u), c.r[2].w[0]);  if (t) { goto L_002D22D8; } }
L_002D22CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D22D4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D22D4u) [[unlikely]] return; }
L_002D22D4:
    st32((c.r[29].w[0] + 1856u), c.r[2].w[0]);
    c.budget -= 1;
L_002D22D8:
    set32(c.r[4], c.r[29].w[0] + 992u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D22E8u); set32(c.r[6], c.r[29].w[0] + 1856u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D22E8u) [[unlikely]] return; }
L_002D22E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 992u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2300u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2300u) [[unlikely]] return; }
L_002D2300:
    set32(c.r[4], c.r[29].w[0] + 996u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D230Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D230Cu) [[unlikely]] return; }
L_002D230C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2314u); set32(c.r[4], c.r[29].w[0] + 1856u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2314u) [[unlikely]] return; }
L_002D2314:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31535u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2334; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1852u), c.r[2].w[0]);  if (t) { goto L_002D2340; } }
L_002D2334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D233Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D233Cu) [[unlikely]] return; }
L_002D233C:
    st32((c.r[29].w[0] + 1852u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2340:
    set32(c.r[4], c.r[29].w[0] + 984u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2350u); set32(c.r[6], c.r[29].w[0] + 1852u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2350u) [[unlikely]] return; }
L_002D2350:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 984u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2368u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2368u) [[unlikely]] return; }
L_002D2368:
    set32(c.r[4], c.r[29].w[0] + 988u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2374u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2374u) [[unlikely]] return; }
L_002D2374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D237Cu); set32(c.r[4], c.r[29].w[0] + 1852u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D237Cu) [[unlikely]] return; }
L_002D237C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31499u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D239C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1848u), c.r[2].w[0]);  if (t) { goto L_002D23A8; } }
L_002D239C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D23A4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D23A4u) [[unlikely]] return; }
L_002D23A4:
    st32((c.r[29].w[0] + 1848u), c.r[2].w[0]);
    c.budget -= 1;
L_002D23A8:
    set32(c.r[4], c.r[29].w[0] + 976u);
    set32(c.r[5], 0u + 33u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D23B8u); set32(c.r[6], c.r[29].w[0] + 1848u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D23B8u) [[unlikely]] return; }
L_002D23B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 976u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D23D0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D23D0u) [[unlikely]] return; }
L_002D23D0:
    set32(c.r[4], c.r[29].w[0] + 980u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D23DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D23DCu) [[unlikely]] return; }
L_002D23DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D23E4u); set32(c.r[4], c.r[29].w[0] + 1848u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D23E4u) [[unlikely]] return; }
L_002D23E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31487u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2404; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1844u), c.r[2].w[0]);  if (t) { goto L_002D2410; } }
L_002D2404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D240Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D240Cu) [[unlikely]] return; }
L_002D240C:
    st32((c.r[29].w[0] + 1844u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2410:
    set32(c.r[4], c.r[29].w[0] + 968u);
    set32(c.r[5], 0u + 34u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2420u); set32(c.r[6], c.r[29].w[0] + 1844u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2420u) [[unlikely]] return; }
L_002D2420:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 968u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2438u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2438u) [[unlikely]] return; }
L_002D2438:
    set32(c.r[4], c.r[29].w[0] + 972u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2444u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2444u) [[unlikely]] return; }
L_002D2444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D244Cu); set32(c.r[4], c.r[29].w[0] + 1844u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D244Cu) [[unlikely]] return; }
L_002D244C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31475u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D246C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1840u), c.r[2].w[0]);  if (t) { goto L_002D2478; } }
L_002D246C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2474u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2474u) [[unlikely]] return; }
L_002D2474:
    st32((c.r[29].w[0] + 1840u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2478:
    set32(c.r[4], c.r[29].w[0] + 960u);
    set32(c.r[5], 0u + 35u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2488u); set32(c.r[6], c.r[29].w[0] + 1840u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2488u) [[unlikely]] return; }
L_002D2488:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 960u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D24A0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D24A0u) [[unlikely]] return; }
L_002D24A0:
    set32(c.r[4], c.r[29].w[0] + 964u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D24ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D24ACu) [[unlikely]] return; }
L_002D24AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D24B4u); set32(c.r[4], c.r[29].w[0] + 1840u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D24B4u) [[unlikely]] return; }
L_002D24B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31459u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D24D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1836u), c.r[2].w[0]);  if (t) { goto L_002D24E0; } }
L_002D24D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D24DCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D24DCu) [[unlikely]] return; }
L_002D24DC:
    st32((c.r[29].w[0] + 1836u), c.r[2].w[0]);
    c.budget -= 1;
L_002D24E0:
    set32(c.r[4], c.r[29].w[0] + 952u);
    set32(c.r[5], 0u + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D24F0u); set32(c.r[6], c.r[29].w[0] + 1836u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D24F0u) [[unlikely]] return; }
L_002D24F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 952u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2508u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2508u) [[unlikely]] return; }
L_002D2508:
    set32(c.r[4], c.r[29].w[0] + 956u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2514u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2514u) [[unlikely]] return; }
L_002D2514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D251Cu); set32(c.r[4], c.r[29].w[0] + 1836u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D251Cu) [[unlikely]] return; }
L_002D251C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31443u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D253C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1832u), c.r[2].w[0]);  if (t) { goto L_002D2548; } }
L_002D253C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2544u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2544u) [[unlikely]] return; }
L_002D2544:
    st32((c.r[29].w[0] + 1832u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2548:
    set32(c.r[4], c.r[29].w[0] + 944u);
    set32(c.r[5], 0u + 37u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2558u); set32(c.r[6], c.r[29].w[0] + 1832u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2558u) [[unlikely]] return; }
L_002D2558:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 944u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2570u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2570u) [[unlikely]] return; }
L_002D2570:
    set32(c.r[4], c.r[29].w[0] + 948u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D257Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D257Cu) [[unlikely]] return; }
L_002D257C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2584u); set32(c.r[4], c.r[29].w[0] + 1832u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2584u) [[unlikely]] return; }
L_002D2584:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31426u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D25A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1828u), c.r[2].w[0]);  if (t) { goto L_002D25B0; } }
L_002D25A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D25ACu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D25ACu) [[unlikely]] return; }
L_002D25AC:
    st32((c.r[29].w[0] + 1828u), c.r[2].w[0]);
    c.budget -= 1;
L_002D25B0:
    set32(c.r[4], c.r[29].w[0] + 936u);
    set32(c.r[5], 0u + 38u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D25C0u); set32(c.r[6], c.r[29].w[0] + 1828u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D25C0u) [[unlikely]] return; }
L_002D25C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 936u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D25D8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D25D8u) [[unlikely]] return; }
L_002D25D8:
    set32(c.r[4], c.r[29].w[0] + 940u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D25E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D25E4u) [[unlikely]] return; }
L_002D25E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D25ECu); set32(c.r[4], c.r[29].w[0] + 1828u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D25ECu) [[unlikely]] return; }
L_002D25EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31406u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D260C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1824u), c.r[2].w[0]);  if (t) { goto L_002D2618; } }
L_002D260C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2614u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2614u) [[unlikely]] return; }
L_002D2614:
    st32((c.r[29].w[0] + 1824u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2618:
    set32(c.r[4], c.r[29].w[0] + 928u);
    set32(c.r[5], 0u + 39u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2628u); set32(c.r[6], c.r[29].w[0] + 1824u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2628u) [[unlikely]] return; }
L_002D2628:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 928u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2640u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2640u) [[unlikely]] return; }
L_002D2640:
    set32(c.r[4], c.r[29].w[0] + 932u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D264Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D264Cu) [[unlikely]] return; }
L_002D264C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2654u); set32(c.r[4], c.r[29].w[0] + 1824u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2654u) [[unlikely]] return; }
L_002D2654:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31380u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2674; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1820u), c.r[2].w[0]);  if (t) { goto L_002D2680; } }
L_002D2674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D267Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D267Cu) [[unlikely]] return; }
L_002D267C:
    st32((c.r[29].w[0] + 1820u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2680:
    set32(c.r[4], c.r[29].w[0] + 920u);
    set32(c.r[5], 0u + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2690u); set32(c.r[6], c.r[29].w[0] + 1820u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2690u) [[unlikely]] return; }
L_002D2690:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 920u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D26A8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D26A8u) [[unlikely]] return; }
L_002D26A8:
    set32(c.r[4], c.r[29].w[0] + 924u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D26B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D26B4u) [[unlikely]] return; }
L_002D26B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D26BCu); set32(c.r[4], c.r[29].w[0] + 1820u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D26BCu) [[unlikely]] return; }
L_002D26BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31351u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D26DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1816u), c.r[2].w[0]);  if (t) { goto L_002D26E8; } }
L_002D26DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D26E4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D26E4u) [[unlikely]] return; }
L_002D26E4:
    st32((c.r[29].w[0] + 1816u), c.r[2].w[0]);
    c.budget -= 1;
L_002D26E8:
    set32(c.r[4], c.r[29].w[0] + 912u);
    set32(c.r[5], 0u + 41u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D26F8u); set32(c.r[6], c.r[29].w[0] + 1816u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D26F8u) [[unlikely]] return; }
L_002D26F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 912u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2710u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2710u) [[unlikely]] return; }
L_002D2710:
    set32(c.r[4], c.r[29].w[0] + 916u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D271Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D271Cu) [[unlikely]] return; }
L_002D271C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2724u); set32(c.r[4], c.r[29].w[0] + 1816u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2724u) [[unlikely]] return; }
L_002D2724:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31334u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2744; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1812u), c.r[2].w[0]);  if (t) { goto L_002D2750; } }
L_002D2744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D274Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D274Cu) [[unlikely]] return; }
L_002D274C:
    st32((c.r[29].w[0] + 1812u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2750:
    set32(c.r[4], c.r[29].w[0] + 904u);
    set32(c.r[5], 0u + 42u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2760u); set32(c.r[6], c.r[29].w[0] + 1812u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2760u) [[unlikely]] return; }
L_002D2760:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 904u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2778u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2778u) [[unlikely]] return; }
L_002D2778:
    set32(c.r[4], c.r[29].w[0] + 908u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2784u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2784u) [[unlikely]] return; }
L_002D2784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D278Cu); set32(c.r[4], c.r[29].w[0] + 1812u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D278Cu) [[unlikely]] return; }
L_002D278C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31314u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D27AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1808u), c.r[2].w[0]);  if (t) { goto L_002D27B8; } }
L_002D27AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D27B4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D27B4u) [[unlikely]] return; }
L_002D27B4:
    st32((c.r[29].w[0] + 1808u), c.r[2].w[0]);
    c.budget -= 1;
L_002D27B8:
    set32(c.r[4], c.r[29].w[0] + 896u);
    set32(c.r[5], 0u + 43u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D27C8u); set32(c.r[6], c.r[29].w[0] + 1808u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D27C8u) [[unlikely]] return; }
L_002D27C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 896u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D27E0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D27E0u) [[unlikely]] return; }
L_002D27E0:
    set32(c.r[4], c.r[29].w[0] + 900u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D27ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D27ECu) [[unlikely]] return; }
L_002D27EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D27F4u); set32(c.r[4], c.r[29].w[0] + 1808u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D27F4u) [[unlikely]] return; }
L_002D27F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31288u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2814; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1804u), c.r[2].w[0]);  if (t) { goto L_002D2820; } }
L_002D2814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D281Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D281Cu) [[unlikely]] return; }
L_002D281C:
    st32((c.r[29].w[0] + 1804u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2820:
    set32(c.r[4], c.r[29].w[0] + 888u);
    set32(c.r[5], 0u + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2830u); set32(c.r[6], c.r[29].w[0] + 1804u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2830u) [[unlikely]] return; }
L_002D2830:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 888u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2848u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2848u) [[unlikely]] return; }
L_002D2848:
    set32(c.r[4], c.r[29].w[0] + 892u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2854u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2854u) [[unlikely]] return; }
L_002D2854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D285Cu); set32(c.r[4], c.r[29].w[0] + 1804u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D285Cu) [[unlikely]] return; }
L_002D285C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31259u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D287C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1800u), c.r[2].w[0]);  if (t) { goto L_002D2888; } }
L_002D287C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2884u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2884u) [[unlikely]] return; }
L_002D2884:
    st32((c.r[29].w[0] + 1800u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2888:
    set32(c.r[4], c.r[29].w[0] + 880u);
    set32(c.r[5], 0u + 45u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2898u); set32(c.r[6], c.r[29].w[0] + 1800u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2898u) [[unlikely]] return; }
L_002D2898:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 880u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D28B0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D28B0u) [[unlikely]] return; }
L_002D28B0:
    set32(c.r[4], c.r[29].w[0] + 884u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D28BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D28BCu) [[unlikely]] return; }
L_002D28BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D28C4u); set32(c.r[4], c.r[29].w[0] + 1800u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D28C4u) [[unlikely]] return; }
L_002D28C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31240u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D28E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1796u), c.r[2].w[0]);  if (t) { goto L_002D28F0; } }
L_002D28E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D28ECu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D28ECu) [[unlikely]] return; }
L_002D28EC:
    st32((c.r[29].w[0] + 1796u), c.r[2].w[0]);
    c.budget -= 1;
L_002D28F0:
    set32(c.r[4], c.r[29].w[0] + 872u);
    set32(c.r[5], 0u + 46u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2900u); set32(c.r[6], c.r[29].w[0] + 1796u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2900u) [[unlikely]] return; }
L_002D2900:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 872u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2918u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2918u) [[unlikely]] return; }
L_002D2918:
    set32(c.r[4], c.r[29].w[0] + 876u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2924u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2924u) [[unlikely]] return; }
L_002D2924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D292Cu); set32(c.r[4], c.r[29].w[0] + 1796u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D292Cu) [[unlikely]] return; }
L_002D292C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31218u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D294C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1792u), c.r[2].w[0]);  if (t) { goto L_002D2958; } }
L_002D294C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2954u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2954u) [[unlikely]] return; }
L_002D2954:
    st32((c.r[29].w[0] + 1792u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2958:
    set32(c.r[4], c.r[29].w[0] + 864u);
    set32(c.r[5], 0u + 47u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2968u); set32(c.r[6], c.r[29].w[0] + 1792u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2968u) [[unlikely]] return; }
L_002D2968:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 864u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2980u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2980u) [[unlikely]] return; }
L_002D2980:
    set32(c.r[4], c.r[29].w[0] + 868u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D298Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D298Cu) [[unlikely]] return; }
L_002D298C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2994u); set32(c.r[4], c.r[29].w[0] + 1792u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2994u) [[unlikely]] return; }
L_002D2994:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31190u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D29B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1788u), c.r[2].w[0]);  if (t) { goto L_002D29C0; } }
L_002D29B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D29BCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D29BCu) [[unlikely]] return; }
L_002D29BC:
    st32((c.r[29].w[0] + 1788u), c.r[2].w[0]);
    c.budget -= 1;
L_002D29C0:
    set32(c.r[4], c.r[29].w[0] + 856u);
    set32(c.r[5], 0u + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D29D0u); set32(c.r[6], c.r[29].w[0] + 1788u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D29D0u) [[unlikely]] return; }
L_002D29D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 856u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D29E8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D29E8u) [[unlikely]] return; }
L_002D29E8:
    set32(c.r[4], c.r[29].w[0] + 860u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D29F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D29F4u) [[unlikely]] return; }
L_002D29F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D29FCu); set32(c.r[4], c.r[29].w[0] + 1788u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D29FCu) [[unlikely]] return; }
L_002D29FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31159u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2A1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1784u), c.r[2].w[0]);  if (t) { goto L_002D2A28; } }
L_002D2A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A24u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2A24u) [[unlikely]] return; }
L_002D2A24:
    st32((c.r[29].w[0] + 1784u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2A28:
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[5], 0u + 49u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A38u); set32(c.r[6], c.r[29].w[0] + 1784u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2A38u) [[unlikely]] return; }
L_002D2A38:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 848u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A50u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2A50u) [[unlikely]] return; }
L_002D2A50:
    set32(c.r[4], c.r[29].w[0] + 852u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A5Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2A5Cu) [[unlikely]] return; }
L_002D2A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A64u); set32(c.r[4], c.r[29].w[0] + 1784u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2A64u) [[unlikely]] return; }
L_002D2A64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31141u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2A84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1780u), c.r[2].w[0]);  if (t) { goto L_002D2A90; } }
L_002D2A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A8Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2A8Cu) [[unlikely]] return; }
L_002D2A8C:
    st32((c.r[29].w[0] + 1780u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2A90:
    set32(c.r[4], c.r[29].w[0] + 840u);
    set32(c.r[5], 0u + 50u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2AA0u); set32(c.r[6], c.r[29].w[0] + 1780u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2AA0u) [[unlikely]] return; }
L_002D2AA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 840u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2AB8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2AB8u) [[unlikely]] return; }
L_002D2AB8:
    set32(c.r[4], c.r[29].w[0] + 844u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2AC4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2AC4u) [[unlikely]] return; }
L_002D2AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2ACCu); set32(c.r[4], c.r[29].w[0] + 1780u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2ACCu) [[unlikely]] return; }
L_002D2ACC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2AEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1776u), c.r[2].w[0]);  if (t) { goto L_002D2AF8; } }
L_002D2AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2AF4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2AF4u) [[unlikely]] return; }
L_002D2AF4:
    st32((c.r[29].w[0] + 1776u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2AF8:
    set32(c.r[4], c.r[29].w[0] + 832u);
    set32(c.r[5], 0u + 51u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B08u); set32(c.r[6], c.r[29].w[0] + 1776u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2B08u) [[unlikely]] return; }
L_002D2B08:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 832u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B20u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2B20u) [[unlikely]] return; }
L_002D2B20:
    set32(c.r[4], c.r[29].w[0] + 836u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B2Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2B2Cu) [[unlikely]] return; }
L_002D2B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B34u); set32(c.r[4], c.r[29].w[0] + 1776u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2B34u) [[unlikely]] return; }
L_002D2B34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31093u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2B54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1772u), c.r[2].w[0]);  if (t) { goto L_002D2B60; } }
L_002D2B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B5Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2B5Cu) [[unlikely]] return; }
L_002D2B5C:
    st32((c.r[29].w[0] + 1772u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2B60:
    set32(c.r[4], c.r[29].w[0] + 824u);
    set32(c.r[5], 0u + 52u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B70u); set32(c.r[6], c.r[29].w[0] + 1772u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2B70u) [[unlikely]] return; }
L_002D2B70:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 824u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B88u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2B88u) [[unlikely]] return; }
L_002D2B88:
    set32(c.r[4], c.r[29].w[0] + 828u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B94u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2B94u) [[unlikely]] return; }
L_002D2B94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B9Cu); set32(c.r[4], c.r[29].w[0] + 1772u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2B9Cu) [[unlikely]] return; }
L_002D2B9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31063u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2BBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1768u), c.r[2].w[0]);  if (t) { goto L_002D2BC8; } }
L_002D2BBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2BC4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2BC4u) [[unlikely]] return; }
L_002D2BC4:
    st32((c.r[29].w[0] + 1768u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2BC8:
    set32(c.r[4], c.r[29].w[0] + 816u);
    set32(c.r[5], 0u + 53u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2BD8u); set32(c.r[6], c.r[29].w[0] + 1768u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2BD8u) [[unlikely]] return; }
L_002D2BD8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 816u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2BF0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2BF0u) [[unlikely]] return; }
L_002D2BF0:
    set32(c.r[4], c.r[29].w[0] + 820u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2BFCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2BFCu) [[unlikely]] return; }
L_002D2BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2C04u); set32(c.r[4], c.r[29].w[0] + 1768u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2C04u) [[unlikely]] return; }
L_002D2C04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31046u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2C24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1764u), c.r[2].w[0]);  if (t) { goto L_002D2C30; } }
L_002D2C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2C2Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2C2Cu) [[unlikely]] return; }
L_002D2C2C:
    st32((c.r[29].w[0] + 1764u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2C30:
    set32(c.r[4], c.r[29].w[0] + 808u);
    set32(c.r[5], 0u + 54u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2C40u); set32(c.r[6], c.r[29].w[0] + 1764u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2C40u) [[unlikely]] return; }
L_002D2C40:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 808u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2C58u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2C58u) [[unlikely]] return; }
L_002D2C58:
    set32(c.r[4], c.r[29].w[0] + 812u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2C64u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2C64u) [[unlikely]] return; }
L_002D2C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2C6Cu); set32(c.r[4], c.r[29].w[0] + 1764u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2C6Cu) [[unlikely]] return; }
L_002D2C6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31026u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2C8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1760u), c.r[2].w[0]);  if (t) { goto L_002D2C98; } }
L_002D2C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2C94u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2C94u) [[unlikely]] return; }
L_002D2C94:
    st32((c.r[29].w[0] + 1760u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2C98:
    set32(c.r[4], c.r[29].w[0] + 800u);
    set32(c.r[5], 0u + 55u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2CA8u); set32(c.r[6], c.r[29].w[0] + 1760u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2CA8u) [[unlikely]] return; }
L_002D2CA8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 800u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2CC0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2CC0u) [[unlikely]] return; }
L_002D2CC0:
    set32(c.r[4], c.r[29].w[0] + 804u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2CCCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2CCCu) [[unlikely]] return; }
L_002D2CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2CD4u); set32(c.r[4], c.r[29].w[0] + 1760u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2CD4u) [[unlikely]] return; }
L_002D2CD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 31000u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2CF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1756u), c.r[2].w[0]);  if (t) { goto L_002D2D00; } }
L_002D2CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2CFCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2CFCu) [[unlikely]] return; }
L_002D2CFC:
    st32((c.r[29].w[0] + 1756u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2D00:
    set32(c.r[4], c.r[29].w[0] + 792u);
    set32(c.r[5], 0u + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2D10u); set32(c.r[6], c.r[29].w[0] + 1756u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2D10u) [[unlikely]] return; }
L_002D2D10:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 792u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2D28u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2D28u) [[unlikely]] return; }
L_002D2D28:
    set32(c.r[4], c.r[29].w[0] + 796u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2D34u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2D34u) [[unlikely]] return; }
L_002D2D34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2D3Cu); set32(c.r[4], c.r[29].w[0] + 1756u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2D3Cu) [[unlikely]] return; }
L_002D2D3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30971u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2D5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1752u), c.r[2].w[0]);  if (t) { goto L_002D2D68; } }
L_002D2D5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2D64u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2D64u) [[unlikely]] return; }
L_002D2D64:
    st32((c.r[29].w[0] + 1752u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2D68:
    set32(c.r[4], c.r[29].w[0] + 784u);
    set32(c.r[5], 0u + 57u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2D78u); set32(c.r[6], c.r[29].w[0] + 1752u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2D78u) [[unlikely]] return; }
L_002D2D78:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 784u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2D90u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2D90u) [[unlikely]] return; }
L_002D2D90:
    set32(c.r[4], c.r[29].w[0] + 788u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2D9Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2D9Cu) [[unlikely]] return; }
L_002D2D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2DA4u); set32(c.r[4], c.r[29].w[0] + 1752u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2DA4u) [[unlikely]] return; }
L_002D2DA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30954u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2DC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1748u), c.r[2].w[0]);  if (t) { goto L_002D2DD0; } }
L_002D2DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2DCCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2DCCu) [[unlikely]] return; }
L_002D2DCC:
    st32((c.r[29].w[0] + 1748u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2DD0:
    set32(c.r[4], c.r[29].w[0] + 776u);
    set32(c.r[5], 0u + 58u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2DE0u); set32(c.r[6], c.r[29].w[0] + 1748u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2DE0u) [[unlikely]] return; }
L_002D2DE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 776u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2DF8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2DF8u) [[unlikely]] return; }
L_002D2DF8:
    set32(c.r[4], c.r[29].w[0] + 780u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2E04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2E04u) [[unlikely]] return; }
L_002D2E04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2E0Cu); set32(c.r[4], c.r[29].w[0] + 1748u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2E0Cu) [[unlikely]] return; }
L_002D2E0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30934u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2E2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1744u), c.r[2].w[0]);  if (t) { goto L_002D2E38; } }
L_002D2E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2E34u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2E34u) [[unlikely]] return; }
L_002D2E34:
    st32((c.r[29].w[0] + 1744u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2E38:
    set32(c.r[4], c.r[29].w[0] + 768u);
    set32(c.r[5], 0u + 59u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2E48u); set32(c.r[6], c.r[29].w[0] + 1744u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2E48u) [[unlikely]] return; }
L_002D2E48:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 768u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2E60u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2E60u) [[unlikely]] return; }
L_002D2E60:
    set32(c.r[4], c.r[29].w[0] + 772u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2E6Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2E6Cu) [[unlikely]] return; }
L_002D2E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2E74u); set32(c.r[4], c.r[29].w[0] + 1744u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2E74u) [[unlikely]] return; }
L_002D2E74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30908u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2E94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1740u), c.r[2].w[0]);  if (t) { goto L_002D2EA0; } }
L_002D2E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2E9Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2E9Cu) [[unlikely]] return; }
L_002D2E9C:
    st32((c.r[29].w[0] + 1740u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2EA0:
    set32(c.r[4], c.r[29].w[0] + 760u);
    set32(c.r[5], 0u + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2EB0u); set32(c.r[6], c.r[29].w[0] + 1740u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2EB0u) [[unlikely]] return; }
L_002D2EB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 760u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2EC8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2EC8u) [[unlikely]] return; }
L_002D2EC8:
    set32(c.r[4], c.r[29].w[0] + 764u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2ED4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2ED4u) [[unlikely]] return; }
L_002D2ED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2EDCu); set32(c.r[4], c.r[29].w[0] + 1740u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2EDCu) [[unlikely]] return; }
L_002D2EDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30879u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2EFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1736u), c.r[2].w[0]);  if (t) { goto L_002D2F08; } }
L_002D2EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F04u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2F04u) [[unlikely]] return; }
L_002D2F04:
    st32((c.r[29].w[0] + 1736u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2F08:
    set32(c.r[4], c.r[29].w[0] + 752u);
    set32(c.r[5], 0u + 61u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F18u); set32(c.r[6], c.r[29].w[0] + 1736u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2F18u) [[unlikely]] return; }
L_002D2F18:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 752u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F30u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2F30u) [[unlikely]] return; }
L_002D2F30:
    set32(c.r[4], c.r[29].w[0] + 756u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2F3Cu) [[unlikely]] return; }
L_002D2F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F44u); set32(c.r[4], c.r[29].w[0] + 1736u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2F44u) [[unlikely]] return; }
L_002D2F44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30861u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2F64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1732u), c.r[2].w[0]);  if (t) { goto L_002D2F70; } }
L_002D2F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F6Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2F6Cu) [[unlikely]] return; }
L_002D2F6C:
    st32((c.r[29].w[0] + 1732u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2F70:
    set32(c.r[4], c.r[29].w[0] + 744u);
    set32(c.r[5], 0u + 62u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F80u); set32(c.r[6], c.r[29].w[0] + 1732u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2F80u) [[unlikely]] return; }
L_002D2F80:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 744u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F98u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D2F98u) [[unlikely]] return; }
L_002D2F98:
    set32(c.r[4], c.r[29].w[0] + 748u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2FA4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D2FA4u) [[unlikely]] return; }
L_002D2FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2FACu); set32(c.r[4], c.r[29].w[0] + 1732u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D2FACu) [[unlikely]] return; }
L_002D2FAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30840u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D2FCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1728u), c.r[2].w[0]);  if (t) { goto L_002D2FD8; } }
L_002D2FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2FD4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D2FD4u) [[unlikely]] return; }
L_002D2FD4:
    st32((c.r[29].w[0] + 1728u), c.r[2].w[0]);
    c.budget -= 1;
L_002D2FD8:
    set32(c.r[4], c.r[29].w[0] + 736u);
    set32(c.r[5], 0u + 63u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2FE8u); set32(c.r[6], c.r[29].w[0] + 1728u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D2FE8u) [[unlikely]] return; }
L_002D2FE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 736u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3000u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3000u) [[unlikely]] return; }
L_002D3000:
    set32(c.r[4], c.r[29].w[0] + 740u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D300Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D300Cu) [[unlikely]] return; }
L_002D300C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3014u); set32(c.r[4], c.r[29].w[0] + 1728u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3014u) [[unlikely]] return; }
L_002D3014:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30813u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3034; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1724u), c.r[2].w[0]);  if (t) { goto L_002D3040; } }
L_002D3034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D303Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D303Cu) [[unlikely]] return; }
L_002D303C:
    st32((c.r[29].w[0] + 1724u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3040:
    set32(c.r[4], c.r[29].w[0] + 728u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3050u); set32(c.r[6], c.r[29].w[0] + 1724u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3050u) [[unlikely]] return; }
L_002D3050:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 728u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3068u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3068u) [[unlikely]] return; }
L_002D3068:
    set32(c.r[4], c.r[29].w[0] + 732u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3074u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3074u) [[unlikely]] return; }
L_002D3074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D307Cu); set32(c.r[4], c.r[29].w[0] + 1724u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D307Cu) [[unlikely]] return; }
L_002D307C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30783u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D309C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1720u), c.r[2].w[0]);  if (t) { goto L_002D30A8; } }
L_002D309C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D30A4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D30A4u) [[unlikely]] return; }
L_002D30A4:
    st32((c.r[29].w[0] + 1720u), c.r[2].w[0]);
    c.budget -= 1;
L_002D30A8:
    set32(c.r[4], c.r[29].w[0] + 720u);
    set32(c.r[5], 0u + 65u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D30B8u); set32(c.r[6], c.r[29].w[0] + 1720u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D30B8u) [[unlikely]] return; }
L_002D30B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 720u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D30D0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D30D0u) [[unlikely]] return; }
L_002D30D0:
    set32(c.r[4], c.r[29].w[0] + 724u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D30DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D30DCu) [[unlikely]] return; }
L_002D30DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D30E4u); set32(c.r[4], c.r[29].w[0] + 1720u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D30E4u) [[unlikely]] return; }
L_002D30E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30764u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3104; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1716u), c.r[2].w[0]);  if (t) { goto L_002D3110; } }
L_002D3104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D310Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D310Cu) [[unlikely]] return; }
L_002D310C:
    st32((c.r[29].w[0] + 1716u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3110:
    set32(c.r[4], c.r[29].w[0] + 712u);
    set32(c.r[5], 0u + 66u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3120u); set32(c.r[6], c.r[29].w[0] + 1716u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3120u) [[unlikely]] return; }
L_002D3120:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 712u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3138u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3138u) [[unlikely]] return; }
L_002D3138:
    set32(c.r[4], c.r[29].w[0] + 716u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3144u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3144u) [[unlikely]] return; }
L_002D3144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D314Cu); set32(c.r[4], c.r[29].w[0] + 1716u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D314Cu) [[unlikely]] return; }
L_002D314C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30742u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D316C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1712u), c.r[2].w[0]);  if (t) { goto L_002D3178; } }
L_002D316C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3174u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3174u) [[unlikely]] return; }
L_002D3174:
    st32((c.r[29].w[0] + 1712u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3178:
    set32(c.r[4], c.r[29].w[0] + 704u);
    set32(c.r[5], 0u + 67u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3188u); set32(c.r[6], c.r[29].w[0] + 1712u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3188u) [[unlikely]] return; }
L_002D3188:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 704u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D31A0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D31A0u) [[unlikely]] return; }
L_002D31A0:
    set32(c.r[4], c.r[29].w[0] + 708u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D31ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D31ACu) [[unlikely]] return; }
L_002D31AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D31B4u); set32(c.r[4], c.r[29].w[0] + 1712u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D31B4u) [[unlikely]] return; }
L_002D31B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30714u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D31D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1708u), c.r[2].w[0]);  if (t) { goto L_002D31E0; } }
L_002D31D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D31DCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D31DCu) [[unlikely]] return; }
L_002D31DC:
    st32((c.r[29].w[0] + 1708u), c.r[2].w[0]);
    c.budget -= 1;
L_002D31E0:
    set32(c.r[4], c.r[29].w[0] + 696u);
    set32(c.r[5], 0u + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D31F0u); set32(c.r[6], c.r[29].w[0] + 1708u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D31F0u) [[unlikely]] return; }
L_002D31F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 696u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3208u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3208u) [[unlikely]] return; }
L_002D3208:
    set32(c.r[4], c.r[29].w[0] + 700u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3214u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3214u) [[unlikely]] return; }
L_002D3214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D321Cu); set32(c.r[4], c.r[29].w[0] + 1708u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D321Cu) [[unlikely]] return; }
L_002D321C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30683u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D323C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1704u), c.r[2].w[0]);  if (t) { goto L_002D3248; } }
L_002D323C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3244u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3244u) [[unlikely]] return; }
L_002D3244:
    st32((c.r[29].w[0] + 1704u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3248:
    set32(c.r[4], c.r[29].w[0] + 688u);
    set32(c.r[5], 0u + 69u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3258u); set32(c.r[6], c.r[29].w[0] + 1704u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3258u) [[unlikely]] return; }
L_002D3258:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 688u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3270u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3270u) [[unlikely]] return; }
L_002D3270:
    set32(c.r[4], c.r[29].w[0] + 692u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D327Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D327Cu) [[unlikely]] return; }
L_002D327C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3284u); set32(c.r[4], c.r[29].w[0] + 1704u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3284u) [[unlikely]] return; }
L_002D3284:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30672u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D32A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1700u), c.r[2].w[0]);  if (t) { goto L_002D32B0; } }
L_002D32A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D32ACu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D32ACu) [[unlikely]] return; }
L_002D32AC:
    st32((c.r[29].w[0] + 1700u), c.r[2].w[0]);
    c.budget -= 1;
L_002D32B0:
    set32(c.r[4], c.r[29].w[0] + 680u);
    set32(c.r[5], 0u + 70u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D32C0u); set32(c.r[6], c.r[29].w[0] + 1700u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D32C0u) [[unlikely]] return; }
L_002D32C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 680u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D32D8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D32D8u) [[unlikely]] return; }
L_002D32D8:
    set32(c.r[4], c.r[29].w[0] + 684u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D32E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D32E4u) [[unlikely]] return; }
L_002D32E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D32ECu); set32(c.r[4], c.r[29].w[0] + 1700u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D32ECu) [[unlikely]] return; }
L_002D32EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30661u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D330C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1696u), c.r[2].w[0]);  if (t) { goto L_002D3318; } }
L_002D330C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3314u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3314u) [[unlikely]] return; }
L_002D3314:
    st32((c.r[29].w[0] + 1696u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3318:
    set32(c.r[4], c.r[29].w[0] + 672u);
    set32(c.r[5], 0u + 71u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3328u); set32(c.r[6], c.r[29].w[0] + 1696u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3328u) [[unlikely]] return; }
L_002D3328:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 672u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3340u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3340u) [[unlikely]] return; }
L_002D3340:
    set32(c.r[4], c.r[29].w[0] + 676u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D334Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D334Cu) [[unlikely]] return; }
L_002D334C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3354u); set32(c.r[4], c.r[29].w[0] + 1696u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3354u) [[unlikely]] return; }
L_002D3354:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30650u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3374; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1692u), c.r[2].w[0]);  if (t) { goto L_002D3380; } }
L_002D3374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D337Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D337Cu) [[unlikely]] return; }
L_002D337C:
    st32((c.r[29].w[0] + 1692u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3380:
    set32(c.r[4], c.r[29].w[0] + 664u);
    set32(c.r[5], 0u + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3390u); set32(c.r[6], c.r[29].w[0] + 1692u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3390u) [[unlikely]] return; }
L_002D3390:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 664u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D33A8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D33A8u) [[unlikely]] return; }
L_002D33A8:
    set32(c.r[4], c.r[29].w[0] + 668u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D33B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D33B4u) [[unlikely]] return; }
L_002D33B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D33BCu); set32(c.r[4], c.r[29].w[0] + 1692u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D33BCu) [[unlikely]] return; }
L_002D33BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30639u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D33DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1688u), c.r[2].w[0]);  if (t) { goto L_002D33E8; } }
L_002D33DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D33E4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D33E4u) [[unlikely]] return; }
L_002D33E4:
    st32((c.r[29].w[0] + 1688u), c.r[2].w[0]);
    c.budget -= 1;
L_002D33E8:
    set32(c.r[4], c.r[29].w[0] + 656u);
    set32(c.r[5], 0u + 73u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D33F8u); set32(c.r[6], c.r[29].w[0] + 1688u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D33F8u) [[unlikely]] return; }
L_002D33F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 656u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3410u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3410u) [[unlikely]] return; }
L_002D3410:
    set32(c.r[4], c.r[29].w[0] + 660u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D341Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D341Cu) [[unlikely]] return; }
L_002D341C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3424u); set32(c.r[4], c.r[29].w[0] + 1688u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3424u) [[unlikely]] return; }
L_002D3424:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30623u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3444; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1684u), c.r[2].w[0]);  if (t) { goto L_002D3450; } }
L_002D3444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D344Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D344Cu) [[unlikely]] return; }
L_002D344C:
    st32((c.r[29].w[0] + 1684u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3450:
    set32(c.r[4], c.r[29].w[0] + 648u);
    set32(c.r[5], 0u + 73u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3460u); set32(c.r[6], c.r[29].w[0] + 1684u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3460u) [[unlikely]] return; }
L_002D3460:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 648u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3478u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3478u) [[unlikely]] return; }
L_002D3478:
    set32(c.r[4], c.r[29].w[0] + 652u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3484u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3484u) [[unlikely]] return; }
L_002D3484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D348Cu); set32(c.r[4], c.r[29].w[0] + 1684u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D348Cu) [[unlikely]] return; }
L_002D348C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30615u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D34AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1680u), c.r[2].w[0]);  if (t) { goto L_002D34B8; } }
L_002D34AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D34B4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D34B4u) [[unlikely]] return; }
L_002D34B4:
    st32((c.r[29].w[0] + 1680u), c.r[2].w[0]);
    c.budget -= 1;
L_002D34B8:
    set32(c.r[4], c.r[29].w[0] + 640u);
    set32(c.r[5], 0u + 74u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D34C8u); set32(c.r[6], c.r[29].w[0] + 1680u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D34C8u) [[unlikely]] return; }
L_002D34C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 640u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D34E0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D34E0u) [[unlikely]] return; }
L_002D34E0:
    set32(c.r[4], c.r[29].w[0] + 644u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D34ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D34ECu) [[unlikely]] return; }
L_002D34EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D34F4u); set32(c.r[4], c.r[29].w[0] + 1680u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D34F4u) [[unlikely]] return; }
L_002D34F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30599u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3514; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1676u), c.r[2].w[0]);  if (t) { goto L_002D3520; } }
L_002D3514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D351Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D351Cu) [[unlikely]] return; }
L_002D351C:
    st32((c.r[29].w[0] + 1676u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3520:
    set32(c.r[4], c.r[29].w[0] + 632u);
    set32(c.r[5], 0u + 74u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3530u); set32(c.r[6], c.r[29].w[0] + 1676u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3530u) [[unlikely]] return; }
L_002D3530:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 632u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3548u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3548u) [[unlikely]] return; }
L_002D3548:
    set32(c.r[4], c.r[29].w[0] + 636u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3554u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3554u) [[unlikely]] return; }
L_002D3554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D355Cu); set32(c.r[4], c.r[29].w[0] + 1676u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D355Cu) [[unlikely]] return; }
L_002D355C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30591u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D357C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1672u), c.r[2].w[0]);  if (t) { goto L_002D3588; } }
L_002D357C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3584u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3584u) [[unlikely]] return; }
L_002D3584:
    st32((c.r[29].w[0] + 1672u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3588:
    set32(c.r[4], c.r[29].w[0] + 624u);
    set32(c.r[5], 0u + 75u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3598u); set32(c.r[6], c.r[29].w[0] + 1672u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3598u) [[unlikely]] return; }
L_002D3598:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 624u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D35B0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D35B0u) [[unlikely]] return; }
L_002D35B0:
    set32(c.r[4], c.r[29].w[0] + 628u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D35BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D35BCu) [[unlikely]] return; }
L_002D35BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D35C4u); set32(c.r[4], c.r[29].w[0] + 1672u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D35C4u) [[unlikely]] return; }
L_002D35C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30574u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D35E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1668u), c.r[2].w[0]);  if (t) { goto L_002D35F0; } }
L_002D35E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D35ECu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D35ECu) [[unlikely]] return; }
L_002D35EC:
    st32((c.r[29].w[0] + 1668u), c.r[2].w[0]);
    c.budget -= 1;
L_002D35F0:
    set32(c.r[4], c.r[29].w[0] + 616u);
    set32(c.r[5], 0u + 75u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3600u); set32(c.r[6], c.r[29].w[0] + 1668u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3600u) [[unlikely]] return; }
L_002D3600:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 616u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3618u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3618u) [[unlikely]] return; }
L_002D3618:
    set32(c.r[4], c.r[29].w[0] + 620u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3624u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3624u) [[unlikely]] return; }
L_002D3624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D362Cu); set32(c.r[4], c.r[29].w[0] + 1668u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D362Cu) [[unlikely]] return; }
L_002D362C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30565u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D364C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1664u), c.r[2].w[0]);  if (t) { goto L_002D3658; } }
L_002D364C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3654u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3654u) [[unlikely]] return; }
L_002D3654:
    st32((c.r[29].w[0] + 1664u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3658:
    set32(c.r[4], c.r[29].w[0] + 608u);
    set32(c.r[5], 0u + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3668u); set32(c.r[6], c.r[29].w[0] + 1664u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3668u) [[unlikely]] return; }
L_002D3668:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 608u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3680u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3680u) [[unlikely]] return; }
L_002D3680:
    set32(c.r[4], c.r[29].w[0] + 612u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D368Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D368Cu) [[unlikely]] return; }
L_002D368C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3694u); set32(c.r[4], c.r[29].w[0] + 1664u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3694u) [[unlikely]] return; }
L_002D3694:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30548u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D36B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1660u), c.r[2].w[0]);  if (t) { goto L_002D36C0; } }
L_002D36B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D36BCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D36BCu) [[unlikely]] return; }
L_002D36BC:
    st32((c.r[29].w[0] + 1660u), c.r[2].w[0]);
    c.budget -= 1;
L_002D36C0:
    set32(c.r[4], c.r[29].w[0] + 600u);
    set32(c.r[5], 0u + 77u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D36D0u); set32(c.r[6], c.r[29].w[0] + 1660u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D36D0u) [[unlikely]] return; }
L_002D36D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 600u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D36E8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D36E8u) [[unlikely]] return; }
L_002D36E8:
    set32(c.r[4], c.r[29].w[0] + 604u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D36F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D36F4u) [[unlikely]] return; }
L_002D36F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D36FCu); set32(c.r[4], c.r[29].w[0] + 1660u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D36FCu) [[unlikely]] return; }
L_002D36FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30534u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D371C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1656u), c.r[2].w[0]);  if (t) { goto L_002D3728; } }
L_002D371C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3724u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3724u) [[unlikely]] return; }
L_002D3724:
    st32((c.r[29].w[0] + 1656u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3728:
    set32(c.r[4], c.r[29].w[0] + 592u);
    set32(c.r[5], 0u + 77u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3738u); set32(c.r[6], c.r[29].w[0] + 1656u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3738u) [[unlikely]] return; }
L_002D3738:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 592u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3750u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3750u) [[unlikely]] return; }
L_002D3750:
    set32(c.r[4], c.r[29].w[0] + 596u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D375Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D375Cu) [[unlikely]] return; }
L_002D375C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3764u); set32(c.r[4], c.r[29].w[0] + 1656u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3764u) [[unlikely]] return; }
L_002D3764:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30520u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3784; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1652u), c.r[2].w[0]);  if (t) { goto L_002D3790; } }
L_002D3784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D378Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D378Cu) [[unlikely]] return; }
L_002D378C:
    st32((c.r[29].w[0] + 1652u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3790:
    set32(c.r[4], c.r[29].w[0] + 584u);
    set32(c.r[5], 0u + 78u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D37A0u); set32(c.r[6], c.r[29].w[0] + 1652u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D37A0u) [[unlikely]] return; }
L_002D37A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 584u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D37B8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D37B8u) [[unlikely]] return; }
L_002D37B8:
    set32(c.r[4], c.r[29].w[0] + 588u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D37C4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D37C4u) [[unlikely]] return; }
L_002D37C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D37CCu); set32(c.r[4], c.r[29].w[0] + 1652u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D37CCu) [[unlikely]] return; }
L_002D37CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30513u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D37EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1648u), c.r[2].w[0]);  if (t) { goto L_002D37F8; } }
L_002D37EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D37F4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D37F4u) [[unlikely]] return; }
L_002D37F4:
    st32((c.r[29].w[0] + 1648u), c.r[2].w[0]);
    c.budget -= 1;
L_002D37F8:
    set32(c.r[4], c.r[29].w[0] + 576u);
    set32(c.r[5], 0u + 79u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3808u); set32(c.r[6], c.r[29].w[0] + 1648u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3808u) [[unlikely]] return; }
L_002D3808:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 576u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3820u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3820u) [[unlikely]] return; }
L_002D3820:
    set32(c.r[4], c.r[29].w[0] + 580u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D382Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D382Cu) [[unlikely]] return; }
L_002D382C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3834u); set32(c.r[4], c.r[29].w[0] + 1648u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3834u) [[unlikely]] return; }
L_002D3834:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30506u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3854; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1644u), c.r[2].w[0]);  if (t) { goto L_002D3860; } }
L_002D3854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D385Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D385Cu) [[unlikely]] return; }
L_002D385C:
    st32((c.r[29].w[0] + 1644u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3860:
    set32(c.r[4], c.r[29].w[0] + 568u);
    set32(c.r[5], 0u + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3870u); set32(c.r[6], c.r[29].w[0] + 1644u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3870u) [[unlikely]] return; }
L_002D3870:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 568u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3888u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3888u) [[unlikely]] return; }
L_002D3888:
    set32(c.r[4], c.r[29].w[0] + 572u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3894u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3894u) [[unlikely]] return; }
L_002D3894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D389Cu); set32(c.r[4], c.r[29].w[0] + 1644u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D389Cu) [[unlikely]] return; }
L_002D389C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30496u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D38BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1640u), c.r[2].w[0]);  if (t) { goto L_002D38C8; } }
L_002D38BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D38C4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D38C4u) [[unlikely]] return; }
L_002D38C4:
    st32((c.r[29].w[0] + 1640u), c.r[2].w[0]);
    c.budget -= 1;
L_002D38C8:
    set32(c.r[4], c.r[29].w[0] + 560u);
    set32(c.r[5], 0u + 81u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D38D8u); set32(c.r[6], c.r[29].w[0] + 1640u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D38D8u) [[unlikely]] return; }
L_002D38D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 560u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D38F0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D38F0u) [[unlikely]] return; }
L_002D38F0:
    set32(c.r[4], c.r[29].w[0] + 564u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D38FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D38FCu) [[unlikely]] return; }
L_002D38FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3904u); set32(c.r[4], c.r[29].w[0] + 1640u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3904u) [[unlikely]] return; }
L_002D3904:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30486u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3924; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1636u), c.r[2].w[0]);  if (t) { goto L_002D3930; } }
L_002D3924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D392Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D392Cu) [[unlikely]] return; }
L_002D392C:
    st32((c.r[29].w[0] + 1636u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3930:
    set32(c.r[4], c.r[29].w[0] + 552u);
    set32(c.r[5], 0u + 82u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3940u); set32(c.r[6], c.r[29].w[0] + 1636u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3940u) [[unlikely]] return; }
L_002D3940:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 552u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3958u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3958u) [[unlikely]] return; }
L_002D3958:
    set32(c.r[4], c.r[29].w[0] + 556u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3964u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3964u) [[unlikely]] return; }
L_002D3964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D396Cu); set32(c.r[4], c.r[29].w[0] + 1636u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D396Cu) [[unlikely]] return; }
L_002D396C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30481u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D398C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1632u), c.r[2].w[0]);  if (t) { goto L_002D3998; } }
L_002D398C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3994u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3994u) [[unlikely]] return; }
L_002D3994:
    st32((c.r[29].w[0] + 1632u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3998:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], 0u + 83u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D39A8u); set32(c.r[6], c.r[29].w[0] + 1632u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D39A8u) [[unlikely]] return; }
L_002D39A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 544u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D39C0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D39C0u) [[unlikely]] return; }
L_002D39C0:
    set32(c.r[4], c.r[29].w[0] + 548u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D39CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D39CCu) [[unlikely]] return; }
L_002D39CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D39D4u); set32(c.r[4], c.r[29].w[0] + 1632u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D39D4u) [[unlikely]] return; }
L_002D39D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30472u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D39F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1628u), c.r[2].w[0]);  if (t) { goto L_002D3A00; } }
L_002D39F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D39FCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D39FCu) [[unlikely]] return; }
L_002D39FC:
    st32((c.r[29].w[0] + 1628u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3A00:
    set32(c.r[4], c.r[29].w[0] + 536u);
    set32(c.r[5], 0u + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3A10u); set32(c.r[6], c.r[29].w[0] + 1628u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3A10u) [[unlikely]] return; }
L_002D3A10:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 536u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3A28u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3A28u) [[unlikely]] return; }
L_002D3A28:
    set32(c.r[4], c.r[29].w[0] + 540u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3A34u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3A34u) [[unlikely]] return; }
L_002D3A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3A3Cu); set32(c.r[4], c.r[29].w[0] + 1628u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3A3Cu) [[unlikely]] return; }
L_002D3A3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30463u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3A5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1624u), c.r[2].w[0]);  if (t) { goto L_002D3A68; } }
L_002D3A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3A64u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3A64u) [[unlikely]] return; }
L_002D3A64:
    st32((c.r[29].w[0] + 1624u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3A68:
    set32(c.r[4], c.r[29].w[0] + 528u);
    set32(c.r[5], 0u + 85u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3A78u); set32(c.r[6], c.r[29].w[0] + 1624u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3A78u) [[unlikely]] return; }
L_002D3A78:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 528u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3A90u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3A90u) [[unlikely]] return; }
L_002D3A90:
    set32(c.r[4], c.r[29].w[0] + 532u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3A9Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3A9Cu) [[unlikely]] return; }
L_002D3A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3AA4u); set32(c.r[4], c.r[29].w[0] + 1624u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3AA4u) [[unlikely]] return; }
L_002D3AA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30454u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3AC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1620u), c.r[2].w[0]);  if (t) { goto L_002D3AD0; } }
L_002D3AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3ACCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3ACCu) [[unlikely]] return; }
L_002D3ACC:
    st32((c.r[29].w[0] + 1620u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3AD0:
    set32(c.r[4], c.r[29].w[0] + 520u);
    set32(c.r[5], 0u + 86u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3AE0u); set32(c.r[6], c.r[29].w[0] + 1620u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3AE0u) [[unlikely]] return; }
L_002D3AE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 520u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3AF8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3AF8u) [[unlikely]] return; }
L_002D3AF8:
    set32(c.r[4], c.r[29].w[0] + 524u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3B04u) [[unlikely]] return; }
L_002D3B04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B0Cu); set32(c.r[4], c.r[29].w[0] + 1620u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3B0Cu) [[unlikely]] return; }
L_002D3B0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30437u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3B2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1616u), c.r[2].w[0]);  if (t) { goto L_002D3B38; } }
L_002D3B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B34u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3B34u) [[unlikely]] return; }
L_002D3B34:
    st32((c.r[29].w[0] + 1616u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3B38:
    set32(c.r[4], c.r[29].w[0] + 512u);
    set32(c.r[5], 0u + 87u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B48u); set32(c.r[6], c.r[29].w[0] + 1616u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3B48u) [[unlikely]] return; }
L_002D3B48:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 512u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B60u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3B60u) [[unlikely]] return; }
L_002D3B60:
    set32(c.r[4], c.r[29].w[0] + 516u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B6Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3B6Cu) [[unlikely]] return; }
L_002D3B6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B74u); set32(c.r[4], c.r[29].w[0] + 1616u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3B74u) [[unlikely]] return; }
L_002D3B74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30424u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3B94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1612u), c.r[2].w[0]);  if (t) { goto L_002D3BA0; } }
L_002D3B94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B9Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3B9Cu) [[unlikely]] return; }
L_002D3B9C:
    st32((c.r[29].w[0] + 1612u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3BA0:
    set32(c.r[4], c.r[29].w[0] + 504u);
    set32(c.r[5], 0u + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3BB0u); set32(c.r[6], c.r[29].w[0] + 1612u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3BB0u) [[unlikely]] return; }
L_002D3BB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 504u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3BC8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3BC8u) [[unlikely]] return; }
L_002D3BC8:
    set32(c.r[4], c.r[29].w[0] + 508u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3BD4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3BD4u) [[unlikely]] return; }
L_002D3BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3BDCu); set32(c.r[4], c.r[29].w[0] + 1612u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3BDCu) [[unlikely]] return; }
L_002D3BDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30403u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3BFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1608u), c.r[2].w[0]);  if (t) { goto L_002D3C08; } }
L_002D3BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C04u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3C04u) [[unlikely]] return; }
L_002D3C04:
    st32((c.r[29].w[0] + 1608u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3C08:
    set32(c.r[4], c.r[29].w[0] + 496u);
    set32(c.r[5], 0u + 93u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C18u); set32(c.r[6], c.r[29].w[0] + 1608u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3C18u) [[unlikely]] return; }
L_002D3C18:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 496u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C30u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3C30u) [[unlikely]] return; }
L_002D3C30:
    set32(c.r[4], c.r[29].w[0] + 500u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3C3Cu) [[unlikely]] return; }
L_002D3C3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C44u); set32(c.r[4], c.r[29].w[0] + 1608u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3C44u) [[unlikely]] return; }
L_002D3C44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30379u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3C64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1604u), c.r[2].w[0]);  if (t) { goto L_002D3C70; } }
L_002D3C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C6Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3C6Cu) [[unlikely]] return; }
L_002D3C6C:
    st32((c.r[29].w[0] + 1604u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3C70:
    set32(c.r[4], c.r[29].w[0] + 488u);
    set32(c.r[5], 0u + 94u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C80u); set32(c.r[6], c.r[29].w[0] + 1604u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3C80u) [[unlikely]] return; }
L_002D3C80:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 488u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C98u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3C98u) [[unlikely]] return; }
L_002D3C98:
    set32(c.r[4], c.r[29].w[0] + 492u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3CA4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3CA4u) [[unlikely]] return; }
L_002D3CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3CACu); set32(c.r[4], c.r[29].w[0] + 1604u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3CACu) [[unlikely]] return; }
L_002D3CAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30349u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3CCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1600u), c.r[2].w[0]);  if (t) { goto L_002D3CD8; } }
L_002D3CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3CD4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3CD4u) [[unlikely]] return; }
L_002D3CD4:
    st32((c.r[29].w[0] + 1600u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3CD8:
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], 0u + 95u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3CE8u); set32(c.r[6], c.r[29].w[0] + 1600u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3CE8u) [[unlikely]] return; }
L_002D3CE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 480u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3D00u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3D00u) [[unlikely]] return; }
L_002D3D00:
    set32(c.r[4], c.r[29].w[0] + 484u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3D0Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3D0Cu) [[unlikely]] return; }
L_002D3D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3D14u); set32(c.r[4], c.r[29].w[0] + 1600u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3D14u) [[unlikely]] return; }
L_002D3D14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30316u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3D34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1596u), c.r[2].w[0]);  if (t) { goto L_002D3D40; } }
L_002D3D34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3D3Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3D3Cu) [[unlikely]] return; }
L_002D3D3C:
    st32((c.r[29].w[0] + 1596u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3D40:
    set32(c.r[4], c.r[29].w[0] + 472u);
    set32(c.r[5], 0u + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3D50u); set32(c.r[6], c.r[29].w[0] + 1596u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3D50u) [[unlikely]] return; }
L_002D3D50:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 472u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3D68u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3D68u) [[unlikely]] return; }
L_002D3D68:
    set32(c.r[4], c.r[29].w[0] + 476u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3D74u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3D74u) [[unlikely]] return; }
L_002D3D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3D7Cu); set32(c.r[4], c.r[29].w[0] + 1596u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3D7Cu) [[unlikely]] return; }
L_002D3D7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30297u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3D9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1592u), c.r[2].w[0]);  if (t) { goto L_002D3DA8; } }
L_002D3D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3DA4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3DA4u) [[unlikely]] return; }
L_002D3DA4:
    st32((c.r[29].w[0] + 1592u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3DA8:
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[5], 0u + 89u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3DB8u); set32(c.r[6], c.r[29].w[0] + 1592u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3DB8u) [[unlikely]] return; }
L_002D3DB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 464u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3DD0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3DD0u) [[unlikely]] return; }
L_002D3DD0:
    set32(c.r[4], c.r[29].w[0] + 468u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3DDCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3DDCu) [[unlikely]] return; }
L_002D3DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3DE4u); set32(c.r[4], c.r[29].w[0] + 1592u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3DE4u) [[unlikely]] return; }
L_002D3DE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30275u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3E04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1588u), c.r[2].w[0]);  if (t) { goto L_002D3E10; } }
L_002D3E04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3E0Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3E0Cu) [[unlikely]] return; }
L_002D3E0C:
    st32((c.r[29].w[0] + 1588u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3E10:
    set32(c.r[4], c.r[29].w[0] + 456u);
    set32(c.r[5], 0u + 90u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3E20u); set32(c.r[6], c.r[29].w[0] + 1588u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3E20u) [[unlikely]] return; }
L_002D3E20:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 456u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3E38u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3E38u) [[unlikely]] return; }
L_002D3E38:
    set32(c.r[4], c.r[29].w[0] + 460u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3E44u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3E44u) [[unlikely]] return; }
L_002D3E44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3E4Cu); set32(c.r[4], c.r[29].w[0] + 1588u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3E4Cu) [[unlikely]] return; }
L_002D3E4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30247u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3E6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1584u), c.r[2].w[0]);  if (t) { goto L_002D3E78; } }
L_002D3E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3E74u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3E74u) [[unlikely]] return; }
L_002D3E74:
    st32((c.r[29].w[0] + 1584u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3E78:
    set32(c.r[4], c.r[29].w[0] + 448u);
    set32(c.r[5], 0u + 91u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3E88u); set32(c.r[6], c.r[29].w[0] + 1584u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3E88u) [[unlikely]] return; }
L_002D3E88:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 448u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3EA0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3EA0u) [[unlikely]] return; }
L_002D3EA0:
    set32(c.r[4], c.r[29].w[0] + 452u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3EACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3EACu) [[unlikely]] return; }
L_002D3EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3EB4u); set32(c.r[4], c.r[29].w[0] + 1584u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3EB4u) [[unlikely]] return; }
L_002D3EB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30216u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3ED4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1580u), c.r[2].w[0]);  if (t) { goto L_002D3EE0; } }
L_002D3ED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3EDCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3EDCu) [[unlikely]] return; }
L_002D3EDC:
    st32((c.r[29].w[0] + 1580u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3EE0:
    set32(c.r[4], c.r[29].w[0] + 440u);
    set32(c.r[5], 0u + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3EF0u); set32(c.r[6], c.r[29].w[0] + 1580u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3EF0u) [[unlikely]] return; }
L_002D3EF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 440u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3F08u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3F08u) [[unlikely]] return; }
L_002D3F08:
    set32(c.r[4], c.r[29].w[0] + 444u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3F14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3F14u) [[unlikely]] return; }
L_002D3F14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3F1Cu); set32(c.r[4], c.r[29].w[0] + 1580u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3F1Cu) [[unlikely]] return; }
L_002D3F1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30206u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3F3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1576u), c.r[2].w[0]);  if (t) { goto L_002D3F48; } }
L_002D3F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3F44u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3F44u) [[unlikely]] return; }
L_002D3F44:
    st32((c.r[29].w[0] + 1576u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3F48:
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[5], 0u + 97u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3F58u); set32(c.r[6], c.r[29].w[0] + 1576u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3F58u) [[unlikely]] return; }
L_002D3F58:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 432u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3F70u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3F70u) [[unlikely]] return; }
L_002D3F70:
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3F7Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3F7Cu) [[unlikely]] return; }
L_002D3F7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3F84u); set32(c.r[4], c.r[29].w[0] + 1576u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3F84u) [[unlikely]] return; }
L_002D3F84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30193u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D3FA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1572u), c.r[2].w[0]);  if (t) { goto L_002D3FB0; } }
L_002D3FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3FACu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D3FACu) [[unlikely]] return; }
L_002D3FAC:
    st32((c.r[29].w[0] + 1572u), c.r[2].w[0]);
    c.budget -= 1;
L_002D3FB0:
    set32(c.r[4], c.r[29].w[0] + 424u);
    set32(c.r[5], 0u + 98u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3FC0u); set32(c.r[6], c.r[29].w[0] + 1572u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D3FC0u) [[unlikely]] return; }
L_002D3FC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 424u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3FD8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D3FD8u) [[unlikely]] return; }
L_002D3FD8:
    set32(c.r[4], c.r[29].w[0] + 428u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3FE4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D3FE4u) [[unlikely]] return; }
L_002D3FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3FECu); set32(c.r[4], c.r[29].w[0] + 1572u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D3FECu) [[unlikely]] return; }
L_002D3FEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30174u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0075(c, 2u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0075(c, 1u, depth);
}

}
