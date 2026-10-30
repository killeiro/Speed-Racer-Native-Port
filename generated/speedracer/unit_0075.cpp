#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0075[4096] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0,
    0, 0, 0, 0, 15, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0,
    0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 27, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0,
    45, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 52,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 70, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 76,
    0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0,
    0, 0, 0, 95, 0, 0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106,
    0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112,
    0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0,
    0, 137, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0,
    0, 0, 0, 162, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0,
    168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186,
    0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192,
    0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 199, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0,
    0, 217, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 242, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 248,
    0, 249, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0,
    0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0,
    0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0,
    0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0,
    0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0,
    0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0,
    0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0,
    0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0,
    0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0,
    0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0,
    0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0,
    0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    402, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0,
    0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411,
    0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0,
    419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0,
    425, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0,
    431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0,
    0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0,
    0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0,
    0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0,
    461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0,
    0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0,
    470, 0, 0, 0, 471, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0,
    0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0,
    493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496,
    0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 500,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0,
    0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 0, 518, 0, 0, 0, 0, 519,
    0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 541, 0,
    0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 554,
};

void unit_0075(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002D4000;
    case 2u: goto L_002D400C;
    case 3u: goto L_002D4014;
    case 4u: goto L_002D4028;
    case 5u: goto L_002D4040;
    case 6u: goto L_002D404C;
    case 7u: goto L_002D4054;
    case 8u: goto L_002D407C;
    case 9u: goto L_002D4090;
    case 10u: goto L_002D40A8;
    case 11u: goto L_002D40B4;
    case 12u: goto L_002D40BC;
    case 13u: goto L_002D40E4;
    case 14u: goto L_002D40F8;
    case 15u: goto L_002D4110;
    case 16u: goto L_002D411C;
    case 17u: goto L_002D4124;
    case 18u: goto L_002D414C;
    case 19u: goto L_002D4160;
    case 20u: goto L_002D4178;
    case 21u: goto L_002D4184;
    case 22u: goto L_002D418C;
    case 23u: goto L_002D41B4;
    case 24u: goto L_002D41C8;
    case 25u: goto L_002D41E0;
    case 26u: goto L_002D41EC;
    case 27u: goto L_002D41F4;
    case 28u: goto L_002D421C;
    case 29u: goto L_002D4230;
    case 30u: goto L_002D4248;
    case 31u: goto L_002D4254;
    case 32u: goto L_002D425C;
    case 33u: goto L_002D4284;
    case 34u: goto L_002D4298;
    case 35u: goto L_002D42B0;
    case 36u: goto L_002D42BC;
    case 37u: goto L_002D42C4;
    case 38u: goto L_002D42EC;
    case 39u: goto L_002D4300;
    case 40u: goto L_002D4318;
    case 41u: goto L_002D4324;
    case 42u: goto L_002D432C;
    case 43u: goto L_002D4354;
    case 44u: goto L_002D4368;
    case 45u: goto L_002D4380;
    case 46u: goto L_002D438C;
    case 47u: goto L_002D4394;
    case 48u: goto L_002D43BC;
    case 49u: goto L_002D43D0;
    case 50u: goto L_002D43E8;
    case 51u: goto L_002D43F4;
    case 52u: goto L_002D43FC;
    case 53u: goto L_002D4424;
    case 54u: goto L_002D4438;
    case 55u: goto L_002D4450;
    case 56u: goto L_002D445C;
    case 57u: goto L_002D4464;
    case 58u: goto L_002D448C;
    case 59u: goto L_002D44A0;
    case 60u: goto L_002D44B8;
    case 61u: goto L_002D44C4;
    case 62u: goto L_002D44CC;
    case 63u: goto L_002D44F4;
    case 64u: goto L_002D4508;
    case 65u: goto L_002D4520;
    case 66u: goto L_002D452C;
    case 67u: goto L_002D4534;
    case 68u: goto L_002D455C;
    case 69u: goto L_002D4570;
    case 70u: goto L_002D4588;
    case 71u: goto L_002D4594;
    case 72u: goto L_002D459C;
    case 73u: goto L_002D45C4;
    case 74u: goto L_002D45D8;
    case 75u: goto L_002D45F0;
    case 76u: goto L_002D45FC;
    case 77u: goto L_002D4604;
    case 78u: goto L_002D462C;
    case 79u: goto L_002D4640;
    case 80u: goto L_002D4658;
    case 81u: goto L_002D4664;
    case 82u: goto L_002D466C;
    case 83u: goto L_002D4694;
    case 84u: goto L_002D46A8;
    case 85u: goto L_002D46C0;
    case 86u: goto L_002D46CC;
    case 87u: goto L_002D46D4;
    case 88u: goto L_002D46FC;
    case 89u: goto L_002D4710;
    case 90u: goto L_002D4728;
    case 91u: goto L_002D4734;
    case 92u: goto L_002D473C;
    case 93u: goto L_002D4764;
    case 94u: goto L_002D4778;
    case 95u: goto L_002D478C;
    case 96u: goto L_002D4798;
    case 97u: goto L_002D47A0;
    case 98u: goto L_002D47B4;
    case 99u: goto L_002D47D4;
    case 100u: goto L_002D4800;
    case 101u: goto L_002D4814;
    case 102u: goto L_002D482C;
    case 103u: goto L_002D4838;
    case 104u: goto L_002D4840;
    case 105u: goto L_002D4868;
    case 106u: goto L_002D487C;
    case 107u: goto L_002D4894;
    case 108u: goto L_002D48A0;
    case 109u: goto L_002D48A8;
    case 110u: goto L_002D48D0;
    case 111u: goto L_002D48E4;
    case 112u: goto L_002D48FC;
    case 113u: goto L_002D4908;
    case 114u: goto L_002D4910;
    case 115u: goto L_002D4938;
    case 116u: goto L_002D494C;
    case 117u: goto L_002D4964;
    case 118u: goto L_002D4970;
    case 119u: goto L_002D4978;
    case 120u: goto L_002D49A0;
    case 121u: goto L_002D49B4;
    case 122u: goto L_002D49CC;
    case 123u: goto L_002D49D8;
    case 124u: goto L_002D49E0;
    case 125u: goto L_002D4A08;
    case 126u: goto L_002D4A1C;
    case 127u: goto L_002D4A34;
    case 128u: goto L_002D4A40;
    case 129u: goto L_002D4A48;
    case 130u: goto L_002D4A70;
    case 131u: goto L_002D4A84;
    case 132u: goto L_002D4A9C;
    case 133u: goto L_002D4AA8;
    case 134u: goto L_002D4AB0;
    case 135u: goto L_002D4AD8;
    case 136u: goto L_002D4AEC;
    case 137u: goto L_002D4B04;
    case 138u: goto L_002D4B10;
    case 139u: goto L_002D4B18;
    case 140u: goto L_002D4B40;
    case 141u: goto L_002D4B54;
    case 142u: goto L_002D4B6C;
    case 143u: goto L_002D4B78;
    case 144u: goto L_002D4B80;
    case 145u: goto L_002D4BA8;
    case 146u: goto L_002D4BBC;
    case 147u: goto L_002D4BD4;
    case 148u: goto L_002D4BE0;
    case 149u: goto L_002D4BE8;
    case 150u: goto L_002D4C10;
    case 151u: goto L_002D4C24;
    case 152u: goto L_002D4C3C;
    case 153u: goto L_002D4C48;
    case 154u: goto L_002D4C50;
    case 155u: goto L_002D4C78;
    case 156u: goto L_002D4C8C;
    case 157u: goto L_002D4CA4;
    case 158u: goto L_002D4CB0;
    case 159u: goto L_002D4CB8;
    case 160u: goto L_002D4CE0;
    case 161u: goto L_002D4CF4;
    case 162u: goto L_002D4D0C;
    case 163u: goto L_002D4D18;
    case 164u: goto L_002D4D20;
    case 165u: goto L_002D4D48;
    case 166u: goto L_002D4D5C;
    case 167u: goto L_002D4D74;
    case 168u: goto L_002D4D80;
    case 169u: goto L_002D4D88;
    case 170u: goto L_002D4DB0;
    case 171u: goto L_002D4DC4;
    case 172u: goto L_002D4DDC;
    case 173u: goto L_002D4DE8;
    case 174u: goto L_002D4DF0;
    case 175u: goto L_002D4E18;
    case 176u: goto L_002D4E2C;
    case 177u: goto L_002D4E44;
    case 178u: goto L_002D4E50;
    case 179u: goto L_002D4E58;
    case 180u: goto L_002D4E80;
    case 181u: goto L_002D4E94;
    case 182u: goto L_002D4EAC;
    case 183u: goto L_002D4EB8;
    case 184u: goto L_002D4EC0;
    case 185u: goto L_002D4EE8;
    case 186u: goto L_002D4EFC;
    case 187u: goto L_002D4F14;
    case 188u: goto L_002D4F20;
    case 189u: goto L_002D4F28;
    case 190u: goto L_002D4F50;
    case 191u: goto L_002D4F64;
    case 192u: goto L_002D4F7C;
    case 193u: goto L_002D4F88;
    case 194u: goto L_002D4F90;
    case 195u: goto L_002D4FB8;
    case 196u: goto L_002D4FCC;
    case 197u: goto L_002D4FE4;
    case 198u: goto L_002D4FF0;
    case 199u: goto L_002D4FF8;
    case 200u: goto L_002D5020;
    case 201u: goto L_002D5034;
    case 202u: goto L_002D504C;
    case 203u: goto L_002D5058;
    case 204u: goto L_002D5060;
    case 205u: goto L_002D5088;
    case 206u: goto L_002D509C;
    case 207u: goto L_002D50B4;
    case 208u: goto L_002D50C0;
    case 209u: goto L_002D50C8;
    case 210u: goto L_002D50F0;
    case 211u: goto L_002D5104;
    case 212u: goto L_002D511C;
    case 213u: goto L_002D5128;
    case 214u: goto L_002D5130;
    case 215u: goto L_002D5158;
    case 216u: goto L_002D516C;
    case 217u: goto L_002D5184;
    case 218u: goto L_002D5190;
    case 219u: goto L_002D5198;
    case 220u: goto L_002D51C0;
    case 221u: goto L_002D51D4;
    case 222u: goto L_002D51EC;
    case 223u: goto L_002D51F8;
    case 224u: goto L_002D5200;
    case 225u: goto L_002D5228;
    case 226u: goto L_002D523C;
    case 227u: goto L_002D5254;
    case 228u: goto L_002D5260;
    case 229u: goto L_002D5268;
    case 230u: goto L_002D5290;
    case 231u: goto L_002D52A4;
    case 232u: goto L_002D52BC;
    case 233u: goto L_002D52C8;
    case 234u: goto L_002D52D0;
    case 235u: goto L_002D52F8;
    case 236u: goto L_002D530C;
    case 237u: goto L_002D5324;
    case 238u: goto L_002D5330;
    case 239u: goto L_002D5338;
    case 240u: goto L_002D5360;
    case 241u: goto L_002D5374;
    case 242u: goto L_002D538C;
    case 243u: goto L_002D5398;
    case 244u: goto L_002D53A0;
    case 245u: goto L_002D53C8;
    case 246u: goto L_002D53DC;
    case 247u: goto L_002D53F0;
    case 248u: goto L_002D53FC;
    case 249u: goto L_002D5404;
    case 250u: goto L_002D540C;
    case 251u: goto L_002D5420;
    case 252u: goto L_002D5464;
    case 253u: goto L_002D5474;
    case 254u: goto L_002D5494;
    case 255u: goto L_002D54B0;
    case 256u: goto L_002D5620;
    case 257u: goto L_002D5760;
    case 258u: goto L_002D5770;
    case 259u: goto L_002D5778;
    case 260u: goto L_002D5790;
    case 261u: goto L_002D57B4;
    case 262u: goto L_002D57DC;
    case 263u: goto L_002D5800;
    case 264u: goto L_002D5810;
    case 265u: goto L_002D5830;
    case 266u: goto L_002D5860;
    case 267u: goto L_002D5894;
    case 268u: goto L_002D58C0;
    case 269u: goto L_002D58D0;
    case 270u: goto L_002D58F8;
    case 271u: goto L_002D5908;
    case 272u: goto L_002D592C;
    case 273u: goto L_002D5960;
    case 274u: goto L_002D5970;
    case 275u: goto L_002D5990;
    case 276u: goto L_002D59B4;
    case 277u: goto L_002D59E0;
    case 278u: goto L_002D59F0;
    case 279u: goto L_002D5A18;
    case 280u: goto L_002D5A28;
    case 281u: goto L_002D5A4C;
    case 282u: goto L_002D5A80;
    case 283u: goto L_002D5A90;
    case 284u: goto L_002D5AB0;
    case 285u: goto L_002D5AD4;
    case 286u: goto L_002D5B00;
    case 287u: goto L_002D5B10;
    case 288u: goto L_002D5B38;
    case 289u: goto L_002D5B48;
    case 290u: goto L_002D5B6C;
    case 291u: goto L_002D5BA0;
    case 292u: goto L_002D5BB0;
    case 293u: goto L_002D5BD0;
    case 294u: goto L_002D5BF4;
    case 295u: goto L_002D5C20;
    case 296u: goto L_002D5C30;
    case 297u: goto L_002D5C58;
    case 298u: goto L_002D5C68;
    case 299u: goto L_002D5C8C;
    case 300u: goto L_002D5CC0;
    case 301u: goto L_002D5CD0;
    case 302u: goto L_002D5CF0;
    case 303u: goto L_002D5D14;
    case 304u: goto L_002D5D40;
    case 305u: goto L_002D5D50;
    case 306u: goto L_002D5D78;
    case 307u: goto L_002D5D88;
    case 308u: goto L_002D5DAC;
    case 309u: goto L_002D5DE0;
    case 310u: goto L_002D5DF0;
    case 311u: goto L_002D5E10;
    case 312u: goto L_002D5E34;
    case 313u: goto L_002D5E60;
    case 314u: goto L_002D5E70;
    case 315u: goto L_002D5E98;
    case 316u: goto L_002D5EA8;
    case 317u: goto L_002D5ECC;
    case 318u: goto L_002D5F00;
    case 319u: goto L_002D5F10;
    case 320u: goto L_002D5F30;
    case 321u: goto L_002D5F54;
    case 322u: goto L_002D5F80;
    case 323u: goto L_002D5F90;
    case 324u: goto L_002D5FB8;
    case 325u: goto L_002D5FC8;
    case 326u: goto L_002D5FEC;
    case 327u: goto L_002D6020;
    case 328u: goto L_002D6030;
    case 329u: goto L_002D6050;
    case 330u: goto L_002D6074;
    case 331u: goto L_002D60A0;
    case 332u: goto L_002D60B0;
    case 333u: goto L_002D60D8;
    case 334u: goto L_002D60E8;
    case 335u: goto L_002D610C;
    case 336u: goto L_002D6140;
    case 337u: goto L_002D6150;
    case 338u: goto L_002D6170;
    case 339u: goto L_002D6194;
    case 340u: goto L_002D61C0;
    case 341u: goto L_002D61D0;
    case 342u: goto L_002D61F8;
    case 343u: goto L_002D6208;
    case 344u: goto L_002D622C;
    case 345u: goto L_002D6260;
    case 346u: goto L_002D6270;
    case 347u: goto L_002D6290;
    case 348u: goto L_002D62B4;
    case 349u: goto L_002D62E0;
    case 350u: goto L_002D62F0;
    case 351u: goto L_002D6318;
    case 352u: goto L_002D6328;
    case 353u: goto L_002D634C;
    case 354u: goto L_002D6380;
    case 355u: goto L_002D6390;
    case 356u: goto L_002D63B0;
    case 357u: goto L_002D63D4;
    case 358u: goto L_002D6400;
    case 359u: goto L_002D6410;
    case 360u: goto L_002D6438;
    case 361u: goto L_002D6448;
    case 362u: goto L_002D646C;
    case 363u: goto L_002D64A0;
    case 364u: goto L_002D64B0;
    case 365u: goto L_002D64D0;
    case 366u: goto L_002D64F4;
    case 367u: goto L_002D6520;
    case 368u: goto L_002D6530;
    case 369u: goto L_002D6558;
    case 370u: goto L_002D6568;
    case 371u: goto L_002D658C;
    case 372u: goto L_002D65C0;
    case 373u: goto L_002D65D0;
    case 374u: goto L_002D65F0;
    case 375u: goto L_002D6614;
    case 376u: goto L_002D6640;
    case 377u: goto L_002D6650;
    case 378u: goto L_002D6678;
    case 379u: goto L_002D6688;
    case 380u: goto L_002D66AC;
    case 381u: goto L_002D66E0;
    case 382u: goto L_002D66F0;
    case 383u: goto L_002D6710;
    case 384u: goto L_002D6734;
    case 385u: goto L_002D6760;
    case 386u: goto L_002D6770;
    case 387u: goto L_002D6798;
    case 388u: goto L_002D67A8;
    case 389u: goto L_002D67CC;
    case 390u: goto L_002D6800;
    case 391u: goto L_002D6810;
    case 392u: goto L_002D6830;
    case 393u: goto L_002D6850;
    case 394u: goto L_002D6870;
    case 395u: goto L_002D68A4;
    case 396u: goto L_002D68E0;
    case 397u: goto L_002D693C;
    case 398u: goto L_002D698C;
    case 399u: goto L_002D699C;
    case 400u: goto L_002D6A0C;
    case 401u: goto L_002D6A24;
    case 402u: goto L_002D6A80;
    case 403u: goto L_002D6A94;
    case 404u: goto L_002D6AA4;
    case 405u: goto L_002D6AC0;
    case 406u: goto L_002D6AE4;
    case 407u: goto L_002D6AF4;
    case 408u: goto L_002D6B14;
    case 409u: goto L_002D6B40;
    case 410u: goto L_002D6BB0;
    case 411u: goto L_002D6BFC;
    case 412u: goto L_002D6C0C;
    case 413u: goto L_002D6C1C;
    case 414u: goto L_002D6C30;
    case 415u: goto L_002D6C44;
    case 416u: goto L_002D6C5C;
    case 417u: goto L_002D6C68;
    case 418u: goto L_002D6C74;
    case 419u: goto L_002D6C80;
    case 420u: goto L_002D6C90;
    case 421u: goto L_002D6CA8;
    case 422u: goto L_002D6CB8;
    case 423u: goto L_002D6CD4;
    case 424u: goto L_002D6CE4;
    case 425u: goto L_002D6D00;
    case 426u: goto L_002D6D14;
    case 427u: goto L_002D6D20;
    case 428u: goto L_002D6D34;
    case 429u: goto L_002D6D48;
    case 430u: goto L_002D6D68;
    case 431u: goto L_002D6D80;
    case 432u: goto L_002D6DCC;
    case 433u: goto L_002D6DDC;
    case 434u: goto L_002D6DFC;
    case 435u: goto L_002D6E30;
    case 436u: goto L_002D6E78;
    case 437u: goto L_002D6E88;
    case 438u: goto L_002D6EAC;
    case 439u: goto L_002D6EBC;
    case 440u: goto L_002D6EDC;
    case 441u: goto L_002D6F10;
    case 442u: goto L_002D6F20;
    case 443u: goto L_002D6F40;
    case 444u: goto L_002D6F60;
    case 445u: goto L_002D6F70;
    case 446u: goto L_002D6FB0;
    case 447u: goto L_002D6FC0;
    case 448u: goto L_002D6FE4;
    case 449u: goto L_002D6FF4;
    case 450u: goto L_002D7014;
    case 451u: goto L_002D7040;
    case 452u: goto L_002D7050;
    case 453u: goto L_002D708C;
    case 454u: goto L_002D70C4;
    case 455u: goto L_002D70D4;
    case 456u: goto L_002D70F4;
    case 457u: goto L_002D710C;
    case 458u: goto L_002D711C;
    case 459u: goto L_002D7138;
    case 460u: goto L_002D7160;
    case 461u: goto L_002D7180;
    case 462u: goto L_002D7190;
    case 463u: goto L_002D71C4;
    case 464u: goto L_002D71D4;
    case 465u: goto L_002D71F0;
    case 466u: goto L_002D720C;
    case 467u: goto L_002D7230;
    case 468u: goto L_002D7268;
    case 469u: goto L_002D7278;
    case 470u: goto L_002D7280;
    case 471u: goto L_002D7290;
    case 472u: goto L_002D7298;
    case 473u: goto L_002D72A8;
    case 474u: goto L_002D72C0;
    case 475u: goto L_002D72E8;
    case 476u: goto L_002D72F8;
    case 477u: goto L_002D7310;
    case 478u: goto L_002D7348;
    case 479u: goto L_002D735C;
    case 480u: goto L_002D7370;
    case 481u: goto L_002D73BC;
    case 482u: goto L_002D73CC;
    case 483u: goto L_002D7400;
    case 484u: goto L_002D7460;
    case 485u: goto L_002D748C;
    case 486u: goto L_002D7494;
    case 487u: goto L_002D74A8;
    case 488u: goto L_002D74C4;
    case 489u: goto L_002D74D8;
    case 490u: goto L_002D7510;
    case 491u: goto L_002D75A0;
    case 492u: goto L_002D75F0;
    case 493u: goto L_002D7600;
    case 494u: goto L_002D7680;
    case 495u: goto L_002D76B8;
    case 496u: goto L_002D76FC;
    case 497u: goto L_002D770C;
    case 498u: goto L_002D7744;
    case 499u: goto L_002D7758;
    case 500u: goto L_002D777C;
    case 501u: goto L_002D77B0;
    case 502u: goto L_002D780C;
    case 503u: goto L_002D785C;
    case 504u: goto L_002D78A4;
    case 505u: goto L_002D78D0;
    case 506u: goto L_002D78E0;
    case 507u: goto L_002D7910;
    case 508u: goto L_002D794C;
    case 509u: goto L_002D7990;
    case 510u: goto L_002D79A0;
    case 511u: goto L_002D79D8;
    case 512u: goto L_002D7A28;
    case 513u: goto L_002D7A60;
    case 514u: goto L_002D7A84;
    case 515u: goto L_002D7A98;
    case 516u: goto L_002D7AC0;
    case 517u: goto L_002D7AD4;
    case 518u: goto L_002D7AE8;
    case 519u: goto L_002D7AFC;
    case 520u: goto L_002D7B0C;
    case 521u: goto L_002D7B20;
    case 522u: goto L_002D7B40;
    case 523u: goto L_002D7B84;
    case 524u: goto L_002D7BC0;
    case 525u: goto L_002D7BCC;
    case 526u: goto L_002D7C44;
    case 527u: goto L_002D7C50;
    case 528u: goto L_002D7C94;
    case 529u: goto L_002D7CE0;
    case 530u: goto L_002D7D10;
    case 531u: goto L_002D7D20;
    case 532u: goto L_002D7D60;
    case 533u: goto L_002D7D98;
    case 534u: goto L_002D7DAC;
    case 535u: goto L_002D7DB8;
    case 536u: goto L_002D7DCC;
    case 537u: goto L_002D7E08;
    case 538u: goto L_002D7E14;
    case 539u: goto L_002D7E48;
    case 540u: goto L_002D7E6C;
    case 541u: goto L_002D7E78;
    case 542u: goto L_002D7E90;
    case 543u: goto L_002D7EC0;
    case 544u: goto L_002D7ED0;
    case 545u: goto L_002D7F04;
    case 546u: goto L_002D7F14;
    case 547u: goto L_002D7F30;
    case 548u: goto L_002D7F48;
    case 549u: goto L_002D7F84;
    case 550u: goto L_002D7F94;
    case 551u: goto L_002D7FB0;
    case 552u: goto L_002D7FC8;
    case 553u: goto L_002D7FEC;
    case 554u: goto L_002D7FFC;
    default: bad_entry(c, 0x002D4000u); return;
    }
L_002D4000:
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1568u), c.r[2].w[0]);  if (t) { goto L_002D4018; } }
L_002D400C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4014u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4014u) [[unlikely]] return; }
L_002D4014:
    st32((c.r[29].w[0] + 1568u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4018:
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[5], 0u + 99u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4028u); set32(c.r[6], c.r[29].w[0] + 1568u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4028u) [[unlikely]] return; }
L_002D4028:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 416u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4040u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4040u) [[unlikely]] return; }
L_002D4040:
    set32(c.r[4], c.r[29].w[0] + 420u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D404Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D404Cu) [[unlikely]] return; }
L_002D404C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4054u); set32(c.r[4], c.r[29].w[0] + 1568u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4054u) [[unlikely]] return; }
L_002D4054:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30152u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4074; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1564u), c.r[2].w[0]);  if (t) { goto L_002D4080; } }
L_002D4074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D407Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D407Cu) [[unlikely]] return; }
L_002D407C:
    st32((c.r[29].w[0] + 1564u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4080:
    set32(c.r[4], c.r[29].w[0] + 408u);
    set32(c.r[5], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4090u); set32(c.r[6], c.r[29].w[0] + 1564u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4090u) [[unlikely]] return; }
L_002D4090:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 408u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D40A8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D40A8u) [[unlikely]] return; }
L_002D40A8:
    set32(c.r[4], c.r[29].w[0] + 412u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D40B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D40B4u) [[unlikely]] return; }
L_002D40B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D40BCu); set32(c.r[4], c.r[29].w[0] + 1564u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D40BCu) [[unlikely]] return; }
L_002D40BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30141u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D40DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1560u), c.r[2].w[0]);  if (t) { goto L_002D40E8; } }
L_002D40DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D40E4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D40E4u) [[unlikely]] return; }
L_002D40E4:
    st32((c.r[29].w[0] + 1560u), c.r[2].w[0]);
    c.budget -= 1;
L_002D40E8:
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], 0u + 101u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D40F8u); set32(c.r[6], c.r[29].w[0] + 1560u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D40F8u) [[unlikely]] return; }
L_002D40F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 400u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4110u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4110u) [[unlikely]] return; }
L_002D4110:
    set32(c.r[4], c.r[29].w[0] + 404u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D411Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D411Cu) [[unlikely]] return; }
L_002D411C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4124u); set32(c.r[4], c.r[29].w[0] + 1560u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4124u) [[unlikely]] return; }
L_002D4124:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30130u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4144; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1556u), c.r[2].w[0]);  if (t) { goto L_002D4150; } }
L_002D4144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D414Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D414Cu) [[unlikely]] return; }
L_002D414C:
    st32((c.r[29].w[0] + 1556u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4150:
    set32(c.r[4], c.r[29].w[0] + 392u);
    set32(c.r[5], 0u + 102u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4160u); set32(c.r[6], c.r[29].w[0] + 1556u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4160u) [[unlikely]] return; }
L_002D4160:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 392u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4178u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4178u) [[unlikely]] return; }
L_002D4178:
    set32(c.r[4], c.r[29].w[0] + 396u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4184u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4184u) [[unlikely]] return; }
L_002D4184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D418Cu); set32(c.r[4], c.r[29].w[0] + 1556u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D418Cu) [[unlikely]] return; }
L_002D418C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30121u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D41AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1552u), c.r[2].w[0]);  if (t) { goto L_002D41B8; } }
L_002D41AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D41B4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D41B4u) [[unlikely]] return; }
L_002D41B4:
    st32((c.r[29].w[0] + 1552u), c.r[2].w[0]);
    c.budget -= 1;
L_002D41B8:
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[5], 0u + 103u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D41C8u); set32(c.r[6], c.r[29].w[0] + 1552u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D41C8u) [[unlikely]] return; }
L_002D41C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 384u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D41E0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D41E0u) [[unlikely]] return; }
L_002D41E0:
    set32(c.r[4], c.r[29].w[0] + 388u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D41ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D41ECu) [[unlikely]] return; }
L_002D41EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D41F4u); set32(c.r[4], c.r[29].w[0] + 1552u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D41F4u) [[unlikely]] return; }
L_002D41F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30110u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4214; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1548u), c.r[2].w[0]);  if (t) { goto L_002D4220; } }
L_002D4214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D421Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D421Cu) [[unlikely]] return; }
L_002D421C:
    st32((c.r[29].w[0] + 1548u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4220:
    set32(c.r[4], c.r[29].w[0] + 376u);
    set32(c.r[5], 0u + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4230u); set32(c.r[6], c.r[29].w[0] + 1548u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4230u) [[unlikely]] return; }
L_002D4230:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 376u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4248u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4248u) [[unlikely]] return; }
L_002D4248:
    set32(c.r[4], c.r[29].w[0] + 380u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4254u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4254u) [[unlikely]] return; }
L_002D4254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D425Cu); set32(c.r[4], c.r[29].w[0] + 1548u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D425Cu) [[unlikely]] return; }
L_002D425C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30093u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D427C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1544u), c.r[2].w[0]);  if (t) { goto L_002D4288; } }
L_002D427C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4284u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4284u) [[unlikely]] return; }
L_002D4284:
    st32((c.r[29].w[0] + 1544u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4288:
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[5], 0u + 105u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4298u); set32(c.r[6], c.r[29].w[0] + 1544u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4298u) [[unlikely]] return; }
L_002D4298:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 368u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D42B0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D42B0u) [[unlikely]] return; }
L_002D42B0:
    set32(c.r[4], c.r[29].w[0] + 372u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D42BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D42BCu) [[unlikely]] return; }
L_002D42BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D42C4u); set32(c.r[4], c.r[29].w[0] + 1544u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D42C4u) [[unlikely]] return; }
L_002D42C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30078u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D42E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1540u), c.r[2].w[0]);  if (t) { goto L_002D42F0; } }
L_002D42E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D42ECu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D42ECu) [[unlikely]] return; }
L_002D42EC:
    st32((c.r[29].w[0] + 1540u), c.r[2].w[0]);
    c.budget -= 1;
L_002D42F0:
    set32(c.r[4], c.r[29].w[0] + 360u);
    set32(c.r[5], 0u + 106u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4300u); set32(c.r[6], c.r[29].w[0] + 1540u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4300u) [[unlikely]] return; }
L_002D4300:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 360u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4318u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4318u) [[unlikely]] return; }
L_002D4318:
    set32(c.r[4], c.r[29].w[0] + 364u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4324u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4324u) [[unlikely]] return; }
L_002D4324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D432Cu); set32(c.r[4], c.r[29].w[0] + 1540u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D432Cu) [[unlikely]] return; }
L_002D432C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30066u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D434C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1536u), c.r[2].w[0]);  if (t) { goto L_002D4358; } }
L_002D434C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4354u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4354u) [[unlikely]] return; }
L_002D4354:
    st32((c.r[29].w[0] + 1536u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4358:
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], 0u + 107u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4368u); set32(c.r[6], c.r[29].w[0] + 1536u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4368u) [[unlikely]] return; }
L_002D4368:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 352u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4380u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4380u) [[unlikely]] return; }
L_002D4380:
    set32(c.r[4], c.r[29].w[0] + 356u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D438Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D438Cu) [[unlikely]] return; }
L_002D438C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4394u); set32(c.r[4], c.r[29].w[0] + 1536u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4394u) [[unlikely]] return; }
L_002D4394:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30054u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D43B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1532u), c.r[2].w[0]);  if (t) { goto L_002D43C0; } }
L_002D43B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D43BCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D43BCu) [[unlikely]] return; }
L_002D43BC:
    st32((c.r[29].w[0] + 1532u), c.r[2].w[0]);
    c.budget -= 1;
L_002D43C0:
    set32(c.r[4], c.r[29].w[0] + 344u);
    set32(c.r[5], 0u + 108u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D43D0u); set32(c.r[6], c.r[29].w[0] + 1532u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D43D0u) [[unlikely]] return; }
L_002D43D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 344u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D43E8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D43E8u) [[unlikely]] return; }
L_002D43E8:
    set32(c.r[4], c.r[29].w[0] + 348u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D43F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D43F4u) [[unlikely]] return; }
L_002D43F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D43FCu); set32(c.r[4], c.r[29].w[0] + 1532u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D43FCu) [[unlikely]] return; }
L_002D43FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30040u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D441C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1528u), c.r[2].w[0]);  if (t) { goto L_002D4428; } }
L_002D441C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4424u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4424u) [[unlikely]] return; }
L_002D4424:
    st32((c.r[29].w[0] + 1528u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4428:
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 109u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4438u); set32(c.r[6], c.r[29].w[0] + 1528u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4438u) [[unlikely]] return; }
L_002D4438:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 336u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4450u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4450u) [[unlikely]] return; }
L_002D4450:
    set32(c.r[4], c.r[29].w[0] + 340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D445Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D445Cu) [[unlikely]] return; }
L_002D445C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4464u); set32(c.r[4], c.r[29].w[0] + 1528u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4464u) [[unlikely]] return; }
L_002D4464:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30027u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4484; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1524u), c.r[2].w[0]);  if (t) { goto L_002D4490; } }
L_002D4484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D448Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D448Cu) [[unlikely]] return; }
L_002D448C:
    st32((c.r[29].w[0] + 1524u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4490:
    set32(c.r[4], c.r[29].w[0] + 328u);
    set32(c.r[5], 0u + 110u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D44A0u); set32(c.r[6], c.r[29].w[0] + 1524u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D44A0u) [[unlikely]] return; }
L_002D44A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 328u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D44B8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D44B8u) [[unlikely]] return; }
L_002D44B8:
    set32(c.r[4], c.r[29].w[0] + 332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D44C4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D44C4u) [[unlikely]] return; }
L_002D44C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D44CCu); set32(c.r[4], c.r[29].w[0] + 1524u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D44CCu) [[unlikely]] return; }
L_002D44CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30015u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D44EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1520u), c.r[2].w[0]);  if (t) { goto L_002D44F8; } }
L_002D44EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D44F4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D44F4u) [[unlikely]] return; }
L_002D44F4:
    st32((c.r[29].w[0] + 1520u), c.r[2].w[0]);
    c.budget -= 1;
L_002D44F8:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], 0u + 111u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4508u); set32(c.r[6], c.r[29].w[0] + 1520u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4508u) [[unlikely]] return; }
L_002D4508:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4520u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4520u) [[unlikely]] return; }
L_002D4520:
    set32(c.r[4], c.r[29].w[0] + 324u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D452Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D452Cu) [[unlikely]] return; }
L_002D452C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4534u); set32(c.r[4], c.r[29].w[0] + 1520u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4534u) [[unlikely]] return; }
L_002D4534:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30003u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4554; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1516u), c.r[2].w[0]);  if (t) { goto L_002D4560; } }
L_002D4554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D455Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D455Cu) [[unlikely]] return; }
L_002D455C:
    st32((c.r[29].w[0] + 1516u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4560:
    set32(c.r[4], c.r[29].w[0] + 312u);
    set32(c.r[5], 0u + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4570u); set32(c.r[6], c.r[29].w[0] + 1516u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4570u) [[unlikely]] return; }
L_002D4570:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 312u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4588u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4588u) [[unlikely]] return; }
L_002D4588:
    set32(c.r[4], c.r[29].w[0] + 316u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4594u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4594u) [[unlikely]] return; }
L_002D4594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D459Cu); set32(c.r[4], c.r[29].w[0] + 1516u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D459Cu) [[unlikely]] return; }
L_002D459C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29989u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D45BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1512u), c.r[2].w[0]);  if (t) { goto L_002D45C8; } }
L_002D45BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D45C4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D45C4u) [[unlikely]] return; }
L_002D45C4:
    st32((c.r[29].w[0] + 1512u), c.r[2].w[0]);
    c.budget -= 1;
L_002D45C8:
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], 0u + 113u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D45D8u); set32(c.r[6], c.r[29].w[0] + 1512u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D45D8u) [[unlikely]] return; }
L_002D45D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D45F0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D45F0u) [[unlikely]] return; }
L_002D45F0:
    set32(c.r[4], c.r[29].w[0] + 308u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D45FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D45FCu) [[unlikely]] return; }
L_002D45FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4604u); set32(c.r[4], c.r[29].w[0] + 1512u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4604u) [[unlikely]] return; }
L_002D4604:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29973u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4624; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1508u), c.r[2].w[0]);  if (t) { goto L_002D4630; } }
L_002D4624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D462Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D462Cu) [[unlikely]] return; }
L_002D462C:
    st32((c.r[29].w[0] + 1508u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4630:
    set32(c.r[4], c.r[29].w[0] + 296u);
    set32(c.r[5], 0u + 114u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4640u); set32(c.r[6], c.r[29].w[0] + 1508u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4640u) [[unlikely]] return; }
L_002D4640:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 296u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4658u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4658u) [[unlikely]] return; }
L_002D4658:
    set32(c.r[4], c.r[29].w[0] + 300u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4664u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4664u) [[unlikely]] return; }
L_002D4664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D466Cu); set32(c.r[4], c.r[29].w[0] + 1508u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D466Cu) [[unlikely]] return; }
L_002D466C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29960u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D468C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1504u), c.r[2].w[0]);  if (t) { goto L_002D4698; } }
L_002D468C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4694u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4694u) [[unlikely]] return; }
L_002D4694:
    st32((c.r[29].w[0] + 1504u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4698:
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], 0u + 115u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D46A8u); set32(c.r[6], c.r[29].w[0] + 1504u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D46A8u) [[unlikely]] return; }
L_002D46A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D46C0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D46C0u) [[unlikely]] return; }
L_002D46C0:
    set32(c.r[4], c.r[29].w[0] + 292u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D46CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D46CCu) [[unlikely]] return; }
L_002D46CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D46D4u); set32(c.r[4], c.r[29].w[0] + 1504u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D46D4u) [[unlikely]] return; }
L_002D46D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29946u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D46F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1500u), c.r[2].w[0]);  if (t) { goto L_002D4700; } }
L_002D46F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D46FCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D46FCu) [[unlikely]] return; }
L_002D46FC:
    st32((c.r[29].w[0] + 1500u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4700:
    set32(c.r[4], c.r[29].w[0] + 280u);
    set32(c.r[5], 0u + 116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4710u); set32(c.r[6], c.r[29].w[0] + 1500u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4710u) [[unlikely]] return; }
L_002D4710:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 280u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4728u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4728u) [[unlikely]] return; }
L_002D4728:
    set32(c.r[4], c.r[29].w[0] + 284u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4734u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4734u) [[unlikely]] return; }
L_002D4734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D473Cu); set32(c.r[4], c.r[29].w[0] + 1500u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D473Cu) [[unlikely]] return; }
L_002D473C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29928u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D475C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1496u), c.r[2].w[0]);  if (t) { goto L_002D4768; } }
L_002D475C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4764u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4764u) [[unlikely]] return; }
L_002D4764:
    st32((c.r[29].w[0] + 1496u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4768:
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], 0u + 117u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4778u); set32(c.r[6], c.r[29].w[0] + 1496u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4778u) [[unlikely]] return; }
L_002D4778:
    set32(c.r[2], ld32((c.r[28].w[0] - 27588u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D478Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D478Cu) [[unlikely]] return; }
L_002D478C:
    set32(c.r[4], c.r[29].w[0] + 276u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4798u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4798u) [[unlikely]] return; }
L_002D4798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D47A0u); set32(c.r[4], c.r[29].w[0] + 1496u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D47A0u) [[unlikely]] return; }
L_002D47A0:
    set32(c.r[2], 0u + 30u);
    set32(c.r[4], 0u + 256u);
    st32((c.r[28].w[0] - 27576u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D47B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002D47B4u) [[unlikely]] return; }
L_002D47B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2944u);
    set32(c.r[6], c.r[6].w[0] + 3712u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D47D4u); set32(c.r[8], 0u + 30u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002D47D4u) [[unlikely]] return; }
L_002D47D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[28].w[0] - 27580u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 32399u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002D47F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1492u), c.r[2].w[0]);  if (t) { goto L_002D4804; } }
L_002D47F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4800u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4800u) [[unlikely]] return; }
L_002D4800:
    st32((c.r[29].w[0] + 1492u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4804:
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4814u); set32(c.r[6], c.r[29].w[0] + 1492u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4814u) [[unlikely]] return; }
L_002D4814:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 264u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D482Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D482Cu) [[unlikely]] return; }
L_002D482C:
    set32(c.r[4], c.r[29].w[0] + 268u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4838u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4838u) [[unlikely]] return; }
L_002D4838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4840u); set32(c.r[4], c.r[29].w[0] + 1492u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4840u) [[unlikely]] return; }
L_002D4840:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29915u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4860; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1488u), c.r[2].w[0]);  if (t) { goto L_002D486C; } }
L_002D4860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4868u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4868u) [[unlikely]] return; }
L_002D4868:
    st32((c.r[29].w[0] + 1488u), c.r[2].w[0]);
    c.budget -= 1;
L_002D486C:
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D487Cu); set32(c.r[6], c.r[29].w[0] + 1488u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D487Cu) [[unlikely]] return; }
L_002D487C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4894u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4894u) [[unlikely]] return; }
L_002D4894:
    set32(c.r[4], c.r[29].w[0] + 260u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D48A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D48A0u) [[unlikely]] return; }
L_002D48A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D48A8u); set32(c.r[4], c.r[29].w[0] + 1488u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D48A8u) [[unlikely]] return; }
L_002D48A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29908u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D48C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1484u), c.r[2].w[0]);  if (t) { goto L_002D48D4; } }
L_002D48C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D48D0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D48D0u) [[unlikely]] return; }
L_002D48D0:
    st32((c.r[29].w[0] + 1484u), c.r[2].w[0]);
    c.budget -= 1;
L_002D48D4:
    set32(c.r[4], c.r[29].w[0] + 248u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D48E4u); set32(c.r[6], c.r[29].w[0] + 1484u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D48E4u) [[unlikely]] return; }
L_002D48E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 248u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D48FCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D48FCu) [[unlikely]] return; }
L_002D48FC:
    set32(c.r[4], c.r[29].w[0] + 252u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4908u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4908u) [[unlikely]] return; }
L_002D4908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4910u); set32(c.r[4], c.r[29].w[0] + 1484u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4910u) [[unlikely]] return; }
L_002D4910:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29892u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4930; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1480u), c.r[2].w[0]);  if (t) { goto L_002D493C; } }
L_002D4930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4938u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4938u) [[unlikely]] return; }
L_002D4938:
    st32((c.r[29].w[0] + 1480u), c.r[2].w[0]);
    c.budget -= 1;
L_002D493C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D494Cu); set32(c.r[6], c.r[29].w[0] + 1480u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D494Cu) [[unlikely]] return; }
L_002D494C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 240u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4964u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4964u) [[unlikely]] return; }
L_002D4964:
    set32(c.r[4], c.r[29].w[0] + 244u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4970u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4970u) [[unlikely]] return; }
L_002D4970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4978u); set32(c.r[4], c.r[29].w[0] + 1480u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4978u) [[unlikely]] return; }
L_002D4978:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29876u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4998; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1476u), c.r[2].w[0]);  if (t) { goto L_002D49A4; } }
L_002D4998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D49A0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D49A0u) [[unlikely]] return; }
L_002D49A0:
    st32((c.r[29].w[0] + 1476u), c.r[2].w[0]);
    c.budget -= 1;
L_002D49A4:
    set32(c.r[4], c.r[29].w[0] + 232u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D49B4u); set32(c.r[6], c.r[29].w[0] + 1476u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D49B4u) [[unlikely]] return; }
L_002D49B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 232u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D49CCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D49CCu) [[unlikely]] return; }
L_002D49CC:
    set32(c.r[4], c.r[29].w[0] + 236u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D49D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D49D8u) [[unlikely]] return; }
L_002D49D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D49E0u); set32(c.r[4], c.r[29].w[0] + 1476u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D49E0u) [[unlikely]] return; }
L_002D49E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30599u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4A00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1472u), c.r[2].w[0]);  if (t) { goto L_002D4A0C; } }
L_002D4A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4A08u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4A08u) [[unlikely]] return; }
L_002D4A08:
    st32((c.r[29].w[0] + 1472u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4A0C:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4A1Cu); set32(c.r[6], c.r[29].w[0] + 1472u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4A1Cu) [[unlikely]] return; }
L_002D4A1C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4A34u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4A34u) [[unlikely]] return; }
L_002D4A34:
    set32(c.r[4], c.r[29].w[0] + 228u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4A40u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4A40u) [[unlikely]] return; }
L_002D4A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4A48u); set32(c.r[4], c.r[29].w[0] + 1472u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4A48u) [[unlikely]] return; }
L_002D4A48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30623u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4A68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1468u), c.r[2].w[0]);  if (t) { goto L_002D4A74; } }
L_002D4A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4A70u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4A70u) [[unlikely]] return; }
L_002D4A70:
    st32((c.r[29].w[0] + 1468u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4A74:
    set32(c.r[4], c.r[29].w[0] + 216u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4A84u); set32(c.r[6], c.r[29].w[0] + 1468u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4A84u) [[unlikely]] return; }
L_002D4A84:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 216u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4A9Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4A9Cu) [[unlikely]] return; }
L_002D4A9C:
    set32(c.r[4], c.r[29].w[0] + 220u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4AA8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4AA8u) [[unlikely]] return; }
L_002D4AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4AB0u); set32(c.r[4], c.r[29].w[0] + 1468u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4AB0u) [[unlikely]] return; }
L_002D4AB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 30574u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4AD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1464u), c.r[2].w[0]);  if (t) { goto L_002D4ADC; } }
L_002D4AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4AD8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4AD8u) [[unlikely]] return; }
L_002D4AD8:
    st32((c.r[29].w[0] + 1464u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4ADC:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4AECu); set32(c.r[6], c.r[29].w[0] + 1464u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4AECu) [[unlikely]] return; }
L_002D4AEC:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B04u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4B04u) [[unlikely]] return; }
L_002D4B04:
    set32(c.r[4], c.r[29].w[0] + 212u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4B10u) [[unlikely]] return; }
L_002D4B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B18u); set32(c.r[4], c.r[29].w[0] + 1464u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4B18u) [[unlikely]] return; }
L_002D4B18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29859u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4B38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1460u), c.r[2].w[0]);  if (t) { goto L_002D4B44; } }
L_002D4B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B40u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4B40u) [[unlikely]] return; }
L_002D4B40:
    st32((c.r[29].w[0] + 1460u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4B44:
    set32(c.r[4], c.r[29].w[0] + 200u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B54u); set32(c.r[6], c.r[29].w[0] + 1460u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4B54u) [[unlikely]] return; }
L_002D4B54:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 200u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B6Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4B6Cu) [[unlikely]] return; }
L_002D4B6C:
    set32(c.r[4], c.r[29].w[0] + 204u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B78u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4B78u) [[unlikely]] return; }
L_002D4B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B80u); set32(c.r[4], c.r[29].w[0] + 1460u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4B80u) [[unlikely]] return; }
L_002D4B80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29845u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4BA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1456u), c.r[2].w[0]);  if (t) { goto L_002D4BAC; } }
L_002D4BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4BA8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4BA8u) [[unlikely]] return; }
L_002D4BA8:
    st32((c.r[29].w[0] + 1456u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4BAC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4BBCu); set32(c.r[6], c.r[29].w[0] + 1456u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4BBCu) [[unlikely]] return; }
L_002D4BBC:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4BD4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4BD4u) [[unlikely]] return; }
L_002D4BD4:
    set32(c.r[4], c.r[29].w[0] + 196u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4BE0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4BE0u) [[unlikely]] return; }
L_002D4BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4BE8u); set32(c.r[4], c.r[29].w[0] + 1456u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4BE8u) [[unlikely]] return; }
L_002D4BE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29831u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4C08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1452u), c.r[2].w[0]);  if (t) { goto L_002D4C14; } }
L_002D4C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4C10u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4C10u) [[unlikely]] return; }
L_002D4C10:
    st32((c.r[29].w[0] + 1452u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4C14:
    set32(c.r[4], c.r[29].w[0] + 184u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4C24u); set32(c.r[6], c.r[29].w[0] + 1452u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4C24u) [[unlikely]] return; }
L_002D4C24:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 184u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4C3Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4C3Cu) [[unlikely]] return; }
L_002D4C3C:
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4C48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4C48u) [[unlikely]] return; }
L_002D4C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4C50u); set32(c.r[4], c.r[29].w[0] + 1452u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4C50u) [[unlikely]] return; }
L_002D4C50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29816u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4C70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1448u), c.r[2].w[0]);  if (t) { goto L_002D4C7C; } }
L_002D4C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4C78u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4C78u) [[unlikely]] return; }
L_002D4C78:
    st32((c.r[29].w[0] + 1448u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4C7C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4C8Cu); set32(c.r[6], c.r[29].w[0] + 1448u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4C8Cu) [[unlikely]] return; }
L_002D4C8C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4CA4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4CA4u) [[unlikely]] return; }
L_002D4CA4:
    set32(c.r[4], c.r[29].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4CB0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4CB0u) [[unlikely]] return; }
L_002D4CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4CB8u); set32(c.r[4], c.r[29].w[0] + 1448u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4CB8u) [[unlikely]] return; }
L_002D4CB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29801u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4CD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1444u), c.r[2].w[0]);  if (t) { goto L_002D4CE4; } }
L_002D4CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4CE0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4CE0u) [[unlikely]] return; }
L_002D4CE0:
    st32((c.r[29].w[0] + 1444u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4CE4:
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4CF4u); set32(c.r[6], c.r[29].w[0] + 1444u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4CF4u) [[unlikely]] return; }
L_002D4CF4:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 168u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4D0Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4D0Cu) [[unlikely]] return; }
L_002D4D0C:
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4D18u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4D18u) [[unlikely]] return; }
L_002D4D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4D20u); set32(c.r[4], c.r[29].w[0] + 1444u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4D20u) [[unlikely]] return; }
L_002D4D20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29786u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4D40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1440u), c.r[2].w[0]);  if (t) { goto L_002D4D4C; } }
L_002D4D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4D48u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4D48u) [[unlikely]] return; }
L_002D4D48:
    st32((c.r[29].w[0] + 1440u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4D4C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4D5Cu); set32(c.r[6], c.r[29].w[0] + 1440u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4D5Cu) [[unlikely]] return; }
L_002D4D5C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4D74u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4D74u) [[unlikely]] return; }
L_002D4D74:
    set32(c.r[4], c.r[29].w[0] + 164u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4D80u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4D80u) [[unlikely]] return; }
L_002D4D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4D88u); set32(c.r[4], c.r[29].w[0] + 1440u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4D88u) [[unlikely]] return; }
L_002D4D88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29771u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4DA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1436u), c.r[2].w[0]);  if (t) { goto L_002D4DB4; } }
L_002D4DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4DB0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4DB0u) [[unlikely]] return; }
L_002D4DB0:
    st32((c.r[29].w[0] + 1436u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4DB4:
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], 0u + 14u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4DC4u); set32(c.r[6], c.r[29].w[0] + 1436u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4DC4u) [[unlikely]] return; }
L_002D4DC4:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 152u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4DDCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4DDCu) [[unlikely]] return; }
L_002D4DDC:
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4DE8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4DE8u) [[unlikely]] return; }
L_002D4DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4DF0u); set32(c.r[4], c.r[29].w[0] + 1436u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4DF0u) [[unlikely]] return; }
L_002D4DF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29755u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4E10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1432u), c.r[2].w[0]);  if (t) { goto L_002D4E1C; } }
L_002D4E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4E18u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4E18u) [[unlikely]] return; }
L_002D4E18:
    st32((c.r[29].w[0] + 1432u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4E1C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4E2Cu); set32(c.r[6], c.r[29].w[0] + 1432u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4E2Cu) [[unlikely]] return; }
L_002D4E2C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4E44u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4E44u) [[unlikely]] return; }
L_002D4E44:
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4E50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4E50u) [[unlikely]] return; }
L_002D4E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4E58u); set32(c.r[4], c.r[29].w[0] + 1432u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4E58u) [[unlikely]] return; }
L_002D4E58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29743u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4E78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1428u), c.r[2].w[0]);  if (t) { goto L_002D4E84; } }
L_002D4E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4E80u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4E80u) [[unlikely]] return; }
L_002D4E80:
    st32((c.r[29].w[0] + 1428u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4E84:
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[5], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4E94u); set32(c.r[6], c.r[29].w[0] + 1428u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4E94u) [[unlikely]] return; }
L_002D4E94:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 136u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4EACu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4EACu) [[unlikely]] return; }
L_002D4EAC:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4EB8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4EB8u) [[unlikely]] return; }
L_002D4EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4EC0u); set32(c.r[4], c.r[29].w[0] + 1428u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4EC0u) [[unlikely]] return; }
L_002D4EC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29721u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4EE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1424u), c.r[2].w[0]);  if (t) { goto L_002D4EEC; } }
L_002D4EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4EE8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4EE8u) [[unlikely]] return; }
L_002D4EE8:
    st32((c.r[29].w[0] + 1424u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4EEC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 17u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4EFCu); set32(c.r[6], c.r[29].w[0] + 1424u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4EFCu) [[unlikely]] return; }
L_002D4EFC:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4F14u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4F14u) [[unlikely]] return; }
L_002D4F14:
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4F20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4F20u) [[unlikely]] return; }
L_002D4F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4F28u); set32(c.r[4], c.r[29].w[0] + 1424u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4F28u) [[unlikely]] return; }
L_002D4F28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29699u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4F48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1420u), c.r[2].w[0]);  if (t) { goto L_002D4F54; } }
L_002D4F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4F50u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4F50u) [[unlikely]] return; }
L_002D4F50:
    st32((c.r[29].w[0] + 1420u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4F54:
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[5], 0u + 18u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4F64u); set32(c.r[6], c.r[29].w[0] + 1420u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4F64u) [[unlikely]] return; }
L_002D4F64:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 120u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4F7Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4F7Cu) [[unlikely]] return; }
L_002D4F7C:
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4F88u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4F88u) [[unlikely]] return; }
L_002D4F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4F90u); set32(c.r[4], c.r[29].w[0] + 1420u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4F90u) [[unlikely]] return; }
L_002D4F90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29672u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4FB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1416u), c.r[2].w[0]);  if (t) { goto L_002D4FBC; } }
L_002D4FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4FB8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D4FB8u) [[unlikely]] return; }
L_002D4FB8:
    st32((c.r[29].w[0] + 1416u), c.r[2].w[0]);
    c.budget -= 1;
L_002D4FBC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 19u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4FCCu); set32(c.r[6], c.r[29].w[0] + 1416u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D4FCCu) [[unlikely]] return; }
L_002D4FCC:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4FE4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D4FE4u) [[unlikely]] return; }
L_002D4FE4:
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4FF0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D4FF0u) [[unlikely]] return; }
L_002D4FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4FF8u); set32(c.r[4], c.r[29].w[0] + 1416u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D4FF8u) [[unlikely]] return; }
L_002D4FF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29645u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D5018; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1412u), c.r[2].w[0]);  if (t) { goto L_002D5024; } }
L_002D5018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5020u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D5020u) [[unlikely]] return; }
L_002D5020:
    st32((c.r[29].w[0] + 1412u), c.r[2].w[0]);
    c.budget -= 1;
L_002D5024:
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5034u); set32(c.r[6], c.r[29].w[0] + 1412u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D5034u) [[unlikely]] return; }
L_002D5034:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 104u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D504Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D504Cu) [[unlikely]] return; }
L_002D504C:
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5058u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D5058u) [[unlikely]] return; }
L_002D5058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5060u); set32(c.r[4], c.r[29].w[0] + 1412u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D5060u) [[unlikely]] return; }
L_002D5060:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29626u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D5080; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1408u), c.r[2].w[0]);  if (t) { goto L_002D508C; } }
L_002D5080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5088u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D5088u) [[unlikely]] return; }
L_002D5088:
    st32((c.r[29].w[0] + 1408u), c.r[2].w[0]);
    c.budget -= 1;
L_002D508C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 21u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D509Cu); set32(c.r[6], c.r[29].w[0] + 1408u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D509Cu) [[unlikely]] return; }
L_002D509C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D50B4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D50B4u) [[unlikely]] return; }
L_002D50B4:
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D50C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D50C0u) [[unlikely]] return; }
L_002D50C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D50C8u); set32(c.r[4], c.r[29].w[0] + 1408u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D50C8u) [[unlikely]] return; }
L_002D50C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29607u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D50E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1404u), c.r[2].w[0]);  if (t) { goto L_002D50F4; } }
L_002D50E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D50F0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D50F0u) [[unlikely]] return; }
L_002D50F0:
    st32((c.r[29].w[0] + 1404u), c.r[2].w[0]);
    c.budget -= 1;
L_002D50F4:
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], 0u + 22u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5104u); set32(c.r[6], c.r[29].w[0] + 1404u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D5104u) [[unlikely]] return; }
L_002D5104:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 88u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D511Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D511Cu) [[unlikely]] return; }
L_002D511C:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5128u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D5128u) [[unlikely]] return; }
L_002D5128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5130u); set32(c.r[4], c.r[29].w[0] + 1404u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D5130u) [[unlikely]] return; }
L_002D5130:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29595u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D5150; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1400u), c.r[2].w[0]);  if (t) { goto L_002D515C; } }
L_002D5150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5158u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D5158u) [[unlikely]] return; }
L_002D5158:
    st32((c.r[29].w[0] + 1400u), c.r[2].w[0]);
    c.budget -= 1;
L_002D515C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 23u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D516Cu); set32(c.r[6], c.r[29].w[0] + 1400u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D516Cu) [[unlikely]] return; }
L_002D516C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5184u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D5184u) [[unlikely]] return; }
L_002D5184:
    set32(c.r[4], c.r[29].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5190u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D5190u) [[unlikely]] return; }
L_002D5190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5198u); set32(c.r[4], c.r[29].w[0] + 1400u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D5198u) [[unlikely]] return; }
L_002D5198:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29570u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D51B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1396u), c.r[2].w[0]);  if (t) { goto L_002D51C4; } }
L_002D51B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D51C0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D51C0u) [[unlikely]] return; }
L_002D51C0:
    st32((c.r[29].w[0] + 1396u), c.r[2].w[0]);
    c.budget -= 1;
L_002D51C4:
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D51D4u); set32(c.r[6], c.r[29].w[0] + 1396u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D51D4u) [[unlikely]] return; }
L_002D51D4:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D51ECu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D51ECu) [[unlikely]] return; }
L_002D51EC:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D51F8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D51F8u) [[unlikely]] return; }
L_002D51F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5200u); set32(c.r[4], c.r[29].w[0] + 1396u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D5200u) [[unlikely]] return; }
L_002D5200:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29545u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D5220; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1392u), c.r[2].w[0]);  if (t) { goto L_002D522C; } }
L_002D5220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5228u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D5228u) [[unlikely]] return; }
L_002D5228:
    st32((c.r[29].w[0] + 1392u), c.r[2].w[0]);
    c.budget -= 1;
L_002D522C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 25u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D523Cu); set32(c.r[6], c.r[29].w[0] + 1392u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D523Cu) [[unlikely]] return; }
L_002D523C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5254u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D5254u) [[unlikely]] return; }
L_002D5254:
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5260u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D5260u) [[unlikely]] return; }
L_002D5260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5268u); set32(c.r[4], c.r[29].w[0] + 1392u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D5268u) [[unlikely]] return; }
L_002D5268:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29522u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D5288; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1388u), c.r[2].w[0]);  if (t) { goto L_002D5294; } }
L_002D5288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5290u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D5290u) [[unlikely]] return; }
L_002D5290:
    st32((c.r[29].w[0] + 1388u), c.r[2].w[0]);
    c.budget -= 1;
L_002D5294:
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[5], 0u + 26u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D52A4u); set32(c.r[6], c.r[29].w[0] + 1388u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D52A4u) [[unlikely]] return; }
L_002D52A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 56u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D52BCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D52BCu) [[unlikely]] return; }
L_002D52BC:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D52C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D52C8u) [[unlikely]] return; }
L_002D52C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D52D0u); set32(c.r[4], c.r[29].w[0] + 1388u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D52D0u) [[unlikely]] return; }
L_002D52D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29512u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D52F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1384u), c.r[2].w[0]);  if (t) { goto L_002D52FC; } }
L_002D52F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D52F8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D52F8u) [[unlikely]] return; }
L_002D52F8:
    st32((c.r[29].w[0] + 1384u), c.r[2].w[0]);
    c.budget -= 1;
L_002D52FC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 27u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D530Cu); set32(c.r[6], c.r[29].w[0] + 1384u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D530Cu) [[unlikely]] return; }
L_002D530C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5324u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D5324u) [[unlikely]] return; }
L_002D5324:
    set32(c.r[4], c.r[29].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5330u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D5330u) [[unlikely]] return; }
L_002D5330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5338u); set32(c.r[4], c.r[29].w[0] + 1384u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D5338u) [[unlikely]] return; }
L_002D5338:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29498u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D5358; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1380u), c.r[2].w[0]);  if (t) { goto L_002D5364; } }
L_002D5358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5360u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D5360u) [[unlikely]] return; }
L_002D5360:
    st32((c.r[29].w[0] + 1380u), c.r[2].w[0]);
    c.budget -= 1;
L_002D5364:
    set32(c.r[4], c.r[29].w[0] + 40u);
    set32(c.r[5], 0u + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5374u); set32(c.r[6], c.r[29].w[0] + 1380u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D5374u) [[unlikely]] return; }
L_002D5374:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 40u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D538Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D538Cu) [[unlikely]] return; }
L_002D538C:
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5398u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D5398u) [[unlikely]] return; }
L_002D5398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D53A0u); set32(c.r[4], c.r[29].w[0] + 1380u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D53A0u) [[unlikely]] return; }
L_002D53A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29487u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D53C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1376u), c.r[2].w[0]);  if (t) { goto L_002D53CC; } }
L_002D53C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D53C8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D53C8u) [[unlikely]] return; }
L_002D53C8:
    st32((c.r[29].w[0] + 1376u), c.r[2].w[0]);
    c.budget -= 1;
L_002D53CC:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 29u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D53DCu); set32(c.r[6], c.r[29].w[0] + 1376u);  if (depth < kMaxDepth) unit_0074(c, 122u, depth + 1u); else { c.pc = 0x002D0C30u; return; } if (c.pc != 0x002D53DCu) [[unlikely]] return; }
L_002D53DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 27580u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D53F0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 111u, depth + 1u); else { c.pc = 0x002D0AB0u; return; } if (c.pc != 0x002D53F0u) [[unlikely]] return; }
L_002D53F0:
    set32(c.r[4], c.r[29].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D53FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D53FCu) [[unlikely]] return; }
L_002D53FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5404u); set32(c.r[4], c.r[29].w[0] + 1376u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002D5404u) [[unlikely]] return; }
L_002D5404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D540Cu);  if (depth < kMaxDepth) unit_0074(c, 128u, depth + 1u); else { c.pc = 0x002D0D00u; return; } if (c.pc != 0x002D540Cu) [[unlikely]] return; }
L_002D540C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2048u);  c.pc = t; return; }
L_002D5420:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 11;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002D5498; }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5464u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D5464u) [[unlikely]] return; }
L_002D5464:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5474u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D5474u) [[unlikely]] return; }
L_002D5474:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D5494; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5494u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D5494u) [[unlikely]] return; }
L_002D5494:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002D5498:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D54B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 16224u), 0u);
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[28].w[0] - 27568u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[3].w[0] + 16228u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[3].w[0] + 16232u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 4u);
    st32((c.r[3].w[0] + 16236u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 5u);
    st32((c.r[3].w[0] + 16240u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 6u);
    st32((c.r[3].w[0] + 16244u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 7u);
    st32((c.r[3].w[0] + 16248u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 8u);
    st32((c.r[3].w[0] + 16252u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 9u);
    st32((c.r[3].w[0] + 16256u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 10u);
    st32((c.r[3].w[0] + 16260u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 11u);
    st32((c.r[3].w[0] + 16264u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 12u);
    st32((c.r[3].w[0] + 16268u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 13u);
    st32((c.r[3].w[0] + 16272u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 14u);
    st32((c.r[3].w[0] + 16276u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 16280u), c.r[5].w[0]);
    st16((c.r[3].w[0] + 16288u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], 0u + 256u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 512u);
    st16((c.r[3].w[0] + 16290u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 768u);
    st16((c.r[3].w[0] + 16292u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 1024u);
    st16((c.r[3].w[0] + 16294u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 1280u);
    st16((c.r[3].w[0] + 16296u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 1536u);
    st16((c.r[3].w[0] + 16298u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 1792u);
    st16((c.r[3].w[0] + 16300u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 2048u);
    st16((c.r[3].w[0] + 16302u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 2304u);
    st16((c.r[3].w[0] + 16304u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 2560u);
    st16((c.r[3].w[0] + 16306u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 2816u);
    st16((c.r[3].w[0] + 16308u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 3072u);
    st16((c.r[3].w[0] + 16310u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 3328u);
    st16((c.r[3].w[0] + 16312u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st16((c.r[3].w[0] + 16314u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 3584u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 90;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 16316u), static_cast<std::uint16_t>(c.r[4].w[0]));  c.pc = t; return; }
L_002D5620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], 0u + 1u);
    set32(c.r[4], 0u + 14u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16144u), 0u);
    set32(c.r[24], 0u + 2u);
    st32((c.r[16].w[0] + 16200u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16148u), c.r[25].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[28].w[0] - 27572u), static_cast<std::uint8_t>(c.r[25].w[0]));
    st8((c.r[16].w[0] + 16209u), static_cast<std::uint8_t>(c.r[25].w[0]));
    set32(c.r[15], 0u + 3u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16152u), c.r[24].w[0]);
    st8((c.r[25].w[0] + 16210u), static_cast<std::uint8_t>(c.r[24].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16156u), c.r[15].w[0]);
    st8((c.r[24].w[0] + 16211u), static_cast<std::uint8_t>(c.r[15].w[0]));
    set32(c.r[14], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16160u), c.r[14].w[0]);
    set32(c.r[13], 0u + 5u);
    st8((c.r[15].w[0] + 16212u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16164u), c.r[13].w[0]);
    st8((c.r[14].w[0] + 16213u), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[12], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16168u), c.r[12].w[0]);
    set32(c.r[11], 0u + 7u);
    st8((c.r[13].w[0] + 16214u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16172u), c.r[11].w[0]);
    st8((c.r[12].w[0] + 16215u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[10], 0u + 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16176u), c.r[10].w[0]);
    set32(c.r[9], 0u + 9u);
    st8((c.r[11].w[0] + 16216u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16180u), c.r[9].w[0]);
    st8((c.r[10].w[0] + 16217u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[8], 0u + 10u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16184u), c.r[8].w[0]);
    set32(c.r[7], 0u + 11u);
    st8((c.r[9].w[0] + 16218u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16188u), c.r[7].w[0]);
    st8((c.r[8].w[0] + 16219u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], 0u + 12u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16192u), c.r[6].w[0]);
    set32(c.r[5], 0u + 13u);
    st8((c.r[7].w[0] + 16220u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16196u), c.r[5].w[0]);
    st8((c.r[6].w[0] + 16221u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 16208u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 16222u), static_cast<std::uint8_t>(c.r[4].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 80;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D5760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5770u);  if (depth < kMaxDepth) unit_0075(c, 256u, depth + 1u); else { c.pc = 0x002D5620u; return; } if (c.pc != 0x002D5770u) [[unlikely]] return; }
L_002D5770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5778u);  if (depth < kMaxDepth) unit_0075(c, 255u, depth + 1u); else { c.pc = 0x002D54B0u; return; } if (c.pc != 0x002D5778u) [[unlikely]] return; }
L_002D5778:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D5790:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[17], ld32((c.r[3].w[0] + 20312u)));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
L_002D57B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 16336u);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_002D5834; }
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D57DCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D57DCu) [[unlikely]] return; }
L_002D57DC:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002D5830; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5800u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D5800u) [[unlikely]] return; }
L_002D5800:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5810u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D5810u) [[unlikely]] return; }
L_002D5810:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D5830; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5830u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D5830u) [[unlikely]] return; }
L_002D5830:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002D5834:
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D57B4u | kUnwind; return; } goto L_002D57B4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D5860:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 29456u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002D588C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 20312u)));  if (t) { goto L_002D5898; } }
L_002D588C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5894u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D5894u) [[unlikely]] return; }
L_002D5894:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D5898:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16336u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; st32((c.r[29].w[0] + 124u), c.r[17].w[0]);  if (t) { goto L_002D5934; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_002D58D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D58C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D58C0u) [[unlikely]] return; }
L_002D58C0:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D58D0u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D58D0u) [[unlikely]] return; }
L_002D58D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16336u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002D592C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D58F8u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D58F8u) [[unlikely]] return; }
L_002D58F8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5908u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D5908u) [[unlikely]] return; }
L_002D5908:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D592C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D592Cu); set32(c.r[5], c.r[5].w[0] + 16336u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D592Cu) [[unlikely]] return; }
L_002D592C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16336u), c.r[17].w[0]);
    c.budget -= 2;
L_002D5934:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D5990; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5960u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D5960u) [[unlikely]] return; }
L_002D5960:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5970u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D5970u) [[unlikely]] return; }
L_002D5970:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D5990; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5990u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D5990u) [[unlikely]] return; }
L_002D5990:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29447u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D59AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 20312u)));  if (t) { goto L_002D59B8; } }
L_002D59AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D59B4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D59B4u) [[unlikely]] return; }
L_002D59B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D59B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16340u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; st32((c.r[29].w[0] + 120u), c.r[17].w[0]);  if (t) { goto L_002D5A54; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_002D59F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D59E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D59E0u) [[unlikely]] return; }
L_002D59E0:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D59F0u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D59F0u) [[unlikely]] return; }
L_002D59F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16340u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002D5A4C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5A18u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D5A18u) [[unlikely]] return; }
L_002D5A18:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5A28u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D5A28u) [[unlikely]] return; }
L_002D5A28:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D5A4C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5A4Cu); set32(c.r[5], c.r[5].w[0] + 16340u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D5A4Cu) [[unlikely]] return; }
L_002D5A4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16340u), c.r[17].w[0]);
    c.budget -= 2;
L_002D5A54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D5AB0; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5A80u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D5A80u) [[unlikely]] return; }
L_002D5A80:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5A90u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D5A90u) [[unlikely]] return; }
L_002D5A90:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D5AB0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5AB0u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D5AB0u) [[unlikely]] return; }
L_002D5AB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29435u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D5ACC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 20312u)));  if (t) { goto L_002D5AD8; } }
L_002D5ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5AD4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D5AD4u) [[unlikely]] return; }
L_002D5AD4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D5AD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16344u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; st32((c.r[29].w[0] + 116u), c.r[17].w[0]);  if (t) { goto L_002D5B74; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_002D5B10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5B00u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D5B00u) [[unlikely]] return; }
L_002D5B00:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5B10u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D5B10u) [[unlikely]] return; }
L_002D5B10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16344u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002D5B6C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5B38u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D5B38u) [[unlikely]] return; }
L_002D5B38:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5B48u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D5B48u) [[unlikely]] return; }
L_002D5B48:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D5B6C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5B6Cu); set32(c.r[5], c.r[5].w[0] + 16344u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D5B6Cu) [[unlikely]] return; }
L_002D5B6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16344u), c.r[17].w[0]);
    c.budget -= 2;
L_002D5B74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D5BD0; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5BA0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D5BA0u) [[unlikely]] return; }
L_002D5BA0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5BB0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D5BB0u) [[unlikely]] return; }
L_002D5BB0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D5BD0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5BD0u); set32(c.r[5], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D5BD0u) [[unlikely]] return; }
L_002D5BD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29422u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D5BEC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 20312u)));  if (t) { goto L_002D5BF8; } }
L_002D5BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5BF4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D5BF4u) [[unlikely]] return; }
L_002D5BF4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D5BF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16348u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; st32((c.r[29].w[0] + 112u), c.r[17].w[0]);  if (t) { goto L_002D5C94; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_002D5C30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5C20u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D5C20u) [[unlikely]] return; }
L_002D5C20:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5C30u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D5C30u) [[unlikely]] return; }
L_002D5C30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16348u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002D5C8C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5C58u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D5C58u) [[unlikely]] return; }
L_002D5C58:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5C68u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D5C68u) [[unlikely]] return; }
L_002D5C68:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D5C8C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5C8Cu); set32(c.r[5], c.r[5].w[0] + 16348u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D5C8Cu) [[unlikely]] return; }
L_002D5C8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16348u), c.r[17].w[0]);
    c.budget -= 2;
L_002D5C94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D5CF0; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5CC0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D5CC0u) [[unlikely]] return; }
L_002D5CC0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5CD0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D5CD0u) [[unlikely]] return; }
L_002D5CD0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D5CF0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5CF0u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D5CF0u) [[unlikely]] return; }
L_002D5CF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29415u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D5D0C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 20312u)));  if (t) { goto L_002D5D18; } }
L_002D5D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5D14u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D5D14u) [[unlikely]] return; }
L_002D5D14:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D5D18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16352u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; st32((c.r[29].w[0] + 108u), c.r[17].w[0]);  if (t) { goto L_002D5DB4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_002D5D50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5D40u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D5D40u) [[unlikely]] return; }
L_002D5D40:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5D50u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D5D50u) [[unlikely]] return; }
L_002D5D50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16352u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002D5DAC; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5D78u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D5D78u) [[unlikely]] return; }
L_002D5D78:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5D88u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D5D88u) [[unlikely]] return; }
L_002D5D88:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D5DAC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5DACu); set32(c.r[5], c.r[5].w[0] + 16352u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D5DACu) [[unlikely]] return; }
L_002D5DAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16352u), c.r[17].w[0]);
    c.budget -= 2;
L_002D5DB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D5E10; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5DE0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D5DE0u) [[unlikely]] return; }
L_002D5DE0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5DF0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D5DF0u) [[unlikely]] return; }
L_002D5DF0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D5E10; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5E10u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D5E10u) [[unlikely]] return; }
L_002D5E10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29409u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D5E2C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 20312u)));  if (t) { goto L_002D5E38; } }
L_002D5E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5E34u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D5E34u) [[unlikely]] return; }
L_002D5E34:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D5E38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16356u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; st32((c.r[29].w[0] + 104u), c.r[17].w[0]);  if (t) { goto L_002D5ED4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_002D5E70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5E60u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D5E60u) [[unlikely]] return; }
L_002D5E60:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5E70u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D5E70u) [[unlikely]] return; }
L_002D5E70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16356u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002D5ECC; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5E98u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D5E98u) [[unlikely]] return; }
L_002D5E98:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5EA8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D5EA8u) [[unlikely]] return; }
L_002D5EA8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D5ECC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5ECCu); set32(c.r[5], c.r[5].w[0] + 16356u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D5ECCu) [[unlikely]] return; }
L_002D5ECC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16356u), c.r[17].w[0]);
    c.budget -= 2;
L_002D5ED4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D5F30; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5F00u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D5F00u) [[unlikely]] return; }
L_002D5F00:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5F10u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D5F10u) [[unlikely]] return; }
L_002D5F10:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D5F30; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5F30u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D5F30u) [[unlikely]] return; }
L_002D5F30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29400u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D5F4C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 20312u)));  if (t) { goto L_002D5F58; } }
L_002D5F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5F54u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D5F54u) [[unlikely]] return; }
L_002D5F54:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D5F58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16360u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; st32((c.r[29].w[0] + 100u), c.r[17].w[0]);  if (t) { goto L_002D5FF4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_002D5F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5F80u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D5F80u) [[unlikely]] return; }
L_002D5F80:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5F90u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D5F90u) [[unlikely]] return; }
L_002D5F90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16360u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002D5FEC; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5FB8u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D5FB8u) [[unlikely]] return; }
L_002D5FB8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5FC8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D5FC8u) [[unlikely]] return; }
L_002D5FC8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D5FEC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5FECu); set32(c.r[5], c.r[5].w[0] + 16360u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D5FECu) [[unlikely]] return; }
L_002D5FEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16360u), c.r[17].w[0]);
    c.budget -= 2;
L_002D5FF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D6050; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6020u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6020u) [[unlikely]] return; }
L_002D6020:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6030u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6030u) [[unlikely]] return; }
L_002D6030:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D6050; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6050u); set32(c.r[5], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D6050u) [[unlikely]] return; }
L_002D6050:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29392u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D606C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 20312u)));  if (t) { goto L_002D6078; } }
L_002D606C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6074u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D6074u) [[unlikely]] return; }
L_002D6074:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D6078:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16364u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; st32((c.r[29].w[0] + 96u), c.r[17].w[0]);  if (t) { goto L_002D6114; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_002D60B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D60A0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D60A0u) [[unlikely]] return; }
L_002D60A0:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D60B0u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D60B0u) [[unlikely]] return; }
L_002D60B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16364u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002D610C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D60D8u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D60D8u) [[unlikely]] return; }
L_002D60D8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D60E8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D60E8u) [[unlikely]] return; }
L_002D60E8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D610C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D610Cu); set32(c.r[5], c.r[5].w[0] + 16364u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D610Cu) [[unlikely]] return; }
L_002D610C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16364u), c.r[17].w[0]);
    c.budget -= 2;
L_002D6114:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D6170; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6140u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6140u) [[unlikely]] return; }
L_002D6140:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6150u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6150u) [[unlikely]] return; }
L_002D6150:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D6170; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6170u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D6170u) [[unlikely]] return; }
L_002D6170:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29383u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D618C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 20312u)));  if (t) { goto L_002D6198; } }
L_002D618C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6194u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D6194u) [[unlikely]] return; }
L_002D6194:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D6198:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16368u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; st32((c.r[29].w[0] + 92u), c.r[17].w[0]);  if (t) { goto L_002D6234; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_002D61D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D61C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D61C0u) [[unlikely]] return; }
L_002D61C0:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D61D0u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D61D0u) [[unlikely]] return; }
L_002D61D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16368u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002D622C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D61F8u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D61F8u) [[unlikely]] return; }
L_002D61F8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6208u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6208u) [[unlikely]] return; }
L_002D6208:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D622C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D622Cu); set32(c.r[5], c.r[5].w[0] + 16368u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D622Cu) [[unlikely]] return; }
L_002D622C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16368u), c.r[17].w[0]);
    c.budget -= 2;
L_002D6234:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D6290; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6260u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6260u) [[unlikely]] return; }
L_002D6260:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6270u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6270u) [[unlikely]] return; }
L_002D6270:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D6290; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6290u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D6290u) [[unlikely]] return; }
L_002D6290:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29372u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D62AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 20312u)));  if (t) { goto L_002D62B8; } }
L_002D62AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D62B4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D62B4u) [[unlikely]] return; }
L_002D62B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D62B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16372u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; st32((c.r[29].w[0] + 88u), c.r[17].w[0]);  if (t) { goto L_002D6354; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_002D62F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D62E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D62E0u) [[unlikely]] return; }
L_002D62E0:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D62F0u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D62F0u) [[unlikely]] return; }
L_002D62F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16372u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002D634C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6318u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6318u) [[unlikely]] return; }
L_002D6318:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6328u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6328u) [[unlikely]] return; }
L_002D6328:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D634C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D634Cu); set32(c.r[5], c.r[5].w[0] + 16372u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D634Cu) [[unlikely]] return; }
L_002D634C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16372u), c.r[17].w[0]);
    c.budget -= 2;
L_002D6354:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D63B0; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6380u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6380u) [[unlikely]] return; }
L_002D6380:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6390u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6390u) [[unlikely]] return; }
L_002D6390:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D63B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D63B0u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D63B0u) [[unlikely]] return; }
L_002D63B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29362u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D63CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 20312u)));  if (t) { goto L_002D63D8; } }
L_002D63CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D63D4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D63D4u) [[unlikely]] return; }
L_002D63D4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D63D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16376u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; st32((c.r[29].w[0] + 84u), c.r[17].w[0]);  if (t) { goto L_002D6474; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_002D6410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6400u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6400u) [[unlikely]] return; }
L_002D6400:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6410u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6410u) [[unlikely]] return; }
L_002D6410:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16376u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002D646C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6438u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6438u) [[unlikely]] return; }
L_002D6438:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6448u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6448u) [[unlikely]] return; }
L_002D6448:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D646C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D646Cu); set32(c.r[5], c.r[5].w[0] + 16376u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D646Cu) [[unlikely]] return; }
L_002D646C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16376u), c.r[17].w[0]);
    c.budget -= 2;
L_002D6474:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D64D0; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D64A0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D64A0u) [[unlikely]] return; }
L_002D64A0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D64B0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D64B0u) [[unlikely]] return; }
L_002D64B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D64D0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D64D0u); set32(c.r[5], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D64D0u) [[unlikely]] return; }
L_002D64D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29356u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D64EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 20312u)));  if (t) { goto L_002D64F8; } }
L_002D64EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D64F4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D64F4u) [[unlikely]] return; }
L_002D64F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D64F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16380u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; st32((c.r[29].w[0] + 80u), c.r[17].w[0]);  if (t) { goto L_002D6594; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_002D6530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6520u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6520u) [[unlikely]] return; }
L_002D6520:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6530u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6530u) [[unlikely]] return; }
L_002D6530:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16380u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002D658C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6558u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6558u) [[unlikely]] return; }
L_002D6558:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6568u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6568u) [[unlikely]] return; }
L_002D6568:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D658C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D658Cu); set32(c.r[5], c.r[5].w[0] + 16380u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D658Cu) [[unlikely]] return; }
L_002D658C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16380u), c.r[17].w[0]);
    c.budget -= 2;
L_002D6594:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D65F0; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D65C0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D65C0u) [[unlikely]] return; }
L_002D65C0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D65D0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D65D0u) [[unlikely]] return; }
L_002D65D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D65F0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D65F0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D65F0u) [[unlikely]] return; }
L_002D65F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29352u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D660C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 20312u)));  if (t) { goto L_002D6618; } }
L_002D660C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6614u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D6614u) [[unlikely]] return; }
L_002D6614:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D6618:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16384u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; st32((c.r[29].w[0] + 76u), c.r[17].w[0]);  if (t) { goto L_002D66B4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_002D6650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6640u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6640u) [[unlikely]] return; }
L_002D6640:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6650u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6650u) [[unlikely]] return; }
L_002D6650:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16384u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002D66AC; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6678u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6678u) [[unlikely]] return; }
L_002D6678:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6688u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6688u) [[unlikely]] return; }
L_002D6688:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D66AC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D66ACu); set32(c.r[5], c.r[5].w[0] + 16384u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D66ACu) [[unlikely]] return; }
L_002D66AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16384u), c.r[17].w[0]);
    c.budget -= 2;
L_002D66B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D6710; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D66E0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D66E0u) [[unlikely]] return; }
L_002D66E0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D66F0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D66F0u) [[unlikely]] return; }
L_002D66F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D6710; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6710u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D6710u) [[unlikely]] return; }
L_002D6710:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29346u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D672C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 20312u)));  if (t) { goto L_002D6738; } }
L_002D672C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6734u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D6734u) [[unlikely]] return; }
L_002D6734:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D6738:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16388u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; st32((c.r[29].w[0] + 72u), c.r[17].w[0]);  if (t) { goto L_002D67D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_002D6770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6760u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6760u) [[unlikely]] return; }
L_002D6760:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6770u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6770u) [[unlikely]] return; }
L_002D6770:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16388u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002D67CC; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6798u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6798u) [[unlikely]] return; }
L_002D6798:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D67A8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D67A8u) [[unlikely]] return; }
L_002D67A8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D67CC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D67CCu); set32(c.r[5], c.r[5].w[0] + 16388u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D67CCu) [[unlikely]] return; }
L_002D67CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16388u), c.r[17].w[0]);
    c.budget -= 2;
L_002D67D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002D6834; }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6800u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6800u) [[unlikely]] return; }
L_002D6800:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6810u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6810u) [[unlikely]] return; }
L_002D6810:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D6830; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6830u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D6830u) [[unlikely]] return; }
L_002D6830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002D6834:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002D6850:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[4].w[0] + 16336u);
    set32(c.r[5], c.r[5].w[0] + 6944u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 7;
    { set32(c.r[7], 0u + 14u);  [[clang::musttail]] return unit_00A5(c, 157u, depth); }
L_002D6870:
    set32(c.r[3], ld32((c.r[28].w[0] - 27564u)));
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[3].w[0] + 8u);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);  if (t) { goto L_002D688C; } }
    breakpoint(c, 0x002D6888u);
    c.budget -= 1;
L_002D688C:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_002D68B8; } }
L_002D68A4:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_002D68B8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D68C4; } }
L_002D68B8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D68A4u | kUnwind; return; } goto L_002D68A4; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D68C4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D68CC; }
L_002D68CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D68E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27564u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D690C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D6B18; } }
L_002D690C:
    set32(c.r[3], c.r[2].w[0] + 8u);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; mmi::divu(c, 0, c.r[4].w[0], c.r[2].w[0]);  if (t) { goto L_002D6924; } }
    breakpoint(c, 0x002D6920u);
    c.budget -= 1;
L_002D6924:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0])));  if (t) { goto L_002D6950; } }
L_002D693C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[3].w[0])));  goto L_002D6950; }
    set32(c.r[18], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D695C; } }
L_002D6950:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D693Cu | kUnwind; return; } goto L_002D693C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D695C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_002D6964; }
L_002D6964:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002D6974; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D6B18; } }
L_002D6974:
    set32(c.r[16], ld32((c.r[19].w[0])));
    set32(c.r[17], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[17].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002D69A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D698Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D698Cu) [[unlikely]] return; }
L_002D698C:
    set32(c.r[2], ld32((c.r[16].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D699Cu); st32((c.r[16].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D699Cu) [[unlikely]] return; }
L_002D699C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002D69A0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 92u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D6A8C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 27564u)));
    set32(c.r[16], c.r[2].w[0] + 8u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; mmi::divu(c, 0, c.r[4].w[0], c.r[2].w[0]);  if (t) { goto L_002D69CC; } }
    breakpoint(c, 0x002D69C8u);
    c.budget -= 1;
L_002D69CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D6A8C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[7], ld32((c.r[5].w[0])));  goto L_002D6A1C; }
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6A0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D6A0Cu) [[unlikely]] return; }
L_002D6A0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_002D6A8C; } }
L_002D6A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D6A28; } }
L_002D6A24:
    set32(c.r[7], ld32((c.r[7].w[0])));
    c.budget -= 1;
L_002D6A28:
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002D6A54; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6A54; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D6A54:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6A24u | kUnwind; return; } goto L_002D6A24; }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002D6A8C; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6A80u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D6A80u) [[unlikely]] return; }
L_002D6A80:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
L_002D6A8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6A94u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6A94u) [[unlikely]] return; }
L_002D6A94:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6AA4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6AA4u) [[unlikely]] return; }
L_002D6AA4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 92u)));  goto L_002D6AC4; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6AC0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D6AC0u) [[unlikely]] return; }
L_002D6AC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 1;
L_002D6AC4:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002D6B18; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6AE4u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6AE4u) [[unlikely]] return; }
L_002D6AE4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6AF4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6AF4u) [[unlikely]] return; }
L_002D6AF4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D6B14; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6B14u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D6B14u) [[unlikely]] return; }
L_002D6B14:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D6B18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D6B40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27564u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002D6B80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D6E00; } }
L_002D6B80:
    set32(c.r[3], c.r[2].w[0] + 8u);
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; mmi::divu(c, 0, c.r[4].w[0], c.r[2].w[0]);  if (t) { goto L_002D6B98; } }
    breakpoint(c, 0x002D6B94u);
    c.budget -= 1;
L_002D6B98:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0])));  if (t) { goto L_002D6BC4; } }
L_002D6BB0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[3].w[0])));  goto L_002D6BC4; }
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D6BD0; } }
L_002D6BC4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6BB0u | kUnwind; return; } goto L_002D6BB0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D6BD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002D6BD8; }
L_002D6BD8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], 0u + 24u);  goto L_002D6C14; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002D6BF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D6E00; } }
L_002D6BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6BFCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6BFCu) [[unlikely]] return; }
L_002D6BFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C0Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6C0Cu) [[unlikely]] return; }
L_002D6C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D6E00; } }
L_002D6C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002D6C1Cu) [[unlikely]] return; }
L_002D6C1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D6C90; } }
    set32(c.r[21], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 176u, depth + 1u); else { c.pc = 0x00239E90u; return; } if (c.pc != 0x002D6C30u) [[unlikely]] return; }
L_002D6C30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 15104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C44u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004E(c, 172u, depth + 1u); else { c.pc = 0x00239E00u; return; } if (c.pc != 0x002D6C44u) [[unlikely]] return; }
L_002D6C44:
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C5Cu); st32((c.r[16].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0059(c, 151u, depth + 1u); else { c.pc = 0x00265870u; return; } if (c.pc != 0x002D6C5Cu) [[unlikely]] return; }
L_002D6C5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C68u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0075(c, 445u, depth + 1u); else { c.pc = 0x002D6F70u; return; } if (c.pc != 0x002D6C68u) [[unlikely]] return; }
L_002D6C68:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C74u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002D6C74u) [[unlikely]] return; }
L_002D6C74:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 444u, depth + 1u); else { c.pc = 0x002D6F60u; return; } if (c.pc != 0x002D6C80u) [[unlikely]] return; }
L_002D6C80:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 13u, depth + 1u); else { c.pc = 0x002A8240u; return; } if (c.pc != 0x002D6C90u) [[unlikely]] return; }
L_002D6C90:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002D6CA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D6E00; } }
L_002D6CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6CA8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6CA8u) [[unlikely]] return; }
L_002D6CA8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6CB8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6CB8u) [[unlikely]] return; }
L_002D6CB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[17], ld32((c.r[20].w[0])));
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[17].d[0] == c.r[18].d[0]) { set32(c.r[3], ld32((c.r[20].w[0])));  goto L_002D6CE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6CD4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6CD4u) [[unlikely]] return; }
L_002D6CD4:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6CE4u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6CE4u) [[unlikely]] return; }
L_002D6CE4:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002D6CE8:
    set32(c.r[5], c.r[29].w[0] + 124u);
    set32(c.r[2], ld32((c.r[28].w[0] - 27564u)));
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    set32(c.r[20], c.r[2].w[0] + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D00u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 443u, depth + 1u); else { c.pc = 0x002D6F40u; return; } if (c.pc != 0x002D6D00u) [[unlikely]] return; }
L_002D6D00:
    set32(c.r[17], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[2].w[0])));  if (t) { goto L_002D6D50; } }
L_002D6D14:
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D20u); set32(c.r[6], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0075(c, 442u, depth + 1u); else { c.pc = 0x002D6F20u; return; } if (c.pc != 0x002D6D20u) [[unlikely]] return; }
L_002D6D20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], ld32((c.r[19].w[0])));  goto L_002D6D50; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D34u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 441u, depth + 1u); else { c.pc = 0x002D6F10u; return; } if (c.pc != 0x002D6D34u) [[unlikely]] return; }
L_002D6D34:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D48u); set32(c.r[6], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0075(c, 435u, depth + 1u); else { c.pc = 0x002D6E30u; return; } if (c.pc != 0x002D6D48u) [[unlikely]] return; }
L_002D6D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 124u)));  if (t) { goto L_002D6DAC; } }
L_002D6D50:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6D14u | kUnwind; return; } goto L_002D6D14; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D68u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D6D68u) [[unlikely]] return; }
L_002D6D68:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D80u); set32(c.r[6], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0075(c, 435u, depth + 1u); else { c.pc = 0x002D6E30u; return; } if (c.pc != 0x002D6D80u) [[unlikely]] return; }
L_002D6D80:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 11;
L_002D6DAC:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002D6E00; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DCCu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6DCCu) [[unlikely]] return; }
L_002D6DCC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DDCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6DDCu) [[unlikely]] return; }
L_002D6DDC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D6DFC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DFCu); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D6DFCu) [[unlikely]] return; }
L_002D6DFC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D6E00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002D6E30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[19].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002D6EE0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_002D6E8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6E78u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6E78u) [[unlikely]] return; }
L_002D6E78:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6E88u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6E88u) [[unlikely]] return; }
L_002D6E88:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002D6E8C:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0] + 4u), c.r[19].w[0]);  goto L_002D6EE0; }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6EACu); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6EACu) [[unlikely]] return; }
L_002D6EAC:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6EBCu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6EBCu) [[unlikely]] return; }
L_002D6EBC:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D6EDC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6EDCu); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D6EDCu) [[unlikely]] return; }
L_002D6EDC:
    st32((c.r[17].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_002D6EE0:
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D6F10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D6F20:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_002D6F40:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002D6F54; } }
    breakpoint(c, 0x002D6F50u);
    c.budget -= 1;
L_002D6F54:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D6F60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[5].w[0]);  c.pc = t; return; }
L_002D6F70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D7018; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_002D6FC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6FB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6FB0u) [[unlikely]] return; }
L_002D6FB0:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6FC0u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6FC0u) [[unlikely]] return; }
L_002D6FC0:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_002D6FC4:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 8u), c.r[17].w[0]);  goto L_002D7018; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6FE4u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D6FE4u) [[unlikely]] return; }
L_002D6FE4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6FF4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D6FF4u) [[unlikely]] return; }
L_002D6FF4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D7014; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7014u); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D7014u) [[unlikely]] return; }
L_002D7014:
    st32((c.r[19].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_002D7018:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D7040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 27564u)));  c.pc = t; return; }
L_002D7050:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002D7138; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 15104u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D708Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002D708Cu) [[unlikely]] return; }
L_002D708C:
    set32(c.r[2], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D70F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D70F4; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D70C4u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D70C4u) [[unlikely]] return; }
L_002D70C4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D70D4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D70D4u) [[unlikely]] return; }
L_002D70D4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D70F4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D70F4u); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D70F4u) [[unlikely]] return; }
L_002D70F4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002D7120; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D710Cu); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D710Cu) [[unlikely]] return; }
L_002D710C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D711Cu); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D711Cu) [[unlikely]] return; }
L_002D711C:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002D7120:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_002D713C; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7138u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002D7138u) [[unlikely]] return; }
L_002D7138:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002D713C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D7160:
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_002D7180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld16((c.r[4].w[0] + 80u));  c.pc = t; return; }
L_002D7190:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D720C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002D71F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D71C4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D71C4u) [[unlikely]] return; }
L_002D71C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D71D4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D71D4u) [[unlikely]] return; }
L_002D71D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D71F0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D71F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D71F0u) [[unlikely]] return; }
L_002D71F0:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002D71F4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002D7210; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D720Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002D720Cu) [[unlikely]] return; }
L_002D720C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002D7210:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D7230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 76u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 209u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002D72AC; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 29296u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002D4000u < 16384u) { entry = entries_0075[(t - 0x002D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D7268:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7278u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7278u) [[unlikely]] return; }
L_002D7278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D72A8; } }
L_002D7280:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7290u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7290u) [[unlikely]] return; }
L_002D7290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D72A8; } }
L_002D7298:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D72A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D72A8u) [[unlikely]] return; }
L_002D72A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002D72AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D72C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_002D72F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D72E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D72E8u) [[unlikely]] return; }
L_002D72E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D72F8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D72F8u) [[unlikely]] return; }
L_002D72F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D7310:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D7350; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7348u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7348u) [[unlikely]] return; }
L_002D7348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D7354; } }
L_002D7350:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002D7434; } }
L_002D735C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002D7374; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7370u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7370u) [[unlikely]] return; }
L_002D7370:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D7374:
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D73A0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002D7434; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 164u));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 164u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D7430; } }
L_002D73A0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 4u)));  goto L_002D73B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002D73F8; } }
L_002D73B0:
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D73BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D73BCu) [[unlikely]] return; }
L_002D73BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 29240u);  if (t) { goto L_002D73DC; } }
L_002D73CC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_002D73DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D73E8; } }
L_002D73DC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D73CCu | kUnwind; return; } goto L_002D73CC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D73E8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002D73F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D73F8; } }
L_002D73F8:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 2;
L_002D7400:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002D7424; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 164u));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st8((c.r[4].w[0] + 164u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
L_002D7424:
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[5].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7400u | kUnwind; return; } goto L_002D7400; }
L_002D7430:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002D7434:
    c.r[3].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D735Cu | kUnwind; return; } goto L_002D735C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D7460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 7328u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D748Cu); st32((c.r[29].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_0075(c, 513u, depth + 1u); else { c.pc = 0x002D7A60u; return; } if (c.pc != 0x002D748Cu) [[unlikely]] return; }
L_002D748C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 36u)));  if (t) { goto L_002D74A8; } }
L_002D7494:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D74A8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D74A8u) [[unlikely]] return; }
L_002D74A8:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7494u | kUnwind; return; } goto L_002D7494; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + 7360u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_002D74D8; } }
L_002D74C4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D74D8u); set32(c.r[16], ld32((c.r[16].w[0])));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D74D8u) [[unlikely]] return; }
L_002D74D8:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D74C4u | kUnwind; return; } goto L_002D74C4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 44u), 0u);
    set32(c.r[3], c.r[3].w[0] + 7392u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D7510:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002D7550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D7658; } }
L_002D7550:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 8u));
    c.r[16].d[0] = c.r[19].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D7600; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 208u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7580; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002D7580; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7580:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002D75AC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 27556u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002D75AC; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D75A0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 542u, depth + 1u); else { c.pc = 0x002D7E90u; return; } if (c.pc != 0x002D75A0u) [[unlikely]] return; }
L_002D75A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D75AC; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D75AC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[20].w[0] + 8u));  goto L_002D7604; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[20].w[0] + 8u));  goto L_002D75CC; }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002D75D4; } }
L_002D75CC:
    c.r[2].d[0] = c.r[2].d[0] & 65527ull;
    st16((c.r[20].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D75D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002D75F0; } }
    c.r[2].d[0] = c.r[21].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D75F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D75F0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 532u, depth + 1u); else { c.pc = 0x002D7D60u; return; } if (c.pc != 0x002D75F0u) [[unlikely]] return; }
L_002D75F0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002D7600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7600u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 484u, depth + 1u); else { c.pc = 0x002D7460u; return; } if (c.pc != 0x002D7600u) [[unlikely]] return; }
L_002D7600:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 8u));
    c.budget -= 1;
L_002D7604:
    c.r[4].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D7630; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 209u));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D7630; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 209u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D7654; } }
L_002D7630:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002D7658; }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 209u));
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7654; } }
    set32(c.r[2], c.r[3].w[0] - 3u);
    st8((c.r[4].w[0] + 209u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D7654:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D7658:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D7680:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002D778C; } }
    c.r[16].d[0] = ld16((c.r[19].w[0] + 218u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002D7780; } }
L_002D76B8:
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 212u)));  goto L_002D76CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002D76D8; } }
L_002D76CC:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_002D76D8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 108u), c.r[4].w[0]);  if (t) { goto L_002D777C; } }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_002D76F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002D772C; } }
L_002D76F0:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D76FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D76FCu) [[unlikely]] return; }
L_002D76FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19952u);  if (t) { goto L_002D771C; } }
L_002D770C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_002D771C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D7728; } }
L_002D771C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D770Cu | kUnwind; return; } goto L_002D770C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7728:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002D772C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 108u)));  goto L_002D7760; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7744u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0075(c, 505u, depth + 1u); else { c.pc = 0x002D78D0u; return; } if (c.pc != 0x002D7744u) [[unlikely]] return; }
L_002D7744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002D777C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7758u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0075(c, 501u, depth + 1u); else { c.pc = 0x002D77B0u; return; } if (c.pc != 0x002D7758u) [[unlikely]] return; }
L_002D7758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_002D7780; } }
L_002D7760:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D777C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D777Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 494u, depth + 1u); else { c.pc = 0x002D7680u; return; } if (c.pc != 0x002D777Cu) [[unlikely]] return; }
L_002D777C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002D7780:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[19].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D76B8u | kUnwind; return; } goto L_002D76B8; }
L_002D778C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D77B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_002D7820; }
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002D77F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), 0u);  if (t) { goto L_002D77F8; } }
L_002D77F4:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_002D77F8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[17], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D780Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D780Cu) [[unlikely]] return; }
L_002D780C:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_002D78B4; } }
L_002D7820:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_002D7870; }
    st32((c.r[5].w[0]), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002D7844; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_002D7848; } }
L_002D7844:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_002D7848:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[17], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D785Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D785Cu) [[unlikely]] return; }
L_002D785C:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_002D78B4; } }
L_002D7870:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_002D7880; } }
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002D7880:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002D7890; }
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_002D7890:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D78A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D78A4u) [[unlikely]] return; }
L_002D78A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 4;
L_002D78B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D78D0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002D78F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_002D78F8; } }
L_002D78E0:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], ld32((c.r[6].w[0])));  if (t) { goto L_002D78F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7904; } }
L_002D78F8:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D78E0u | kUnwind; return; } goto L_002D78E0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7904:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7910:
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
    { const bool t = c.r[20].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002D7A38; } }
    c.r[16].d[0] = ld16((c.r[20].w[0] + 218u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002D7A2C; } }
L_002D794C:
    c.r[1].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 212u)));  goto L_002D7960; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002D796C; } }
L_002D7960:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_002D796C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002D7A2C; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_002D7984; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002D79C0; } }
L_002D7984:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7990u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7990u) [[unlikely]] return; }
L_002D7990:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 18128u);  if (t) { goto L_002D79B0; } }
L_002D79A0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_002D79B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D79BC; } }
L_002D79B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D79A0u | kUnwind; return; } goto L_002D79A0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D79BC:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002D79C0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 196u));  goto L_002D7A0C; }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D79D8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D79D8u) [[unlikely]] return; }
L_002D79D8:
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  goto L_002D79F8; }
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002D79F8:
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_002D7A28; } }
L_002D7A0C:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D7A28; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7A28u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 507u, depth + 1u); else { c.pc = 0x002D7910u; return; } if (c.pc != 0x002D7A28u) [[unlikely]] return; }
L_002D7A28:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002D7A2C:
    c.r[3].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[20].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D794Cu | kUnwind; return; } goto L_002D794C; }
L_002D7A38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D7A60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D7A98; } }
L_002D7A84:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7A98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7A98u) [[unlikely]] return; }
L_002D7A98:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7A84u | kUnwind; return; } goto L_002D7A84; }
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002D7B2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[3].w[0] + 232u)));  if (t) { goto L_002D7AD4; } }
L_002D7AC0:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7AD4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 507u, depth + 1u); else { c.pc = 0x002D7910u; return; } if (c.pc != 0x002D7AD4u) [[unlikely]] return; }
L_002D7AD4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7AC0u | kUnwind; return; } goto L_002D7AC0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[3].w[0] + 248u)));  if (t) { goto L_002D7AFC; } }
L_002D7AE8:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7AFCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 494u, depth + 1u); else { c.pc = 0x002D7680u; return; } if (c.pc != 0x002D7AFCu) [[unlikely]] return; }
L_002D7AFC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7AE8u | kUnwind; return; } goto L_002D7AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 36u)));  if (t) { goto L_002D7B20; } }
L_002D7B0C:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7B20u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 494u, depth + 1u); else { c.pc = 0x002D7680u; return; } if (c.pc != 0x002D7B20u) [[unlikely]] return; }
L_002D7B20:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7B0Cu | kUnwind; return; } goto L_002D7B0C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002D7B2C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D7B40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[18].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002D7B78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D7CB8; } }
L_002D7B78:
    c.r[20].d[0] = ld16((c.r[18].w[0] + 218u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002D7CA8; } }
L_002D7B84:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 212u)));  goto L_002D7B98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002D7BA4; } }
L_002D7B98:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_002D7BA4:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[25], ld32((c.r[21].w[0])));  goto L_002D7BB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002D7BF8; } }
L_002D7BB4:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7BC0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7BC0u) [[unlikely]] return; }
L_002D7BC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19952u);  if (t) { goto L_002D7BDC; } }
L_002D7BCC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002D7BDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D7BE8; } }
L_002D7BDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7BCCu | kUnwind; return; } goto L_002D7BCC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7BE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_002D7BF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7BF8; } }
L_002D7BF8:
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[17].d[0]) { c.r[2].d[0] = ld16((c.r[18].w[0] + 218u));  goto L_002D7C08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D7CB8; } }
L_002D7C08:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 212u)));  goto L_002D7C1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002D7C28; } }
L_002D7C1C:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_002D7C28:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[25], ld32((c.r[21].w[0])));  goto L_002D7C38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002D7C7C; } }
L_002D7C38:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C44u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7C44u) [[unlikely]] return; }
L_002D7C44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23832u);  if (t) { goto L_002D7C60; } }
L_002D7C50:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002D7C60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D7C6C; } }
L_002D7C60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7C50u | kUnwind; return; } goto L_002D7C50; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7C6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_002D7C7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7C7C; } }
L_002D7C7C:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002D7CA8; }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C94u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 522u, depth + 1u); else { c.pc = 0x002D7B40u; return; } if (c.pc != 0x002D7C94u) [[unlikely]] return; }
L_002D7C94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D7CA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D7CB8; } }
L_002D7CA4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002D7CA8:
    c.r[2].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[18].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7B84u | kUnwind; return; } goto L_002D7B84; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7CB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D7CE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002D7D08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D7D3C; } }
L_002D7D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 36u)));  if (t) { goto L_002D7D30; } }
L_002D7D10:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7D20u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 522u, depth + 1u); else { c.pc = 0x002D7B40u; return; } if (c.pc != 0x002D7D20u) [[unlikely]] return; }
L_002D7D20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D7D30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D7D3C; } }
L_002D7D30:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7D10u | kUnwind; return; } goto L_002D7D10; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7D3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D7D60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D7D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7D98u);  if (depth < kMaxDepth) unit_0075(c, 477u, depth + 1u); else { c.pc = 0x002D7310u; return; } if (c.pc != 0x002D7D98u) [[unlikely]] return; }
L_002D7D98:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002D7DB0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7DACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7DACu) [[unlikely]] return; }
L_002D7DAC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D7DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002D7E4C; } }
L_002D7DB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D7DCC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7DCCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7DCCu) [[unlikely]] return; }
L_002D7DCC:
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_002D7E10; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 12u)));  goto L_002D7DF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_002D7E4C; } }
L_002D7DF0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_002D7E00; }
    st32((c.r[3].w[0] + 160u), 0u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002D7E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7E08u);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D86D0u; return; } if (c.pc != 0x002D7E08u) [[unlikely]] return; }
L_002D7E08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7E48; } }
L_002D7E10:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_002D7E14:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[4].w[0] + 1u);  goto L_002D7E30; }
    st32((c.r[3].w[0] + 160u), 0u);
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_002D7E30:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7E14u | kUnwind; return; } goto L_002D7E14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7E48u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 53u, depth + 1u); else { c.pc = 0x002D8590u; return; } if (c.pc != 0x002D7E48u) [[unlikely]] return; }
L_002D7E48:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002D7E4C:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7DB8u | kUnwind; return; } goto L_002D7DB8; }
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002D7E70; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7E6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7E6Cu) [[unlikely]] return; }
L_002D7E6C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002D7E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7E78u);  if (depth < kMaxDepth) unit_0075(c, 484u, depth + 1u); else { c.pc = 0x002D7460u; return; } if (c.pc != 0x002D7E78u) [[unlikely]] return; }
L_002D7E78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D7E90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_002D7ED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7EC0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D7EC0u) [[unlikely]] return; }
L_002D7EC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7ED0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D7ED0u) [[unlikely]] return; }
L_002D7ED0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27556u)));  [[clang::musttail]] return unit_0076(c, 6u, depth); }
    set32(c.r[4], ld32((c.r[28].w[0] - 27556u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 244u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 180u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 236u)));  goto L_002D7F3C; }
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0076(c, 14u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7F04u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D7F04u) [[unlikely]] return; }
L_002D7F04:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7F14u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D7F14u) [[unlikely]] return; }
L_002D7F14:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7F30; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7F30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7F30u) [[unlikely]] return; }
L_002D7F30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0076(c, 14u, depth); } }
L_002D7F3C:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[4].w[0] + 232u);  if (t) { goto L_002D7F60; } }
L_002D7F48:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[3], ld32((c.r[3].w[0])));  if (t) { goto L_002D7F60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7F6C; } }
L_002D7F60:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7F48u | kUnwind; return; } goto L_002D7F48; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7F6C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_002D7FBC; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  [[clang::musttail]] return unit_0076(c, 14u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7F84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D7F84u) [[unlikely]] return; }
L_002D7F84:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7F94u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D7F94u) [[unlikely]] return; }
L_002D7F94:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7FB0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7FB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7FB0u) [[unlikely]] return; }
L_002D7FB0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0076(c, 14u, depth); } }
L_002D7FBC:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7FC8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7FC8u) [[unlikely]] return; }
L_002D7FC8:
    set32(c.r[18], ld32((c.r[2].w[0] + 8u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 8u);  if (t) { [[clang::musttail]] return unit_0076(c, 5u, depth); } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[29].w[0] + 92u)));  [[clang::musttail]] return unit_0076(c, 3u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7FECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D7FECu) [[unlikely]] return; }
L_002D7FEC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7FFCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D7FFCu) [[unlikely]] return; }
L_002D7FFC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_0076(c, 1u, depth);
}

}
